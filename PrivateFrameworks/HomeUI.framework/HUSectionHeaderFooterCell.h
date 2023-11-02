
@interface HUSectionHeaderFooterCell : UITableViewCell <HUCellSeparatorAppearanceDefining> {
    HUItemTableSectionHeaderFooterView * _headerFooterView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HUItemTableSectionHeaderFooterView *headerFooterView;
@property (nonatomic, readonly) bool prefersSeparatorsHidden;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)headerFooterView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)prefersSeparatorsHidden;
- (void)prepareForReuse;
- (struct CGSize { double x1; double x2; })systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (void)willMoveToSuperview:(id)arg1;

@end
