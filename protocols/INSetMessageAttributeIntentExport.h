
@protocol INSetMessageAttributeIntentExport <NSObject, JSExport>

@required

- (long long)attribute;
- (NSArray *)identifiers;
- (id)init;
- (void)setAttribute:(long long)arg1;
- (void)setIdentifiers:(NSArray *)arg1;

@end
