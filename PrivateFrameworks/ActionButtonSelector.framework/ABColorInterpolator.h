
@interface ABColorInterpolator : NSObject {
    ABFloatSpringProperty * _alpha;
    ABFloatSpringProperty * _blue;
    UIColor * _cachedOutputColor;
    ABFloatSpringProperty * _green;
    bool  _isEmpty;
    ABFloatSpringProperty * _red;
}

- (void).cxx_destruct;
- (id)init;

@end
