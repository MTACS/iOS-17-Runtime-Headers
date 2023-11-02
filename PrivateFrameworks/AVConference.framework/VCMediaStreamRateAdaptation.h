
@interface VCMediaStreamRateAdaptation : NSObject <AVCRateControllerDelegate> {
    <VCMediaStreamRateAdaptationDelegate> * _delegate;
    struct OpaqueFigCFWeakReference { } * _delegateWeak;
    int  _mode;
    AVCRateController * _vcrcRateController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) AVCRateController *vcrcRateController;

+ (unsigned int)resolvePolicyForCurrentConnection:(id)arg1;

- (void)configureRateControllerWithConfig:(const struct tagVCMediaStreamRateAdaptationConfig { long long x1; union tagVCMediaStreamRateAdaptationAlgorithmConfig { struct tagVCMediaStreamRateAdaptationConfigTelephonyUplink { unsigned int x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; unsigned int x_1_2_4; } x_2_1_1; struct tagVCMediaStreamRateAdaptationConfigScreenShare { unsigned int x_2_2_1; unsigned int x_2_2_2; unsigned int x_2_2_3; int x_2_2_4; } x_2_1_2; } x2; }*)arg1;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 params:(const struct tagVCMediaStreamRateAdaptationParams { id x1; unsigned int x2; struct opaqueRTCReporting {} *x3; int x4; struct tagVCMediaStreamRateAdaptationConfig { long long x_5_1_1; union tagVCMediaStreamRateAdaptationAlgorithmConfig { struct tagVCMediaStreamRateAdaptationConfigTelephonyUplink { unsigned int x_1_3_1; unsigned int x_1_3_2; unsigned int x_1_3_3; unsigned int x_1_3_4; } x_2_2_1; struct tagVCMediaStreamRateAdaptationConfigScreenShare { unsigned int x_2_3_1; unsigned int x_2_3_2; unsigned int x_2_3_3; int x_2_3_4; } x_2_2_2; } x_5_1_2; } x5; struct tagHANDLE {} *x6; int x7; bool x8; id x9; id x10; }*)arg2;
- (void)rateController:(id)arg1 targetBitrateDidChange:(unsigned int)arg2 rateChangeCounter:(unsigned int)arg3;
- (bool)start;
- (bool)stop;
- (bool)updateRateControlWithNetworkNotification:(struct ifnet_interface_advisory { union { struct { unsigned char x_1_2_1; unsigned char x_1_2_2; unsigned short x_1_2_3; int x_1_2_4; unsigned long long x_1_2_5; unsigned long long x_1_2_6; unsigned long long x_1_2_7; unsigned long long x_1_2_8; unsigned int x_1_2_9; unsigned int x_1_2_10; unsigned int x_1_2_11; unsigned char x_1_2_12; unsigned char x_1_2_13; unsigned short x_1_2_14; unsigned short x_1_2_15; unsigned char x_1_2_16; unsigned char x_1_2_17; unsigned char x_1_2_18; unsigned char x_1_2_19; } x_1_1_1; struct { struct ifnet_interface_advisory_header { unsigned char x_1_3_1; unsigned char x_1_3_2; unsigned char x_1_3_3; unsigned char x_1_3_4; } x_2_2_1; struct ifnet_interface_advisory_capacity { int x_2_3_1; unsigned long long x_2_3_2; unsigned long long x_2_3_3; unsigned long long x_2_3_4; unsigned long long x_2_3_5; unsigned int x_2_3_6; unsigned int x_2_3_7; unsigned int x_2_3_8; } x_2_2_2; union { struct ifnet_interface_advisory_wifi_context { unsigned char x_1_4_1; unsigned char x_1_4_2; unsigned short x_1_4_3; unsigned short x_1_4_4; unsigned char x_1_4_5; unsigned char x_1_4_6; unsigned char x_1_4_7; unsigned char x_1_4_8; unsigned char x_1_4_9; unsigned short x_1_4_10; unsigned int x_1_4_11[6]; } x_3_3_1; struct ifnet_interface_advisory_cell_context { unsigned char x_2_4_1; short x_2_4_2; short x_2_4_3; BOOL x_2_4_4; unsigned char x_2_4_5; unsigned char x_2_4_6; unsigned char x_2_4_7; unsigned char x_2_4_8; unsigned short x_2_4_9; unsigned short x_2_4_10; unsigned char x_2_4_11; unsigned char x_2_4_12; } x_3_3_2; } x_2_2_3; } x_1_1_2; } x1; }*)arg1;
- (id)vcrcRateController;

@end
