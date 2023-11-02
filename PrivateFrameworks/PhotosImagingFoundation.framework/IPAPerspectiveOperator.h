
@interface IPAPerspectiveOperator : IPAGeometryOperator {
    double  _dx;
    double  _dy;
    double  _xAngle;
    double  _yAngle;
}

+ (id)operatorWithAngleX:(double)arg1 Y:(double)arg2 dx:(double)arg3 dy:(double)arg4;
+ (id)operatorWithIdentifier:(id)arg1 angleX:(double)arg2 Y:(double)arg3 dx:(double)arg4 dy:(double)arg5;

- (id)description;
- (id)transformForGeometry:(id)arg1;

@end
