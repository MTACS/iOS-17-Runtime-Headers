
@interface NEFilterControlVerdict : NEFilterNewFlowVerdict <NSCopying, NSSecureCoding> {
    bool  _handledByDataProvider;
    bool  _updateRules;
}

+ (id)allowVerdictWithUpdateRules:(bool)arg1;
+ (id)dropVerdictWithUpdateRules:(bool)arg1;
+ (bool)supportsSecureCoding;
+ (id)updateRules;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
