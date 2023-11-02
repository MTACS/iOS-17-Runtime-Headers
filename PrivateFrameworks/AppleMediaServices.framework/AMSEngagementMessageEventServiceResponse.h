
@interface AMSEngagementMessageEventServiceResponse : NSObject {
    NSDictionary * _dictionaryRepresentation;
    AMSEngagementRequest * _engagementRequest;
    AMSEngagementMessageRequest * _fullScreenMessageRequest;
    NSDictionary * _placementsMap;
    NSString * _serviceType;
}

@property (nonatomic, retain) NSDictionary *dictionaryRepresentation;
@property (nonatomic, retain) AMSEngagementRequest *engagementRequest;
@property (nonatomic, retain) AMSEngagementMessageRequest *fullScreenMessageRequest;
@property (nonatomic, retain) NSDictionary *placements;
@property (nonatomic, retain) NSDictionary *placementsMap;
@property (nonatomic, retain) NSString *serviceType;

- (void).cxx_destruct;
- (id)_placementRequestsWithDictionary:(id)arg1;
- (id)_placementsMapWithPayload:(id)arg1;
- (id)dictionaryRepresentation;
- (id)engagementRequest;
- (id)fullScreenMessageRequest;
- (id)initWithJSObject:(id)arg1;
- (id)placements;
- (id)placementsMap;
- (id)serviceType;
- (void)setDictionaryRepresentation:(id)arg1;
- (void)setEngagementRequest:(id)arg1;
- (void)setFullScreenMessageRequest:(id)arg1;
- (void)setPlacements:(id)arg1;
- (void)setPlacementsMap:(id)arg1;
- (void)setServiceType:(id)arg1;

@end
