
@interface CLCompassDatabaseAdapter : CLNotifierServiceAdapter <CLCompassDatabaseProtocol>

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
- (void)dumpDatabase:(id)arg1 onCompletion:(id /* block */)arg2;
- (void)endService;
- (void)getBiasWithMagneticField:(struct { float x1; float x2; float x3; })arg1 acceleration:(struct { float x1; float x2; float x3; })arg2;
- (id)init;
- (void)setBias:(struct { float x1; float x2; float x3; })arg1 withMagneticField:(struct { float x1; float x2; float x3; })arg2 level:(int)arg3 magnitude:(float)arg4 inclination:(float)arg5;
- (bool)syncgetDoSync:(id /* block */)arg1;
- (bool)syncgetLookupBiasWithMagneticField:(struct { float x1; float x2; float x3; })arg1 acceleration:(struct { float x1; float x2; float x3; })arg2 bias:(struct { float x1; float x2; float x3; }*)arg3 level:(int*)arg4 noResults:(bool*)arg5;
- (int)syncgetPendingSetBiasCount;

@end
