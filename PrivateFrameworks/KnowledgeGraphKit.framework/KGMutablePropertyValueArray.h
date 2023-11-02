
@interface KGMutablePropertyValueArray : KGPropertyValueArray

@property (nonatomic, readonly) KGMutableElementIdentifierSet *elementIdentifiers;
@property (nonatomic, readonly) NSMutableArray *values;

- (void)appendValue:(id)arg1 forIdentifier:(unsigned long long)arg2;
- (id)init;

@end
