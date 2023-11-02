
@interface ADSearchObject : NSObject {
    double  _SLA;
    NSArray * _advertisements;
    ADDESRecordsManager * _desRecordManager;
    NSString * _deviceRequestID;
    NSError * _error;
    unsigned long long  _ident;
    NSArray * _organics;
    APOdmlReranker * _reranker;
    NSString * _routingInfoData;
    NSString * _sponsoredSearchRequestData;
    NSString * _userTargetingID;
}

@property (nonatomic) double SLA;
@property (nonatomic, retain) NSArray *advertisements;
@property (nonatomic, retain) ADDESRecordsManager *desRecordManager;
@property (nonatomic, retain) NSString *deviceRequestID;
@property (nonatomic, retain) NSError *error;
@property (nonatomic, readonly) unsigned long long ident;
@property (nonatomic, retain) NSArray *organics;
@property (nonatomic, retain) APOdmlReranker *reranker;
@property (nonatomic, retain) NSString *routingInfoData;
@property (nonatomic, retain) NSString *sponsoredSearchRequestData;
@property (nonatomic, retain) NSString *userTargetingID;

- (void).cxx_destruct;
- (double)SLA;
- (void)addFeaturesToAdvertisements;
- (id)advertisements;
- (id)desRecordManager;
- (id)deviceRequestID;
- (id)error;
- (unsigned long long)ident;
- (id)init;
- (id)initWithSponsoredSearchRequestData:(id)arg1 routingInfoData:(id)arg2 deviceRequestID:(id)arg3 userTargetingID:(id)arg4 error:(id)arg5;
- (bool)isAppInstalled:(unsigned long long)arg1;
- (void)orderedAds:(id /* block */)arg1;
- (void)orderedAdsWithODMLSuccess:(id /* block */)arg1;
- (id)organics;
- (id)reranker;
- (id)routingInfoData;
- (void)setAdvertisements:(id)arg1;
- (void)setDesRecordManager:(id)arg1;
- (void)setDeviceRequestID:(id)arg1;
- (void)setError:(id)arg1;
- (void)setOrganics:(id)arg1;
- (void)setReranker:(id)arg1;
- (void)setRoutingInfoData:(id)arg1;
- (void)setSLA:(double)arg1;
- (void)setSponsoredSearchRequestData:(id)arg1;
- (void)setUserTargetingID:(id)arg1;
- (id)sponsoredSearchRequestData;
- (id)updatedWithTransparencyRenderingData:(id)arg1;
- (id)userTargetingID;

@end
