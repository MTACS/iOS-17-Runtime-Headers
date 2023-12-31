
@protocol SKUIMenuBarViewElementConfigurationDelegate <NSObject>

@optional

- (void)menuBarViewElementConfiguration:(SKUIMenuBarViewElementConfiguration *)arg1 didReplaceDocumentForEntityUniqueIdentifier:(id <NSCopying>)arg2;
- (void)menuBarViewElementConfiguration:(SKUIMenuBarViewElementConfiguration *)arg1 didReplaceDocumentForMenuItemAtIndex:(unsigned long long)arg2;
- (void)menuBarViewElementConfiguration:(SKUIMenuBarViewElementConfiguration *)arg1 selectMenuItemViewElement:(SKUIMenuItemViewElement *)arg2 animated:(bool)arg3;

@end
