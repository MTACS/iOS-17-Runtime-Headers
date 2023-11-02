
@interface NEFilterNewFlowVerdict : NEFilterVerdict <NSCopying, NSSecureCoding> {
    bool  _filterInbound;
    bool  _filterOutbound;
    unsigned long long  _peekInboundBytes;
    unsigned long long  _peekOutboundBytes;
    long long  _statisticsReportFrequency;
}

@property bool filterInbound;
@property bool filterOutbound;
@property unsigned long long peekInboundBytes;
@property unsigned long long peekOutboundBytes;
@property long long statisticsReportFrequency;

+ (id)URLAppendStringVerdictWithMapKey:(id)arg1;
+ (id)allowVerdict;
+ (id)dropVerdict;
+ (id)filterDataVerdictWithFilterInbound:(bool)arg1 peekInboundBytes:(unsigned long long)arg2 filterOutbound:(bool)arg3 peekOutboundBytes:(unsigned long long)arg4;
+ (id)needRulesVerdict;
+ (id)pauseVerdict;
+ (id)remediateVerdictWithRemediationURLMapKey:(id)arg1 remediationButtonTextMapKey:(id)arg2;
+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (void)encodeWithCoder:(id)arg1;
- (long long)filterAction;
- (bool)filterInbound;
- (bool)filterOutbound;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)peekInboundBytes;
- (unsigned long long)peekOutboundBytes;
- (void)setFilterInbound:(bool)arg1;
- (void)setFilterOutbound:(bool)arg1;
- (void)setPeekInboundBytes:(unsigned long long)arg1;
- (void)setPeekOutboundBytes:(unsigned long long)arg1;
- (void)setStatisticsReportFrequency:(long long)arg1;
- (long long)statisticsReportFrequency;

@end
