
@protocol INIntentSlotDescriptionExport <NSObject, JSExport>

@required

- (NSString *)dataPropertyName;
- (SEL)deprecatedResolveSelector;
- (NSString *)facadePropertyName;
- (id)init;
- (bool)isExtended;
- (bool)isPrivate;
- (NSString *)name;
- (SEL)resolveSelector;
- (NSArray *)resolveSelectorStrings;
- (unsigned long long)tag;
- (long long)valueStyle;
- (long long)valueType;

@end
