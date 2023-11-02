
@interface _SFAnalysisContext : NSObject {
    _TtC6Speech15AnalysisContext * _analysisContext;
    NSArray * _contextualNamedEntities;
}

@property (nonatomic, copy) NSArray *contextualNamedEntities;
@property (nonatomic, copy) NSString *geoLMRegionID;

- (void).cxx_destruct;
- (id)contextualNamedEntities;
- (id)contextualStringsForKey:(id)arg1;
- (id)geoLMRegionID;
- (id)init;
- (id)initWithAnalysisContext:(id)arg1;
- (void)setContextualNamedEntities:(id)arg1;
- (void)setContextualStrings:(id)arg1 forKey:(id)arg2;
- (void)setGeoLMRegionID:(id)arg1;
- (void)setUserData:(id)arg1 forKey:(id)arg2;
- (id)userDataForKey:(id)arg1;

@end
