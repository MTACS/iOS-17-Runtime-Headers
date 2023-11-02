
@interface SKUIItemTableViewCell : SKUITableViewCell <SKUICellLayoutParentView> {
    bool  _layoutNeedsLayout;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) SKUIItemCellLayout *layout;
@property (readonly) Class superclass;

- (void)configureForItem:(id)arg1 clientContext:(id)arg2 rowIndex:(long long)arg3;
- (void)configureForItem:(id)arg1 rowIndex:(long long)arg2;
- (id)layout;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setBackgroundColor:(id)arg1;
- (void)setCellLayoutNeedsLayout;
- (void)setHighlighted:(bool)arg1 animated:(bool)arg2;
- (void)setSelected:(bool)arg1 animated:(bool)arg2;

@end