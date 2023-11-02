
@interface SFSiriController : NSObject <SFSiriControllerInterface>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (long long)announceCallsState;
+ (bool)hasUserSeenAnnounceCallsOptOutScreen;
+ (bool)hasUserSeenAnnounceMessagesOptOutScreen;
+ (bool)hasUserSeenAnnounceNotificationsOptOutScreen;
+ (bool)isAnnounceEnabledForHeadphones;
+ (bool)isAnnounceMessagesEnabled;
+ (bool)isAnnounceMessagesSupported;
+ (bool)isAnnounceSupported;
+ (bool)isCurrentLocaleSupported;
+ (bool)isHeySiriEnabled;
+ (bool)isSiriAllowedWhileLocked;
+ (bool)isSiriEnabled;
+ (void)setAnnounceCallsState:(long long)arg1;
+ (void)setAnnounceMessagesEnabled:(bool)arg1;
+ (void)setHasUserSeenAnnounceCallsOptOutScreen:(bool)arg1;
+ (void)setHasUserSeenAnnounceMessagesOptOutScreen:(bool)arg1;
+ (void)setHasUserSeenAnnounceNotificationsOptOutScreen:(bool)arg1;
+ (bool)shouldPromptForAnnounceCallsForProductID:(unsigned int)arg1 supportsInEarDetection:(bool)arg2 isUpsellFlow:(bool)arg3;
+ (bool)shouldPromptForAnnounceMessagesForProductID:(unsigned int)arg1 isUpsellFlow:(bool)arg2;
+ (bool)shouldPromptForAnnounceNotificationsForProductID:(unsigned int)arg1 isUpsellFlow:(bool)arg2;

@end
