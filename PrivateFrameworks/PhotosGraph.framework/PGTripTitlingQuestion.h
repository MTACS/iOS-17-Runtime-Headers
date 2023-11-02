
@interface PGTripTitlingQuestion : PGSurveyQuestion {
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
- (id)initWithTripTitle:(id)arg1 legacyTripTitle:(id)arg2 keyAssetUUID:(id)arg3 localFactoryScore:(double)arg4 duplicatedTitles:(bool)arg5;
- (double)localFactoryScore;
- (unsigned short)state;
- (unsigned short)type;

@end
