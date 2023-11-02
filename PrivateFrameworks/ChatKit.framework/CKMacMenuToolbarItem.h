
@interface CKMacMenuToolbarItem : CKMacToolbarItem {
    UIMenu * _menu;
}

@property (nonatomic, retain) UIMenu *menu;

- (void).cxx_destruct;
- (id)initWithItemIdentifier:(id)arg1 menu:(id)arg2;
- (id)menu;
- (void)setMenu:(id)arg1;

@end
