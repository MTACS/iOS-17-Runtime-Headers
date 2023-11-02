
@protocol SBSOSClawGestureObserverDelegate <NSObject>

@required

- (void)sosClawAutoCallInteractiveStateChanged:(SBSOSClawGestureObserver *)arg1 interacting:(bool)arg2;
- (void)sosClawDidBecomeActive:(SBSOSClawGestureObserver *)arg1;
- (void)sosClawDidBecomeInactive:(SBSOSClawGestureObserver *)arg1;
- (void)sosClawDidTriggerSOS:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: SBSOSClawGestureObserver *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*

@end
