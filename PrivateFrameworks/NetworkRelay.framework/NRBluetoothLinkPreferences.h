
@interface NRBluetoothLinkPreferences : NRLinkPreferences {
    NSNumber * _inputBytesPerSecond;
    NSNumber * _outputBytesPerSecond;
    NSNumber * _packetsPerSecond;
    bool  _reportedToABC;
    unsigned long long  _startTime;
}

@property (nonatomic, retain) NSNumber *inputBytesPerSecond;
@property (nonatomic, retain) NSNumber *outputBytesPerSecond;
@property (nonatomic, retain) NSNumber *packetsPerSecond;
@property (nonatomic) bool reportedToABC;
@property (nonatomic) unsigned long long startTime;

- (void).cxx_destruct;
- (void)combinePreferences:(id)arg1;
- (id)copyEncodedXPCDict;
- (id)copyLongDescription;
- (id)copyShortDescription;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)inputBytesPerSecond;
- (bool)isEqual:(id)arg1;
- (bool)isNotEmpty;
- (id)outputBytesPerSecond;
- (id)packetsPerSecond;
- (bool)reportedToABC;
- (void)setInputBytesPerSecond:(id)arg1;
- (void)setOutputBytesPerSecond:(id)arg1;
- (void)setPacketsPerSecond:(id)arg1;
- (void)setReportedToABC:(bool)arg1;
- (void)setStartTime:(unsigned long long)arg1;
- (unsigned long long)startTime;

@end
