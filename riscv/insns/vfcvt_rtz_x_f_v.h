// vfcvt.x.f.v vd, vd2, vm
VI_VFP_VF_LOOP
({
  P.VU.elt<int32_t>(rd_num, i) = f32_to_i32(vs2, softfloat_round_minMag, true);
},
{
  P.VU.elt<int64_t>(rd_num, i) = f64_to_i64(vs2, softfloat_round_minMag, true);
})
