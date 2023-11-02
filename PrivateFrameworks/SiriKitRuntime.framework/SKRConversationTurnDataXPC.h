
@interface SKRConversationTurnDataXPC : NSObject <NSSecureCoding> {
    void conversationLoggingId;
    void executionRequestId;
    void flowTask;
    void invokedByPeerToPeerEORR;
    void proxiedRequestContext;
    void requestContextData;
    void scopedRRData;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
