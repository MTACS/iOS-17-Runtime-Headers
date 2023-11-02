
@interface QLTThumbnailOperation : QLThumbnailRequestOperation {
    NSError * _error;
    UIImage * _image;
    id /* block */  _needsAdditionalTime;
}

@property (readonly) NSError *error;
@property (readonly) UIImage *image;
@property (copy) id /* block */ needsAdditionalTime;

- (void).cxx_destruct;
- (id)error;
- (id)image;
- (id /* block */)needsAdditionalTime;
- (void)setNeedsAdditionalTime:(id /* block */)arg1;

@end
