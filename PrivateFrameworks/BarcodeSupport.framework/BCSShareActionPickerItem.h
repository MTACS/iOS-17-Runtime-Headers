
@interface BCSShareActionPickerItem : BCSActionPickerItem {
    NSMutableArray * _itemsToShare;
}

- (void).cxx_destruct;
- (bool)canGroupInSubmenu;
- (id)icon;
- (id)initWithAction:(id)arg1;
- (id)label;
- (void)performActionWithFBOptions:(id)arg1;

@end
