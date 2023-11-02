
@interface SBDashBoardPlatterHomeGestureManager : NSObject <CSPlatterHomeGestureManaging, SBPlatterHomeGestureManagerDelegate> {
    SBPlatterHomeGestureManager * _platterHomeGestureManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_isViewControllerPlatterHomeGestureParticipant:(id)arg1;
- (id)_platterHomeGestureManager;
- (id)homeGestureContextForViewController:(id)arg1;
- (id)platterHomeGestureManager:(id)arg1 windowForParticipant:(id)arg2;
- (long long)platterHomeGestureManager:(id)arg1 zStackParticipantIdentifierForParticipant:(id)arg2;
- (void)unregisterHomeGestureContextForViewController:(id)arg1;

@end
