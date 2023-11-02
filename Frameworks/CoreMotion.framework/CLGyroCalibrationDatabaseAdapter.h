
@interface CLGyroCalibrationDatabaseAdapter : CLNotifierServiceAdapter <CLGyroCalibrationDatabaseProtocol>

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
- (void)getBiasFitWithReply:(id /* block */)arg1;
- (id)init;
- (void)startFactoryGYTT;
- (bool)syncgetBiasFit:(struct { int x1; double x2; double x3; float x4; float x5; union { struct { struct { float x_1_3_1; float x_1_3_2; float x_1_3_3; } x_1_2_1; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; } x_1_2_2; } x_6_1_1; struct { bool x_2_2_1; BOOL x_2_2_2[282]; } x_6_1_2; } x6; }*)arg1;
- (bool)syncgetDoSync:(id /* block */)arg1;
- (bool)syncgetGyroStatsWithBias:(struct { float x1; float x2; float x3; }*)arg1 slope:(struct { float x1; float x2; float x3; }*)arg2 l2Error:(struct { float x1; float x2; float x3; }*)arg3 isDynamic:(bool)arg4 deltaBias:(struct { float x1; float x2; float x3; }*)arg5 deltaSlope:(struct { float x1; float x2; float x3; }*)arg6 deltaError:(struct { float x1; float x2; float x3; }*)arg7 isDeltaDynamic:(bool)arg8;
- (bool)syncgetInsertWithBias:(const struct { float x1; float x2; float x3; }*)arg1 variance:(const struct { float x1; float x2; float x3; }*)arg2 temperature:(float)arg3 timestamp:(double)arg4;
- (double)syncgetLastMiniCalibration;
- (int)syncgetMaxDynamicTemperature;
- (int)syncgetNonFactoryRoundCount;
- (int)syncgetNumTemperatures;
- (bool)syncgetSupportsMiniCalibration;
- (bool)syncgetWipeDatabase;

@end
