
@interface BRRTCPairingMetric : NSObject <BRRTCMetric> {
    NSMutableDictionary * _metricDict;
    unsigned long long  _pairingBeginsType;
    unsigned short  _rtcType;
    NSNumber * _subreasonCode;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableDictionary *metricDict;
@property (nonatomic) unsigned long long pairingBeginsType;
@property (nonatomic) unsigned short rtcType;
@property (nonatomic) NSNumber *subreasonCode;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addPairingTimeEventToMetricDict:(id)arg1 withValue:(id)arg2;
- (void)addPairingTimePerformanceEventToMetricDict:(id)arg1 withTime:(id)arg2;
- (id)dictionaryRepresentation;
- (id)initWithPairingBeginsType:(unsigned long long)arg1;
- (id)metricDict;
- (unsigned long long)pairingBeginsType;
- (unsigned short)rtcType;
- (void)setMetricDict:(id)arg1;
- (void)setPairingBeginsType:(unsigned long long)arg1;
- (void)setRtcType:(unsigned short)arg1;
- (void)setSubreasonCode:(id)arg1;
- (id)subreasonCode;

@end
