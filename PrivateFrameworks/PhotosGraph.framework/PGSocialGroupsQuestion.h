
@interface PGSocialGroupsQuestion : PGSurveyQuestion {
    NSDictionary * _additionalInfo;
    NSString * _entityIdentifier;
    double  _localFactoryScore;
    unsigned short  _state;
}

- (void).cxx_destruct;
- (id)additionalInfo;
- (unsigned short)displayType;
- (id)entityIdentifier;
- (unsigned short)entityType;
- (id)initWithSocialGroupID:(id)arg1 personLocalIdentifiers:(id)arg2 personNames:(id)arg3 localFactoryScore:(double)arg4;
- (double)localFactoryScore;
- (unsigned short)state;
- (unsigned short)type;

@end
