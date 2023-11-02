
@interface CLGeomagneticModelProviderAdapter : CLNotifierServiceAdapter <CLGeomagneticModelProviderProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) bool valid;

+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;
+ (id)getSilo;
+ (bool)isSupported;
+ (void)performSyncOnSilo:(id)arg1 invoker:(id /* block */)arg2;

- (void*)adaptee;
- (void)beginService;
- (void)doAsync:(id /* block */)arg1;
- (void)doAsync:(id /* block */)arg1 withReply:(id /* block */)arg2;
- (void)endService;
- (void)fetchGeomagneticModelData:(id /* block */)arg1;
- (id)init;
- (bool)syncgetDoSync:(id /* block */)arg1;

@end
