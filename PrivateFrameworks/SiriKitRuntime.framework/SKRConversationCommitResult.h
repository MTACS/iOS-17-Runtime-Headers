
@interface SKRConversationCommitResult : NSObject <NSSecureCoding> {
    void activeTasks;
    void completedTasks;
    void error;
    void flowUnhandledReason;
    void nextPluginActionData;
    void reparseExecutionRequestID;
    void reparseUserID;
    void type;
}

+ (void)setSupportsSecureCoding:(bool)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
