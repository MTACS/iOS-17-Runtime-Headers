
@interface WBSPhishingURLClassifierConfigurationOverrideAdapter : NSObject <WBSPhishingURLClassifier> {
    WBSPhishingConfiguration * _configuration;
}

@property (retain) WBSPhishingConfiguration *configuration;

- (void).cxx_destruct;
- (void)classifyURL:(id)arg1 options:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (id)configuration;
- (void)setConfiguration:(id)arg1;

@end
