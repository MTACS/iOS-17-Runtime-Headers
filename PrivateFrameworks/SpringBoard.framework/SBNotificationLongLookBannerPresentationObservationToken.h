
@interface SBNotificationLongLookBannerPresentationObservationToken : SBPresentationObservationToken <SBNotificationBannerDestinationObserver> {
    SBNotificationBannerDestination * _notificationBannerDestination;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) SBNotificationBannerDestination *notificationBannerDestination;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithNotificationBannerDestination:(id)arg1 scene:(id)arg2;
- (id)notificationBannerDestination;
- (void)notificationBannerDestinationDidDismissLongLook:(id)arg1;
- (void)notificationBannerDestinationDidPresentLongLook:(id)arg1;
- (void)notificationBannerDestinationWillDismissLongLook:(id)arg1;
- (void)notificationBannerDestinationWillPresentLongLook:(id)arg1;
- (long long)state;

@end
