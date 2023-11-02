
@interface VCBasebandMetrics : NSObject {
    unsigned int  _averageBitrate;
    unsigned int  _averageBitrateLong;
    double  _averageBitrateMovingAverageFactor;
    unsigned int  _averageBitrateShort;
    double  _averageQueueDepth;
    double  _bdcd;
    struct { 
        double time[15]; 
        double bdcd[15]; 
        double delay[15]; 
        int frontIndex; 
        int rearIndex; 
        unsigned int size; 
    }  _bdcdList;
    double  _expectedQueuingDelay;
    double  _expectedQueuingDelayLong;
    struct { 
        double time[15]; 
        unsigned int transmittedBytes[15]; 
        unsigned int nonFlushableQueueDepth[15]; 
        int frontIndex; 
        int rearIndex; 
        unsigned int size; 
    }  _infoList;
    bool  _isBDCDListReady;
    bool  _isTargetBitrateStabilized;
    struct { 
        int type; 
        unsigned short version; 
        double arrivalTime; 
        union { 
            struct { 
                unsigned short radioTechnology; 
                unsigned char transmissionAntenna; 
                unsigned short numberOfFlows; 
                unsigned char flowType; 
                BOOL transmissionPower; 
                unsigned int queueDepth1; 
                unsigned int queueDepth2; 
                unsigned int basebandTransmissionBytes; 
                unsigned int lastTransmissionTimestamp; 
            } report; 
            struct { 
                unsigned short transactionID; 
                unsigned short totalNumDropped; 
                unsigned short numberOfPayloadTypes; 
                struct { 
                    unsigned char payloadType; 
                    unsigned short numberOfPacketDropped; 
                    unsigned short awDroppedSN[500]; 
                } PTSpecific[6]; 
            } dropAck; 
            struct { 
                unsigned short currentBitrate; 
                unsigned short suggestedBitrate; 
            } codecRateChange; 
        } notes; 
    }  _lastBasebandNotification;
    void * _logBasebandDump;
    VCRateControlMediaController * _mediaController;
    double  _normalizedBDCD;
    double  _normalizedDelay;
    unsigned int  _previousAverageBitrate;
    bool  _resetAverageBitrateLong;
    unsigned int  _targetBitrate;
    unsigned int  _txBitrate;
    bool  _useAverageQueueDepthForDelay;
}

@property (nonatomic) bool isTargetBitrateStabilized;
@property (nonatomic, retain) VCRateControlMediaController *mediaController;
@property (nonatomic) unsigned int targetBitrate;

- (void)addBDCDListWithNotificationArrivalTime:(double)arg1 bdcd:(double)arg2 queuingDelay:(double)arg3;
- (void)addInfoListWithNotification:(struct { int x1; unsigned short x2; double x3; union { struct { unsigned short x_1_2_1; unsigned char x_1_2_2; unsigned short x_1_2_3; unsigned char x_1_2_4; BOOL x_1_2_5; unsigned int x_1_2_6; unsigned int x_1_2_7; unsigned int x_1_2_8; unsigned int x_1_2_9; } x_4_1_1; struct { unsigned short x_2_2_1; unsigned short x_2_2_2; unsigned short x_2_2_3; struct { unsigned char x_4_3_1; unsigned short x_4_3_2; unsigned short x_4_3_3[500]; } x_2_2_4[6]; } x_4_1_2; struct { unsigned short x_3_2_1; unsigned short x_3_2_2; } x_4_1_3; } x4; }*)arg1;
- (void)calculateBitratesAndDelaysWithTotalQueueDepth:(unsigned int)arg1;
- (void)dealloc;
- (void)enableBasebandLogDump:(void*)arg1;
- (struct tagVCStatisticsMessage { int x1; int x2; double x3; bool x4; bool x5; bool x6; bool x7; union { struct { unsigned int x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; unsigned int x_1_2_4; unsigned int x_1_2_5; unsigned int x_1_2_6; double x_1_2_7; double x_1_2_8; double x_1_2_9; double x_1_2_10; double x_1_2_11; BOOL x_1_2_12[64]; int x_1_2_13; } x_8_1_1; struct { unsigned int x_2_2_1; unsigned int x_2_2_2; unsigned int x_2_2_3; unsigned int x_2_2_4; unsigned int x_2_2_5; unsigned int x_2_2_6; unsigned int x_2_2_7; unsigned int x_2_2_8; unsigned int x_2_2_9; unsigned int x_2_2_10; unsigned int x_2_2_11; unsigned int x_2_2_12; double x_2_2_13; double x_2_2_14; unsigned int x_2_2_15; unsigned int x_2_2_16; double x_2_2_17; unsigned int x_2_2_18; bool x_2_2_19; struct { int x_20_3_1; unsigned int x_20_3_2; unsigned int x_20_3_3; unsigned int x_20_3_4; double x_20_3_5; double x_20_3_6; double x_20_3_7; unsigned int x_20_3_8; unsigned int x_20_3_9; } x_2_2_20; struct { unsigned short x_21_3_1; bool x_21_3_2; bool x_21_3_3; unsigned int x_21_3_4; } x_2_2_21; struct tagVCStatisticsECNStats { unsigned short x_22_3_1; unsigned short x_22_3_2; } x_2_2_22; struct tagVCStatisticsECNStats { unsigned short x_23_3_1; unsigned short x_23_3_2; } x_2_2_23; bool x_2_2_24; } x_8_1_2; } x8; })getBasebandMetricsWithNotification:(struct { int x1; unsigned short x2; double x3; union { struct { unsigned short x_1_2_1; unsigned char x_1_2_2; unsigned short x_1_2_3; unsigned char x_1_2_4; BOOL x_1_2_5; unsigned int x_1_2_6; unsigned int x_1_2_7; unsigned int x_1_2_8; unsigned int x_1_2_9; } x_4_1_1; struct { unsigned short x_2_2_1; unsigned short x_2_2_2; unsigned short x_2_2_3; struct { unsigned char x_4_3_1; unsigned short x_4_3_2; unsigned short x_4_3_3[500]; } x_2_2_4[6]; } x_4_1_2; struct { unsigned short x_3_2_1; unsigned short x_3_2_2; } x_4_1_3; } x4; }*)arg1;
- (id)init;
- (bool)isTargetBitrateStabilized;
- (id)mediaController;
- (void)normalizeBDCD:(double)arg1;
- (void)resetBBNoteHistoryList;
- (void)resetBDCDList;
- (void)setIsTargetBitrateStabilized:(bool)arg1;
- (void)setMediaController:(id)arg1;
- (void)setTargetBitrate:(unsigned int)arg1;
- (unsigned int)targetBitrate;
- (double)updateTotalQueueDepth:(unsigned int)arg1;

@end
