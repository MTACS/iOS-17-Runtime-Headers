
@interface MPArtworkColorAnalyzer : NSObject {
    long long  _algorithm;
    UIImage * _image;
}

@property (nonatomic, readonly) long long algorithm;
@property (nonatomic, readonly) UIImage *image;

+ (id)translateFromMLColorAnalysis:(id)arg1;

- (void).cxx_destruct;
- (id)_fallbackColorAnalysis;
- (long long)algorithm;
- (id)analyze;
- (void)analyzeWithCompletionHandler:(id /* block */)arg1;
- (id)image;
- (id)initWithImage:(id)arg1 algorithm:(long long)arg2;

@end
