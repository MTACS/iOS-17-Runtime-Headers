
@interface VCPMADVIResource : VCPMADResource {
    NSObject<OS_dispatch_queue> * _queue;
    VIService * _service;
}

@property (nonatomic, readonly) VIService *service;

- (void).cxx_destruct;
- (long long)activeCost;
- (long long)inactiveCost;
- (id)init;
- (void)purge;
- (id)service;

@end
