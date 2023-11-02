
@interface PHPerson : PHObject <PGPersonResult, PNPersonProtocol, PXDisplayPerson, PXPerson, PXSelectionAssetContainer> {
    unsigned short  _ageType;
    long long  _assetSortOrder;
    NSDictionary * _contactMatchingDictionary;
    short  _detectionType;
    NSString * _displayName;
    long long  _faceCount;
    unsigned short  _genderType;
    bool  _inPersonNamingModel;
    unsigned long long  _manualOrder;
    NSString * _mdID;
    double  _mergeCandidateConfidence;
    NSString * _name;
    unsigned long long  _persistedSuggestionForClient;
    NSString * _personUri;
    unsigned short  _questionType;
    unsigned short  _sexType;
    long long  _type;
    long long  _verifiedType;
}

@property (nonatomic, readonly) unsigned short ageType;
@property (nonatomic, readonly) NSString *anonymizedName;
@property (nonatomic, readonly) long long assetSortOrder;
@property (nonatomic, readonly) NSDate *birthdayDate;
@property (nonatomic, readonly) NSString *contactIdentifier;
@property (nonatomic, readonly) NSDictionary *contactMatchingDictionary;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) short detectionType;
@property (nonatomic, readonly) short detectionType;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) unsigned long long faceCount;
@property (nonatomic, readonly) long long faceCount;
@property (nonatomic, readonly) bool favorite;
@property (nonatomic, readonly) NSString *fullName;
@property (nonatomic, readonly) unsigned short genderType;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool hidden;
@property (getter=isInPersonNamingModel, nonatomic, readonly) bool inPersonNamingModel;
@property (nonatomic, readonly) bool isInferredChild;
@property (readonly) bool isPersonModel;
@property (readonly) bool isVerified;
@property (nonatomic) bool isVerified;
@property (nonatomic, readonly) bool isVerified;
@property (nonatomic, retain) <PNFaceProtocol> *keyFace;
@property (nonatomic, readonly) NSString *keywordDescription;
@property (nonatomic, readonly) NSString *localIdentifier;
@property (nonatomic) long long manualOrder;
@property (nonatomic, readonly) unsigned long long manualOrder;
@property (nonatomic, readonly, copy) NSString *mdID;
@property (nonatomic, readonly) double mergeCandidateConfidence;
@property (readonly) NSString *name;
@property (nonatomic, readonly) NSString *name;
@property (readonly) unsigned long long numberOfAssets;
@property (nonatomic, readonly) unsigned long long persistedSuggestionForClient;
@property (nonatomic, readonly) NSString *personUri;
@property (nonatomic, readonly) bool px_isEmpty;
@property (readonly) bool px_isHuman;
@property (readonly) bool px_isPet;
@property (readonly) NSDate *px_keyPhotoDate;
@property (readonly) NSString *px_localIdentifier;
@property (readonly) NSString *px_localizedName;
@property (nonatomic, readonly) NSString *px_localizedName;
@property (readonly) NSString *px_longStyleLocalizedName;
@property (nonatomic, readonly) NSPersonNameComponents *px_nameComponents;
@property (nonatomic, readonly) NSURL *px_navigationURL;
@property (nonatomic, readonly) unsigned short questionType;
@property (nonatomic, readonly) unsigned short sexType;
@property (nonatomic, readonly) NSString *suggestedContactIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long type;
@property (getter=isVerified, nonatomic, readonly) bool verified;
@property (nonatomic, readonly) long long verifiedType;

// Image: /System/Library/Frameworks/Photos.framework/Photos

