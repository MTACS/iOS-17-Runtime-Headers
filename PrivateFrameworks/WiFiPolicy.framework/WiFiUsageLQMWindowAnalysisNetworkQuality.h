
@interface WiFiUsageLQMWindowAnalysisNetworkQuality : WiFiUsageLQMWindowAnalysis {
    NSDictionary * _networkQualityEventFields;
    unsigned long long  _networkQualityResponsivenessScore;
}

@property (nonatomic, retain) NSDictionary *networkQualityEventFields;
@property (nonatomic) unsigned long long networkQualityResponsivenessScore;

- (void).cxx_destruct;
- (id)addDimensionsTo:(id)arg1;
- (id)initWithRollingWindow:(id)arg1 AndDictionary:(id)arg2 andContext:(struct context { bool x1; bool x2; bool x3; })arg3 andTimestamp:(id)arg4 onQueue:(id)arg5;
- (id)networkQualityEventFields;
- (unsigned long long)networkQualityResponsivenessScore;
- (void)setNetworkQualityEventFields:(id)arg1;
- (void)setNetworkQualityResponsivenessScore:(unsigned long long)arg1;

@end
