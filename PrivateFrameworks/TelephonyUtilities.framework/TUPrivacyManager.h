
@interface TUPrivacyManager : NSObject

@property (nonatomic, readonly, copy) NSArray *privacyRules;

+ (id)sharedPrivacyManager;

- (void)_handleBlockListChanged:(id)arg1;
- (void)addRule:(id)arg1;
- (id)allBlacklistRules;
- (void)dealloc;
- (id)init;
- (bool)isIncomingCommunicationBlockedForBusinessID:(id)arg1;
- (bool)isIncomingCommunicationBlockedForEmailAddress:(id)arg1;
- (bool)isIncomingCommunicationBlockedForHandle:(id)arg1;
- (bool)isIncomingCommunicationBlockedForPhoneNumber:(id)arg1;
- (id)privacyRules;
- (void)removeRule:(id)arg1;
- (void)setBlockIncomingCommunication:(bool)arg1 forBusinessID:(id)arg2;
- (void)setBlockIncomingCommunication:(bool)arg1 forEmailAddress:(id)arg2;
- (void)setBlockIncomingCommunication:(bool)arg1 forPhoneNumber:(id)arg2;

@end
