
@interface PGLocationRepresentativeAssetQuestion : PGSurveyQuestion {
    NSDictionary * _additionalInfo;
    NSString * _entityIdentifier;
    unsigned short  _state;
}

- (void).cxx_destruct;
- (id)additionalInfo;
- (unsigned short)displayType;
- (id)entityIdentifier;
- (unsigned short)entityType;
- (id)initWithAssetUUID:(id)arg1 locationName:(id)arg2;
- (unsigned short)state;
- (unsigned short)type;

@end
