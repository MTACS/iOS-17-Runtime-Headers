
@interface PHQuestion : PHObject {
    NSDictionary * _additionalInfo;
    NSDate * _creationDate;
    unsigned short  _displayType;
    NSString * _entityIdentifier;
    unsigned short  _entityType;
    short  _questionVersion;
    double  _score;
    unsigned short  _state;
    unsigned short  _type;
}

@property (nonatomic, readonly) NSDictionary *additionalInfo;
@property (nonatomic, readonly) NSDate *creationDate;
@property (nonatomic, readonly) unsigned short displayType;
@property (nonatomic, readonly) NSString *entityIdentifier;
@property (nonatomic, readonly) unsigned short entityType;
@property (nonatomic, readonly) unsigned short memoryMusicQualityFeedbackType;
@property (nonatomic, readonly) NSString *px_displayTitle;
@property (nonatomic, readonly) short questionVersion;
@property (nonatomic, readonly) double score;
@property (nonatomic, readonly) unsigned short state;
@property (nonatomic, readonly) unsigned short type;

// Image: /System/Library/Frameworks/Photos.framework/Photos

+ (id)entityKeyMap;
+ (id)fetchAnsweredQuestionCountsWithOptions:(id)arg1;
+ (id)fetchAnsweredQuestionsWithOptions:(id)arg1 validQuestionsOnly:(bool)arg2;
+ (id)fetchAnsweredYesOrNoQuestionsWithOptions:(id)arg1 validQuestionsOnly:(bool)arg2;
+ (id)fetchInvalidatedQuestionsWithOptions:(id)arg1;
+ (id)fetchQuestionsWithLocalIdentifiers:(id)arg1 options:(id)arg2 validQuestionsOnly:(bool)arg3;
+ (id)fetchQuestionsWithOptions:(id)arg1 validQuestionsOnly:(bool)arg2;
+ (id)fetchType;
+ (id)fetchUnansweredQuestionsWithOptions:(id)arg1 validQuestionsOnly:(bool)arg2;
+ (id)identifierCode;
+ (id)managedEntityName;
+ (id)propertiesToFetchWithHint:(unsigned long long)arg1;
+ (id)questionsWithValidEntitiesFromQuestions:(id)arg1 photoLibrary:(id)arg2;
+ (id)stringForQuestionType:(unsigned short)arg1;
+ (id)transformValueExpression:(id)arg1 forKeyPath:(id)arg2;

- (void).cxx_destruct;
- (id)additionalInfo;
- (Class)changeRequestClass;
- (id)creationDate;
- (id)description;
- (unsigned short)displayType;
- (id)entityIdentifier;
- (unsigned short)entityType;
- (id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3;
- (short)questionVersion;
- (double)score;
- (unsigned short)state;
- (unsigned short)type;

// Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore

+ (id)_px_configurationCache;
+ (long long)_px_fetchRequestIdAndIncrement;
+ (id)_px_requestQueue;
+ (id)fetchMemoryMusicQualityQuestionForMemory:(id)arg1 audioAsset:(id)arg2;

- (id)_px_fetchOptions;
- (id)_px_localizedQuestionTextForAlbumClassification;
- (id)_px_localizedQuestionTextForCameraLibrarySwitch;
- (id)_px_localizedQuestionTextForExhaustiveMomentLabelling;
- (id)_px_localizedQuestionTextForExternalAssetRelevance;
- (id)_px_localizedQuestionTextForFeaturedPhoto;
- (id)_px_localizedQuestionTextForFrequentLocation;
- (id)_px_localizedQuestionTextForHighlightTitlingForTitle:(id)arg1;
- (id)_px_localizedQuestionTextForLocationRepresentativeAsset:(id)arg1;
- (id)_px_localizedQuestionTextForMemoryQuality;
- (id)_px_localizedQuestionTextForPetInitial:(bool)arg1;
- (id)_px_localizedQuestionTextForSharedLibraryAssets;
- (id)_px_localizedQuestionTextForSharedLibraryStart;
- (id)_px_localizedQuestionTextForSocialGroups;
- (id)_px_localizedQuestionTextForSyndicatedAssets;
- (id)_px_localizedQuestionTextForTripKeyAssetWithTripName:(id)arg1;
- (id)_px_localizedQuestionTextForTripTitlingForTitle:(id)arg1;
- (id)_px_localizedQuestionTextForWallpaper;
- (id)_px_localizedQuestionTextFromAgeCategory:(id)arg1;
- (id)_px_localizedQuestionTextFromBusinessName:(id)arg1;
- (id)_px_localizedQuestionTextFromHolidayName:(id)arg1;
- (id)_px_localizedQuestionTextFromMeaningLabel:(id)arg1;
- (id)_px_localizedQuestionTextFromMemoryMusicEnergySongTitle:(id)arg1;
- (id)_px_localizedQuestionTextFromMemoryMusicQualitySongTitle:(id)arg1;
- (id)_px_localizedQuestionTextFromPersonActivityMeaningLabel:(id)arg1;
- (id)_px_localizedQuestionTextFromPersonContactMatchingContactName:(id)arg1;
- (id)_px_localizedQuestionTextFromPublicEventName:(id)arg1;
- (id)_px_localizedQuestionTextFromRelationshipLabel:(id)arg1 initial:(bool)arg2;
- (id)_px_requestQueue_configurationForAlbum;
- (id)_px_requestQueue_configurationForAsset;
- (id)_px_requestQueue_configurationForDayHighlight;
- (id)_px_requestQueue_configurationForExternalAssetRelevance;
- (id)_px_requestQueue_configurationForMemory;
- (id)_px_requestQueue_configurationForMemory:(id)arg1 assetCollection:(id)arg2 customKeyAssetIdentifier:(id)arg3;
- (id)_px_requestQueue_configurationForMoment;
- (id)_px_requestQueue_configurationForPerson;
- (id)_px_requestQueue_configurationForPersonGroup;
- (id)_px_requestQueue_configurationForText;
- (id)_px_requestQueue_configurationForTrip;
- (id)_px_requestQueue_fetchConfiguration;
- (unsigned short)memoryMusicQualityFeedbackType;
- (bool)px_assetCollectionAndAssetFetchResultForAsset:(id)arg1 assetCollection:(id*)arg2 assetFetchResult:(id*)arg3;
- (id)px_displayTitle;
- (long long)px_requestConfigurationWithResultHandler:(id /* block */)arg1;

@end
