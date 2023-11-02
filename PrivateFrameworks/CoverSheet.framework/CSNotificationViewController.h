
@interface CSNotificationViewController : NCNotificationShortLookViewController <SBBarSwipeAffordanceObserver, SBUIPresentableLocalHomeGestureParticipant> {
    <SBUIPresentableHomeGestureContext> * _homeGestureContext;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <SBUIPresentableHomeGestureContext> *homeGestureContext;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)expandedPlatter:(id)arg1 willDismissWithReason:(id)arg2;
- (void)expandedPlatterDidPresent:(id)arg1;
- (id)homeGestureContext;
- (void)homeGesturePerformedForBarSwipeAffordanceView:(id)arg1;
- (void)setHomeGestureContext:(id)arg1;

@end
