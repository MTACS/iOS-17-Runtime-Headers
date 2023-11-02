
@interface MSVArtworkColorAnalyzer : NSObject {
    long long  _algorithm;
    struct CGSize { 
        double width; 
        double height; 
    }  _preferredImageSize;
    struct CGImage { } * _sourceImage;
}

@property (nonatomic) long long algorithm;
@property (nonatomic) struct CGSize { double x1; double x2; } preferredImageSize;
@property (nonatomic, retain) struct CGImage { }*sourceImage;

+ (long long)algorithmWithMPColorAnalyzerAlgorithm:(long long)arg1;

- (void).cxx_destruct;
- (long long)algorithm;
- (id)analyze;
- (void)analyzeWithCompletionHandler:(id /* block */)arg1;
- (id)initWithSourceImage:(struct CGImage { }*)arg1 algorithm:(long long)arg2 preferredImageSize:(struct CGSize { double x1; double x2; })arg3;
- (struct CGSize { double x1; double x2; })preferredImageSize;
- (void)setAlgorithm:(long long)arg1;
- (void)setPreferredImageSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setSourceImage:(struct CGImage { }*)arg1;
- (struct CGImage { }*)sourceImage;

@end
