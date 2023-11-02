
@interface EMTTranslationOptions : NSObject <NSCopying, NSSecureCoding> {
    bool  _enableDisambiguationAlternatives;
}

@property (nonatomic) bool enableDisambiguationAlternatives;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)enableDisambiguationAlternatives;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)setEnableDisambiguationAlternatives:(bool)arg1;

@end
