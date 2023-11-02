
@interface HMDAssertionLogEvent : HMMLogEvent <HMDDiagnosticReportLogging> {
    NSString * _description;
    NSString * _reason;
}

@property (readonly, copy) NSString *diagnosticReportEventSubType;
@property (readonly, copy) NSString *diagnosticReportEventType;
@property (readonly, copy) NSString *reason;

- (void).cxx_destruct;
- (id)description;
- (id)initWithReason:(id)arg1;
- (id)reason;
- (void)updateDiagnosticReportSignature:(id)arg1;

@end
