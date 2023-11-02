
@interface AVCBasebandCongestionDetector : NSObject {
    unsigned int  _basebandAverageBitrate;
    double  _basebandExpectedQueuingDelay;
    VCBasebandMetrics * _basebandMetrics;
    unsigned int  _basebandQueueDepth;
    unsigned int  _basebandTxBitrate;
    bool  _isTargetBitrateStabilized;
    void * _logBasebandDump;
    VCRateControlMediaController * _mediaController;
    unsigned int  _mode;
    double  _notificationArrivalTime;
    unsigned int  _radioAccessTechnology;
    AVCStatisticsCollector * _statisticsCollector;
    unsigned int  _targetBitrate;
}

@property (nonatomic, readonly) unsigned int basebandAverageBitrate;
@property (nonatomic, readonly) double basebandExpectedQueuingDelay;
@property (nonatomic, readonly) unsigned int basebandQueueDepth;
@property (nonatomic, readonly) unsigned int basebandTxBitrate;
@property (nonatomic) bool isTargetBitrateStabilized;
@property (nonatomic, retain) VCRateControlMediaController *mediaController;
@property (nonatomic) unsigned int mode;
@property (nonatomic) unsigned int radioAccessTechnology;
@property (nonatomic, retain) AVCStatisticsCollector *statisticsCollector;
@property (nonatomic) unsigned int targetBitrate;

- (unsigned int)basebandAverageBitrate;
- (double)basebandExpectedQueuingDelay;
- (unsigned int)basebandQueueDepth;
- (unsigned int)basebandTxBitrate;
- (void)dealloc;
- (void)enableBasebandLogDump:(void*)arg1;
- (id)init;
- (bool)isRadioAccessTechnologyOnCellular:(unsigned int)arg1;
- (bool)isTargetBitrateStabilized;
- (id)mediaController;
- (unsigned int)mode;
- (void)printFlushAckToBasebandDump:(unsigned char)arg1 transactionID:(unsigned short)arg2 packetDropped:(unsigned short)arg3 sequenceNumberArray:(unsigned short*)arg4;
- (void)processBasebandAck:(struct { int x1; unsigned short x2; double x3; union { struct { unsigned short x_1_2_1; unsigned char x_1_2_2; unsigned short x_1_2_3; unsigned char x_1_2_4; BOOL x_1_2_5; unsigned int x_1_2_6; unsigned int x_1_2_7; unsigned int x_1_2_8; unsigned int x_1_2_9; } x_4_1_1; struct { unsigned short x_2_2_1; unsigned short x_2_2_2; unsigned short x_2_2_3; struct { unsigned char x_4_3_1; unsigned short x_4_3_2; unsigned short x_4_3_3[500]; } x_2_2_4[6]; } x_4_1_2; struct { unsigned short x_3_2_1; unsigned short x_3_2_2; } x_4_1_3; } x4; }*)arg1;
- (bool)processBasebandNotification:(struct { int x1; unsigned short x2; double x3; union { struct { unsigned short x_1_2_1; unsigned char x_1_2_2; unsigned short x_1_2_3; unsigned char x_1_2_4; BOOL x_1_2_5; unsigned int x_1_2_6; unsigned int x_1_2_7; unsigned int x_1_2_8; unsigned int x_1_2_9; } x_4_1_1; struct { unsigned short x_2_2_1; unsigned short x_2_2_2; unsigned short x_2_2_3; struct { unsigned char x_4_3_1; unsigned short x_4_3_2; unsigned short x_4_3_3[500]; } x_2_2_4[6]; } x_4_1_2; struct { unsigned short x_3_2_1; unsigned short x_3_2_2; } x_4_1_3; } x4; }*)arg1 arrivalTime:(double)arg2 error:(id*)arg3;
- (bool)processBasebandNotification:(id)arg1 metaData:(id)arg2 error:(id*)arg3;
- (unsigned int)radioAccessTechnology;
- (void)setIsTargetBitrateStabilized:(bool)arg1;
- (void)setMediaController:(id)arg1;
- (void)setMode:(unsigned int)arg1;
- (void)setRadioAccessTechnology:(unsigned int)arg1;
- (void)setStatisticsCollector:(id)arg1;
- (void)setTargetBitrate:(unsigned int)arg1;
- (id)statisticsCollector;
- (unsigned int)targetBitrate;

@end
