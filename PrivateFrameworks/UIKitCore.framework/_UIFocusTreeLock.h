
@interface _UIFocusTreeLock : NSObject {
    NSMapTable * _lockedEnvironments;
    NSTimer * _validationTimer;
}

@property (nonatomic, readonly) NSMapTable *lockedEnvironments;
@property (nonatomic, readonly) NSTimer *validationTimer;

- (void).cxx_destruct;
- (void)_validateLockedEnvironments;
- (id)description;
- (id)init;
- (bool)isEnvironmentLocked:(id)arg1;
- (void)lockEnvironmentTree:(id)arg1;
- (id)lockedEnvironments;
- (bool)unlockEnvironmentTree:(id)arg1;
- (id)validationTimer;

@end
