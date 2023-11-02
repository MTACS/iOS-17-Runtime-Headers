
@interface TLKDetailsView : TLKView <TLKTextAreaViewDelegate> {
    <TLKDetailsViewDelegate> * _delegate;
}

@property (nonatomic, retain) UIView *accessoryView;
@property (nonatomic, retain) TLKRichText *bannerBadge;
@property (nonatomic, retain) TLKTextAreaView *contentView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <TLKDetailsViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSArray *details;
@property (nonatomic, retain) TLKRichText *footnote;
@property (nonatomic, retain) NSString *footnoteButtonText;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isAccessoryViewBottomAligned;
@property (nonatomic, retain) TLKRichText *secondaryTitle;
@property (nonatomic, retain) TLKImage *secondaryTitleImage;
@property (nonatomic) bool secondaryTitleIsDetached;
@property (readonly) Class superclass;
@property (nonatomic, retain) TLKRichText *title;
@property (nonatomic, retain) TLKRichText *topText;
@property (nonatomic) bool truncateTitleMiddle;
@property (nonatomic) bool useCompactMode;

- (void).cxx_destruct;
- (id)accessoryView;
- (id)bannerBadge;
- (bool)configureMenuForFootnoteButton:(id)arg1;
- (id)delegate;
- (id)details;
- (id)detailsFields;
- (id)detailsStrings;
- (id)footnote;
- (id)footnoteButton;
- (void)footnoteButtonPressed;
- (id)footnoteButtonText;
- (id)footnoteContainer;
- (id)footnoteLabel;
- (id)footnoteLabelString;
- (bool)isAccessoryViewBottomAligned;
- (void)layoutMarginsDidChange;
- (void)performBatchUpdates:(id /* block */)arg1;
- (id)secondaryTitle;
- (id)secondaryTitleImage;
- (bool)secondaryTitleIsDetached;
- (void)setAccessoryView:(id)arg1;
- (void)setBannerBadge:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDetails:(id)arg1;
- (void)setFootnote:(id)arg1;
- (void)setFootnoteButtonText:(id)arg1;
- (void)setIsAccessoryViewBottomAligned:(bool)arg1;
- (void)setSecondaryTitle:(id)arg1;
- (void)setSecondaryTitleImage:(id)arg1;
- (void)setSecondaryTitleIsDetached:(bool)arg1;
- (void)setTitle:(id)arg1;
- (void)setTopText:(id)arg1;
- (void)setTruncateTitleMiddle:(bool)arg1;
- (void)setUseCompactMode:(bool)arg1;
- (id)setupContentView;
- (id)title;
- (id)titleContainer;
- (id)topText;
- (bool)truncateTitleMiddle;
- (bool)useCompactMode;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;

@end
