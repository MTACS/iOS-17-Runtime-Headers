
@interface CKPhotosSearchResultsModeHeaderReusableView : UICollectionReusableView <CKSearchResultSupplementryCell> {
    double  _bottomPadding;
    UISegmentedControl * _control;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  marginInsets;
}

@property (nonatomic) double bottomPadding;
@property (nonatomic, retain) UISegmentedControl *control;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } marginInsets;
@property (readonly) Class superclass;

+ (double)desiredZPosition;
+ (id)reuseIdentifier;
+ (id)supplementaryViewType;

- (void).cxx_destruct;
- (void)_controlIndexDidChange:(id)arg1;
- (double)bottomPadding;
- (id)control;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })marginInsets;
- (id)preferredLayoutAttributesFittingAttributes:(id)arg1;
- (void)setBottomPadding:(double)arg1;
- (void)setControl:(id)arg1;
- (void)setMarginInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;

@end
