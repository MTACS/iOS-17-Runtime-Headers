
@interface PGSyndicatedAssetsQuestion : PGSurveyQuestion {
    NSString * _entityIdentifier;
    unsigned short  _state;
}

- (void).cxx_destruct;
- (unsigned short)displayType;
- (id)entityIdentifier;
- (unsigned short)entityType;
- (id)initWithAssetSyndicationIdentifier:(id)arg1;
- (bool)isEquivalentToPersistedQuestion:(id)arg1;
- (bool)isEquivalentToQuestion:(id)arg1;
- (unsigned short)state;
- (unsigned short)type;

@end