+ (id)_assetLocalIdentifiersForAssetCollection:(id)arg1;
+ (id)_composePropertiesToFetchWithHint:(unsigned long long)arg1;
+ (id)_convertToPersonSuggestion:(id)arg1 photoLibrary:(id)arg2;
+ (id)_fetchSuggestedPersonsForClient:(unsigned long long)arg1 options:(id)arg2;
+ (id)_fetchSuggestedPersonsForRecipients:(id)arg1 options:(id)arg2 photoLibrary:(id)arg3;
+ (id)_fetchSuggestedRecipientsForFocusedAssetCollection:(id)arg1 assetCollection:(id)arg2 options:(id)arg3 client:(unsigned long long)arg4;
+ (id)_momentLocalIdentifiersForAssetCollection:(id)arg1;
+ (id)_packageSuggestionList:(id)arg1 photoLibrary:(id)arg2;
+ (id)_personSuggestionMarkedAsConfirmed:(bool)arg1 fromPersonSuggestion:(id)arg2;
+ (long long)_personSuggestionsForPerson:(id)arg1 confirmedPersonSuggestions:(id)arg2 rejectedPersonSuggestions:(id)arg3 fromClient:(id)arg4 completion:(id /* block */)arg5;
+ (id)_requestSuggestedPersonsForClient:(unsigned long long)arg1 options:(id)arg2;
+ (id)batchFetchContactInferencesForPersons:(id)arg1 queryOptions:(unsigned long long)arg2;
+ (id)batchFetchRelationshipInferencesForPersons:(id)arg1;
+ (id)batchFetchSuggestedRecipientsForAssets:(id)arg1 options:(id)arg2;
+ (id)corePropertiesToFetch;
+ (id)displayNameFromContact:(id)arg1;
+ (id)entityKeyMap;
+ (id)fetchAssociatedPersonsGroupedByFaceGroupLocalIdentifierForFaceGroups:(id)arg1 options:(id)arg2;
+ (id)fetchFinalMergeTargetPersonsForPersonWithUUID:(id)arg1 options:(id)arg2;
+ (id)fetchInvalidMergeCandidatePersonsForPerson:(id)arg1 options:(id)arg2;
+ (id)fetchMergeCandidatePersonsForPerson:(id)arg1 options:(id)arg2;
+ (id)fetchMergeCandidateWithConfidencePersonsForPerson:(id)arg1 options:(id)arg2;
+ (id)fetchPersonAssociatedWithFaceGroup:(id)arg1 options:(id)arg2;
+ (id)fetchPersonCountGroupedByAssetLocalIdentifierForAssets:(id)arg1 options:(id)arg2;
+ (id)fetchPersonForFaceCrop:(id)arg1 options:(id)arg2;
+ (id)fetchPersonForShareParticipant:(id)arg1 options:(id)arg2;
+ (id)fetchPersonUUIDsGroupedByAssetUUIDForAssetUUIDs:(id)arg1 options:(id)arg2;
+ (id)fetchPersonWithFace:(id)arg1 options:(id)arg2;
+ (id)fetchPersonsForAssetCollection:(id)arg1 options:(id)arg2;
+ (id)fetchPersonsForContactIdentifiers:(id)arg1 options:(id)arg2;
+ (id)fetchPersonsForContacts:(id)arg1 options:(id)arg2;
+ (id)fetchPersonsForReferences:(id)arg1 photoLibrary:(id)arg2;
+ (id)fetchPersonsGroupedByAssetLocalIdentifierForAssets:(id)arg1 options:(id)arg2;
+ (id)fetchPersonsInAsset:(id)arg1 options:(id)arg2;
+ (id)fetchPersonsInAssets:(id)arg1 options:(id)arg2;
+ (id)fetchPersonsInAssetsFetchResult:(id)arg1 options:(id)arg2;
+ (id)fetchPersonsWithAutonamingSuggestionFeatureUserFeedbackWithOptions:(id)arg1;
+ (id)fetchPersonsWithFaces:(id)arg1 options:(id)arg2;
+ (id)fetchPersonsWithLocalIdentifiers:(id)arg1 options:(id)arg2;
+ (id)fetchPersonsWithMdIDs:(id)arg1 options:(id)arg2;
+ (id)fetchPersonsWithObjectIDs:(id)arg1 options:(id)arg2;
+ (id)fetchPersonsWithOptions:(id)arg1;
+ (id)fetchPersonsWithQuestionType:(unsigned short)arg1 options:(id)arg2;
+ (id)fetchPersonsWithType:(long long)arg1 options:(id)arg2;
+ (id)fetchPersonsWithUserFeedbackOfAllTypesWithOptions:(id)arg1;
+ (id)fetchPersonsWithUserFeedbackWithOptions:(id)arg1;
+ (id)fetchPredicateFromComparisonPredicate:(id)arg1 options:(id)arg2;
+ (id)fetchRejectedPersonsForFace:(id)arg1 options:(id)arg2;
+ (id)fetchSuggestedPersonsForAssetCollection:(id)arg1 options:(id)arg2;
+ (id)fetchSuggestedPersonsForClient:(unsigned long long)arg1 options:(id)arg2;
+ (id)fetchSuggestedPersonsForFocusedAssetCollection:(id)arg1 options:(id)arg2;
+ (id)fetchSuggestedRecipientsForAssetCollection:(id)arg1 options:(id)arg2;
+ (id)fetchSuggestedRecipientsForFocusedAssetCollection:(id)arg1 options:(id)arg2;
+ (id)fetchType;
+ (id)fetchVerifiedPersonUUIDsGroupedByAssetUUIDForAssetUUIDs:(id)arg1 options:(id)arg2;
+ (id)fullNameFromContact:(id)arg1;
+ (id)identifierCode;
+ (id)identifierPropertiesToFetch;
+ (id)localIdentifierExpressionForFetchRequests;
+ (id)managedEntityName;
+ (bool)managedObjectSupportsDetectionType;
+ (bool)managedObjectSupportsKeyFaces;
+ (bool)managedObjectSupportsPersonFilters;
+ (bool)managedObjectSupportsTorsoOnly;
+ (id)momentCountsByPersonUUIDForPersonsWithUUIDs:(id)arg1 afterDate:(id)arg2 photoLibrary:(id)arg3;
+ (id)personSuggestionsForPerson:(id)arg1 confirmedPersonSuggestions:(id)arg2 rejectedPersonSuggestions:(id)arg3;
+ (long long)personSuggestionsForPerson:(id)arg1 confirmedPersonSuggestions:(id)arg2 rejectedPersonSuggestions:(id)arg3 completion:(id /* block */)arg4;
+ (id)personToKeepForCloudConsistencyFromPersons:(id)arg1;
+ (id)propertiesToFetchWithHint:(unsigned long long)arg1;
+ (unsigned long long)propertyFetchHintsForPropertySets:(id)arg1;
+ (id)propertySetAccessorsByPropertySet;
+ (Class)propertySetClassForPropertySet:(id)arg1;
+ (id)propertySetsForPropertyFetchHints:(unsigned long long)arg1;
+ (id)transformValueExpression:(id)arg1 forKeyPath:(id)arg2;
+ (long long)updateKeyFacesOfPersons:(id)arg1 forceUpdate:(bool)arg2 completion:(id /* block */)arg3;

