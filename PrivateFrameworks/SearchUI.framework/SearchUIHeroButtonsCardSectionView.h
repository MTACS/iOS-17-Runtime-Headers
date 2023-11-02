
@interface SearchUIHeroButtonsCardSectionView : SearchUICardSectionView {
    NSArray * _autoShortcuts;
    NSArray * _buttonViews;
    NSArray * _synthesizedButtonItems;
}

@property (nonatomic, retain) NSArray *autoShortcuts;
@property (nonatomic, retain) NSArray *buttonViews;
@property (readonly) NUIContainerStackView *contentView;
@property (nonatomic, readonly) SFButtonListCardSection *section;
@property (nonatomic, retain) NSArray *synthesizedButtonItems;

+ (unsigned long long)maxButtonItems;
+ (id)shortcutsForBundleId:(id)arg1;
+ (bool)supportsRecyclingForCardSection:(id)arg1;

- (void).cxx_destruct;
- (id)autoShortcuts;
- (void)buttonPressed:(id)arg1;
- (id)buttonViews;
- (void)setAutoShortcuts:(id)arg1;
- (void)setButtonViews:(id)arg1;
- (void)setSynthesizedButtonItems:(id)arg1;
- (id)setupContentView;
- (id)showMoreButtonItem;
- (id)synthesizedButtonItems;
- (void)updateWithRowModel:(id)arg1;

@end
