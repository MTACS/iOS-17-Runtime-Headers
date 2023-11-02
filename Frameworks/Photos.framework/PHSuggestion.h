
@interface PHSuggestion : PHAssetCollection <PGSuggestion, PXDisplaySuggestion> {
    NSData * _actionData;
    NSDictionary * _actionProperties;
    NSDate * _activationDate;
    unsigned long long  _approximateCount;
    unsigned long long  _approximatePhotosCount;
    unsigned long long  _approximateVideosCount;
    NSArray * _assets;
    unsigned long long  _availableFeatures;
    NSString * _context;
    NSDate * _creationDate;
    NSDate * _expungeDate;
    unsigned short  _featuredState;
    NSData * _featuresData;
    NSDictionary * _featuresProperties;
    unsigned short  _notificationState;
    NSDate * _relevantUntilDate;
    unsigned short  _sharingComposition;
    unsigned short  _state;
    NSString * _subtitle;
    unsigned short  _subtype;
    unsigned short  _type;
    long long  _version;
}

@property (nonatomic, readonly) NSDictionary *actionProperties;
@property (nonatomic, readonly) NSDate *activationDate;
@property (nonatomic, readonly) unsigned long long availableFeatures;
@property (nonatomic, readonly) bool containsUnverifiedPersons;
@property (nonatomic, readonly) NSString *context;
@property (nonatomic, readonly) NSDate *creationDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) NSDate *expungeDate;
@property (nonatomic, readonly) unsigned short featuredState;
@property (nonatomic, readonly) NSSet *features;
@property (nonatomic, readonly) NSDictionary *featuresProperties;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isInvalid;
@property (nonatomic, readonly) NSArray *keyAssets;
@property (nonatomic, readonly, copy) NSString *localIdentifier;
@property (nonatomic, readonly) NSString *localizedSubtitle;
@property (nonatomic, readonly) NSString *localizedTitle;
@property (nonatomic, readonly) unsigned char notificationQuality;
@property (nonatomic, readonly) unsigned short notificationState;
@property (nonatomic, readonly, copy) NSArray *reasons;
@property (nonatomic, readonly) id recipe;
@property (nonatomic, readonly) unsigned long long relevanceDurationInDays;
@property (nonatomic, readonly) NSDate *relevantUntilDate;
@property (nonatomic, readonly) NSArray *representativeAssets;
@property (nonatomic, readonly) double score;
@property (nonatomic, readonly) unsigned short sharingComposition;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) unsigned short state;
@property (nonatomic, readonly, copy) NSString *subtitle;
@property (nonatomic, readonly) NSString *subtitle;
@property (nonatomic, readonly) unsigned short subtype;
@property (nonatomic, readonly, copy) NSArray *suggestedPersonLocalIdentifiers;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *title;
@property (nonatomic, readonly) unsigned short type;
@property (nonatomic, readonly) NSDate *universalEndDate;
@property (nonatomic, readonly) NSDate *universalStartDate;
@property (nonatomic, readonly) long long version;

// Image: /System/Library/Frameworks/Photos.framework/Photos

+ (id)allAmbientSuggestionSubtypes;
+ (id)allFeaturedStateEnabledSuggestionTypes;
+ (id)allFeaturedStateEnabledSuggestionTypesForWallpaper;
+ (id)allFeaturedStateEnabledSuggestionTypesForWidget;
+ (id)allShuffleWallpaperSuggestionSubtypes;
+ (id)allTopWallpaperSuggestionSubtypes;
+ (id)availableSuggestionTypeInfosWithOptions:(id)arg1 photoLibrary:(id)arg2;
+ (id)entityKeyMap;
+ (id)fetchAllFeaturedStateEnabledSuggestionsWithOptions:(id)arg1;
+ (id)fetchPredicateForSharingFilter:(unsigned short)arg1;
+ (id)fetchSuggestionsWithOptions:(id)arg1;
+ (id)fetchSuggestionsWithState:(unsigned short)arg1 ofType:(unsigned short)arg2 withOptions:(id)arg3;
+ (id)fetchSuggestionsWithState:(unsigned short)arg1 withOptions:(id)arg2;
+ (id)fetchType;
+ (id)fetchWallpaperSuggestionsWithFeaturedState:(unsigned short)arg1 withOptions:(id)arg2;
+ (id)fetchWidgetSuggestionsWithFeaturedState:(unsigned short)arg1 withOptions:(id)arg2;
+ (bool)hasPersonLocalIdentifierInContextForSuggestionSubype:(unsigned short)arg1;
+ (id)identifierCode;
+ (double)lifetimeAfterBecomingActive;
+ (id)localIdentifierWithUUID:(id)arg1;
+ (id)managedEntityName;
+ (bool)managedObjectSupportsSharingComposition;
+ (bool)managedObjectSupportsTrashedState;
+ (id)predicateForAllAmbientSuggestions;
+ (id)predicateForAllFeaturedStateEnabledSuggestionTypesForWallpaper;
+ (id)predicateForAllFeaturedStateEnabledSuggestionTypesForWidget;
+ (id)predicateForAllShuffleWallpaperSuggestions;
+ (id)predicateForAllTopWallpaperSuggestions;
+ (id)propertiesToFetchWithHint:(unsigned long long)arg1;
+ (id)suggestionInfosWithOptions:(id)arg1 photoLibrary:(id)arg2;
+ (id)transformValueExpression:(id)arg1 forKeyPath:(id)arg2;
+ (id)transientSuggestionWithInfo:(id)arg1 photoLibrary:(id)arg2;

- (void).cxx_destruct;
- (id)actionProperties;
- (id)activationDate;
- (id)assets;
- (unsigned long long)availableFeatures;
- (bool)containsUnverifiedPersons;
- (id)context;
- (id)creationDate;
- (id)debugDescription;
- (id)description;
- (unsigned long long)estimatedAssetCount;
- (unsigned long long)estimatedPhotosCount;
- (unsigned long long)estimatedVideosCount;
- (id)expungeDate;
- (unsigned short)featuredState;
- (id)featuresProperties;
- (id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3;
- (id)localizedSubtitle;
- (unsigned short)notificationState;
- (id)predicateForAllAssets;
- (id)predicateForAllMomentsFromRepresentativeAssets;
- (id)relevantUntilDate;
- (unsigned short)sharingComposition;
- (unsigned short)state;
- (id)subtitle;
- (unsigned short)subtype;
- (unsigned short)type;
- (long long)version;

// Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis

- (bool)containsUnverifiedPersons;
- (id)features;
- (id)keyAssets;
- (unsigned char)notificationQuality;
- (id)recipe;
- (unsigned long long)relevanceDurationInDays;
- (id)representativeAssets;
- (id)subtitle;
- (id)suggestedPersonLocalIdentifiers;
- (id)universalEndDate;
- (id)universalStartDate;

// Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore

+ (id)px_keyAssetFilteringPredicate;

- (id)fetchKeyAssets;

@end
