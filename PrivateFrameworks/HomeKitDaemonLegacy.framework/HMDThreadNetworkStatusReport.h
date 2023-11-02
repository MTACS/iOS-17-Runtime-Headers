
@interface HMDThreadNetworkStatusReport : NSObject {
    unsigned long long  _maxSimuIPPrefixesDetected;
    unsigned long long  _numAdvertisedBRs;
    unsigned long long  _numAppleBRs;
    unsigned long long  _numThirdPartyBRs;
    unsigned long long  _numThreadNetworks;
    unsigned long long  _reportDuration;
    unsigned long long  _rxSuccess;
    unsigned long long  _rxTotal;
    unsigned long long  _txDelayAvg;
    unsigned long long  _txSuccess;
    unsigned long long  _txTotal;
}

@property (nonatomic, readonly) unsigned long long maxSimuIPPrefixesDetected;
@property (nonatomic, readonly) unsigned long long numAdvertisedBRs;
@property (nonatomic, readonly) unsigned long long numAppleBRs;
@property (nonatomic, readonly) unsigned long long numThirdPartyBRs;
@property (nonatomic, readonly) unsigned long long numThreadNetworks;
@property (nonatomic, readonly) unsigned long long reportDuration;
@property (nonatomic, readonly) unsigned long long rxSuccess;
@property (nonatomic, readonly) unsigned long long rxTotal;
@property (nonatomic, readonly) unsigned long long txDelayAvg;
@property (nonatomic, readonly) unsigned long long txSuccess;
@property (nonatomic, readonly) unsigned long long txTotal;

- (id)initWithNumAdvertisedBRs:(unsigned long long)arg1 numAppleBRs:(unsigned long long)arg2 numThirdPartyBRs:(unsigned long long)arg3 numThreadNetworks:(unsigned long long)arg4 maxSimuIPPrefixesDetected:(unsigned long long)arg5 txTotal:(unsigned long long)arg6 txSuccess:(unsigned long long)arg7 txDelayAvg:(unsigned long long)arg8 rxTotal:(unsigned long long)arg9 rxSuccess:(unsigned long long)arg10 reportDuration:(unsigned long long)arg11;
- (unsigned long long)maxSimuIPPrefixesDetected;
- (unsigned long long)numAdvertisedBRs;
- (unsigned long long)numAppleBRs;
- (unsigned long long)numThirdPartyBRs;
- (unsigned long long)numThreadNetworks;
- (unsigned long long)reportDuration;
- (unsigned long long)rxSuccess;
- (unsigned long long)rxTotal;
- (unsigned long long)txDelayAvg;
- (unsigned long long)txSuccess;
- (unsigned long long)txTotal;

@end
