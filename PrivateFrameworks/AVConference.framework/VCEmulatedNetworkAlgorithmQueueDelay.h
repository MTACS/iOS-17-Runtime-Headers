
@interface VCEmulatedNetworkAlgorithmQueueDelay : NSObject <VCEmulatedNetworkAlgorithm> {
    int  _currentIndexForDelay;
    int  _currentIndexForDelayDistribution;
    double  _expectedProcessEndTime;
    double  _lastNetworkQueueDelayDistributionLoadTime;
    double  _lastNetworkQueueDelayLoadTime;
    unsigned int  _networkQueueDelay;
    unsigned int  _networkQueueDelayMean;
    unsigned int  _networkQueueDelayStdDev;
    int  _packetCountBytesInNetworkQueue;
    unsigned int  _packetCountInNetworkQueue;
    NSDictionary * _policies;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double expectedProcessEndTime;
@property (readonly) unsigned long long hash;
@property int packetCountBytesInNetworkQueue;
@property unsigned int packetCountInNetworkQueue;
@property (readonly) Class superclass;

- (double)computeNetworkDelay;
- (double)expectedProcessEndTime;
- (id)init;
- (int)packetCountBytesInNetworkQueue;
- (unsigned int)packetCountInNetworkQueue;
- (void)process:(id)arg1;
- (void)setPacketCountBytesInNetworkQueue:(int)arg1;
- (void)setPacketCountInNetworkQueue:(unsigned int)arg1;
- (void)updateSettingsAtTime:(double)arg1 impairments:(id)arg2;

@end
