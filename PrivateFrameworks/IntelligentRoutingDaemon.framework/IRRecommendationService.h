
@interface IRRecommendationService : NSObject <IRXPCService> {
    NSObject<OS_dispatch_queue> * _queue;
    IRSessionServer * _xpcServer;
    NSArray * machServicesNames;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSArray *machServicesNames;
@property (readonly) Class superclass;
@property (nonatomic, retain) IRSessionServer *xpcServer;

+ (id)serviceWithQueue:(id)arg1;

- (void).cxx_destruct;
- (id)initWithQueue:(id)arg1;
- (id)machServicesNames;
- (void)setXpcServer:(id)arg1;
- (bool)shouldAcceptNewConnection:(id)arg1;
- (id)xpcServer;

@end
