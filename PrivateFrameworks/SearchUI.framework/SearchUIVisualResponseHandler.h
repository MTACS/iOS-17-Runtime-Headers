
@interface SearchUIVisualResponseHandler : NSObject {
    VRXVisualResponseProvider * _provider;
}

@property (nonatomic, retain) VRXVisualResponseProvider *provider;

- (void).cxx_destruct;
- (id)buildResponseView:(id)arg1 delegate:(id)arg2;
- (id)init;
- (id)provider;
- (void)setProvider:(id)arg1;

@end
