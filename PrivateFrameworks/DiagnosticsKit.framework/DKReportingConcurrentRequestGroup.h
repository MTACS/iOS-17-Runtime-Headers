
@interface DKReportingConcurrentRequestGroup : NSObject {
    NSMutableDictionary * _requestLookupByGenerator;
    NSMutableSet * _requests;
    NSMutableSet * _resources;
}

@property (nonatomic, retain) NSMutableDictionary *requestLookupByGenerator;
@property (nonatomic, retain) NSMutableSet *requests;
@property (nonatomic, retain) NSMutableSet *resources;

- (void).cxx_destruct;
- (bool)addComponentIdentity:(id)arg1 usingGenerator:(id)arg2;
- (id)init;
- (id)requestLookupByGenerator;
- (id)requests;
- (id)resources;
- (void)setRequestLookupByGenerator:(id)arg1;
- (void)setRequests:(id)arg1;
- (void)setResources:(id)arg1;

@end
