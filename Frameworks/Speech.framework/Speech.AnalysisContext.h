
@interface Speech.AnalysisContext : NSObject {
    void contextDelegatesMutex;
    void contextualStrings;
    void contextualStringsMutex;
    void userData;
    void userDataMutex;
}

@property (nonatomic, copy) NSString *geoLMRegionID;

- (void).cxx_destruct;
- (id)_contextualStringsForKey:(id)arg1;
- (void)_setContextualStrings:(id)arg1 forKey:(id)arg2;
- (void)_setUserData:(id)arg1 forKey:(id)arg2;
- (id)_userDataForKey:(id)arg1;
- (id)geoLMRegionID;
- (id)init;
- (void)setGeoLMRegionID:(id)arg1;

@end
