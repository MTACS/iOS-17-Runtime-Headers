
@interface TTKConversationTest : NSObject {
    bool  _adaptToReceivedMessages;
    bool  _adaptToSentMessages;
    NSArray * _conversation;
    NSSet * _sendersToTest;
    unsigned long long  _warmupMessages;
}

@property (nonatomic, readonly) bool adaptToReceivedMessages;
@property (nonatomic, readonly) bool adaptToSentMessages;
@property (nonatomic, readonly) NSArray *conversation;
@property (nonatomic, readonly) NSSet *sendersToTest;
@property (nonatomic, readonly) unsigned long long warmupMessages;

+ (id)fromJsonDict:(id)arg1;
+ (id)testWithConversation:(id)arg1 sendersToTest:(id)arg2 warmupMessages:(unsigned long long)arg3 adaptToSentMessages:(bool)arg4 adaptToReceivedMessages:(bool)arg5;

- (void).cxx_destruct;
- (bool)adaptToReceivedMessages;
- (bool)adaptToSentMessages;
- (id)conversation;
- (id)overridingJsonKeys:(id)arg1;
- (id)sendersToTest;
- (id)toJsonDict;
- (unsigned long long)warmupMessages;

@end
