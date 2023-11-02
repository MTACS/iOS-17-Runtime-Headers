
@interface INUISearchFoundationImageAdapter : SFImage {
    INImage * _intentsImage;
    NSValue * _sizeValue;
}

@property (nonatomic, copy) INImage *intentsImage;

+ (id)_sharedImageLoader;
+ (void)initialize;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithIntentsImage:(id)arg1;
- (id)initWithPayloadImage:(id)arg1;
- (id)intentsImage;
- (bool)isEqual:(id)arg1;
- (id)payloadImage;
- (void)setIntentsImage:(id)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })size;
- (int)source;

@end
