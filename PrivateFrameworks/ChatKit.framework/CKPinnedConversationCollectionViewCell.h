
@interface CKPinnedConversationCollectionViewCell : UICollectionViewCell {
    bool  _allowActivitySuppressionWhenSelected;
    CKConversationListAccessoryView * _checkboxAccessoryView;
    NSObject<CKPinnedConversationCollectionViewCellDelegate> * _delegate;
    unsigned long long  _editingMode;
    bool  _isPreparingForReuse;
    bool  _isShowingCheckboxAccessory;
    bool  _isShowingUnpinAccessory;
    NSArray * _linkInteractions;
    CKPinnedConversationView * _pinnedConversationView;
    bool  _showsBackgroundViewWhenSelected;
    CKConversationListAccessoryView * _unpinAccessoryView;
}

@property (nonatomic) bool allowActivitySuppressionWhenSelected;
@property (nonatomic, retain) CKConversationListAccessoryView *checkboxAccessoryView;
@property (nonatomic) NSObject<CKPinnedConversationCollectionViewCellDelegate> *delegate;
@property (nonatomic, readonly) unsigned long long editingMode;
@property (setter=setJittering:, nonatomic) bool isJittering;
@property (nonatomic) bool isPreparingForReuse;
@property (setter=setShowingCheckboxAccessory:, nonatomic) bool isShowingCheckboxAccessory;
@property (setter=setShowingUnpinAccessory:, nonatomic) bool isShowingUnpinAccessory;
@property (nonatomic, retain) NSArray *linkInteractions;
@property (nonatomic, retain) CKPinnedConversationView *pinnedConversationView;
@property (nonatomic) bool showsBackgroundViewWhenSelected;
@property (nonatomic, retain) CKConversationListAccessoryView *unpinAccessoryView;

+ (id)_jitterRotationAnimation;
+ (id)_jitterXTranslationAnimation;
+ (id)_jitterYTranslationAnimation;
+ (id)checkmarkAccessoryView;
+ (id)reuseIdentifier;
+ (id)unpinAccessoryView;

- (void).cxx_destruct;
- (void)_createCheckboxAccessoryIfNecessary;
- (void)_createUnpinAccessoryIfNecessary;
- (void)_updateActivitySupressionForState:(id)arg1;
- (void)_updateGhostedAppearance;
- (void)_updateZPositionForState:(id)arg1;
- (double)accessorySizeForLayoutStyle:(long long)arg1;
- (bool)allowActivitySuppressionWhenSelected;
- (id)checkboxAccessoryView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })checkboxFrame;
- (id)configurationState;
- (void)configureLinkInteractionsFor:(id)arg1;
- (id)delegate;
- (void)didMoveToSuperview;
- (void)dragStateDidChange:(long long)arg1;
- (unsigned long long)editingMode;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isJittering;
- (bool)isPreparingForReuse;
- (bool)isShowingCheckboxAccessory;
- (bool)isShowingUnpinAccessory;
- (void)layoutSubviews;
- (id)linkInteractions;
- (id)pinnedConversationView;
- (void)prepareForReuse;
- (void)setAllowActivitySuppressionWhenSelected:(bool)arg1;
- (void)setCheckboxAccessoryView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEditingMode:(unsigned long long)arg1 animated:(bool)arg2;
- (void)setIsPreparingForReuse:(bool)arg1;
- (void)setJittering:(bool)arg1;
- (void)setLinkInteractions:(id)arg1;
- (void)setPinnedConversationView:(id)arg1;
- (void)setShowingCheckboxAccessory:(bool)arg1;
- (void)setShowingUnpinAccessory:(bool)arg1;
- (void)setShowsBackgroundViewWhenSelected:(bool)arg1;
- (void)setUnpinAccessoryView:(id)arg1;
- (bool)showsBackgroundViewWhenSelected;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)unpinAccessoryView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })unpinAccessoryViewFrame;
- (void)unpinButtonTapped:(id)arg1;
- (void)updateCheckboxAccessoryImageForCurrentLayoutStyle;
- (void)updateConfigurationUsingState:(id)arg1;
- (void)updateUnpinAccessoryImageForCurrentLayoutStyle;

@end
