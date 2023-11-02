
@interface SFPrivateBrowsingExplanationModuleContentView : UIView <UITextViewDelegate> {
    WBSStartPageBanner * _banner;
    NSArray * _constraintsForTitleBelowDismissButton;
    NSArray * _constraintsForTitleNextToDismissButton;
    UIButton * _dismissButton;
    UICollectionView * _explanationItemCollectionView;
    UICollectionViewDiffableDataSource * _explanationItemCollectionViewDataSource;
    UITextView * _messageTextView;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) WBSStartPageBanner *banner;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_applyMessageTextViewStyle;
- (void)_applyMessageViewLinkTextAttributes;
- (id)_attributedMessage;
- (void)_bannerDidChange;
- (void)_dismissModule;
- (bool)_hasMessageText;
- (double)_preferredHeight;
- (void)_setUpDismissButtonIfNeeded;
- (void)_setUpExplanationItemCollectionViewIfNeeded;
- (void)_setUpMessageTextIfNecessary;
- (id)_title;
- (void)_updateAllowsTitleNextToDismissButton;
- (id)banner;
- (id)initWithBanner:(id)arg1;
- (void)setBanner:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
