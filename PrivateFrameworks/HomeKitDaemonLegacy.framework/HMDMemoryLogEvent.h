
@interface HMDMemoryLogEvent : HMMLogEvent <HMDDiagnosticReportLogging> {
    unsigned long long  _currentMemoryUsage;
    unsigned long long  _intervalMaxMemoryUsage;
    long long  _reason;
}

@property (readonly) unsigned long long currentMemoryUsage;
@property (readonly, copy) NSString *diagnosticReportEventSubType;
@property (readonly, copy) NSString *diagnosticReportEventType;
@property (readonly) unsigned long long intervalMaxMemoryUsage;
@property (readonly) long long reason;

- (unsigned long long)currentMemoryUsage;
- (id)init;
- (id)initWithReason:(long long)arg1 currentMemoryUsage:(unsigned long long)arg2 intervalMaxMemoryUsage:(unsigned long long)arg3;
- (unsigned long long)intervalMaxMemoryUsage;
- (long long)reason;
- (void)updateDiagnosticReportSignature:(id)arg1;

@end
