
@protocol _INPBContactList <NSObject>

@required

+ (Class)contactType;

- (void)addContact:(_INPBContact *)arg1;
- (void)clearContacts;
- (_INPBCondition *)condition;
- (_INPBContact *)contactAtIndex:(unsigned long long)arg1;
- (NSArray *)contacts;
- (unsigned long long)contactsCount;
- (bool)hasCondition;
- (void)setCondition:(_INPBCondition *)arg1;
- (void)setContacts:(NSArray *)arg1;

@end
