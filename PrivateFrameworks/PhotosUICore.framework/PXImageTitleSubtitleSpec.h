
@interface PXImageTitleSubtitleSpec : PXViewSpec {
    PXImageViewSpec * _imageSpec;
    PXTitleSubtitleLabelSpec * _titleSubtitleSpec;
}

@property (nonatomic, retain) PXImageViewSpec *imageSpec;
@property (nonatomic, retain) PXTitleSubtitleLabelSpec *titleSubtitleSpec;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)imageSpec;
- (bool)isEqual:(id)arg1;
- (void)setImageSpec:(id)arg1;
- (void)setTitleSubtitleSpec:(id)arg1;
- (id)titleSubtitleSpec;

@end
