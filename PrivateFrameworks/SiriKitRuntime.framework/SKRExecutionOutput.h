
@interface SKRExecutionOutput : NSObject <NSSecureCoding> {
    void atoms;
    void command;
    void executionRequestId;
    void postCommandSubmissionContextUpdate;
    void preCommandSubmissionContextUpdate;
}

@property (nonatomic, readonly) NSString *debugDescription;

+ (void)setSupportsSecureCoding:(bool)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
