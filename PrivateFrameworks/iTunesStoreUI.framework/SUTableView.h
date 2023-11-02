
@interface SUTableView : UITableView {
    bool  _allowsHeaderAndFooterToFloat;
}

@property (nonatomic) bool allowsHeaderAndFooterToFloat;

- (bool)allowsFooterViewsToFloat;
- (bool)allowsHeaderAndFooterToFloat;
- (bool)allowsHeaderViewsToFloat;
- (void)setAllowsHeaderAndFooterToFloat:(bool)arg1;

@end
