
@interface PPMetricsUtils : NSObject

+ (id)filterBundleId:(id)arg1;
+ (id)filterGroupIdAllowance:(id)arg1;
+ (id)loggingQueue;
+ (int)mapDomainForPET2:(unsigned char)arg1;
+ (int)mapLocationAlgorithmForPET2:(unsigned short)arg1;
+ (int)mapNamedEntityAlgorithmForPET2:(unsigned long long)arg1;
+ (int)mapNamedEntityCategory:(unsigned long long)arg1;
+ (int)mapTopicAlgorithmForPET2:(unsigned long long)arg1;
+ (int)mapTopicDonationErrorForPET2:(long long)arg1;
+ (int)sourceForBundleId:(id)arg1;
+ (id)stringifyDomain:(unsigned char)arg1;
+ (id)stringifyFeedbackDomainStatus:(unsigned char)arg1;
+ (id)stringifyFeedbackType:(unsigned int)arg1;
+ (id)truncatedClientBundleId:(id)arg1;
+ (id)truncatedClientBundleIdOrCurrentBundleId:(id)arg1;

@end
