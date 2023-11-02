
@interface PFLTaskStateCollectingMetrics : NSObject <PFLTaskState> {
    NSURL * _compiledModelURL;
    NSArray * _trainingIndicies;
    NSArray * _validationIndicies;
}

@property (nonatomic, readonly) NSURL *compiledModelURL;
@property (nonatomic, readonly) NSArray *trainingIndicies;
@property (nonatomic, readonly) NSArray *validationIndicies;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)compiledModelURL;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCompiledModelURL:(id)arg1 validationDataIndicies:(id)arg2 trainingDataIndicies:(id)arg3;
- (void)resume:(id)arg1 completion:(id /* block */)arg2;
- (void)suspend;
- (unsigned long long)tag;
- (id)trainingIndicies;
- (id)validationIndicies;

@end
