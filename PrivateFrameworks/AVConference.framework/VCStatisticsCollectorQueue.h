
@interface VCStatisticsCollectorQueue : NSObject {
    int  _almostFullQueueSize;
    int  _firstMessageIndex;
    bool  _isThreadRunning;
    int  _maxQueueSize;
    id /* block */  _messageHandler;
    struct tagVCStatisticsMessage { 
        int type; 
        int priority; 
        double arrivalTime; 
        bool isVCRCInternal; 
        bool shouldFlushAndProcess; 
        bool shouldDrainAndProcess; 
        bool statisticsUpdateOnly; 
        union { 
            struct { 
                unsigned int queueDepth1; 
                unsigned int queueDepth2; 
                unsigned int txBitrate; 
                unsigned int averageBitrate; 
                unsigned int averageBitrateShort; 
                unsigned int averageBitrateLong; 
                double averageQueueDepth; 
                double expectedQueuingDelay; 
                double bdcd; 
                double normalizedBDCD; 
                double normalizedDelay; 
                BOOL bbString[64]; 
                int radioTechnology; 
            } baseband; 
            struct { 
                unsigned int sendTimestamp; 
                unsigned int queuingDelay; 
                unsigned int remoteBWEstimation; 
                unsigned int remoteBWEStability; 
                unsigned int maxVideoBurstyLoss; 
                unsigned int audioConsecutiveLoss; 
                unsigned int mostBurstyLoss; 
                unsigned int audioReceivedPackets; 
                unsigned int videoReceivedPackets; 
                unsigned int totalSentPackets; 
                unsigned int echoedSendTimestamp; 
                unsigned int mediaTimestamp; 
                double owrd; 
                double packetLossRate; 
                unsigned int actualBitrate; 
                unsigned int instantBitrate; 
                double roundTripTime; 
                unsigned int receiveQueueTarget; 
                bool isPacketReceivedValid; 
                struct { 
                    int packetType; 
                    unsigned int packetId; 
                    unsigned int sampleRate; 
                    unsigned int totalPacketsReceived; 
                    double receiveTimestamp; 
                    double owrd; 
                    double targetJitterQueueSize; 
                    unsigned int bandwidthEstimation; 
                    unsigned int localBurstyLoss; 
                } packetReceived; 
                struct { 
                    unsigned short sequenceNumber; 
                    bool isDuplicatePacket; 
                    bool isReceivedOnPrimary; 
                    unsigned int connectionStatsBuffer; 
                } connectionStats; 
                struct tagVCStatisticsECNStats { 
                    unsigned short ecnECT1Count; 
                    unsigned short ecnCECount; 
                } ecnStats; 
                struct tagVCStatisticsECNStats { 
                    unsigned short ecnECT1Count; 
                    unsigned short ecnCECount; 
                } ecnRecvd; 
                bool isECNEnabled; 
            } feedback; 
            struct { 
                double packetLossPercentage; 
                double packetLossPercentageAudio; 
                double packetLossPercentageVideo; 
                unsigned int burstPacketLoss; 
                unsigned int roundTripTimeMilliseconds; 
                unsigned int isNetworkCongested; 
                unsigned int owrd; 
                unsigned int targetBitrate; 
                unsigned long long statisticsID; 
                unsigned int videoPacketsReceived; 
            } network; 
            struct { 
                unsigned int estimatorID; 
                bool deregisterEstimator; 
                bool isProbingSequence; 
                bool isEndOfProbingSequence; 
                unsigned int probingSequenceID; 
                unsigned int messageLength; 
                double arrivalTime; 
                unsigned int mediaTimestamp; 
                bool isPacketReceivedValid; 
                struct { 
                    int packetType; 
                    unsigned int packetId; 
                    unsigned int sampleRate; 
                    unsigned int totalPacketsReceived; 
                    double receiveTimestamp; 
                    double owrd; 
                    double targetJitterQueueSize; 
                    unsigned int bandwidthEstimation; 
                    unsigned int localBurstyLoss; 
                } packetReceived; 
            } probing; 
            struct { 
                unsigned char linkID; 
                unsigned int sendTimestamp; 
                unsigned int receiveTimestamp; 
                unsigned int totalPacketSent; 
                unsigned int totalPacketReceived; 
                unsigned int totalByteSent; 
                unsigned int totalByteReceived; 
                unsigned int serverStatsByteUsed; 
                unsigned int bandwidthSample; 
                unsigned int bandwidthEstimation; 
                double roundTripTime; 
                double owrd; 
                double packetLossRate; 
                double packetLossRateShortWindow; 
                unsigned int actualBitrate; 
                unsigned int instantBitrate; 
                unsigned int serverStatsBitrate; 
                unsigned int expectedBitrate; 
            } serverStats; 
            struct { 
                unsigned int packetId; 
                unsigned int totalPacketsSent; 
                unsigned int totalBytesSent; 
                double sendTimestamp; 
            } packetSent; 
            struct { 
                int packetType; 
                unsigned int packetId; 
                unsigned int sampleRate; 
                unsigned int totalPacketsReceived; 
                double receiveTimestamp; 
                double owrd; 
                double targetJitterQueueSize; 
                unsigned int bandwidthEstimation; 
                unsigned int localBurstyLoss; 
            } packetReceived; 
            struct { 
                unsigned int ssrc; 
                unsigned int packetLossPercentage; 
                unsigned int lastSequenceNumber; 
                unsigned int roundTripTimeMilliseconds; 
            } rtcpRR; 
            struct { 
                unsigned int mode; 
                unsigned int remoteRadioAccessTechnology; 
                unsigned int localRadioAccessTechnology; 
                unsigned int maxBitrate; 
                unsigned int minBitrate; 
                unsigned int initialBitrate; 
                bool isTrafficBursty; 
                unsigned int featureFlags; 
            } config; 
            struct { 
                unsigned int mediaEventType; 
                unsigned int additionalFlushCount; 
                unsigned int transactionID; 
                unsigned int audioStallBitrate; 
                float audioErasure; 
                bool isKeyFrame; 
                bool isTransitionToFEC; 
                double videoStallTimeDelta; 
                double videoStallTimeTotal; 
                unsigned int refreshFrameTimestamp; 
                unsigned int refreshFramePayloadType; 
                unsigned int refreshFramePacketCount; 
                unsigned long long idsParticipantID; 
            } mediaEvent; 
            struct { 
                unsigned char version; 
                unsigned char direction; 
                unsigned char interfaceType; 
                unsigned long long timestamp; 
                unsigned long long maxThroughputBps; 
                unsigned long long totalByteCount; 
                unsigned int flushableQueueSize; 
                unsigned int nonFlushableQueueSize; 
                unsigned int averageDelayMillisecond; 
                unsigned long long averageThroughputBps; 
                int rateTrendSuggestion; 
                unsigned int packetLossPerFrame; 
                union { 
                    struct { 
                        unsigned char frequencyBand; 
                        unsigned char intermittentState; 
                        unsigned short estimatedIntermittentPeriod; 
                        unsigned short singleOutagePeriod; 
                        unsigned char btCoex; 
                        unsigned char radioCoex; 
                        unsigned char qualityScoreDelayRx; 
                        unsigned char qualityScoreDelayTx; 
                        unsigned char qualityScoreLossRx; 
                        unsigned char qualityScoreLossTx; 
                        unsigned char qualityScoreChannel; 
                        float offChannelTimeRatio; 
                        bool detectedFrequentOffChannelActivity; 
                        unsigned short wlanDutyCycle; 
                        unsigned int wifiObservedTxBitrate[6]; 
                    } wifi; 
                    struct { 
                        unsigned char radioAccessTechnology; 
                        short referenceSignalLevel; 
                        short signalLevel; 
                        BOOL signalQuality; 
                        unsigned char uplinkBLER; 
                        unsigned char downlinkBLER; 
                        unsigned char bandwidthLimitationIndication; 
                        unsigned char cdrxState; 
                        unsigned short cdrxCycle; 
                        unsigned short estimatedOutagePeriod; 
                        unsigned char outageState; 
                    } baseband; 
                } ; 
            } nwConnection; 
            struct tagVCStatisticsVideoLossFeedback { 
                unsigned int frameRTPTimestamp; 
                unsigned short packetsReceived; 
                unsigned char frameSize; 
                unsigned char packetsLost; 
            } videoLossFeedback; 
        } ; 
    }  _messageQueue;
    int  _nextMessageIndex;
    unsigned int  _queueFullCounter;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _queueMutex;
    struct _opaque_pthread_cond_t { 
        long long __sig; 
        BOOL __opaque[40]; 
    }  _queueNotEmptyCondition;
    struct _opaque_pthread_cond_t { 
        long long __sig; 
        BOOL __opaque[40]; 
    }  _queueNotFullCondition;
    unsigned int  _queueProcessWaitTimeMs;
    bool  _shouldBlockWhenFull;
    bool  _shouldProcessMessageImmediately;
    bool  _shouldProcessMessageOnExternalThread;
    struct OpaqueFigThread { } * _thread;
    struct _opaque_pthread_cond_t { 
        long long __sig; 
        BOOL __opaque[40]; 
    }  _waitCondition;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _waitMutex;
}

@property (readonly) bool isThreadRunning;
@property (copy) id /* block */ messageHandler;

- (void)dealloc;
- (id)initWithQueueSize:(int)arg1 shouldBlockWhenFull:(bool)arg2 queueWaitTimeMs:(unsigned int)arg3 useExternalThread:(bool)arg4;
- (bool)isThreadRunning;
- (id /* block */)messageHandler;
- (void)setMessageHandler:(id /* block */)arg1;
- (void)start;
- (void)stop;
- (void)stopThread;

@end
