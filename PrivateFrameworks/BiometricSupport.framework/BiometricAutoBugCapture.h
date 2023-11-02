
@interface BiometricAutoBugCapture : NSObject {
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    NSString * _domain;
    NSString * _process;
    SDRDiagnosticReporter * _reporter;
    bool  _serialLogEnabled;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, retain) NSString *domain;
@property (nonatomic, retain) NSString *process;
@property (nonatomic, readonly) SDRDiagnosticReporter *reporter;
@property (nonatomic, readonly) bool serialLogEnabled;

- (void).cxx_destruct;
- (id)dispatchQueue;
- (id)domain;
- (id)getSignatureForReason:(unsigned long long)arg1;
- (id)getSignatureWithType:(id)arg1 subtype:(id)arg2;
- (id)getSubtypeForReason:(unsigned long long)arg1;
- (id)getTypeForReason:(unsigned long long)arg1;
- (id)initWithDomain:(id)arg1 process:(id)arg2 dispatchQueue:(id)arg3;
- (id)process;
- (id)reporter;
- (bool)sendAutoBugCaptureEvent:(unsigned long long)arg1;
- (bool)sendSignature:(id)arg1 withDuration:(double)arg2;
- (bool)serialLogEnabled;
- (void)setDomain:(id)arg1;
- (void)setProcess:(id)arg1;

@end
