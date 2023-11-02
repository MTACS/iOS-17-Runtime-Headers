
@interface SearchUIDescriptionCardSectionView : SearchUICardSectionView <TLKDescriptionViewDelegate> {
    bool  _expanded;
}

@property (nonatomic, retain) TLKDescriptionView *contentView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool expanded;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)dragSubtitleForCardSection:(id)arg1;
+ (id)dragTitleForCardSection:(id)arg1;
+ (bool)supportsCustomUserReportRequestAfforance;
+ (bool)supportsRecyclingForCardSection:(id)arg1;

- (bool)configureMenuForTrailingFootnoteButton:(id)arg1;
- (void)didPressFootnoteButton;
- (void)didPressMoreButton;
- (void)didPressTrailingFootnoteButton:(id)arg1;
- (bool)expanded;
- (void)setExpanded:(bool)arg1;
- (id)setupContentView;
- (void)updateWithRowModel:(id)arg1;

@end