- (void).cxx_destruct;
- (id)_createPropertyObjectOfClass:(Class)arg1;
- (id)_createPropertyObjectOfClass:(Class)arg1 preFetchedProperties:(id)arg2;
- (unsigned short)ageType;
- (long long)assetSortOrder;
- (Class)changeRequestClass;
- (id)contactMatchingDictionary;
- (id)description;
- (short)detectionType;
- (id)displayName;
- (long long)faceCount;
- (unsigned short)genderType;
- (id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3;
- (bool)isInPersonNamingModel;
- (bool)isVerified;
- (id)linkedContactWithKeysToFetch:(id)arg1;
- (unsigned long long)manualOrder;
- (void)markAsNeedingKeyFace;
- (id)mdID;
- (double)mergeCandidateConfidence;
- (id)name;
- (id)objectReference;
- (unsigned long long)persistedSuggestionForClient;
- (id)personUri;
- (unsigned short)questionType;
- (unsigned short)sexType;
- (long long)type;
- (id)userFeedbackProperties;
- (long long)verifiedType;

// Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon

- (id)createPhotoLibraryPerson;

// Image: /System/Library/PrivateFrameworks/HomeKitDaemonLegacy.framework/HomeKitDaemonLegacy

- (id)createPhotoLibraryPerson;

// Image: /System/Library/PrivateFrameworks/MediaAnalysis.framework/MediaAnalysis

- (id)anonymizedName;
- (bool)favorite;
- (bool)hidden;
- (id)keyFace;
- (id)personLocalIdentifiers;
- (void)pn_addMergeCandidatePersons:(id)arg1;
- (void)setIsVerified:(bool)arg1;
- (void)setKeyFace:(id)arg1;
- (void)setManualOrder:(long long)arg1;

// Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph

+ (unsigned long long)type;

- (id)birthdayDate;
- (long long)compareToPerson:(id)arg1;
- (id)contactIdentifier;
- (id)fullName;
- (bool)isInferredChild;
- (id)keywordDescription;
- (id)suggestedContactIdentifier;

// Image: /System/Library/PrivateFrameworks/PhotosIntelligence.framework/PhotosIntelligence

- (id)anonymizedName;
- (bool)favorite;
- (bool)hidden;
- (id)keyFace;
- (id)personLocalIdentifiers;
- (void)pn_addMergeCandidatePersons:(id)arg1;
- (void)setIsVerified:(bool)arg1;
- (void)setKeyFace:(id)arg1;
- (void)setManualOrder:(long long)arg1;

// Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore

+ (void)px_loadRepresentativeFacesForPersons:(id)arg1;
+ (id)px_localizedNameFromContact:(id)arg1;

- (id)_px_localizedNameWithStyle:(long long)arg1;
- (bool)isPersonModel;
- (unsigned long long)numberOfAssets;
- (bool)px_isEmpty;
- (bool)px_isHuman;
- (bool)px_isPet;
- (bool)px_isSameDetectionTypeAsPerson:(id)arg1;
- (id)px_keyPhotoDate;
- (id)px_localIdentifier;
- (id)px_localizedName;
- (id)px_longStyleLocalizedName;
- (id)px_nameComponents;
- (id)px_navigationURL;
- (int)requestFaceCropImageWithTargetSize:(struct CGSize { double x1; double x2; })arg1 displayScale:(double)arg2 cropFactor:(long long)arg3 style:(long long)arg4 cacheResult:(bool)arg5 synchronous:(bool)arg6 resultHandler:(id /* block */)arg7;
- (void)requestFaceTileImageWithTargetSize:(struct CGSize { double x1; double x2; })arg1 cropFactor:(unsigned long long)arg2 style:(unsigned long long)arg3 cacheResult:(bool)arg4 boundFaceRect:(bool)arg5 completionBlock:(id /* block */)arg6;

@end
