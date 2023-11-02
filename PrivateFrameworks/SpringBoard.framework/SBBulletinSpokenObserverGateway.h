
@interface SBBulletinSpokenObserverGateway : NSObject <AFSiriAnnouncementRequestCapabilityObserving, BBObserverDelegate> {
    AFSiriAnnouncementRequestCapabilityManager * _announcementRequestCapabilityManager;
    BBObserver * _bbObserver;
    bool  _canAnnounceNotifications;
    DNDEventBehaviorResolutionService * _dndEventBehaviorResolutionService;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)availableAnnouncementRequestTypesChanged:(unsigned long long)arg1 onPlatform:(long long)arg2;
- (void)eligibleAnnouncementRequestTypesChanged:(unsigned long long)arg1 onPlatform:(long long)arg2;
- (id)init;
- (void)observer:(id)arg1 addBulletin:(id)arg2 forFeed:(unsigned long long)arg3 playLightsAndSirens:(bool)arg4 withReply:(id /* block */)arg5;

@end
