
@interface CPSEntityMapButton : CPSActionButton <CPSActionButtonLayoutDelegate> {
    unsigned long long  _entityMapButtonType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long entityMapButtonType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)buttonWithEntityMapButtonType:(unsigned long long)arg1;

- (id)buttonAttributes;
- (id)buttonBackgroundColor;
- (struct CGSize { double x1; double x2; })buttonGlyphSize;
- (id)buttonImageTintColor;
- (struct CGSize { double x1; double x2; })buttonSize;
- (unsigned long long)entityMapButtonType;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setEntityMapButtonType:(unsigned long long)arg1;
- (void)setNeedsLayout;

@end
