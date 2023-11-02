
@protocol _INPBSearchForContactIntentResponse <NSObject>

@required

+ (Class)matchedContactsType;

- (void)addMatchedContacts:(_INPBContactCard *)arg1;
- (void)clearMatchedContacts;
- (NSArray *)matchedContacts;
- (_INPBContactCard *)matchedContactsAtIndex:(unsigned long long)arg1;
- (unsigned long long)matchedContactsCount;
- (void)setMatchedContacts:(NSArray *)arg1;

@end
