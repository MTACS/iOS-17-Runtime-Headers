
@interface PFParallaxPaletteSuggestion : NSObject <NSSecureCoding> {
    PFParallaxColor * _primaryColor;
    PFParallaxColor * _secondaryColor;
}

@property (nonatomic, readonly) PFParallaxColor *primaryColor;
@property (nonatomic, readonly) PFParallaxColor *secondaryColor;

+ (id)dictionaryWithPaletteSuggestion:(id)arg1;
+ (id)paletteSuggestionWithDictionary:(id)arg1 error:(id*)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPrimaryColor:(id)arg1 secondaryColor:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToSuggestion:(id)arg1;
- (id)primaryColor;
- (id)secondaryColor;

@end
