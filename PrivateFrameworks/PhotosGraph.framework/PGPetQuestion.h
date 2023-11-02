
@interface PGPetQuestion : PGSurveyQuestion {
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
- (id)initWithPetUUID:(id)arg1 displayString:(id)arg2 localFactoryScore:(double)arg3;
- (double)localFactoryScore;
- (unsigned short)state;
- (unsigned short)type;

@end
