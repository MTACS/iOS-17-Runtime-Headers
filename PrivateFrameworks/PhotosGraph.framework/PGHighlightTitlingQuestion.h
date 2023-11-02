
@interface PGHighlightTitlingQuestion : PGSurveyQuestion {
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
- (id)initWithHighlightTitle:(id)arg1 legacyHighlightTitle:(id)arg2 keyAssetUUID:(id)arg3 localFactoryScore:(double)arg4 duplicatedTitles:(bool)arg5;
- (double)localFactoryScore;
- (unsigned short)state;
- (unsigned short)type;

@end
