
@interface ATXComplicationSuggestionParameters : NSObject {
    NSDictionary * _parameters;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (bool)alwaysUseFallbackSets;
- (id)appsToPriorsMapping;
- (id)fallbackSetForLandscape;
- (id)fallbackSetsForSet1;
- (id)fallbackSetsForSet2;
- (id)fallbackSetsForSet3;
- (id)init;
- (id)inlineComplicationsToPriorsMapping;
- (id)modularComplicationsToPriorsMapping;
- (bool)showPreviewsInPosterGallery;

@end
