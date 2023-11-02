
@interface PGMergeCandidateQuestion : PGSurveyQuestion {
    NSDictionary * _additionalInfo;
    unsigned short  _displayType;
    NSString * _entityIdentifier;
    unsigned short  _entityType;
    PHPerson * _person;
    double  _score;
    unsigned short  _state;
    unsigned short  _type;
}

@property (nonatomic, readonly) PHPerson *person;

+ (id)questionForPerson:(id)arg1;

- (void).cxx_destruct;
- (id)additionalInfo;
- (unsigned short)displayType;
- (id)entityIdentifier;
- (unsigned short)entityType;
- (unsigned long long)hash;
- (id)initWithPerson:(id)arg1 score:(double)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToQuestion:(id)arg1;
- (void)persistWithCreationDate:(id)arg1 questionVersion:(short)arg2;
- (id)person;
- (void)remove;
- (double)score;
- (void)setScore:(double)arg1;
- (unsigned short)state;
- (unsigned short)type;

@end
