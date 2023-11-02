
@interface PGWallpaperQuestion : PGSurveyQuestion {
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
- (id)initWithAssetUUID:(id)arg1 suggestionSubtype:(unsigned short)arg2;
- (double)localFactoryScore;
- (unsigned short)state;
- (unsigned short)type;

@end
