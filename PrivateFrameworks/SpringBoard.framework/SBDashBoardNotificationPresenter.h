
@interface SBDashBoardNotificationPresenter : NSObject <CSNotificationPresenting>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)presentModalBannerAndExpandForNotificationRequest:(id)arg1;

@end
