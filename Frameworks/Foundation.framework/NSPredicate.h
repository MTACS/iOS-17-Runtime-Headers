
@interface NSPredicate : NSObject <EFPubliclyDescribable, NSCopying, NSSecureCoding> {
    struct _predicateFlags { 
        unsigned int _evaluationBlocked : 1; 
        unsigned int _reservedPredicateFlags : 31; 
    }  _predicateFlags;
    unsigned int  reserved;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool ef_matchesEverything;
@property (nonatomic, readonly) bool ef_matchesNothing;
@property (nonatomic, readonly, copy) NSString *ef_publicDescription;
@property (nonatomic, readonly) NSPredicate *ef_simplifiedPredicate;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSString *predicateFormat;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSPredicate *wf_photoLibraryFilteringPredicate;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (void)initialize;
+ (id)newStringFrom:(id)arg1 usingUnicodeTransforms:(unsigned long long)arg2;
+ (id)predicateWithBlock:(id /* block */)arg1;
+ (id)predicateWithFormat:(id)arg1;
+ (id)predicateWithFormat:(id)arg1 argumentArray:(id)arg2;
+ (id)predicateWithFormat:(id)arg1 arguments:(char *)arg2;
+ (id)predicateWithValue:(bool)arg1;
+ (struct __CFLocale { }*)retainedLocale;
+ (bool)supportsSecureCoding;

- (bool)_allowsEvaluation;
- (void)_validateForMetadataQueryScopes:(id)arg1;
- (void)acceptVisitor:(id)arg1 flags:(unsigned long long)arg2;
- (void)allowEvaluation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)evaluateWithObject:(id)arg1;
- (bool)evaluateWithObject:(id)arg1 substitutionVariables:(id)arg2;
- (id)generateMetadataDescription;
- (id)initWithCoder:(id)arg1;
- (id)predicateFormat;
- (id)predicateWithSubstitutionVariables:(id)arg1;

// Image: /System/Library/Frameworks/ClassKit.framework/ClassKit

- (id)cls_normalizedPredicate:(id)arg1 error:(id*)arg2;

// Image: /System/Library/Frameworks/CloudKit.framework/CloudKit

- (id)CKDeepCopy;

// Image: /System/Library/Frameworks/Contacts.framework/Contacts

- (void)_cn_acceptVisitor:(id)arg1;
- (void)cn_triageWithLog:(id)arg1 serialNumber:(unsigned long long)arg2;

// Image: /System/Library/Frameworks/CoreData.framework/CoreData

- (id)_keypathsForDerivedPropertyValidation:(id*)arg1;
- (id)minimalFormInContext:(id)arg1;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)hk_predicateForSamplesInDayIndexRange:(struct { long long x1; long long x2; })arg1;

- (id)hk_filterRepresentationForDataTypes:(id)arg1;
- (id)hk_filterRepresentationForDataTypes:(id)arg1 isSubpredicate:(bool)arg2;

// Image: /System/Library/Frameworks/Photos.framework/Photos

+ (id)predicateForAssetsInAssetCollectionWithID:(id)arg1;
+ (id)predicateForCloudInvitationsInAssetCollection:(id)arg1;
+ (id)predicateForCommentsInAsset:(id)arg1;
+ (id)predicateForLikesInAsset:(id)arg1;

// Image: /System/Library/PrivateFrameworks/AddressBookLegacy.framework/AddressBookLegacy

- (void)ab_addCallbackContextToArray:(id)arg1;
- (void)ab_bindJoinClauseComponentOfStatement:(struct CPSqliteStatement { struct CPSqliteConnection {} *x1; struct sqlite3_stmt {} *x2; double x3; bool x4; }*)arg1 withBindingOffset:(int*)arg2 predicateIdentifier:(int)arg3;
- (void)ab_bindSelectClauseComponentOfStatement:(struct CPSqliteStatement { struct CPSqliteConnection {} *x1; struct sqlite3_stmt {} *x2; double x3; bool x4; }*)arg1 withBindingOffset:(int*)arg2 predicateIdentifier:(int)arg3;
- (void)ab_bindWhereClauseComponentOfStatement:(struct CPSqliteStatement { struct CPSqliteConnection {} *x1; struct sqlite3_stmt {} *x2; double x3; bool x4; }*)arg1 withBindingOffset:(int*)arg2 predicateIdentifier:(int)arg3;
- (bool)ab_hasCallback;
- (id)ab_metadataForMatchingRow:(struct CPSqliteStatement { struct CPSqliteConnection {} *x1; struct sqlite3_stmt {} *x2; double x3; bool x4; }*)arg1 columnOffset:(unsigned long long)arg2;
- (id)ab_newQueryWithSortOrder:(unsigned int)arg1 ranked:(bool)arg2 addressBook:(void*)arg3 propertyIndices:(const struct __CFDictionary {}**)arg4;
- (void)ab_runPredicateWithSortOrder:(unsigned int)arg1 ranked:(bool)arg2 inAddressBook:(void*)arg3 withDelegate:(id)arg4;

// Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs

- (bool)_isContentTypeFolderComparisonPredicate;
- (id)br_fileObjectIDWithWatchedChildren;
- (id)br_urlWithWatchedChildren;
- (id)br_watchedFileObjectID;
- (id)br_watchedURL;
- (id)extractSearchTermFromPredicate;
- (bool)isFolderOnlyPredicate;

// Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon

+ (id)predicateWithCKDPQueryFilters:(id)arg1 translator:(id)arg2;
+ (id)predicateWithSortedCKDPQueryFilters:(id)arg1 translator:(id)arg2;

- (id)CKDPQueryFiltersWithTranslator:(id)arg1 error:(id*)arg2;

// Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit

- (id)wf_photoLibraryFilteringPredicate;

// Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet

- (id)cd_sanitizeForLogging;

// Image: /System/Library/PrivateFrameworks/Email.framework/Email

- (id)em_searchableIndexQueryGenerator;

// Image: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation

+ (id)_ef_compoundPredicateForOptionalPredicate:(id)arg1 second:(id)arg2 isAnd:(bool)arg3;
+ (id)_ef_compoundPredicateWithSubpredicates:(id)arg1 isAnd:(bool)arg2;
+ (id)ef_andCompoundPredicateForOptionalPredicate:(id)arg1 second:(id)arg2;
+ (id)ef_andCompoundPredicateWithSubpredicates:(id)arg1;
+ (id)ef_matchEverythingPredicate;
+ (id)ef_matchNothingPredicate;
+ (id)ef_orCompoundPredicateForOptionalPredicate:(id)arg1 second:(id)arg2;
+ (id)ef_orCompoundPredicateWithSubpredicates:(id)arg1;

- (id)_ef_parenthesizedPublicDescription;
- (bool)ef_containsKeyPath:(id)arg1;
- (bool)ef_containsSubpredicate:(id)arg1;
- (bool)ef_matchesEverything;
- (bool)ef_matchesNothing;
- (id)ef_publicDescription;
- (id)ef_simplifiedPredicate;
- (id)predicateNodeFromPropertyMapper:(id)arg1 addingTablesUsed:(id)arg2;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

- (id)hd_sqlPredicateForSelect;

// Image: /System/Library/PrivateFrameworks/HomeRecommendationEngine.framework/HomeRecommendationEngine

- (bool)isEqualToPredicate:(id)arg1;

// Image: /System/Library/PrivateFrameworks/MediaAnalysis.framework/MediaAnalysis

+ (float)_peopleThreshold;
+ (id)mad_internalPredicateForTaskID:(unsigned long long)arg1;
+ (id)mad_internalPredicateNeedsProcessingForTaskID:(unsigned long long)arg1;
+ (id)mad_internalPredicateWithPriority:(unsigned long long)arg1 forTaskID:(unsigned long long)arg2;
+ (id)mad_nonPrioritizedAssetsForFaceDetectionInternalPredicate;
+ (id)mad_prioritizedAssetsForFaceDetectionInternalPredicate;
+ (id)vcp_fullAnalysisPredatesVersionInternalPredicate:(int)arg1;
+ (id)vcp_imagesPredicate:(bool)arg1;
+ (id)vcp_livePhotosPredicate:(bool)arg1;
+ (id)vcp_moviesPredicate:(bool)arg1;
+ (id)vcp_nonPanoPredicate:(bool)arg1;
+ (id)vcp_stillImagesPredicate:(bool)arg1;

// Image: /System/Library/PrivateFrameworks/MediaGroupsDaemon.framework/MediaGroupsDaemon

- (bool)mg_containsContainment;
- (bool)mg_containsCurrentDevice;
- (bool)mg_evaluateConstraint:(id /* block */)arg1;
- (bool)mg_requiresCurrentDevice;
- (bool)mg_restrictedToContainment;
- (bool)rq_containsLocal;
- (bool)rq_restrictedToLocal;

// Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore

+ (id)predicateWithFCCKPQueryFilters:(id)arg1 translator:(id)arg2;
+ (id)predicateWithSortedFCCKPQueryFilters:(id)arg1 translator:(id)arg2;

- (id)FCCKPQueryFiltersWithTranslator:(id)arg1 error:(id*)arg2;

// Image: /System/Library/PrivateFrameworks/PerfPowerServicesReader.framework/PerfPowerServicesReader

- (id)pps_sqlPredicateForSelect;

// Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph

- (void)pg_setWallpaperSuggestionReason:(id)arg1;
- (id)pg_wallpaperSuggestionReason;

// Image: /System/Library/PrivateFrameworks/PodcastsFoundation.framework/PodcastsFoundation

