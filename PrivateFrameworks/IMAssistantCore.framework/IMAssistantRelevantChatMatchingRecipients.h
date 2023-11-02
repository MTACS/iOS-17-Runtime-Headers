
@interface IMAssistantRelevantChatMatchingRecipients : NSObject {
    IMChat * _chat;
    NSArray * _resolvedPersons;
}

@property (nonatomic, retain) IMChat *chat;
@property (nonatomic, copy) NSArray *resolvedPersons;

- (void).cxx_destruct;
- (id)chat;
- (id)description;
- (id)initWithChat:(id)arg1 resolvedPersons:(id)arg2;
- (id)resolvedPersons;
- (void)setChat:(id)arg1;
- (void)setResolvedPersons:(id)arg1;

@end
