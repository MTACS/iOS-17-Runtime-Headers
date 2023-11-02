
@interface PFLTaskStateTraining : NSObject <PFLTaskState> {
    NSURL * _compiledModelURL;
    NSDictionary * _metrics;
    PFLModelHandler * _modelHandler;
    NSNumber * _numValidationSamples;
    NSArray * _trainingIndicies;
}

@property (nonatomic, readonly) NSURL *compiledModelURL;
@property (nonatomic, readonly) NSDictionary *metrics;
@property (nonatomic, readonly) PFLModelHandler *modelHandler;
@property (nonatomic, readonly) NSNumber *numValidationSamples;
@property (nonatomic, readonly) NSArray *trainingIndicies;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)compiledModelURL;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCompiledModelURL:(id)arg1 modelHandler:(id)arg2 trainingDataIndicies:(id)arg3 metrics:(id)arg4 numValidationSamples:(id)arg5;
- (id)metrics;
- (id)modelHandler;
- (id)numValidationSamples;
- (void)resume:(id)arg1 completion:(id /* block */)arg2;
- (void)suspend;
- (unsigned long long)tag;
- (id)trainingIndicies;

@end
