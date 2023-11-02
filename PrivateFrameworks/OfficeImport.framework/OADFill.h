
@interface OADFill : OADProperties <NSCopying> {
    bool  _definedByStyle;
    bool  mDefinedByStyle;
}

@property bool definedByStyle;

- (float)alpha;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)definedByStyle;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isOverridden;
- (void)setDefinedByStyle:(bool)arg1;
- (void)setStyleColor:(id)arg1;
- (bool)usesPlaceholderColor;

@end
