
@interface PXCMMPosterBannerView : UIView {
    PXCapsuleButton * _actionButton;
    id /* block */  _actionButtonAction;
    NSString * _actionButtonTitle;
    bool  _addingPhotos;
    bool  _containsUnverifiedPersons;
    NSString * _headline;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _headlineBoldRange;
    UILabel * _headlineLabel;
    bool  _loadingPeopleSuggestions;
    NSArray * _localizedNamesForHeadline;
    NSString * _subheadline;
    UILabel * _subheadlineLabel;
    PXUpdater * _updater;
    UIVisualEffectView * _visualEffectView;
}

@property (getter=isAddingPhotos, nonatomic) bool addingPhotos;
@property (nonatomic) bool containsUnverifiedPersons;
@property (nonatomic, copy) NSString *headline;
@property (getter=isLoadingPeopleSuggestions, nonatomic) bool loadingPeopleSuggestions;
@property (nonatomic, copy) NSArray *localizedNamesForHeadline;
@property (nonatomic, copy) NSString *subheadline;

+ (id)_headlineLabelBoldFont;
+ (id)_headlineLabelFont;
+ (id)_subheadlineLabelFont;

- (void).cxx_destruct;
- (void)_actionButtonTapped:(id)arg1;
- (id)_actionButtonWithTitle:(id)arg1 action:(SEL)arg2 enabled:(bool)arg3;
- (id)_attributedStringWithString:(id)arg1 boldRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;
- (id)_headlineStringAttributes;
- (struct CGSize { double x1; double x2; })_performLayoutInWidth:(double)arg1 updateSubviewFrames:(bool)arg2;
- (void)_updateActionButton;
- (void)_updateLoadingPeopleSuggestions;
- (void)_updateTitles;
- (bool)containsUnverifiedPersons;
- (id)headline;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isAddingPhotos;
- (bool)isLoadingPeopleSuggestions;
- (void)layoutSubviews;
- (id)localizedNamesForHeadline;
- (void)setActionButtonWithTitle:(id)arg1 actionBlock:(id /* block */)arg2;
- (void)setAddingPhotos:(bool)arg1;
- (void)setContainsUnverifiedPersons:(bool)arg1;
- (void)setHeadline:(id)arg1;
- (void)setHeadline:(id)arg1 boldRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setLoadingPeopleSuggestions:(bool)arg1;
- (void)setLocalizedNamesForHeadline:(id)arg1;
- (void)setSubheadline:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)subheadline;
- (void)tintColorDidChange;
- (void)willMoveToWindow:(id)arg1;

@end
