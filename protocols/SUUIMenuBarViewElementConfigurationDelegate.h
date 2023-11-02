
@protocol SUUIMenuBarViewElementConfigurationDelegate <NSObject>

@optional

- (void)menuBarViewElementConfiguration:(SUUIMenuBarViewElementConfiguration *)arg1 didReplaceDocumentForEntityUniqueIdentifier:(id <NSCopying>)arg2;
- (void)menuBarViewElementConfiguration:(SUUIMenuBarViewElementConfiguration *)arg1 didReplaceDocumentForMenuItemAtIndex:(unsigned long long)arg2;
- (void)menuBarViewElementConfiguration:(SUUIMenuBarViewElementConfiguration *)arg1 selectMenuItemViewElement:(SUUIMenuItemViewElement *)arg2 animated:(bool)arg3;

@end
