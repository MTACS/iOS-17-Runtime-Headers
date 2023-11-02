
@interface IPAStraightenOperator : IPAGeometryOperator {
    double  _zAngle;
}

+ (id)operatorWithAngleZ:(double)arg1;
+ (id)operatorWithIdentifier:(id)arg1 angleZ:(double)arg2;

- (id)description;
- (id)transformForGeometry:(id)arg1;

@end
