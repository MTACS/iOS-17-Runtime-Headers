
@interface _UILabelSynthesizedContent : NSObject <NSCopying, NSMutableCopying> {
    _UILabelContent * _content;
    struct { 
        unsigned int eliminateShadows : 1; 
        unsigned int overallWritingDirectionFollowsLayoutDirection : 1; 
        unsigned int disableLinkHypenation : 1; 
        unsigned int hasExplicitBaselineOffset : 1; 
    }  _flags;
    UIColor * _overrideTextColor;
    long long  _semanticContentAttribute;
    NSTextEncapsulation * _textEncapsulation;
}

@property (nonatomic, readonly) _UILabelContent *content;
@property (nonatomic, readonly) bool disableLinkHypenation;
@property (nonatomic, readonly) bool eliminateShadows;
@property (nonatomic, readonly) bool hasExplicitBaselineOffset;
@property (nonatomic, readonly) unsigned long long length;
@property (nonatomic, readonly) bool overallWritingDirectionFollowsLayoutDirection;
@property (nonatomic, readonly) UIColor *overrideTextColor;
@property (nonatomic, readonly) long long semanticContentAttribute;
@property (nonatomic, readonly) NSTextEncapsulation *textEncapsulation;

- (void).cxx_destruct;
- (void)_disablingHyphenationIfURLsDetectedInAttributedString:(id)arg1;
- (void)_isolateStringWritingDirectionInAttributedString:(id)arg1;
- (id)_synthesizedAttributedString;
- (id)content;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)disableLinkHypenation;
- (bool)eliminateShadows;
- (bool)hasExplicitBaselineOffset;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (unsigned long long)length;
- (id)mutableCopy;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (bool)overallWritingDirectionFollowsLayoutDirection;
- (id)overrideTextColor;
- (bool)reverseNaturalAlignment;
- (long long)semanticContentAttribute;
- (id)synthesizedAttributedString;
- (id)synthesizedAttributes;
- (id)textEncapsulation;

@end
