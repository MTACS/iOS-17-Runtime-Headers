
@interface IMSenderIdentityManager : NSObject {
    CNGeminiManager * _geminiManager;
}

@property (nonatomic, retain) CNGeminiManager *geminiManager;

+ (bool)isTUSenderIdentity:(id)arg1 equalToSubscriptionContext:(id)arg2;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)bestSenderIdentityForGeminiHandle:(id)arg1 contact:(id)arg2;
- (id)bestSenderIdentityForHandleID:(id)arg1 contact:(id)arg2;
- (id)bestSenderIdentityForHandleIDs:(id)arg1;
- (id)contactPreferredSenderIdentityForHandleID:(id)arg1 contact:(id)arg2;
- (id)geminiManager;
- (id)init;
- (void)setGeminiManager:(id)arg1;

@end
