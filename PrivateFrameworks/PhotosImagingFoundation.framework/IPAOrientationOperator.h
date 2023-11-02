
@interface IPAOrientationOperator : IPAGeometryOperator {
    long long  _orientation;
}

+ (id)operatorWithIdentifier:(id)arg1 orientation:(long long)arg2;
+ (id)operatorWithOrientation:(long long)arg1;

- (id)description;
- (id)transformForGeometry:(id)arg1;

@end
