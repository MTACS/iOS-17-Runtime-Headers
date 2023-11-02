
@interface ARModifiedImageData : ARImageData {
    NSDictionary * _metaData;
    ARImageData * _originalImage;
}

@property (nonatomic, copy) NSDictionary *metaData;
@property (nonatomic, readonly) ARImageData *originalImage;

- (void).cxx_destruct;
- (id)initWithImageData:(id)arg1;
- (id)metaData;
- (id)originalImage;
- (void)setMetaData:(id)arg1;

@end
