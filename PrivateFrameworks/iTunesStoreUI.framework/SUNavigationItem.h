
@interface SUNavigationItem : UINavigationItem {
    <SUNavigationItemDelegate> * _delegate;
}

@property (nonatomic) <SUNavigationItemDelegate> *delegate;
@property (nonatomic, retain) UIBarButtonItem *secondaryLeftBarButtonItem;

- (id)delegate;
- (id)secondaryLeftBarButtonItem;
- (void)setDelegate:(id)arg1;
- (void)setLeftBarButtonItem:(id)arg1;
- (void)setLeftBarButtonItem:(id)arg1 animated:(bool)arg2;
- (void)setLeftBarButtonItems:(id)arg1;
- (void)setLeftBarButtonItems:(id)arg1 animated:(bool)arg2;
- (void)setSecondaryLeftBarButtonItem:(id)arg1;
- (void)setSecondaryLeftBarButtonItem:(id)arg1 animated:(bool)arg2;

@end
