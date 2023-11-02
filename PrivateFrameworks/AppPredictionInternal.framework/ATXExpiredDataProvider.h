
@interface ATXExpiredDataProvider : NSObject <ATXExpiredDataProviderProtocol> {
    _ATXAppInfoManager * _appInfoManager;
    ATXHistogramBundleIdTable * _histogramBundleIdTable;
}

- (void).cxx_destruct;
- (id)expiredActionKeysFromExpiredBundleIds:(id)arg1;
- (id)expiredBundleIds;
- (id)expiredBundleIdsAndActionKeys;
- (id)init;
- (id)initWithAppInfoManager:(id)arg1 histogramBundleIdTable:(id)arg2;

@end
