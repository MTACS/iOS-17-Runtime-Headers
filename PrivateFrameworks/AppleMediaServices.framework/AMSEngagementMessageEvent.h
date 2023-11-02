
@interface AMSEngagementMessageEvent : NSObject <AMSEngagementEvent> {
    NSArray * _placementInfo;
    NSString * _serviceType;
    NSDictionary * data;
}

@property (retain) NSDictionary *data;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSDictionary *engagementData;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *placementInfo;
@property (nonatomic, copy) NSString *serviceType;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)data;
- (id)engagementData;
- (id)initWithServiceType:(id)arg1 placementInfo:(id)arg2;
- (id)initWithServiceType:(id)arg1 placements:(id)arg2;
- (id)placementInfo;
- (id)serviceType;
- (void)setData:(id)arg1;
- (void)setPlacementInfo:(id)arg1;
- (void)setServiceType:(id)arg1;

@end
