
@interface MFMailMessageRelationshipAnalyzer : NSObject {
    NSArray * _messages;
    NSArray * _relationships;
}

+ (id)analysisOfConversation:(id)arg1;
+ (id)analyzeMessages:(id)arg1 myEmailAddresses:(id)arg2;
+ (bool)isMessage:(id)arg1 addressedToMailingListForMessage:(id)arg2;
+ (bool)isMessage:(id)arg1 addressedToPreviousSender:(id)arg2;
+ (bool)isMessage:(id)arg1 forwardOfMessage:(id)arg2 myEmailAddresses:(id)arg3;
+ (bool)isMessage:(id)arg1 responseToMessage:(id)arg2 previousSenders:(id)arg3 myEmailAddresses:(id)arg4;
+ (bool)isMessage:(id)arg1 sentByAddress:(id)arg2;
+ (bool)isMessageDraft:(id)arg1;
+ (id)myEmailAddresses;
+ (id)recipientsOfMessage:(id)arg1;
+ (unsigned long long)relationOfMessage:(id)arg1 toMessage:(id)arg2;
+ (unsigned long long)relationOfMessage:(id)arg1 toMessage:(id)arg2 previousSenders:(id)arg3 myEmailAddresses:(id)arg4;
+ (id)sendersOfMessage:(id)arg1;

- (void)dealloc;
- (id)initWithMessages:(id)arg1 relationships:(id)arg2;
- (unsigned long long)relationOfMessage:(id)arg1;

@end
