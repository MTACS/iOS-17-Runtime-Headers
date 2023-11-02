
@interface NEFilterDataVerdict : NEFilterVerdict <NSCopying, NSSecureCoding> {
    unsigned long long  _passBytes;
    unsigned long long  _peekBytes;
    long long  _statisticsReportFrequency;
}

@property unsigned long long passBytes;
@property unsigned long long peekBytes;
@property long long statisticsReportFrequency;

+ (id)allowVerdict;
+ (id)dataVerdictWithPassBytes:(unsigned long long)arg1 peekBytes:(unsigned long long)arg2;
+ (id)dropVerdict;
+ (id)needRulesVerdict;
+ (id)pauseVerdict;
+ (id)remediateVerdictWithRemediationURLMapKey:(id)arg1 remediationButtonTextMapKey:(id)arg2;
+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (void)encodeWithCoder:(id)arg1;
- (long long)filterAction;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)passBytes;
- (unsigned long long)peekBytes;
- (void)setPassBytes:(unsigned long long)arg1;
- (void)setPeekBytes:(unsigned long long)arg1;
- (void)setStatisticsReportFrequency:(long long)arg1;
- (long long)statisticsReportFrequency;

@end
