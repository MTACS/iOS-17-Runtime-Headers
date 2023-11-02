
@interface PXGadgetSectionHeaderUIView : UICollectionReusableView <PXChangeObserver> {
    UIButton * _accessoryButton;
    UIView * _divider;
    PXGadgetSectionHeader * _headerModel;
    UILabel * _titleLabel;
    struct { 
        unsigned long long needsUpdate; 
        unsigned long long updated; 
        bool isPerformingUpdate; 
        bool willPerformUpdate; 
    }  _updateFlags;
}

@property (nonatomic, readonly) UIButton *accessoryButton;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) UIView *divider;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PXGadgetSectionHeader *headerModel;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UILabel *titleLabel;

+ (id)_accessoryButtonFont;
+ (double)_heightThatFitsFirstToLastBaselineWithText:(id)arg1 width:(double)arg2 font:(id)arg3;
+ (double)_preferredHeightForText:(id)arg1 fittingWidth:(double)arg2 style:(unsigned long long)arg3 dividerHidden:(bool)arg4;
+ (struct CGSize { double x1; double x2; })_preferredSizeOfButtonWithType:(unsigned long long)arg1 width:(double)arg2;
+ (id)_sizingButton;
+ (id)_sizingLabel;
+ (double)preferredHeightForText:(id)arg1 buttonType:(unsigned long long)arg2 fittingWidth:(double)arg3 style:(unsigned long long)arg4 dividerHidden:(bool)arg5 isAccessibilitySize:(bool)arg6;

- (void).cxx_destruct;
- (void)_buttonPressed;
- (void)_updateAccessoryButton;
- (void)_updateTitle;
- (id)accessoryButton;
- (void)configureAccessoryButton:(id)arg1;
- (void)configureTitleLabel:(id)arg1;
- (void)contentSizeCategoryDidChangeNotification:(id)arg1;
- (void)dealloc;
- (id)divider;
- (id)headerModel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)setHeaderModel:(id)arg1;
- (id)titleLabel;

@end
