
@interface VCStatisticsHistory : NSObject {
    unsigned char  _currentLinkID;
    int  _currentStatsHistoryIndex;
    double  _lastHistoryNotEnoughLogTime;
    struct VCStatisticsStatsHistoryElement { 
        unsigned char linkID; 
        double statsUpdateTime; 
        unsigned int statsTimestamp; 
        unsigned int totalPacketSent; 
        unsigned int totalPacketReceived; 
        unsigned long long totalByteSent; 
        unsigned long long totalByteReceived; 
        unsigned long long totalByteServerStatsUsed; 
        unsigned int maxBurstyLoss; 
    }  _lastStats;
    struct VCStatisticsSendHistoryElement { unsigned int x1; double x2; unsigned int x3; unsigned long long x4; struct VCStatisticsSendHistoryElement {} *x5; struct VCStatisticsSendHistoryElement {} *x6; } * _sendHistory;
    struct VCStatisticsStatsHistoryElement { 
        unsigned char linkID; 
        double statsUpdateTime; 
        unsigned int statsTimestamp; 
        unsigned int totalPacketSent; 
        unsigned int totalPacketReceived; 
        unsigned long long totalByteSent; 
        unsigned long long totalByteReceived; 
        unsigned long long totalByteServerStatsUsed; 
        unsigned int maxBurstyLoss; 
    }  _statsHistory;
    int  _statsHistorySize;
}

- (void)clearSendHistory;
- (void)dealloc;

@end
