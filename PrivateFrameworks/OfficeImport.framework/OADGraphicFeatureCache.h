
@interface OADGraphicFeatureCache : NSObject {
    OITSUNoCopyDictionary * mFeatureMap;
    NSMutableArray * mFeatureUsageArray;
}

- (void).cxx_destruct;
- (unsigned long long)cacheFeature:(id)arg1;
- (id)countedFeatureAtIndex:(unsigned long long)arg1;
- (void)dealloc;
- (id)featuresSortedByUsageCount;
- (id)init;

@end
