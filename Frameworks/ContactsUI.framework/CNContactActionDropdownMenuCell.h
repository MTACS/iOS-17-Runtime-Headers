
@interface CNContactActionDropdownMenuCell : CNContactActionCell {
    CNContactActionDropdownMenuButton * _button;
    id /* block */  _menuProvider;
}

@property (nonatomic, retain) CNContactActionDropdownMenuButton *button;
@property (nonatomic, readonly) UIContextMenuInteraction *contextMenuInteraction;
@property (nonatomic, copy) id /* block */ menuProvider;

- (void).cxx_destruct;
- (id)button;
- (id)contextMenuInteraction;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id /* block */)menuProvider;
- (void)prepareForReuse;
- (void)setButton:(id)arg1;
- (void)setMenuProvider:(id /* block */)arg1;

@end
