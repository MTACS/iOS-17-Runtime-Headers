
@protocol _INPBConflictingParameter <NSObject>

@required

+ (Class)alternateItemsType;

- (void)addAlternateItems:(_INPBSelectionItem *)arg1;
- (NSArray *)alternateItems;
- (_INPBSelectionItem *)alternateItemsAtIndex:(unsigned long long)arg1;
- (unsigned long long)alternateItemsCount;
- (void)clearAlternateItems;
- (bool)hasKeyPath;
- (NSString *)keyPath;
- (void)setAlternateItems:(NSArray *)arg1;
- (void)setKeyPath:(NSString *)arg1;

@end
