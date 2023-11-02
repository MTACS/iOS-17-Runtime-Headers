
@interface VCRateControlAlgorithmTelephony : VCRateControlAlgorithmBase {
    short  _currentRSRP;
    unsigned char  _currentUplinkBLER;
    double  _lastTimeBLERAboveRampUpThreshold;
    double  _lastTimeBLERBelowRampDownThreshold;
    unsigned int  _nwConnectionAvgDelay;
    unsigned int  _nwConnectionAvgThroughput;
}

- (id)init;
- (bool)setUpVTable;

@end
