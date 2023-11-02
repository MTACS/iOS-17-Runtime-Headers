
@protocol _INPBSetMessageAttributeIntent <NSObject>

@required

- (int)StringAsAttribute:(NSString *)arg1;
- (void)addIdentifier:(NSString *)arg1;
- (int)attribute;
- (NSString *)attributeAsString:(int)arg1;
- (void)clearIdentifiers;
- (bool)hasAttribute;
- (bool)hasIntentMetadata;
- (NSString *)identifierAtIndex:(unsigned long long)arg1;
- (NSArray *)identifiers;
- (unsigned long long)identifiersCount;
- (_INPBIntentMetadata *)intentMetadata;
- (void)setAttribute:(int)arg1;
- (void)setHasAttribute:(bool)arg1;
- (void)setIdentifiers:(NSArray *)arg1;
- (void)setIntentMetadata:(_INPBIntentMetadata *)arg1;

@end
