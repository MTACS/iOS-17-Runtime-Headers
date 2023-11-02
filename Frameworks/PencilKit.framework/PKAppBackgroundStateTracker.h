
@interface PKAppBackgroundStateTracker : NSObject {
    Class  _applicationClass;
    _Atomic bool  _inBackground;
}

- (void)_updateState;
- (id)init;

@end
