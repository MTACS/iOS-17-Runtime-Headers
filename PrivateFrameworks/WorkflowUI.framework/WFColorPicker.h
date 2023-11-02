
@interface WFColorPicker : UIView <UICollectionViewDataSource, UICollectionViewDelegate> {
    UICollectionView * _colorCollectionView;
    NSArray * _colorNames;
    NSArray * _colors;
    <WFColorPickerDelegate> * _delegate;
    WFColor * _selectedColor;
}

@property (nonatomic, retain) UICollectionView *colorCollectionView;
@property (nonatomic, retain) NSArray *colorNames;
@property (nonatomic, retain) NSArray *colors;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WFColorPickerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) WFColor *selectedColor;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)colorCollectionView;
- (id)colorNames;
- (id)colors;
- (id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)safeAreaInsetsDidChange;
- (id)selectedColor;
- (void)setColorCollectionView:(id)arg1;
- (void)setColorNames:(id)arg1;
- (void)setColors:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setSelectedColor:(id)arg1;

@end
