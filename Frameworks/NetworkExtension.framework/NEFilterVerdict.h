
@interface NEFilterVerdict : NSObject <NEPrettyDescription, NSCopying, NSSecureCoding> {
    bool  _drop;
    bool  _needRules;
    bool  _pause;
    bool  _remediate;
    NSString * _remediationButtonTextMapKey;
    NSString * _remediationURLMapKey;
    bool  _shouldReport;
    bool  _urlAppendString;
    NSString * _urlAppendStringMapKey;
}

@property bool drop;
@property (readonly) long long filterAction;
@property bool needRules;
@property bool shouldReport;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (bool)drop;
- (void)encodeWithCoder:(id)arg1;
- (long long)filterAction;
- (id)initWithCoder:(id)arg1;
- (id)initWithDrop:(bool)arg1 remediate:(bool)arg2;
- (bool)needRules;
- (void)setDrop:(bool)arg1;
- (void)setNeedRules:(bool)arg1;
- (void)setShouldReport:(bool)arg1;
- (bool)shouldReport;

@end
