
@interface PBFPosterGalleryItemOptions : NSObject <NSCopying, NSSecureCoding> {
    bool  _allowsSystemSuggestedComplications;
    bool  _allowsSystemSuggestedComplicationsInLandscape;
    NSString * _descriptiveTextLocalizationKey;
    NSString * _displayNameLocalizationKey;
    long long  _featuredConfidenceLevel;
    long long  _focus;
    bool  _hero;
    PBFPosterGallerySuggestedComplication * _inlineComplication;
    NSArray * _modularComplications;
    NSArray * _modularLandscapeComplications;
    bool  _onlyEligibleForMadeForFocusSection;
    long long  _photoSubtype;
    bool  _shouldShowAsShuffleStack;
    NSString * _spokenNameLocalizationKey;
}

@property (nonatomic, readonly) bool allowsSystemSuggestedComplications;
@property (nonatomic, readonly) bool allowsSystemSuggestedComplicationsInLandscape;
@property (nonatomic, readonly, copy) NSString *descriptiveTextLocalizationKey;
@property (nonatomic, readonly, copy) NSString *displayNameLocalizationKey;
@property (nonatomic, readonly) long long featuredConfidenceLevel;
@property (nonatomic, readonly) long long focus;
@property (getter=isHero, nonatomic, readonly) bool hero;
@property (nonatomic, readonly, copy) PBFPosterGallerySuggestedComplication *inlineComplication;
@property (nonatomic, readonly, copy) NSArray *modularComplications;
@property (nonatomic, readonly, copy) NSArray *modularLandscapeComplications;
@property (getter=isOnlyEligibleForMadeForFocusSection, nonatomic, readonly) bool onlyEligibleForMadeForFocusSection;
@property (nonatomic, readonly) long long photoSubtype;
@property (nonatomic, readonly) bool shouldShowAsShuffleStack;
@property (nonatomic, readonly, copy) NSString *spokenNameLocalizationKey;

+ (id)itemOptionsWithDictionaryRepresentation:(id)arg1 error:(id*)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)allowsSystemSuggestedComplications;
- (bool)allowsSystemSuggestedComplicationsInLandscape;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)descriptiveTextLocalizationKey;
- (id)dictionaryRepresentation;
- (id)displayNameLocalizationKey;
- (void)encodeWithCoder:(id)arg1;
- (long long)featuredConfidenceLevel;
- (long long)focus;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithModularComplications:(id)arg1 modularLandscapeComplications:(id)arg2 inlineComplication:(id)arg3 allowsSystemSuggestedComplications:(bool)arg4 allowsSystemSuggestedComplicationsInLandscape:(bool)arg5 featuredConfidenceLevel:(long long)arg6 displayNameLocalizationKey:(id)arg7 spokenNameLocalizationKey:(id)arg8 descriptiveTextLocalizationKey:(id)arg9 hero:(bool)arg10 shouldShowAsShuffleStack:(bool)arg11 photoSubtype:(long long)arg12 focus:(long long)arg13 onlyEligibleForMadeForFocusSection:(bool)arg14;
- (id)initWithProactiveRepresentation:(id)arg1;
- (id)inlineComplication;
- (bool)isEqual:(id)arg1;
- (bool)isHero;
- (bool)isOnlyEligibleForMadeForFocusSection;
- (id)modularComplications;
- (id)modularLandscapeComplications;
- (long long)photoSubtype;
- (id)proactiveRepresentation;
- (bool)shouldShowAsShuffleStack;
- (id)spokenNameLocalizationKey;

@end
