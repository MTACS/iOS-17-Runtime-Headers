
@interface _EARPeopleSuggesterConfig : NSObject {
    unsigned int  _bestContactsBonus;
    unsigned int  _bestContactsCount;
    unsigned int  _contactsCount;
}

@property (nonatomic, readonly) unsigned int bestContactsBonus;
@property (nonatomic, readonly) unsigned int bestContactsCount;
@property (nonatomic, readonly) unsigned int contactsCount;

- (unsigned int)bestContactsBonus;
- (unsigned int)bestContactsCount;
- (unsigned int)contactsCount;
- (id)initWithContactsCount:(unsigned int)arg1 bestContactsCount:(unsigned int)arg2 bestContactsBonus:(unsigned int)arg3;

@end
