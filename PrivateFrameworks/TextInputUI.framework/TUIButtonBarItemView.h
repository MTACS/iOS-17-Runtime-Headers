
@interface TUIButtonBarItemView : UIView {
    UIBarButtonItemGroup * _associatedGroup;
    UIBarButtonItem * _associatedItem;
    _UIButtonBarButton * _barButtonView;
    bool  _collapsedItem;
    UIView * _customView;
}

@property (nonatomic, retain) UIBarButtonItemGroup *associatedGroup;
@property (nonatomic, retain) UIBarButtonItem *associatedItem;
@property (nonatomic, retain) _UIButtonBarButton *barButtonView;
@property (getter=isCollapsedItem, nonatomic) bool collapsedItem;
@property (nonatomic, readonly) UIView *contentView;
@property (nonatomic, retain) UIView *customView;

- (void).cxx_destruct;
- (bool)_isPad;
- (id)associatedGroup;
- (id)associatedItem;
- (id)barButtonView;
- (id)contentView;
- (id)customView;
- (bool)isCollapsedItem;
- (void)layoutSubviews;
- (void)setAssociatedGroup:(id)arg1;
- (void)setAssociatedItem:(id)arg1;
- (void)setBarButtonView:(id)arg1;
- (void)setCollapsedItem:(bool)arg1;
- (void)setCustomView:(id)arg1;

@end
