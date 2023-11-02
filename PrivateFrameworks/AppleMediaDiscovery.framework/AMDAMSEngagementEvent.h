
@interface AMDAMSEngagementEvent : NSObject <AMSEngagementEvent> {
    NSDictionary * _data;
    NSDictionary * _engagementData;
}

@property (retain) NSDictionary *data;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSDictionary *engagementData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)data;
- (id)engagementData;
- (void)setData:(id)arg1;
- (void)setEngagementData:(id)arg1;

@end
