
@interface CRKSynchronousConfigurationSource : NSObject {
    <CRKConfigurationSource> * mBaseSource;
}

- (void).cxx_destruct;
- (id)configurationWithError:(id*)arg1;
- (id)initWithConfigurationSource:(id)arg1;
- (bool)setConfiguration:(id)arg1 error:(id*)arg2;

@end
