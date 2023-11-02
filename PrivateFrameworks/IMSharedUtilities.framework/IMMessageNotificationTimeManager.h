
@interface IMMessageNotificationTimeManager : NSObject {
    BKSApplicationStateMonitor * _appStateMonitor;
    NSMutableDictionary * _chatsStartTimeDictionary;
    NSString * _latestIDSTokenURI;
}

@property (nonatomic, retain) BKSApplicationStateMonitor *appStateMonitor;
@property (nonatomic, retain) NSMutableDictionary *chatsStartTimeDictionary;
@property (nonatomic, retain) NSString *latestIDSTokenURI;

+ (id)sharedInstance;

- (long long)_getTimeWindowOverride;
- (long long)_getToneTimeWindow;
- (bool)_isToneToggleSwitchOn;
- (bool)_shouldSendNotificationForChatIdentifier:(id)arg1;
- (void)acquireAssertionToUnsuspendProcess;
- (id)appStateMonitor;
- (id)chatsStartTimeDictionary;
- (void)dealloc;
- (id)init;
- (id)latestIDSTokenURI;
- (void)sendNotificationMessageIfNeededForIncomingMessageFromChatIdentifier:(id)arg1;
- (void)setAppStateMonitor:(id)arg1;
- (void)setChatsStartTimeDictionary:(id)arg1;
- (void)setDate:(id)arg1 forChatIdentifier:(id)arg2;
- (void)setLatestIDSTokenURI:(id)arg1;
- (void)setLatestNotificationIDSTokenURI:(id)arg1;
- (void)tearDownSessionForChatIdentifier:(id)arg1;

@end
