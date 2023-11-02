
@interface PGTripKeyAssetQuestion : PGSurveyQuestion {
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
- (id)initWithKeyAssetUUID:(id)arg1 tripName:(id)arg2 isLongTrip:(bool)arg3 localFactoryScore:(double)arg4;
- (double)localFactoryScore;
- (unsigned short)state;
- (unsigned short)type;

@end
