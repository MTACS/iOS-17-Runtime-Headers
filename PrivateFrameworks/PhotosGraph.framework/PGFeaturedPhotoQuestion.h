
@interface PGFeaturedPhotoQuestion : PGSurveyQuestion {
    NSDictionary * _additionalInfo;
    NSString * _entityIdentifier;
    unsigned short  _state;
}

- (void).cxx_destruct;
- (id)additionalInfo;
- (unsigned short)displayType;
- (id)entityIdentifier;
- (unsigned short)entityType;
- (id)initWithAssetUUID:(id)arg1 suggestionType:(unsigned short)arg2 suggestionSubtype:(unsigned short)arg3;
- (bool)isEquivalentToQuestion:(id)arg1;
- (unsigned short)state;
- (unsigned short)type;

@end
