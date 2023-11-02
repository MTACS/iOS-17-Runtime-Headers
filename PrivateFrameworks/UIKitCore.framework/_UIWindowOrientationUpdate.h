
@interface _UIWindowOrientationUpdate : NSObject {
    long long  _toOrientation;
    NSMutableSet * _trackedFences;
    BSAnimationSettings * _transitionAnimationSettings;
    id /* block */  _updateBlock;
}

- (void).cxx_destruct;

@end
