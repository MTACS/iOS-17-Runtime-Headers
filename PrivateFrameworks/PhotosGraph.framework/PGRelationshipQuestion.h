
@interface PGRelationshipQuestion : PGSurveyQuestion {
    NSDictionary * _additionalInfo;
    unsigned short  _displayType;
    NSString * _entityIdentifier;
    unsigned short  _entityType;
    double  _localFactoryScore;
    unsigned short  _state;
}

- (void).cxx_destruct;
- (id)additionalInfo;
- (unsigned short)displayType;
- (id)entityIdentifier;
- (unsigned short)entityType;
- (id)initWithRelationshipLabel:(id)arg1 confirmedPersonUUID:(id)arg2;
- (id)initWithRelationshipLabel:(id)arg1 personUUID:(id)arg2 displayString:(id)arg3 localFactoryScore:(double)arg4;
- (id)initWithRelationshipLabel:(id)arg1 personUUID:(id)arg2 localFactoryScore:(double)arg3;
- (double)localFactoryScore;
- (unsigned short)state;
- (unsigned short)type;

@end
