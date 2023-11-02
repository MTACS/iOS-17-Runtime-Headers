
@interface REUIScaledFullColorImageView : UIView <CLKFullColorImageView> {
    UIImageView * _imageView;
    <CLKMonochromeFilterProvider> * filterProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <CLKMonochromeFilterProvider> *filterProvider;
@property (nonatomic, copy) UIFontDescriptor *fontDescriptor;
@property (nonatomic) double fontSizeFactor;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIImageView *imageView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)configureWithImageProvider:(id)arg1 reason:(long long)arg2;
- (id)filterProvider;
- (id)imageView;
- (id)initFullColorImageViewWithDevice:(id)arg1;
- (void)layoutSubviews;
- (void)pauseLiveFullColorImageView;
- (void)resumeLiveFullColorImageView;
- (void)setFilterProvider:(id)arg1;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)updateMonochromeColor;

@end
