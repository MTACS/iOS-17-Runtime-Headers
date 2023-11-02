
@protocol _INPBPayloadNeedsValue <NSObject>

@required

+ (Class)promptItemsType;

- (void)addPromptItems:(_INPBSelectionItem *)arg1;
- (void)clearPromptItems;
- (NSArray *)promptItems;
- (_INPBSelectionItem *)promptItemsAtIndex:(unsigned long long)arg1;
- (unsigned long long)promptItemsCount;
- (void)setPromptItems:(NSArray *)arg1;

@end
