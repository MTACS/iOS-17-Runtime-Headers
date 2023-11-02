
@interface SiriAnalyticsSensitiveConditionsLedger : NSObject {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  bootSessionUUID;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  clockIdentifier;
    void metastore;
    void spans;
}

- (void).cxx_destruct;
- (id)allSpans;
- (void)endWithSensitiveCondition:(int)arg1 at:(unsigned long long)arg2;
- (id)init;
- (id)initWithClockIdentifier:(id)arg1 metastore:(id)arg2;
- (void)startWithSensitiveCondition:(int)arg1 at:(unsigned long long)arg2;

@end
