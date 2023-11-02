
@interface VCEmulatedNetworkAlgorithmQueueLoss : NSObject <VCEmulatedNetworkAlgorithm> {
    int  _currentIndexForLossPattern;
    int  _currentIndexForLossRate;
    int  _currentIndexForQueueSize;
    int  _currentIndexForQueueSizeBytes;
    int  _currentLossPatternShift;
    double  _expectedProcessEndTime;
    double  _lastNetworkQueueLossPatternLoadTime;
    double  _lastNetworkQueueLossRateLoadTime;
    double  _lastNetworkQueueSizeBytesLoadTime;
    double  _lastNetworkQueueSizeLoadTime;
    unsigned int  _networkQueueLossPattern;
    double  _networkQueueLossRate;
    unsigned int  _networkQueueMaxSize;
    unsigned int  _networkQueueMaxSizeBytes;
    int  _packetCountBytesInNetworkQueue;
    unsigned int  _packetCountInNetworkQueue;
    long long  _packetTypeForNetworkQueueLossPattern;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double expectedProcessEndTime;
@property (readonly) unsigned long long hash;
@property int packetCountBytesInNetworkQueue;
@property unsigned int packetCountInNetworkQueue;
@property (readonly) Class superclass;

- (double)expectedProcessEndTime;
- (id)init;
- (int)packetCountBytesInNetworkQueue;
- (unsigned int)packetCountInNetworkQueue;
- (void)process:(id)arg1;
- (void)setPacketCountBytesInNetworkQueue:(int)arg1;
- (void)setPacketCountInNetworkQueue:(unsigned int)arg1;
- (void)updateSettingsAtTime:(double)arg1 impairments:(id)arg2;

@end
