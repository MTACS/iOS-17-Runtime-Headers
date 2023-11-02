
@interface VUIMediaInfoImageFetchOperation : VUIAsynchronousOperation {
    NSMutableArray * _completionBlocks;
    NSError * _error;
    VUIImage * _image;
    bool  _imageLoadFinished;
    VUIMediaInfo * _mediaInfo;
}

@property (nonatomic, retain) NSMutableArray *completionBlocks;
@property (nonatomic, retain) NSError *error;
@property (nonatomic, retain) VUIImage *image;
@property (nonatomic) bool imageLoadFinished;
@property (nonatomic, retain) VUIMediaInfo *mediaInfo;

- (void).cxx_destruct;
- (void)addCompletion:(id /* block */)arg1;
- (void)cancel;
- (id)completionBlocks;
- (id)error;
- (void)executionDidBegin;
- (void)fetchImageWithCompletion:(id /* block */)arg1;
- (id)image;
- (bool)imageLoadFinished;
- (id)imageProxy;
- (id)initWithMediaInfo:(id)arg1;
- (id)mediaInfo;
- (void)setCompletionBlocks:(id)arg1;
- (void)setError:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setImageLoadFinished:(bool)arg1;
- (void)setMediaInfo:(id)arg1;

@end
