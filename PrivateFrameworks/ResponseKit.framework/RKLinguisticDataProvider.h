
@interface RKLinguisticDataProvider : NSObject <RKPolarityDataProvider> {
    NSMutableDictionary * _polarityMapsByLanguageID;
}

@property (retain) NSMutableDictionary *polarityMapsByLanguageID;

- (void).cxx_destruct;
- (id)init;
- (id)polarityMapsByLanguageID;
- (void)setPolarityMapsByLanguageID:(id)arg1;

@end
