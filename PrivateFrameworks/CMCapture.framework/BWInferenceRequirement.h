
@interface BWInferenceRequirement : NSObject {
    BWInferenceConfiguration * _configuration;
    <BWInferenceProvider> * _provider;
}

@property (nonatomic, readonly) BWInferenceConfiguration *configuration;
@property (nonatomic, readonly) <BWInferenceProvider> *provider;

- (id)configuration;
- (void)dealloc;
- (id)initWithProvider:(id)arg1 configuration:(id)arg2;
- (id)provider;

@end
