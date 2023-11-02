
@interface CKSOSUtilities : NSObject

@property (getter=isMMSEnabled, nonatomic, readonly) bool MMSEnabled;

+ (void)sendMessage:(id)arg1 location:(id)arg2 recipients:(id)arg3;
+ (void)sendMessage:(id)arg1 location:(id)arg2 recipients:(id)arg3 failureHandler:(id /* block */)arg4;
+ (id)sharedUtilities;

- (id)_sendCompositions:(id)arg1 toConversation:(id)arg2 useStandalone:(bool)arg3 shouldForceSMS:(bool)arg4 isCritical:(bool)arg5;
- (void)_sendMessageAndObserveNotification:(id)arg1;
- (id)_sendMessageAndReturnGUIDs:(id)arg1;
- (id)_uniqueFilePathForFilename:(id)arg1;
- (bool)isMMSEnabled;
- (bool)isMobileKeyBagDisabledOrDeviceUnlockedSinceBoot;
- (id)sendComposition:(id)arg1 toConversation:(id)arg2 useStandalone:(bool)arg3 shouldForceSMS:(bool)arg4 isCritical:(bool)arg5;
- (void)sendMessage:(id)arg1;
- (void)sendMessage:(id)arg1 location:(id)arg2 recipients:(id)arg3;
- (void)sendMessage:(id)arg1 location:(id)arg2 recipients:(id)arg3 failureHandler:(id /* block */)arg4;

@end
