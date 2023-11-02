
@interface CKDServerConfiguration : NSObject <CKPropertyCoding> {
    NSMutableDictionary * _allowedAppVersionsCache;
    NSDate * _expiry;
    NSDictionary * _values;
}

@property (nonatomic, retain) NSMutableDictionary *allowedAppVersionsCache;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDate *expiry;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSDictionary *values;

- (void).cxx_destruct;
- (bool)allowCloudMediaProcessingOffloadForGM:(id)arg1;
- (bool)allowCloudMediaProcessingOffloadForSeed:(id)arg1;
- (bool)allowExpiredDNSBehavior:(id)arg1;
- (id)allowedAppVersionsCache;
- (bool)applicationWithBundleID:(id)arg1 canSyncUsingVersion:(id)arg2 forContainerID:(id)arg3;
- (unsigned long long)c2AllOperationGroupMetricsReportFrequency:(id)arg1;
- (unsigned long long)c2AllOperationGroupMetricsReportFrequencyBase:(id)arg1;
- (unsigned long long)c2AllOperationMetricsReportFrequency:(id)arg1;
- (unsigned long long)c2AllOperationMetricsReportFrequencyBase:(id)arg1;
- (unsigned long long)c2ClientApplicationMetricsReportFrequency:(id)arg1;
- (unsigned long long)c2ClientApplicationMetricsReportFrequencyBase:(id)arg1;
- (unsigned long long)c2ClientOperationMetricsReportFrequency:(id)arg1;
- (unsigned long long)c2ClientOperationMetricsReportFrequencyBase:(id)arg1;
- (unsigned long long)c2NetworkMetricsReportFrequency:(id)arg1;
- (unsigned long long)c2NetworkMetricsReportFrequencyBase:(id)arg1;
- (id)chunkProfileConfigurationDefaultProfilePolicy:(id)arg1;
- (id)chunkProfileConfigurationFileExtensionToProfileMap:(id)arg1;
- (id)chunkProfileConfigurationVersion:(id)arg1;
- (id)cloudMediaProcessingPublicKeyURLString:(id)arg1;
- (id)description;
- (id)dictionaryPropertyEncoding;
- (id)expiry;
- (id)iCloudAppSiteAssociationData;
- (id)initWithPropertyDictionary:(id)arg1;
- (id)initWithValues:(id)arg1;
- (bool)isExpired;
- (unsigned long long)maxBatchSize:(id)arg1;
- (unsigned long long)maxInlineMergeableDeltaSize:(id)arg1;
- (double)publicIdentitiesExpirationTimeout:(id)arg1;
- (void)setAllowedAppVersionsCache:(id)arg1;
- (id)suggestedMergeableDeltaSize:(id)arg1;
- (long long)tokenRegisterDays:(id)arg1;
- (id)transcodeServerPublicKeyURLs:(id)arg1;
- (id)valueForKeyPath:(id)arg1 forContainerID:(id)arg2;
- (id)values;
- (id)valuesForContainerID:(id)arg1;

@end
