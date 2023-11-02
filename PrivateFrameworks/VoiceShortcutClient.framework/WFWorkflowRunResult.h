
@interface WFWorkflowRunResult : NSObject <NSSecureCoding> {
    NSError * _internalError;
}

@property (getter=isCancelled, nonatomic, readonly) bool cancelled;
@property (nonatomic, readonly) NSError *error;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (id)initWithCoder:(id)arg1;
- (id)initWithError:(id)arg1;
- (bool)isCancelled;
- (id)resultBySettingError:(id)arg1;

@end
