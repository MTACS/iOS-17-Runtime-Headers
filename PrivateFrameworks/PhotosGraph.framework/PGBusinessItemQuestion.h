
@interface PGBusinessItemQuestion : PGSurveyQuestion {
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
- (id)initWithAssetUUID:(id)arg1 businessUUID:(id)arg2 businessName:(id)arg3 localFactoryScore:(double)arg4;
- (double)localFactoryScore;
- (unsigned short)state;
- (unsigned short)type;

@end
