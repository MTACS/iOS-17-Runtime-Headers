
@interface NSAttributedStringMarkdownParsingOptions : NSObject <NSCopying> {
    bool  _allowsExtendedAttributes;
    bool  _appliesSourcePositionAttributes;
    long long  _failurePolicy;
    long long  _interpretedSyntax;
    NSString * _languageCode;
}

@property bool allowsExtendedAttributes;
@property bool appliesSourcePositionAttributes;
@property long long failurePolicy;
@property long long interpretedSyntax;
@property (copy) NSString *languageCode;

+ (id)_localizedAttributedStringParsingOptions;
+ (id)allowingExtendedAttributes;

- (bool)allowsExtendedAttributes;
- (bool)appliesSourcePositionAttributes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (long long)failurePolicy;
- (unsigned long long)hash;
- (id)init;
- (long long)interpretedSyntax;
- (bool)isEqual:(id)arg1;
- (id)languageCode;
- (void)setAllowsExtendedAttributes:(bool)arg1;
- (void)setAppliesSourcePositionAttributes:(bool)arg1;
- (void)setFailurePolicy:(long long)arg1;
- (void)setInterpretedSyntax:(long long)arg1;
- (void)setLanguageCode:(id)arg1;

@end
