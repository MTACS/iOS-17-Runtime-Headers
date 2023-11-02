
@interface PREditingColorItemView : PRSelectableEditingItemView {
    PREditingColorItem * _colorItem;
    UIView * _itemView;
}

@property (nonatomic, retain) PREditingColorItem *colorItem;
@property (nonatomic, retain) UIView *itemView;
@property (nonatomic, readonly, copy) NSString *localizedName;

- (void).cxx_destruct;
- (id)colorItem;
- (id)initWithColorItem:(id)arg1;
- (id)itemView;
- (id)localizedName;
- (void)setColorItem:(id)arg1;
- (void)setItemView:(id)arg1;
- (void)updateForChangedColor;

@end
