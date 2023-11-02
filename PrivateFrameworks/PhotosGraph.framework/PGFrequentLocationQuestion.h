
@interface PGFrequentLocationQuestion : PGSurveyQuestion {
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
- (id)initWithAssetUUID:(id)arg1 location:(id)arg2 locationTypeName:(id)arg3;
- (double)localFactoryScore;
- (unsigned short)state;
- (unsigned short)type;

@end
