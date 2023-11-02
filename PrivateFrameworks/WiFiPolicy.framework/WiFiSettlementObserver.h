
@interface WiFiSettlementObserver : NSObject {
    NSMutableArray * _callbacks;
    unsigned long long  _confidence;
    WiFiSettlementConfiguration * _configuration;
    unsigned long long  _consecutiveScansWithoutMatch;
    WiFiSettlementContext * _currentContext;
    <WiFiScanProvider> * _scanProvider;
    NSDate * _settledDate;
    long long  _status;
}

@property (nonatomic, retain) NSMutableArray *callbacks;
@property (nonatomic) unsigned long long confidence;
@property (nonatomic, retain) WiFiSettlementConfiguration *configuration;
@property (nonatomic) unsigned long long consecutiveScansWithoutMatch;
@property (nonatomic, retain) WiFiSettlementContext *currentContext;
@property (nonatomic, retain) <WiFiScanProvider> *scanProvider;
@property (nonatomic) NSDate *settledDate;
@property (nonatomic) long long status;

- (void).cxx_destruct;
- (void)_callSettlementCallbackWithStatus:(long long)arg1 userInfo:(id)arg2;
- (void)_handleScanResults:(id)arg1 error:(id)arg2 userInfo:(id)arg3;
- (void)_updateSettlementStatus:(long long)arg1 confidence:(unsigned long long)arg2;
- (void)addSettlementCallback:(id /* block */)arg1;
- (id)callbacks;
- (unsigned long long)confidence;
- (id)configuration;
- (unsigned long long)consecutiveScansWithoutMatch;
- (id)currentContext;
- (id)initWithScanProvider:(id)arg1 configuration:(id)arg2;
- (void)removeSettlementCallback:(id /* block */)arg1;
- (void)resetSettlement;
- (id)scanProvider;
- (void)setCallbacks:(id)arg1;
- (void)setConfidence:(unsigned long long)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setConsecutiveScansWithoutMatch:(unsigned long long)arg1;
- (void)setCurrentContext:(id)arg1;
- (void)setScanProvider:(id)arg1;
- (void)setSettledDate:(id)arg1;
- (void)setStatus:(long long)arg1;
- (id)settledDate;
- (long long)status;

@end
