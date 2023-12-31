
@interface STAppTitleSubtitleCell : PSTableCell {
    bool  _hasSubtitle;
}

@property (nonatomic) bool hasSubtitle;
@property (nonatomic, readonly) bool isAppCell;

+ (long long)cellStyle;

- (void)_didFetchAppInfoOrIcon:(id)arg1;
- (bool)hasSubtitle;
- (bool)isAppCell;
- (void)layoutSubviews;
- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (void)setHasSubtitle:(bool)arg1;
- (void)setSpecifier:(id)arg1;

@end
