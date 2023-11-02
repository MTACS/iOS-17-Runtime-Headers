
@interface PGNamingQuestion : PGSurveyQuestion {
    NSDictionary * _additionalInfo;
    NSString * _contactIdentifier;
    NSString * _entityIdentifier;
    double  _localFactoryScore;
    PHPerson * _person;
    unsigned short  _state;
}

@property (nonatomic, readonly) NSString *contactIdentifier;
@property (nonatomic, readonly) PHPerson *person;

+ (id)questionForPerson:(id)arg1;

- (void).cxx_destruct;
- (id)_additionalInfoFromContactIdentifier:(id)arg1;
- (id)_personForContactSuggestion;
- (id)additionalInfo;
- (id)contactIdentifier;
- (unsigned short)displayType;
- (id)entityIdentifier;
- (unsigned short)entityType;
- (id)initWithConfirmedPerson:(id)arg1 contactIdentifier:(id)arg2 localFactoryScore:(double)arg3;
- (id)initWithPerson:(id)arg1 contactIdentifier:(id)arg2 localFactoryScore:(double)arg3;
- (void)legacyPersist;
- (void)legacyRemove;
- (double)localFactoryScore;
- (void)persistWithCreationDate:(id)arg1 questionVersion:(short)arg2;
- (id)person;
- (void)remove;
- (unsigned short)state;
- (unsigned short)type;

@end
