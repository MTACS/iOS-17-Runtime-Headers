
@interface SearchUITableHeaderView : SearchUITableHeaderViewShared <NUIContainerViewDelegate> {
    bool  _shouldUseInsetRoundedSections;
    SearchUILabel * _subtitleLabel;
    SearchUILabel * _titleLabel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool shouldUseInsetRoundedSections;
@property (nonatomic, retain) SearchUILabel *subtitleLabel;
@property (readonly) Class superclass;
@property (readonly) NSString *title;
@property (nonatomic, retain) SearchUILabel *titleLabel;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (id)init;
- (void)layoutSubviews;
- (bool)sectionCanInlineExpand;
- (void)setCardSection:(id)arg1;
- (void)setShouldUseInsetRoundedSections:(bool)arg1;
- (void)setSubtitleLabel:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (bool)shouldUseInsetRoundedSections;
- (id)subtitleLabel;
- (id)title;
- (id)titleLabel;
- (void)updateWithSection:(id)arg1 isExpanded:(bool)arg2 usesInsetRoundedSection:(bool)arg3;

@end
