
@protocol _INPBSearchForContactIntent <NSObject>

@required

+ (Class)contactIdentifiersType;

- (void)addContactIdentifiers:(_INPBString *)arg1;
- (void)clearContactIdentifiers;
- (NSArray *)contactIdentifiers;
- (_INPBString *)contactIdentifiersAtIndex:(unsigned long long)arg1;
- (unsigned long long)contactIdentifiersCount;
- (bool)hasIntentMetadata;
- (_INPBIntentMetadata *)intentMetadata;
- (void)setContactIdentifiers:(NSArray *)arg1;
- (void)setIntentMetadata:(_INPBIntentMetadata *)arg1;

@end
