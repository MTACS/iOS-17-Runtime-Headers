
@interface CNPhotoPickerGlyphProviderItem : CNPhotoPickerProviderItem {
    unsigned long long  _addItemType;
    NSString * _symbolImageName;
    UIView * _symbolImageView;
    UIColor * _tintColor;
}

@property (nonatomic) unsigned long long addItemType;
@property (nonatomic, retain) NSString *symbolImageName;
@property (nonatomic, retain) UIView *symbolImageView;
@property (nonatomic, retain) UIColor *tintColor;

+ (id)thumbnailViewForImage:(id)arg1;

- (void).cxx_destruct;
- (unsigned long long)addItemType;
- (id)backgroundColorWithTintColor:(id)arg1;
- (id)imageForImageNamed:(id)arg1 withTintColor:(id)arg2;
- (unsigned long long)imageType;
- (id)initWithSymbolImageNamed:(id)arg1;
- (id)initWithSymbolImageNamed:(id)arg1 withAddItemType:(unsigned long long)arg2;
- (long long)scaleForImageNamed:(id)arg1;
- (void)setAddItemType:(unsigned long long)arg1;
- (void)setSymbolImageName:(id)arg1;
- (void)setSymbolImageView:(id)arg1;
- (void)setTintColor:(id)arg1;
- (void)setupSymbolImageView;
- (id)symbolImageName;
- (id)symbolImageView;
- (void)thumbnailViewWithCompletion:(id /* block */)arg1;
- (id)tintColor;
- (void)updateTintColorIfNeeded:(id)arg1;

@end
