
@interface CSEndpointLatencyInfo : NSObject {
    double  _firstPktLatency;
    unsigned long long  _numOfAudioPackets;
    unsigned long long  _numOfValidTrailingPackets;
    unsigned long long  _numOfValidTrailingSpeechPackets;
    NSString * _requestMHUUID;
    NSMutableArray * _trailingPktLatencies;
    NSMutableArray * _trailingPktSpeechLatencies;
}

@property (nonatomic) double firstPktLatency;
@property (nonatomic) unsigned long long numOfAudioPackets;
@property (nonatomic) unsigned long long numOfValidTrailingPackets;
@property (nonatomic) unsigned long long numOfValidTrailingSpeechPackets;
@property (nonatomic, retain) NSString *requestMHUUID;
@property (nonatomic, retain) NSMutableArray *trailingPktLatencies;
@property (nonatomic, retain) NSMutableArray *trailingPktSpeechLatencies;

- (void).cxx_destruct;
- (void)_emitMHEndpointLatencyInfo:(id)arg1 withRequestMHUUID:(id)arg2;
- (void)addPktInfoWithTimestamp:(unsigned long long)arg1 arrivalTimestamp:(unsigned long long)arg2 currentMachTime:(unsigned long long)arg3;
- (double)firstPktLatency;
- (id)initWithRequestMHUUID:(id)arg1;
- (unsigned long long)numOfAudioPackets;
- (unsigned long long)numOfValidTrailingPackets;
- (unsigned long long)numOfValidTrailingSpeechPackets;
- (void)report;
- (id)requestMHUUID;
- (void)setFirstPktLatency:(double)arg1;
- (void)setNumOfAudioPackets:(unsigned long long)arg1;
- (void)setNumOfValidTrailingPackets:(unsigned long long)arg1;
- (void)setNumOfValidTrailingSpeechPackets:(unsigned long long)arg1;
- (void)setRequestMHUUID:(id)arg1;
- (void)setTrailingPktLatencies:(id)arg1;
- (void)setTrailingPktSpeechLatencies:(id)arg1;
- (id)trailingPktLatencies;
- (id)trailingPktSpeechLatencies;

@end
