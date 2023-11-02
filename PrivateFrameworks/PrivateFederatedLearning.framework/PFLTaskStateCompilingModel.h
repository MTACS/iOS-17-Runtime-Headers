
@interface PFLTaskStateCompilingModel : NSObject <PFLTaskState> {
    NSURL * _modelURL;
}

@property (nonatomic, readonly) NSURL *modelURL;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithModelURL:(id)arg1;
- (id)modelURL;
- (void)resume:(id)arg1 completion:(id /* block */)arg2;
- (void)suspend;
- (unsigned long long)tag;

@end
