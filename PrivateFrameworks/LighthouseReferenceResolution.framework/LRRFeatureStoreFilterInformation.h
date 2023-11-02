
@interface LRRFeatureStoreFilterInformation : NSObject {
    NSDictionary * _assetInfo;
    NSString * _currentTimeStampStr;
    bool  _filterSamples;
    NSDate * _lastReplayDate;
}

@property NSDictionary *assetInfo;
@property NSString *currentTimeStampStr;
@property bool filterSamples;
@property NSDate *lastReplayDate;

- (id)assetInfo;
- (id)currentTimeStampStr;
- (bool)filterSamples;
- (id)init;
- (id)lastReplayDate;
- (void)setAssetInfo:(id)arg1;
- (void)setCurrentTimeStampStr:(id)arg1;
- (void)setFilterSamples:(bool)arg1;
- (void)setLastReplayDate:(id)arg1;

@end
