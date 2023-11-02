
@interface _UILabelConfigurationInternal : NSObject <NSCopying, NSSecureCoding> {
    bool  __hasResolvedLabelTextAlignmentMirrored;
    double  __screenScale;
    struct { 
        unsigned int autotracksTextToFit : 1; 
        unsigned int shouldDrawUnderlinesLikeWebKit : 1; 
        unsigned int textAlignmentFollowsWritingDirection : 1; 
        unsigned int textAlignmentMirrored : 1; 
        unsigned int usesSimpleTextEffects : 1; 
        unsigned int overallWritingDirectionFollowsLayoutDirection : 1; 
        unsigned int hyphenationFactorIgnoredIfURLsDetected : 1; 
        unsigned int supportMultilineShrinkToFit : 1; 
        unsigned int baselineAdjustment : 2; 
        unsigned int hasCustomized_autotracksTextToFit : 1; 
        unsigned int hasCustomized_shouldDrawUnderlinesLikeWebKit : 1; 
        unsigned int hasCustomized_textAlignmentFollowsWritingDirection : 1; 
        unsigned int hasCustomized_textAlignmentMirrored : 1; 
        unsigned int hasCustomized_usesSimpleTextEffects : 1; 
        unsigned int hasCustomized_cuiCatalog : 1; 
        unsigned int hasCustomized_cuiStyleEffectConfiguration : 1; 
        unsigned int hasCustomized_lineSpacing : 1; 
        unsigned int hasCustomized_hyphenationFactorIgnoredIfURLsDetected : 1; 
        unsigned int hasCustomized_baselineAdjustment : 1; 
        unsigned int hasCustomized_overallWritingDirectionFollowsLayoutDirection : 1; 
        unsigned int hasCustomized_supportMultilineShrinkToFit : 1; 
        unsigned int hasCustomized_disabledTextColor : 1; 
    }  _configurationFlags;
    UIColor * _disabledTextColor;
    double  _lineSpacing;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
