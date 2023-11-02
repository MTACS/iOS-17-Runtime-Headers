
@protocol _INPBRefinementItem <NSObject>

@required

- (bool)hasItem;
- (bool)hasSubKeyPath;
- (_INPBSelectionItem *)item;
- (void)setItem:(_INPBSelectionItem *)arg1;
- (void)setSubKeyPath:(NSString *)arg1;
- (NSString *)subKeyPath;

@end
