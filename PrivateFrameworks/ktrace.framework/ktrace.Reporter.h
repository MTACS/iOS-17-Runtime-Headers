
@interface ktrace.Reporter : _TtCs12_SwiftObject <KTProviderLogger> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  creationDate;
    void errorOutput;
    void initialFormatter;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  logger;
    void output;
    void updateFormatter;
}

- (void)failWithReason:(id)arg1;
- (void)warnWithMessage:(id)arg1;

@end
