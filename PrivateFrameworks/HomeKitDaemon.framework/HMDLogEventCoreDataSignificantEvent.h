
@interface HMDLogEventCoreDataSignificantEvent : HMMLogEvent <HMDDiagnosticReportLogging> {
    NSString * _context;
    NSString * _extraContext;
    unsigned long long  _reason;
}

@property (nonatomic, retain) NSString *context;
@property (readonly, copy) NSString *diagnosticReportEventSubType;
@property (readonly, copy) NSString *diagnosticReportEventType;
@property (nonatomic, copy) NSString *extraContext;
@property (nonatomic, readonly) unsigned long long reason;

- (void).cxx_destruct;
- (id)context;
- (id)diagnosticReportEventType;
- (id)extraContext;
- (id)initWithReason:(unsigned long long)arg1;
- (id)initWithReason:(unsigned long long)arg1 author:(unsigned long long)arg2;
- (unsigned long long)reason;
- (void)setContext:(id)arg1;
- (void)setExtraContext:(id)arg1;
- (void)updateDiagnosticReportSignature:(id)arg1;

@end
