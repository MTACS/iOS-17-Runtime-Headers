
@protocol _SFPBAppAutoShortcutsButtonItem <NSObject>

@required

- (_SFPBAppAutoShortcutsItem *)appAutoShortcutsItem;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (void)setAppAutoShortcutsItem:(_SFPBAppAutoShortcutsItem *)arg1;
- (void)setUniqueId:(unsigned long long)arg1;
- (unsigned long long)uniqueId;

@end
