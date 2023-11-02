
@interface IMDSpamController : NSObject {
    NSMutableDictionary * _chatGUIDToCountMap;
    NSMutableDictionary * _chatGUIDToSpamCheckTimerMap;
    double  _spamExtensionCutoffTime;
}

@property (retain) NSMutableDictionary *chatGUIDToCountMap;
@property (retain) NSMutableDictionary *chatGUIDToSpamCheckTimerMap;
@property (nonatomic) double spamExtensionCutoffTime;

+ (id)sharedInstance;

- (void)__queryServerForID:(id)arg1 count:(id)arg2 completion:(id /* block */)arg3;
- (bool)_isDisabled;
- (void)_spamCheckTimerFired:(id)arg1;
- (void)_updateSpamCheckTimerWithInterval:(double)arg1 forChatGUID:(id)arg2;
- (id)chatGUIDToCountMap;
- (id)chatGUIDToSpamCheckTimerMap;
- (id)chatRegistry;
- (void)checkForSpamWithExtensionInChat:(id)arg1 forMessageBody:(id)arg2 sender:(id)arg3 withCompletion:(id /* block */)arg4;
- (void)dealloc;
- (void)detectSpam:(id)arg1 chatGUID:(id)arg2;
- (id)init;
- (void)setChatGUIDToCountMap:(id)arg1;
- (void)setChatGUIDToSpamCheckTimerMap:(id)arg1;
- (void)setSpamExtensionCutoffTime:(double)arg1;
- (bool)shouldCheckForSpamWithExtensionInChat:(id)arg1 fromIdentifier:(id)arg2 toIdentifier:(id)arg3;
- (double)spamExtensionCutoffTime;

@end
