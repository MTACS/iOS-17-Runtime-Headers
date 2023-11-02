
@interface AVCRateControlFeedbackController : NSObject {
    VCConnectionHealthMonitor * _connectionHealthMonitor;
    unsigned int  _currentMediaTimestamp;
    bool  _didRegisterPacketReceivedHandler;
    unsigned int  _feedbackMessageCount;
    double  _feedbackMessageReceivedTime;
    bool  _isECNEnabled;
    bool  _isFeedbackReceived;
    double  _lastBadECNEventTime;
    unsigned int  _mode;
    unsigned char  _numBadECNEvents;
    unsigned int  _outOfOrderCount;
    unsigned int  _previousTotalECT1Count;
    unsigned int  _previousTotalReceivedAudioPackets;
    AVCStatisticsCollector * _statisticsCollector;
    unsigned int  _totalCECount;
    unsigned int  _totalECT1Count;
    unsigned int  _totalReceivedAudioPackets;
    unsigned int  _totalReceivedVideoPackets;
}

@property (nonatomic, retain) VCConnectionHealthMonitor *connectionHealthMonitor;
@property (nonatomic) bool isFeedbackReceived;
@property (nonatomic) unsigned int mode;

- (id)connectionHealthMonitor;
- (void)dealloc;
- (unsigned int)getConnectionStatsBlob;
- (bool)getFeedbackMessage:(id*)arg1 type:(unsigned int)arg2 metaData:(id*)arg3 error:(id*)arg4;
- (bool)getRateControlFeedbackMessage:(id*)arg1 type:(unsigned int)arg2 metaData:(id*)arg3 error:(id*)arg4;
- (bool)getVCStatisticsFeedbackMessage:(struct tagVCStatisticsMessage { int x1; int x2; double x3; bool x4; bool x5; bool x6; bool x7; union { struct { unsigned int x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; unsigned int x_1_2_4; unsigned int x_1_2_5; unsigned int x_1_2_6; double x_1_2_7; double x_1_2_8; double x_1_2_9; double x_1_2_10; double x_1_2_11; BOOL x_1_2_12[64]; int x_1_2_13; } x_8_1_1; struct { unsigned int x_2_2_1; unsigned int x_2_2_2; unsigned int x_2_2_3; unsigned int x_2_2_4; unsigned int x_2_2_5; unsigned int x_2_2_6; unsigned int x_2_2_7; unsigned int x_2_2_8; unsigned int x_2_2_9; unsigned int x_2_2_10; unsigned int x_2_2_11; unsigned int x_2_2_12; double x_2_2_13; double x_2_2_14; unsigned int x_2_2_15; unsigned int x_2_2_16; double x_2_2_17; unsigned int x_2_2_18; bool x_2_2_19; struct { int x_20_3_1; unsigned int x_20_3_2; unsigned int x_20_3_3; unsigned int x_20_3_4; double x_20_3_5; double x_20_3_6; double x_20_3_7; unsigned int x_20_3_8; unsigned int x_20_3_9; } x_2_2_20; struct { unsigned short x_21_3_1; bool x_21_3_2; bool x_21_3_3; unsigned int x_21_3_4; } x_2_2_21; struct tagVCStatisticsECNStats { unsigned short x_22_3_1; unsigned short x_22_3_2; } x_2_2_22; struct tagVCStatisticsECNStats { unsigned short x_23_3_1; unsigned short x_23_3_2; } x_2_2_23; bool x_2_2_24; } x_8_1_2; } x8; }*)arg1 time:(double)arg2;
- (id)initWithStatisticsCollector:(id)arg1;
- (bool)isFeedbackReceived;
- (unsigned int)mode;
- (bool)processFeedbackMessage:(id)arg1 type:(unsigned int)arg2 metaData:(id)arg3 error:(id*)arg4;
- (bool)processRateControlProbingMessage:(struct { unsigned int x1; bool x2; bool x3; bool x4; unsigned int x5; unsigned int x6; double x7; unsigned int x8; bool x9; struct { int x_10_1_1; unsigned int x_10_1_2; unsigned int x_10_1_3; unsigned int x_10_1_4; double x_10_1_5; double x_10_1_6; double x_10_1_7; unsigned int x_10_1_8; unsigned int x_10_1_9; } x10; })arg1 type:(unsigned int)arg2 error:(id*)arg3;
- (void)resetBurstyLossStatistics;
- (void)setConnectionHealthMonitor:(id)arg1;
- (void)setIsFeedbackReceived:(bool)arg1;
- (void)setMode:(unsigned int)arg1;
- (id)translateRateControlDataWithFeedbackMessage:(struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; double x13; double x14; unsigned int x15; unsigned int x16; double x17; unsigned int x18; bool x19; struct { int x_20_1_1; unsigned int x_20_1_2; unsigned int x_20_1_3; unsigned int x_20_1_4; double x_20_1_5; double x_20_1_6; double x_20_1_7; unsigned int x_20_1_8; unsigned int x_20_1_9; } x20; struct { unsigned short x_21_1_1; bool x_21_1_2; bool x_21_1_3; unsigned int x_21_1_4; } x21; struct tagVCStatisticsECNStats { unsigned short x_22_1_1; unsigned short x_22_1_2; } x22; struct tagVCStatisticsECNStats { unsigned short x_23_1_1; unsigned short x_23_1_2; } x23; bool x24; })arg1;

@end
