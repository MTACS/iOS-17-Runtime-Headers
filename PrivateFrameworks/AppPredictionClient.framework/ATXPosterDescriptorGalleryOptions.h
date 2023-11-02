
@interface ATXPosterDescriptorGalleryOptions : NSObject <NSCopying, NSSecureCoding> {
    bool  _allowsSystemSuggestedComplications;
    bool  _allowsSystemSuggestedComplicationsInLandscape;
    NSString * _descriptiveTextLocalizationKey;
    NSString * _displayNameLocalizationKey;
    long long  _featuredConfidenceLevel;
    long long  _focus;
    bool  _hero;
    ATXComplication * _inlineComplication;
    NSArray * _modularComplications;
    NSArray * _modularLandscapeComplications;
    bool  _onlyEligibleForMadeForFocusSection;
    long long  _photoSubtype;
    bool  _shouldShowAsShuffleStack;
    NSString * _spokenNameLocalizationKey;
}

@property (nonatomic) bool allowsSystemSuggestedComplications;
@property (nonatomic) bool allowsSystemSuggestedComplicationsInLandscape;
@property (nonatomic, copy) NSString *descriptiveTextLocalizationKey;
@property (nonatomic, readonly, copy) NSDictionary *dictionaryRepresentation;
@property (nonatomic, copy) NSString *displayNameLocalizationKey;
@property (nonatomic) long long featuredConfidenceLevel;
@property (nonatomic) long long focus;
@property (getter=isHero, nonatomic) bool hero;
@property (nonatomic, copy) ATXComplication *inlineComplication;
@property (nonatomic, copy) NSArray *modularComplications;
@property (nonatomic, copy) NSArray *modularLandscapeComplications;
@property (getter=isOnlyEligibleForMadeForFocusSection, nonatomic) bool onlyEligibleForMadeForFocusSection;
@property (nonatomic) long long photoSubtype;
@property (nonatomic) bool shouldShowAsShuffleStack;
@property (nonatomic, copy) NSString *spokenNameLocalizationKey;

// Image: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient

+ (id)galleryOptionsFromDictionaryRepresentation:(id)arg1 error:(id*)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)allowsSystemSuggestedComplications;
- (bool)allowsSystemSuggestedComplicationsInLandscape;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptiveTextLocalizationKey;
- (id)dictionaryRepresentation;
- (id)displayNameLocalizationKey;
- (void)encodeWithCoder:(id)arg1;
- (long long)featuredConfidenceLevel;
- (long long)focus;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)inlineComplication;
- (bool)isBlankTemplate;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToATXPosterDescriptorGalleryOptions:(id)arg1;
- (bool)isHero;
- (bool)isOnlyEligibleForMadeForFocusSection;
- (id)modularComplications;
- (id)modularLandscapeComplications;
- (long long)photoSubtype;
- (id)preferredComplications;
- (id)preferredInlineComplication;
- (void)setAllowsSystemSuggestedComplications:(bool)arg1;
- (void)setAllowsSystemSuggestedComplicationsInLandscape:(bool)arg1;
- (void)setBlankTemplate:(bool)arg1;
- (void)setDescriptiveTextLocalizationKey:(id)arg1;
- (void)setDisplayNameLocalizationKey:(id)arg1;
- (void)setFeaturedConfidenceLevel:(long long)arg1;
- (void)setFocus:(long long)arg1;
- (void)setHero:(bool)arg1;
- (void)setInlineComplication:(id)arg1;
- (void)setModularComplications:(id)arg1;
- (void)setModularLandscapeComplications:(id)arg1;
- (void)setOnlyEligibleForMadeForFocusSection:(bool)arg1;
- (void)setPhotoSubtype:(long long)arg1;
- (void)setPreferredComplications:(id)arg1;
- (void)setPreferredInlineComplication:(id)arg1;
- (void)setShouldShowAsShuffleStack:(bool)arg1;
- (void)setSpokenNameLocalizationKey:(id)arg1;
- (bool)shouldShowAsShuffleStack;
- (id)spokenNameLocalizationKey;

// Image: /System/Library/PrivateFrameworks/PosterBoard.framework/PosterBoard

- (id)initWithPosterBoardRepresentation:(id)arg1;
- (id)posterBoardRepresentation;

@end
