
@interface _CLSignificantRegion : CLCircularRegion

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCenter:(struct CLLocationCoordinate2D { double x1; double x2; })arg1 radius:(double)arg2 identifier:(id)arg3;
- (id)initWithCenter:(struct CLLocationCoordinate2D { double x1; double x2; })arg1 radius:(double)arg2 identifier:(id)arg3 onBehalfOfBundleId:(id)arg4 referenceFrame:(int)arg5;
- (id)initWithCenter:(struct CLLocationCoordinate2D { double x1; double x2; })arg1 radius:(double)arg2 referenceFrame:(int)arg3 lowPower:(bool)arg4 identifier:(id)arg5 onBehalfOfBundleId:(id)arg6 notifyOnEntry:(bool)arg7 notifyOnExit:(bool)arg8 conservativeEntry:(bool)arg9 emergency:(bool)arg10 deviceId:(id)arg11 handoffTag:(id)arg12;
- (id)initWithCoder:(id)arg1;

@end
