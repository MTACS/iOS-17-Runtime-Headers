
@interface WFHarnessTestResult : NSObject <NSSecureCoding> {
    bool  _failed;
    NSString * _failureFilePath;
    long long  _failureLine;
    NSString * _failureReason;
    WFWorkflowOutputRunResult * _output;
}

@property (nonatomic, readonly) bool failed;
@property (nonatomic, readonly, copy) NSString *failureFilePath;
@property (nonatomic, readonly) long long failureLine;
@property (nonatomic, readonly, copy) NSString *failureReason;
@property (nonatomic, readonly) WFWorkflowOutputRunResult *output;

+ (id)failureWithReason:(id)arg1;
+ (id)failureWithReason:(id)arg1 filePath:(id)arg2 line:(long long)arg3;
+ (id)successWithOutput:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)errorRepresentation;
- (bool)failed;
- (id)failureFilePath;
- (long long)failureLine;
- (id)failureReason;
- (id)initWithCoder:(id)arg1;
- (id)initWithFailure:(bool)arg1 output:(id)arg2 reason:(id)arg3 failureFilePath:(id)arg4 failureLine:(long long)arg5;
- (id)output;

@end
