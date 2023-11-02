
@interface AnalyticsProcessor : NSObject {
    NSDateFormatter * _dateFormatterWAMessage;
    unsigned long long  _deploymentMetricDiffDays;
    DeploymentMetricHandler * _deploymentMetricHandler;
    LinkChangePolicyHandler * _linkChangePolicyHandler;
    AnalyticsStoreMOHandler * _managedObjectHandler;
    unsigned long long  _numRoamSamples;
    RoamPolicyStore * _roamPolicyHandler;
    unsigned long long  _testDateDiffDays;
}

@property (nonatomic, retain) NSDateFormatter *dateFormatterWAMessage;
@property (nonatomic) unsigned long long deploymentMetricDiffDays;
@property (nonatomic, retain) DeploymentMetricHandler *deploymentMetricHandler;
@property (nonatomic, retain) LinkChangePolicyHandler *linkChangePolicyHandler;
@property (nonatomic, retain) AnalyticsStoreMOHandler *managedObjectHandler;
@property (nonatomic) unsigned long long numRoamSamples;
@property (nonatomic, retain) RoamPolicyStore *roamPolicyHandler;
@property (nonatomic) unsigned long long testDateDiffDays;

+ (id)formattedMACAddressNotation:(id)arg1 octetCount:(unsigned long long)arg2;

- (void).cxx_destruct;
- (void)ageOutAnalytics:(double)arg1;
- (id)apProfileForBssid:(id)arg1 andSSID:(id)arg2;
- (id)dateFormatterWAMessage;
- (unsigned long long)deploymentMetricDiffDays;
- (id)deploymentMetricHandler;
- (id)formattedNotation:(id)arg1 octetCount:(unsigned long long)arg2;
- (id)getDateFromDateString:(id)arg1;
- (id)initWithOptions:(unsigned long long)arg1;
- (id)linkChangePolicyHandler;
- (id)managedObjectHandler;
- (unsigned long long)numRoamSamples;
- (void)performPruneBasedOnStoreSizeAndSave;
- (void)processDatapathMetricStream:(id)arg1 withDate:(id)arg2;
- (void)processMetricAssociationFailure:(id)arg1;
- (void)processMetricBeaconCache:(id)arg1;
- (void)processMetricClientAssociation:(id)arg1;
- (void)processMetricHistoricalNetworkQuality:(id)arg1;
- (void)processMetricIpV4Latency:(id)arg1;
- (void)processMetricKnownNetworkEvent:(id)arg1;
- (void)processMetricLinkChange:(id)arg1;
- (void)processMetricNetworkGeotag:(id)arg1;
- (void)processMetricParsedBeaconInfo:(id)arg1;
- (void)processMetricRoamStatus:(id)arg1;
- (void)processWAMessageMetric:(id)arg1 data:(id)arg2;
- (id)roamPolicyHandler;
- (void)setDateFormatterWAMessage:(id)arg1;
- (void)setDeploymentMetricDiffDays:(unsigned long long)arg1;
- (void)setDeploymentMetricHandler:(id)arg1;
- (void)setLinkChangePolicyHandler:(id)arg1;
- (void)setManagedObjectHandler:(id)arg1;
- (void)setNumRoamSamples:(unsigned long long)arg1;
- (void)setRoamPolicyHandler:(id)arg1;
- (void)setTestDateDiffDays:(unsigned long long)arg1;
- (void)storeMetricStreamFragment:(id)arg1 withDate:(id)arg2;
- (id)summarizeAnalyticsForNetwork:(id)arg1 maxAgeInDays:(unsigned long long)arg2;
- (unsigned long long)testDateDiffDays;
- (bool)unpackRssiSnrCCAFromRssiMetricField:(id)arg1 unpackedRssi:(id*)arg2 unpackedCca:(id*)arg3 unpackedSnr:(id*)arg4;

@end
