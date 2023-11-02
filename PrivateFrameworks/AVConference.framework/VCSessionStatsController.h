
@interface VCSessionStatsController : NSObject {
    double  _averageInterCallbackDuration;
    int  _bytesReceivedToReport;
    int  _bytesSentToReport;
    VCConnectionManager * _connectionManager;
    bool  _didReceiveServerStatsResponse;
    unsigned int  _downlinkMostRecentSendTimestamp;
    unsigned int  _downlinkServerStatsByteUsed;
    AVCStatisticsCollector * _downlinkStatisticsCollector;
    bool  _enableStatsReceiveThread;
    bool  _enableStatsReporting;
    double  _lastHealthPrintTime;
    double  _lastPacketReceiveCallbackTime;
    int  _lastProcessedBytesReceived;
    int  _lastProcessedBytesSent;
    double  _lastStatsReportTime;
    double  _lastTimeReceiveStatsFailed;
    double  _lastTriggerRateControlTime;
    double  _lastUpdateTime;
    NSObject<OS_dispatch_source> * _localSessionStatsTimemoutSource;
    int  _maxReceivedRate;
    int  _maxSentRate;
    double  _maxStatsTransportStreamQueueTime;
    int  _minReceivedRate;
    int  _minSentRate;
    unsigned int  _numStatsDroppedDueToLinkID;
    unsigned int  _numStatsDroppedDueToStatsID;
    unsigned int  _numStatsDroppedDueToTooLate;
    unsigned int  _numStatsProcessed;
    unsigned int  _numStatsTriggeredForDownlink;
    unsigned int  _numStatsTriggeredForUplink;
    unsigned int  _previousTotalPacketReceived;
    unsigned int  _previousTotalPacketSent;
    struct { 
        double responseTime; 
        unsigned char linkID; 
        unsigned short statsIdentifier; 
        unsigned short remoteTimestamp; 
        unsigned short serverPacketInterval; 
        unsigned short uplinkBandwidthSample; 
        unsigned short totalRemoteMediaPacketSent; 
        unsigned short totalRemoteMediaPacketReceived; 
    }  _remoteStats;
    id  _reportingAgentWeak;
    unsigned short  _statsArrayIndex;
    unsigned int  _statsNoResponseCounter;
    struct tagVCRealTimeThread { unsigned int x1; unsigned int x2; struct _opaque_pthread_mutex_t { long long x_3_1_1; BOOL x_3_1_2[56]; } x3; id x4; int (*x5)(); void *x6; struct OpaqueFigThread {} *x7; int x8; BOOL x9[60]; unsigned int x10; unsigned int x11; } * _statsReceiveThread;
    double  _statsReportingInterval;
    unsigned int  _statsRequestCounter;
    unsigned int  _statsResponseCounter;
    unsigned short  _streamID;
    double  _totalStatsTransportStreamQueueTime;
    VCTransportStreamGFT * _transportStream;
    unsigned int  _uplinkMostRecentSendTimestamp;
    unsigned int  _uplinkServerStatsByteUsed;
    AVCStatisticsCollector * _uplinkStatisticsCollector;
    <VCSessionStatsControllerDelegate> * _weakDelegate;
}

@property (nonatomic, readonly) bool didReceiveServerStatsResponse;
@property (readonly) id reportingAgent;
@property (nonatomic) double statsReportingInterval;

- (void)dealloc;
- (void)deregisterPeriodicTask;
- (bool)didReceiveServerStatsResponse;
- (void)flushRealTimeReportingStats;
- (id)initWithDelegate:(id)arg1 connectionManager:(id)arg2 uplinkStatsCollector:(id)arg3 downlinkStatsCollector:(id)arg4 reportingAgent:(struct opaqueRTCReporting { }*)arg5 transportSessionID:(unsigned int)arg6 streamID:(unsigned short)arg7 mediaQueue:(struct tagVCMediaQueue { }*)arg8;
- (void)periodicTask:(void*)arg1;
- (void)registerPeriodicTask;
- (id)reportingAgent;
- (void)reset;
- (void)sendLocalStats;
- (void)setStatsReportingInterval:(double)arg1;
- (void)startLocalSessionStatsReceive;
- (void)startLocalSessionStatsSend;
- (void)startLocalSessionStatsUpdate;
- (double)statsReportingInterval;
- (void)stopLocalSessionStatsUpdate;
- (unsigned short)translateTimestampFromMicro:(double)arg1;

@end
