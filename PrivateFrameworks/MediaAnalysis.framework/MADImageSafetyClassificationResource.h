
@interface MADImageSafetyClassificationResource : VCPMADResource {
    SCMLHandler * _handler;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) SCMLHandler *handler;

+ (id)sharedResource;

- (void).cxx_destruct;
- (long long)activeCost;
- (id)handler;
- (long long)inactiveCost;
- (id)init;
- (void)purge;

@end
