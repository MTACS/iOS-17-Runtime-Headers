
@interface MSVArtworkServiceResizeRequest : MSVArtworkServiceRequest {
    NSMutableArray * _resizeDestinations;
    NSURL * _sourceURL;
}

@property (nonatomic, retain) NSMutableArray *resizeDestinations;
@property (nonatomic, copy) NSURL *sourceURL;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addDestinationWithFormat:(long long)arg1 size:(struct CGSize { double x1; double x2; })arg2 url:(id)arg3;
- (void)addJPEGDestinationWithSize:(struct CGSize { double x1; double x2; })arg1 compressionQuality:(double)arg2 url:(id)arg3;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateDestinationsUsingBlock:(id /* block */)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSourceURL:(id)arg1;
- (Class)operationClass;
- (id)resizeDestinations;
- (void)setResizeDestinations:(id)arg1;
- (void)setSourceURL:(id)arg1;
- (id)sourceURL;

@end
