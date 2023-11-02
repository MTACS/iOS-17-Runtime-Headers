
@interface MSVArtworkServiceColorAnalysisRequest : MSVArtworkServiceRequest {
    float  _preferredImageHeight;
    float  _preferredImageWidth;
    NSURL * _sourceURL;
}

@property (nonatomic, readonly) float preferredImageHeight;
@property (nonatomic, readonly) float preferredImageWidth;
@property (nonatomic, readonly) NSURL *sourceURL;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSourceURL:(id)arg1 preferredImageSize:(struct CGSize { double x1; double x2; })arg2;
- (Class)operationClass;
- (float)preferredImageHeight;
- (float)preferredImageWidth;
- (id)sourceURL;

@end
