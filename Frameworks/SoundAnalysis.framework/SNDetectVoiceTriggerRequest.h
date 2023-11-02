
@interface SNDetectVoiceTriggerRequest : NSObject <SNAnalyzerCreating, SNRequest> {
    long long  _blocksBetweenTriggers;
    NSArray * _commands;
    long long  _hopSizeSamples;
    MLModel * _model;
    double  _sampleRate;
}

@property (nonatomic) long long blocksBetweenTriggers;
@property (nonatomic, copy) NSArray *commands;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long hopSizeSamples;
@property (nonatomic, readonly) double sampleRate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)blocksBetweenTriggers;
- (id)commands;
- (id)createAnalyzerWithError:(id*)arg1;
- (unsigned long long)hash;
- (long long)hopSizeSamples;
- (id)initWithModel:(id)arg1 dictionary:(id)arg2 error:(id*)arg3;
- (bool)isEqual:(id)arg1;
- (double)sampleRate;
- (void)setBlocksBetweenTriggers:(long long)arg1;
- (void)setCommands:(id)arg1;
- (void)setHopSizeSamples:(long long)arg1;

@end
