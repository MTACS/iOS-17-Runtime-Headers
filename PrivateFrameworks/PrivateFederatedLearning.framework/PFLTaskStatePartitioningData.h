
@interface PFLTaskStatePartitioningData : NSObject <PFLTaskState> {
    NSURL * _compiledModelURL;
}

@property (nonatomic, readonly) NSURL *compiledModelURL;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)compiledModelURL;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCompiledModelURL:(id)arg1;
- (void)resume:(id)arg1 completion:(id /* block */)arg2;
- (void)suspend;
- (unsigned long long)tag;

@end
