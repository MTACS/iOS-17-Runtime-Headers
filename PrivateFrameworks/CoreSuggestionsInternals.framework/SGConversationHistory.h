
@interface SGConversationHistory : NSObject {
    NSString * _likelyLanguage;
    NSArray * _messages;
}

@property (readonly) NSString *likelyLanguage;
@property (readonly) NSArray *messages;

- (void).cxx_destruct;
- (id)initWithMessages:(id)arg1;
- (id)likelyLanguage;
- (id)messages;

@end