+ (id)falsePredicate;
+ (id)predicateForDateKey:(id)arg1 isGreaterThanDate:(id)arg2;
+ (id)predicateForDateKey:(id)arg1 isGreaterThanOrEqualToDate:(id)arg2;
+ (id)predicateForDateKey:(id)arg1 isGreaterThanOrEqualToDateKey:(id)arg2;
+ (id)predicateForDateKey:(id)arg1 isLessThanDate:(id)arg2;
+ (id)predicateForDateKey:(id)arg1 isLessThanOrEqualToDate:(id)arg2;
+ (id)predicateForNilValueForKey:(id)arg1;
+ (id)predicateForNilValueOrEmptyStringForKey:(id)arg1;
+ (id)predicateForNonNilValueForKey:(id)arg1;
+ (id)predicateForObjectId:(id)arg1;
+ (id)predicateForObjectIds:(id)arg1;
+ (id)truePredicate;

- (id)AND:(id)arg1;
- (id)NOT;
- (id)OR:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices

+ (id)_predicateForItemsWithAttribute:(int)arg1;

// Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities

+ (id)tu_predicateForConversationLinkDescriptorsIsDeleted:(bool)arg1;
+ (id)tu_predicateForConversationLinkDescriptorsWithActivated:(bool)arg1;
+ (id)tu_predicateForConversationLinkDescriptorsWithCreationDate:(id)arg1;
+ (id)tu_predicateForConversationLinkDescriptorsWithDeletionDate:(id)arg1;
+ (id)tu_predicateForConversationLinkDescriptorsWithExpirationDate:(id)arg1;
+ (id)tu_predicateForConversationLinkDescriptorsWithExpirationDateAfter:(id)arg1;
+ (id)tu_predicateForConversationLinkDescriptorsWithGroupUUID:(id)arg1;
+ (id)tu_predicateForConversationLinkDescriptorsWithInvitedHandle:(id)arg1;
+ (id)tu_predicateForConversationLinkDescriptorsWithInvitedHandleNormalizedValue:(id)arg1;
+ (id)tu_predicateForConversationLinkDescriptorsWithInvitedHandleType:(long long)arg1;
+ (id)tu_predicateForConversationLinkDescriptorsWithInvitedHandleValue:(id)arg1;
+ (id)tu_predicateForConversationLinkDescriptorsWithOriginatorHandle:(id)arg1;
+ (id)tu_predicateForConversationLinkDescriptorsWithOriginatorHandleNormalizedValue:(id)arg1;
+ (id)tu_predicateForConversationLinkDescriptorsWithOriginatorHandleType:(long long)arg1;
+ (id)tu_predicateForConversationLinkDescriptorsWithOriginatorHandleValue:(id)arg1;
+ (id)tu_predicateForConversationLinkDescriptorsWithPrivateKey:(id)arg1;
+ (id)tu_predicateForConversationLinkDescriptorsWithPseudonym:(id)arg1;
+ (id)tu_predicateForConversationLinkDescriptorsWithPublicKey:(id)arg1;

// Image: /System/Library/PrivateFrameworks/TipsCore.framework/TipsCore

+ (id)coreDuetPredicateForTPSContextDuetEvent:(id)arg1;

// Image: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance

+ (id)predicateForTAEventsClass:(Class)arg1;
+ (id)predicateForTAEventsClass:(Class)arg1 andEventSubtype:(unsigned long long)arg2;
+ (id)predicateForTAEventsInDateInterval:(id)arg1;

// Image: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer

+ (void)_triAnnotatePredicate:(id)arg1 format:(id)arg2 usingArgs:(char **)arg3;
+ (id)triLoggablePredicateWithFormat:(id)arg1;
+ (id)triLoggablePredicateWithValue:(bool)arg1;

- (id)triLogDesc;
- (void)triSetLogDesc:(id)arg1;

// Image: /System/Library/PrivateFrameworks/VideosUICore.framework/VideosUICore

+ (id)_vui_keyPathsInComparisonPredicate:(id)arg1;
+ (id)_vui_keyPathsInCompoundPredicate:(id)arg1;
+ (id)_vui_keyPathsInPredicate:(id)arg1;
+ (id)vui_equalPredicateWithKeyPath:(id)arg1 value:(id)arg2;
+ (id)vui_inPredicateWithKeyPath:(id)arg1 value:(id)arg2;
+ (id)vui_keyPathBitTestPredicateWithKeyPath:(id)arg1 value:(id)arg2;
+ (id)vui_notEqualPredicateWithKeyPath:(id)arg1 value:(id)arg2;
+ (id)vui_predicateWithSubpredicates:(id)arg1 type:(unsigned long long)arg2;

- (id)vui_keyPathsInPredicate;

// Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos

- (id)rc_and:(id)arg1;
- (id)rc_andNot:(id)arg1;
- (id)rc_or:(id)arg1;

@end
