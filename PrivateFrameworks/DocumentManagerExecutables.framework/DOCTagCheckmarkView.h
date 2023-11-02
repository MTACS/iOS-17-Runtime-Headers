
@interface DOCTagCheckmarkView : UIView <DOCTagIconView> {
    NSLayoutConstraint * _heightConstraint;
    UIImageView * _imageView;
    DOCTag * _itemTag;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) DOCTag *itemTag;
@property (readonly) Class superclass;

+ (id)checkmarkImage;

- (void).cxx_destruct;
- (void)_updateTintColor;
- (id)image;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)itemTag;
- (void)setItemTag:(id)arg1;
- (void)updateForChangedTraitsAffectingFonts;

@end
