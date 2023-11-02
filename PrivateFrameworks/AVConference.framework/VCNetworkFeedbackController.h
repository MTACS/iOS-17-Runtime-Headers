
@interface VCNetworkFeedbackController : NSObject <WCMClientDelegate, WRMClientDelegate> {
    VCWCMClient * _WCMClient;
    WRMClient * _WRMClient;
    unsigned int  _callID;
    unsigned int  _clientTargetBitrate;
    unsigned int  _clientTargetBitrateCap;
    VCConnectionManager * _connectionManager;
    unsigned int  _downlinkTargetBitrate;
    unsigned int  _downlinkTargetCellBitrateCap;
    bool  _isLocalCellular;
    bool  _isStarted;
    bool  _isVideoPaused;
    bool  _isWRMNotificationPending;
    VCRecommendedNetworkSettings * _recommendedSettings;
    struct { 
        int applicationType; 
        int linkTypeSuggestion; 
        unsigned long long linkTypeChangeReasonCode; 
        BOOL linkTypeChangeReasonString[128]; 
        unsigned long long linkBandwidthMin; 
        unsigned long long linkBandwidthMax; 
    }  _savedWRMNotification;
    bool  _shouldSendFeedbackControllerReport;
    <VCNetworkFeedbackControllerDelegate> * _weakDelegate;
    struct { void *x1; int (*x2)(); int (*x3)(); } * _wrmContext;
    struct tagWRMMetricsInfo { bool x1; struct tagHANDLE {} *x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned long long x15; unsigned long long x16; unsigned long long x17; int x18; int (*x19)(); struct { void *x_20_1_1; int (*x_20_1_2)(); int (*x_20_1_3)(); } x20; struct _opaque_pthread_mutex_t { long long x_21_1_1; BOOL x_21_1_2[56]; } x21; unsigned int x22; unsigned int x23; unsigned int x24; unsigned int x25; unsigned int x26; unsigned int x27; unsigned int x28; unsigned int x29; unsigned int x30; unsigned long long x31; unsigned int x32; unsigned int x33; unsigned int x34; unsigned int x35; unsigned int x36; unsigned int x37; } * _wrmInfo;
    int  _wrmPendingBitrateCapDelta;
    double  _wrmReportingInterval;
}

@property unsigned int callID;
@property unsigned int clientTargetBitrate;
@property unsigned int clientTargetBitrateCap;
@property (nonatomic) unsigned int downlinkTargetBitrate;
@property (nonatomic) unsigned int downlinkTargetCellBitrateCap;
@property (nonatomic) bool isLocalCellular;
@property (nonatomic) bool isVideoPaused;
@property (readonly) unsigned int recommendedTargetBitrateCap;
@property bool shouldSendFeedbackControllerReport;
@property (readonly) struct { void *x1; int (*x2)(); int (*x3)(); }*wrmContext;
@property (readonly) struct tagWRMMetricsInfo { bool x1; struct tagHANDLE {} *x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned long long x15; unsigned long long x16; unsigned long long x17; int x18; int (*x19)(); struct { void *x_20_1_1; int (*x_20_1_2)(); int (*x_20_1_3)(); } x20; struct _opaque_pthread_mutex_t { long long x_21_1_1; BOOL x_21_1_2[56]; } x21; unsigned int x22; unsigned int x23; unsigned int x24; unsigned int x25; unsigned int x26; unsigned int x27; unsigned int x28; unsigned int x29; unsigned int x30; unsigned long long x31; unsigned int x32; unsigned int x33; unsigned int x34; unsigned int x35; unsigned int x36; unsigned int x37; }*wrmInfo;

- (unsigned int)callID;
- (void)cleanupWCMClient;
- (void)cleanupWRMClient;
- (void)cleanupWRMData;
- (unsigned int)clientTargetBitrate;
- (unsigned int)clientTargetBitrateCap;
- (void)dealloc;
- (unsigned int)downlinkTargetBitrate;
- (unsigned int)downlinkTargetCellBitrateCap;
- (id)initWithDelegate:(id)arg1 connectionManager:(id)arg2;
- (void)initializeWRMInfo;
- (bool)isLocalCellular;
- (bool)isVideoPaused;
- (unsigned int)recommendedTargetBitrateCap;
- (void)reportImmediateWRMMetric:(int)arg1 value:(unsigned long long)arg2;
- (void)reportWRMMetrics:(const struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; unsigned long long x15; unsigned long long x16; unsigned long long x17; unsigned long long x18; unsigned long long x19; unsigned long long x20; unsigned long long x21; unsigned long long x22; unsigned long long x23; unsigned long long x24; unsigned long long x25; unsigned long long x26; unsigned long long x27; unsigned long long x28; unsigned long long x29; unsigned long long x30; unsigned long long x31; unsigned long long x32; unsigned long long x33; unsigned long long x34; unsigned long long x35; unsigned long long x36; unsigned long long x37; unsigned long long x38; }*)arg1;
- (void)requestWRMNotification;
- (void)sendFeedbackControllerReport:(struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; })arg1;
- (void)sendStatusUpdate:(const struct { int x1; int x2; int x3; unsigned int x4; }*)arg1;
- (void)setCallID:(unsigned int)arg1;
- (void)setClientTargetBitrate:(unsigned int)arg1;
- (void)setClientTargetBitrateCap:(unsigned int)arg1;
- (void)setDownlinkTargetBitrate:(unsigned int)arg1;
- (void)setDownlinkTargetCellBitrateCap:(unsigned int)arg1;
- (void)setIsLocalCellular:(bool)arg1;
- (void)setIsVideoPaused:(bool)arg1;
- (void)setPreWarmState:(bool)arg1;
- (void)setRSSIThresholdEnabled:(bool)arg1;
- (void)setShouldSendFeedbackControllerReport:(bool)arg1;
- (void)setWRMCoexMetrics:(id)arg1;
- (void)setWRMMetricConfig:(struct { unsigned long long x1; }*)arg1;
- (void)setWRMNotification:(struct { int x1; int x2; unsigned long long x3; BOOL x4[128]; unsigned long long x5; unsigned long long x6; }*)arg1;
- (void)setupWCMClient;
- (void)setupWRMClientWithMetricsConfig:(struct { bool x1; bool x2; bool x3; })arg1;
- (bool)shouldSendFeedbackControllerReport;
- (void)startWithMetricsConfig:(struct { bool x1; bool x2; bool x3; })arg1;
- (void)stop;
- (id)strongDelegate;
- (void)updateMetricsConfig:(struct { bool x1; bool x2; bool x3; })arg1;
- (void)wcmGetCallConfig:(unsigned int*)arg1 targetBitrate:(unsigned int*)arg2;
- (void)wcmSetCallConfig:(unsigned int)arg1 interferenceLevel:(unsigned int)arg2;
- (struct { void *x1; int (*x2)(); int (*x3)(); }*)wrmContext;
- (struct tagWRMMetricsInfo { bool x1; struct tagHANDLE {} *x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned long long x15; unsigned long long x16; unsigned long long x17; int x18; int (*x19)(); struct { void *x_20_1_1; int (*x_20_1_2)(); int (*x_20_1_3)(); } x20; struct _opaque_pthread_mutex_t { long long x_21_1_1; BOOL x_21_1_2[56]; } x21; unsigned int x22; unsigned int x23; unsigned int x24; unsigned int x25; unsigned int x26; unsigned int x27; unsigned int x28; unsigned int x29; unsigned int x30; unsigned long long x31; unsigned int x32; unsigned int x33; unsigned int x34; unsigned int x35; unsigned int x36; unsigned int x37; }*)wrmInfo;

@end
