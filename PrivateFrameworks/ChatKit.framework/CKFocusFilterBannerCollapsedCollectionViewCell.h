
@interface CKFocusFilterBannerCollapsedCollectionViewCell : UICollectionViewCell <UIPointerInteractionDelegate> {
    <CKFocusFilterBannerDelegate> * _focusFilterBannerDelegate;
    UIButton * _focusFilterToggleButton;
    bool  _isFocusFilterEnabled;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <CKFocusFilterBannerDelegate> *focusFilterBannerDelegate;
@property (nonatomic, retain) UIButton *focusFilterToggleButton;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isFocusFilterEnabled;
@property (readonly) Class superclass;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (void)_focusFilterToggleButtonSelected:(id)arg1;
- (void)_updateFocusFilterToggleButton;
- (id)focusFilterBannerDelegate;
- (id)focusFilterToggleButton;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isFocusFilterEnabled;
- (void)setFocusFilterBannerDelegate:(id)arg1;
- (void)setFocusFilterToggleButton:(id)arg1;
- (void)setIsFocusFilterEnabled:(bool)arg1;

@end
