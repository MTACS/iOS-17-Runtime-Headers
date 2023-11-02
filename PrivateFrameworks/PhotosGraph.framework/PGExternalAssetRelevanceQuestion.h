
@interface PGExternalAssetRelevanceQuestion : PGSurveyQuestion {
    NSDictionary * _additionalInfo;
    NSString * _entityIdentifier;
    unsigned short  _state;
}

- (void).cxx_destruct;
- (id)additionalInfo;
- (unsigned short)displayType;
- (id)entityIdentifier;
- (unsigned short)entityType;
- (id)initWithAssetUUID:(id)arg1 momentLocalIdentifiers:(id)arg2 assetInferredAsRelevant:(bool)arg3;
- (unsigned short)state;
- (unsigned short)type;

@end
