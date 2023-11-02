
@interface CKRotationLockUtility : NSObject {
    UIWindow * _lockedWindow;
}

@property (nonatomic) UIWindow *lockedWindow;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithWindow:(id)arg1;
- (id)lockedWindow;
- (void)releaseRotationLock;
- (void)setLockedWindow:(id)arg1;

@end
