
@interface SiriAnalyticsLogicalClockSummary : NSObject <NSSecureCoding> {
    void active;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  clockIdentifier;
    void derivativeClockIdentifiers;
    void endedOn;
    void startedOn;
}

+ (void)setSupportsSecureCoding:(bool)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
