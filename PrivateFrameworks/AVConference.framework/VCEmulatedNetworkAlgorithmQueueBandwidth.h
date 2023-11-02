
@interface VCEmulatedNetworkAlgorithmQueueBandwidth : NSObject <VCEmulatedNetworkAlgorithm> {
    int  _budgentBufferIndex;
    double  _budgetBufferPktSize;
    double  _budgetBufferPktTime;
    int  _budgetBufferSize;
    int  _currentIndexForAQMRate;
    int  _currentIndexForServiceRate;
    int  _currentIndexForServiceRateDistribution;
    double  _expectedProcessEndTime;
    double  _lastNetworkQueueAQMRateLoadTime;
    double  _lastNetworkQueueServiceRateDistributionLoadTime;
    double  _lastNetworkQueueServiceRateLoadTime;
    unsigned int  _networkQueueAQMRate;
    unsigned int  _networkQueueServiceRate;
    unsigned int  _networkQueueServiceRateMean;
    unsigned int  _networkQueueServiceRateStdDev;
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

- (void)addPacketToBudgetBuffer:(id)arg1;
- (double)computeNetworkServiceRate;
- (double)expectedProcessEndTime;
- (int)getRemainingAQMBudgetWithPacket:(id)arg1;
- (id)init;
- (int)packetCountBytesInNetworkQueue;
- (unsigned int)packetCountInNetworkQueue;
- (void)process:(id)arg1;
- (void)setPacketCountBytesInNetworkQueue:(int)arg1;
- (void)setPacketCountInNetworkQueue:(unsigned int)arg1;
- (bool)shouldDropPacketWithCurrentAQMBudget:(id)arg1;
- (void)updateSettingsAtTime:(double)arg1 impairments:(id)arg2;

@end
