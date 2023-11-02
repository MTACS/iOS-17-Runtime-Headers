
@interface WFWorkflowContextualActionOutputRunResult : WFWorkflowOutputRunResult {
    NSArray * _files;
    NSData * _reversalState;
}

@property (nonatomic, readonly) NSArray *files;
@property (nonatomic, readonly) NSData *reversalState;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)files;
- (id)initWithCoder:(id)arg1;
- (id)initWithOutput:(id)arg1 files:(id)arg2 runError:(id)arg3 reversalState:(id)arg4;
- (id)reversalState;

@end
