
@interface PUAssetPickerSortOrderHeaderView : UIView {
    long long  _sortOrderType;
    UIView * _view;
}

@property (nonatomic) long long sortOrderType;
@property (nonatomic, readonly) UIView *view;

+ (id)_titleForSortOrderType:(long long)arg1;

- (void).cxx_destruct;
- (id)initWithSortOrderType:(long long)arg1 sortOrderMenu:(id)arg2;
- (void)setSortOrderType:(long long)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (long long)sortOrderType;
- (id)view;

@end
