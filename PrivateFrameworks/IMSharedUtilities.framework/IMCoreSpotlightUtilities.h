
@interface IMCoreSpotlightUtilities : NSObject

+ (bool)bypassIndexVersionCheck;
+ (id)currentIndexProductVersion;
+ (unsigned long long)currentIndexVersion;
+ (id)descriptionForReindexReason:(unsigned long long)arg1;
+ (id)expectedIndexProductVersion;
+ (unsigned long long)expectedIndexVersion;
+ (unsigned long long)lastDonatedRowID;
+ (unsigned long long)lastIndexedRowID;
+ (unsigned long long)messageIndexBatchSize:(bool)arg1;
+ (bool)needsDeferredIndexing;
+ (bool)needsDonation;
+ (bool)needsIndexing;
+ (bool)needsInitialDonation;
+ (void)setNeedsDeferredIndexing;
+ (void)setNeedsInitialDonation:(bool)arg1;
+ (bool)skipIndexing;
+ (bool)verboseLoggingEnabled;

@end
