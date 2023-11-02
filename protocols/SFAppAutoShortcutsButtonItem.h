
@protocol SFAppAutoShortcutsButtonItem <SFButtonItem>

@required

- (SFAppAutoShortcutsItem *)appAutoShortcutsItem;
- (NSDictionary *)dictionaryRepresentation;
- (NSData *)jsonData;
- (void)setAppAutoShortcutsItem:(SFAppAutoShortcutsItem *)arg1;

@end
