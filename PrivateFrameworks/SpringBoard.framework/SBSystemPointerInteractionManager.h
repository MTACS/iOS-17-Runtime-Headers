
@interface SBSystemPointerInteractionManager : NSObject <SBMultiDisplayPointerInteractionObserver, UIPointerInteractionDelegate> {
    UIView * _activePointerRegionView;
    SBMultiDisplayUserInteractionCoordinator * _multiDisplayUserInteractionCoordinator;
    NSHashTable * _observers;
    NSMapTable * _registeredViewsToDelegates;
}

@property (nonatomic, readonly) UIView *activePointerRegionView;
@property (nonatomic, readonly) SBWindowScene *activePointerWindowScene;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)activePointerRegionView;
- (id)activePointerWindowScene;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)initWithMultiDisplayUserInteractionCoordinator:(id)arg1;
- (bool)isViewRegistered:(id)arg1;
- (void)pointerDidMoveToFromWindowScene:(id)arg1 toWindowScene:(id)arg2;
- (id)pointerInteraction:(id)arg1 window:(id)arg2 regionForRequest:(id)arg3 defaultRegion:(id)arg4;
- (id)pointerInteraction:(id)arg1 window:(id)arg2 styleForRegion:(id)arg3;
- (void)pointerInteraction:(id)arg1 window:(id)arg2 willEnterRegion:(id)arg3 animator:(id)arg4;
- (void)pointerInteraction:(id)arg1 window:(id)arg2 willExitRegion:(id)arg3 animator:(id)arg4;
- (void)registerView:(id)arg1 delegate:(id)arg2;
- (void)removeObserver:(id)arg1;
- (void)unregisterView:(id)arg1;

@end
