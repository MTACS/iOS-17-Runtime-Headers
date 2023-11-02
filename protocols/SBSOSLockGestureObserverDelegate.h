
@protocol SBSOSLockGestureObserverDelegate <NSObject>

@required

- (void)sosLockDidTriggerSOS:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: SBSOSLockGestureObserver *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*

@optional

- (void)sosLockTriggerDidBecomeActive:(SBSOSLockGestureObserver *)arg1;
- (void)sosLockTriggerDidBecomeInactive:(SBSOSLockGestureObserver *)arg1;

@end
