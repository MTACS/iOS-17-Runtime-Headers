
@interface NSSet : NSObject <CKDeepCopying, EFSQLValueCollectionExpressable, HKUUIDCollection, HMFObject, InnerContentHash, NSCopying, NSFastEnumeration, NSMutableCopying, NSSecureCoding, PQLBindable, PXFastEnumeration, _SetOperable>

@property (readonly) bool aaf_hasObjects;
@property (nonatomic, readonly, copy) NSArray *allObjects;
@property (nonatomic, readonly, copy) NSArray *attributeDescriptions;
@property (readonly) unsigned long long count;
@property (nonatomic, readonly) long long count;
@property (nonatomic, readonly, copy) NSArray *crk_naturallySortedArray;
@property (nonatomic, readonly, copy) NSString *crk_stableDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *ef_SQLExpression;
@property (nonatomic, readonly) NSSet *ef_flatten;
@property (nonatomic, readonly) NSSet *ef_notEmpty;
@property (nonatomic, readonly) NSArray *ef_subsets;
@property (nonatomic, readonly) id firstObject;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSString *hmbDescription;
@property (getter=hmf_isEmpty, readonly) bool hmf_empty;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (nonatomic, readonly) NSURL *safari_shortestURL;
@property (nonatomic, readonly, copy) NSArray *safari_sortedArrayUsingFinderLikeSorting;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSSet *wf_combinations;

// Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)newSetWithObjects:(const id*)arg1 count:(unsigned long long)arg2;
+ (id)set;
+ (id)setWithArray:(id)arg1;
+ (id)setWithArray:(id)arg1 copyItems:(bool)arg2;
+ (id)setWithArray:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
+ (id)setWithArray:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 copyItems:(bool)arg3;
+ (id)setWithObject:(id)arg1;
+ (id)setWithObjects:(id)arg1;
+ (id)setWithObjects:(const id*)arg1 count:(unsigned long long)arg2;
+ (id)setWithOrderedSet:(id)arg1;
+ (id)setWithOrderedSet:(id)arg1 copyItems:(bool)arg2;
+ (id)setWithOrderedSet:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
+ (id)setWithOrderedSet:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 copyItems:(bool)arg3;
+ (id)setWithSet:(id)arg1;
+ (id)setWithSet:(id)arg1 copyItems:(bool)arg2;
+ (bool)supportsSecureCoding;

- (void)__applyValues:(int (*)arg1 context:(void*)arg2;
- (bool)__getValue:(id*)arg1 forObj:(id)arg2;
- (unsigned long long)_cfTypeID;
- (id)allObjects;
- (id)anyObject;
- (bool)containsObject:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (unsigned long long)countForObject:(id)arg1;
- (id)description;
- (id)descriptionWithLocale:(id)arg1;
- (id)descriptionWithLocale:(id)arg1 indent:(unsigned long long)arg2;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateObjectsUsingBlock:(id /* block */)arg1;
- (void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
- (void)getObjects:(id*)arg1;
- (void)getObjects:(id*)arg1 count:(unsigned long long)arg2;
- (void)getObjects:(id*)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (unsigned long long)hash;
- (id)initWithArray:(id)arg1;
- (id)initWithArray:(id)arg1 copyItems:(bool)arg2;
- (id)initWithArray:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)initWithArray:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 copyItems:(bool)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithObject:(id)arg1;
- (id)initWithObjects:(id)arg1;
- (id)initWithObjects:(const id*)arg1 count:(unsigned long long)arg2;
- (id)initWithOrderedSet:(id)arg1;
- (id)initWithOrderedSet:(id)arg1 copyItems:(bool)arg2;
- (id)initWithOrderedSet:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)initWithOrderedSet:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 copyItems:(bool)arg3;
- (id)initWithSet:(id)arg1;
- (id)initWithSet:(id)arg1 copyItems:(bool)arg2;
- (bool)intersectsOrderedSet:(id)arg1;
- (bool)intersectsSet:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToSet:(id)arg1;
- (bool)isNSSet__;
- (bool)isSubsetOfOrderedSet:(id)arg1;
- (bool)isSubsetOfSet:(id)arg1;
- (void)makeObjectsPerformSelector:(SEL)arg1;
- (void)makeObjectsPerformSelector:(SEL)arg1 withObject:(id)arg2;
- (id)member:(id)arg1;
- (id)members:(id)arg1 notFoundMarker:(id)arg2;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)objectEnumerator;
- (id)objectPassingTest:(id /* block */)arg1;
- (id)objectWithOptions:(unsigned long long)arg1 passingTest:(id /* block */)arg2;
- (id)objectsPassingTest:(id /* block */)arg1;
- (id)objectsWithOptions:(unsigned long long)arg1 passingTest:(id /* block */)arg2;
- (id)setByAddingObject:(id)arg1;
- (id)setByAddingObjectsFromArray:(id)arg1;
- (id)setByAddingObjectsFromSet:(id)arg1;
- (id)sortedArrayUsingComparator:(id /* block */)arg1;
- (id)sortedArrayWithOptions:(unsigned long long)arg1 usingComparator:(id /* block */)arg2;

// Image: /System/Library/Frameworks/Accounts.framework/Accounts

+ (id)setWithTrackedSet:(id)arg1;

- (id)ac_map:(id /* block */)arg1;
- (id)ac_mapNullable:(id /* block */)arg1;
- (id)initWithTrackedSet:(id)arg1;

// Image: /System/Library/Frameworks/CarPlay.framework/CarPlay

- (id)cp_setByRemovingObject:(id)arg1;

// Image: /System/Library/Frameworks/ClassKit.framework/ClassKit

+ (id)setWithUnionOfSets:(id)arg1;

// Image: /System/Library/Frameworks/CloudKit.framework/CloudKit

- (void)CKAssignToContainerWithID:(id)arg1;
- (id)CKCompactMap:(id /* block */)arg1;
- (id)CKDeepCopy;
- (id)CKDeepCopyWithLeafNodeCopyBlock:(id /* block */)arg1;
- (id)CKFilter:(id /* block */)arg1;
- (id)CKMap:(id /* block */)arg1;
- (id)cksqlcs_appendSQLConstantValueToString:(id)arg1;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (bool)_subclassesMustBeExplicitlyMentionedWhenDecoded;
+ (bool)supportsSecureCoding;

- (id)_avgForKeyPath:(id)arg1;
- (id)_countForKeyPath:(id)arg1;
- (id)_distinctUnionOfArraysForKeyPath:(id)arg1;
- (id)_distinctUnionOfObjectsForKeyPath:(id)arg1;
- (id)_distinctUnionOfSetsForKeyPath:(id)arg1;
- (id)_maxForKeyPath:(id)arg1;
- (id)_minForKeyPath:(id)arg1;
- (id)_sumForKeyPath:(id)arg1;
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)arg1;
- (id)filteredSetUsingPredicate:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2 context:(void*)arg3;
- (id)replacementObjectForPortCoder:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)sortedArrayUsingDescriptors:(id)arg1;
- (id)valueForKey:(id)arg1;
- (id)valueForKeyPath:(id)arg1;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)hk_setByUnioningSet:(id)arg1 otherSet:(id)arg2;
+ (id)hk_typesForArrayOf:(Class)arg1;
+ (id)hk_typesForDictionaryMapping:(Class)arg1 to:(Class)arg2;
+ (id)hk_typesForSetOf:(Class)arg1;

- (bool)hk_allObjectsPassTestWithError:(id*)arg1 test:(id /* block */)arg2;
- (id)hk_anyObjectPassingTest:(id /* block */)arg1;
- (bool)hk_containsObjectPassingTest:(id /* block */)arg1;
- (id)hk_dataForAllUUIDs;
- (bool)hk_enumerateUUIDsWithError:(id*)arg1 block:(id /* block */)arg2;
- (id)hk_filter:(id /* block */)arg1;
- (id)hk_firstSortedObjectWithComparison:(id /* block */)arg1;
- (id)hk_intersection:(id)arg1;
- (id)hk_map:(id /* block */)arg1;
- (id)hk_mapToDictionary:(id /* block */)arg1;
- (id)hk_minus:(id)arg1;
- (id)hk_symmetricDifference:(id)arg1;

// Image: /System/Library/Frameworks/Photos.framework/Photos

- (void)ph_enumerateIntersectionWithSet:(id)arg1 usingBlock:(id /* block */)arg2;

// Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore

- (id)CAMLType;
- (void)encodeWithCAMLWriter:(id)arg1;

// Image: /System/Library/PrivateFrameworks/AAAFoundation.framework/AAAFoundation

+ (id)aaf_empty;

- (id)aaf_filter:(id /* block */)arg1;
- (bool)aaf_hasObjects;
- (id)aaf_map:(id /* block */)arg1;
- (id)aaf_mapStoppable:(id /* block */)arg1;
- (id)aaf_setByRemovingObject:(id)arg1;
- (id)aaf_setByRemovingObjectsFromSet:(id)arg1;

// Image: /System/Library/PrivateFrameworks/AACCore.framework/AACCore

- (id)ae_removing:(id)arg1;

// Image: /System/Library/PrivateFrameworks/APFoundation.framework/APFoundation

- (id)compactMapObjectsUsingBlock:(id /* block */)arg1;
- (id)mapObjectsUsingBlock:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore

- (id)ar_map:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/AXCoreUtilities.framework/AXCoreUtilities

- (id)ax_filteredSetUsingBlock:(id /* block */)arg1;
- (id)ax_flatMappedSetUsingBlock:(id /* block */)arg1;
- (id)ax_mappedSetUsingBlock:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/AccessibilitySharedSupport.framework/AccessibilitySharedSupport

- (id)ax_makeObjectsRespondToSelector:(SEL)arg1;

// Image: /System/Library/PrivateFrameworks/ActivityAchievements.framework/ActivityAchievements

- (id)intersectSet:(id)arg1;

// Image: /System/Library/PrivateFrameworks/ActivitySharing.framework/ActivitySharing

- (id)as_autoreleasingCompactMap:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount

- (id)aa_setByRemovingObject:(id)arg1;
- (id)aa_setByRemovingObjectsFromSet:(id)arg1;

// Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices

+ (id)ams_JSONClasses;
+ (id)ams_PLISTClasses;

- (bool)ams_allWithTest:(id /* block */)arg1;
- (id)ams_filterUsingTest:(id /* block */)arg1;
- (id)ams_firstObjectPassingTest:(id /* block */)arg1;
- (id)ams_mapWithTransform:(id /* block */)arg1;
- (id)ams_nonEmptyComponentsJoinedByString:(id)arg1;

// Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices

- (id)af_lenientMappedDictionary:(id /* block */)arg1;
- (id)af_mappedSet:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard

- (id)bs_compactMap:(id /* block */)arg1;
- (bool)bs_containsObjectPassingTest:(id /* block */)arg1;
- (id)bs_dictionaryByPartitioning:(id /* block */)arg1;
- (void)bs_each:(id /* block */)arg1;
- (id)bs_filter:(id /* block */)arg1;
- (id)bs_firstObjectPassingTest:(id /* block */)arg1;
- (id)bs_map:(id /* block */)arg1;
- (id)bs_reduce:(id)arg1 block:(id /* block */)arg2;

// Image: /System/Library/PrivateFrameworks/BiomeDSL.framework/BiomeDSL

- (id)_bmdsl_randomObjectForKey:(id)arg1;

// Image: /System/Library/PrivateFrameworks/BiomeFoundation.framework/BiomeFoundation

- (id)bm_setBySubtractingSet:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CDDataAccess.framework/CDDataAccess

- (id)DACompactDescription;

// Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV

- (id)allObjectsWithClass:(Class)arg1;

// Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation

+ (id)intersectionOfSet:(id)arg1 withSet:(id)arg2;

- (id)CalMutableRecursiveCopy;
- (id)allObjectsWithClass:(Class)arg1;

// Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit

- (id)mutableDeepCopy;

// Image: /System/Library/PrivateFrameworks/Cards.framework/Cards

- (id)_deepCopy;

// Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit

+ (id)crk_setByCopyingObjectsFromArray:(id)arg1;

- (bool)crk_allObjectsMatchPredicate:(id /* block */)arg1;
- (bool)crk_containsObjectMatchingPredicate:(id /* block */)arg1;
- (id)crk_filterUsingBlock:(id /* block */)arg1;
- (id)crk_flatMapUsingBlock:(id /* block */)arg1;
- (id)crk_mapUsingBlock:(id /* block */)arg1;
- (id)crk_naturallySortedArray;
- (id)crk_setByAddingSet:(id)arg1;
- (id)crk_setByIntersectingSet:(id)arg1;
- (id)crk_setByRemovingObject:(id)arg1;
- (id)crk_setBySubtractingSet:(id)arg1;
- (id)crk_stableDescription;
- (id)setByCombiningWithSet:(id)arg1 operation:(SEL)arg2;
- (id)setByIntersectingSet:(id)arg1;
- (id)setBySubtractingSet:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary

- (id)cplFullDescription;

// Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation

- (bool)_cn_any:(id /* block */)arg1;
- (id)_cn_filter:(id /* block */)arg1;
- (id)_cn_firstObjectPassingTest:(id /* block */)arg1;
- (id)_cn_indexBy:(id /* block */)arg1;
- (id)_cn_map:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit

+ (id)wf_classSetFromArray:(id)arg1;

- (id)setByRemovingObject:(id)arg1;
- (id)wf_combinations;
- (id)wf_combinationsWithRepetitionsOfSize:(unsigned long long)arg1;

// Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess

- (id)DACompactDescription;

// Image: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon

- (id)findWithBlock:(id /* block */)arg1;
- (id)flatMapWithBlock:(id /* block */)arg1;
- (id)rejectItemsPassingTest:(id /* block */)arg1;
- (id)selectItemsPassingTest:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb

- (void)diffAgainstObject:(id)arg1 usingDiffBuilder:(id)arg2 withDescription:(id)arg3;

// Image: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera

- (bool)dc_containsObjectPassingTest:(id /* block */)arg1;
- (id)dc_objectPassingTest:(id /* block */)arg1;
- (id)dc_objectsOfClass:(Class)arg1;

// Image: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation

- (id)ef_SQLExpression;
- (id)ef_SQLIsolatedExpression;
- (bool)ef_all:(id /* block */)arg1;
- (bool)ef_any:(id /* block */)arg1;
- (id)ef_anyPassingTest:(id /* block */)arg1;
- (id)ef_compactMap:(id /* block */)arg1;
- (unsigned long long)ef_countObjectsPassingTest:(id /* block */)arg1;
- (id)ef_filter:(id /* block */)arg1;
- (id)ef_flatMap:(id /* block */)arg1;
- (id)ef_flatten;
- (id)ef_notEmpty;
- (id)ef_partition:(id /* block */)arg1;
- (void)ef_renderSQLExpressionInto:(id)arg1;
- (void)ef_renderSQLExpressionInto:(id)arg1 conjoiner:(id)arg2;
- (id)ef_setByRemovingObjectsFromSet:(id)arg1;
- (id)ef_subsets;

// Image: /System/Library/PrivateFrameworks/FMCoreLite.framework/FMCoreLite

+ (id)fm_setWithSafeObject:(id)arg1;

- (bool)fm_any:(id /* block */)arg1;
- (void)fm_each:(id /* block */)arg1;
- (id)fm_filter:(id /* block */)arg1;
- (id)fm_firstObjectPassingTest:(id /* block */)arg1;
- (id)fm_map:(id /* block */)arg1;
- (id)fm_setByFlattening;
- (id)fm_setByIntersectingWithSet:(id)arg1;
- (id)fm_setByRemovingObjectsFromSet:(id)arg1;

// Image: /System/Library/PrivateFrameworks/FriendKit.framework/FriendKit

- (id)fkSanitizedDestinationSet;

// Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation

- (id)_gkDescriptionWithChildren:(long long)arg1;
- (id)_gkDistinctValuesForKeyPath:(id)arg1;
- (id)_gkMapDictionaryWithKeyPath:(id)arg1;
- (id)_gkMapDictionaryWithKeyPath:(id)arg1 valueKeyPath:(id)arg2;
- (id)_gkMapWithBlock:(id /* block */)arg1;
- (id)_gkSetByRemovingObject:(id)arg1;
- (id)_gkValuesForKeyPath:(id)arg1;

// Image: /System/Library/PrivateFrameworks/GameControllerFoundation.framework/GameControllerFoundation

- (id)gc_setByRemovingObject:(id)arg1;
- (id)gc_setByRemovingObjectsFromSet:(id)arg1;

// Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices

- (id)_geo_filtered:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation

+ (id)shortDescription;

- (id)hmf_addedObjectsFromSet:(id)arg1;
- (id)hmf_commonObjectsFromSet:(id)arg1;
- (bool)hmf_isEmpty;
- (id)hmf_removedObjectsFromSet:(id)arg1;
- (id)privateDescription;
- (id)shortDescription;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

- (unsigned long long)computeHashFromContents;
- (id)hf_appleTVMediaProfiles;
- (id)hf_homePodMediaProfiles;
- (id)hf_prettyDescription;
- (id)hf_prettyExpensiveDescription;
- (id)hf_prettyFullDescription;

// Image: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore

- (id)hmbDescription;

// Image: /System/Library/PrivateFrameworks/HomeRecommendationEngine.framework/HomeRecommendationEngine

- (id)hre_filteredToClass:(Class)arg1;

// Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore

+ (id)__im_findMyHandlesWithFMFHandles:(id)arg1;
+ (id)__im_findMyHandlesWithFMLFriends:(id)arg1;
+ (id)__im_findMyHandlesWithFMLHandles:(id)arg1;

- (id)__im_fmfHandles;
- (id)__im_fmlHandles;

// Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation

- (id)__imDeepCopy;
- (void)__imForEach:(id /* block */)arg1;
- (id)__imSetByApplyingBlock:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities

- (id)containsPhoneNumber:(id)arg1;

// Image: /System/Library/PrivateFrameworks/IntelligentRoutingDaemon.framework/IntelligentRoutingDaemon

- (id)allWhere:(id /* block */)arg1;
- (id)compactMap:(id /* block */)arg1;
- (id)firstWhere:(id /* block */)arg1;
- (id)map:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/IntentsFoundation.framework/IntentsFoundation

- (id)if_compactMap:(id /* block */)arg1;
- (id)if_map:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote

- (bool)mr_containsObjectUsingWeakMatching:(id)arg1;

// Image: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices

- (id)msv_compactMap:(id /* block */)arg1;
- (id)msv_filter:(id /* block */)arg1;
- (id)msv_firstWhere:(id /* block */)arg1;
- (id)msv_flatMap:(id /* block */)arg1;
- (id)msv_map:(id /* block */)arg1;
- (bool)msv_reduceIntoBool:(bool)arg1 by:(id /* block */)arg2;
- (double)msv_reduceIntoCGFloat:(double)arg1 by:(id /* block */)arg2;
- (double)msv_reduceIntoDouble:(double)arg1 by:(id /* block */)arg2;
- (float)msv_reduceIntoFloat:(float)arg1 by:(id /* block */)arg2;
- (int)msv_reduceIntoInt32:(int)arg1 by:(id /* block */)arg2;
- (long long)msv_reduceIntoInt64:(long long)arg1 by:(id /* block */)arg2;
- (long long)msv_reduceIntoInt:(long long)arg1 by:(id /* block */)arg2;
- (id)msv_reduceIntoObject:(id)arg1 by:(id /* block */)arg2;
- (unsigned int)msv_reduceIntoUInt32:(unsigned int)arg1 by:(id /* block */)arg2;
- (unsigned long long)msv_reduceIntoUInt64:(unsigned long long)arg1 by:(id /* block */)arg2;
- (unsigned long long)msv_reduceIntoUInt:(unsigned long long)arg1 by:(id /* block */)arg2;

// Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit

- (id)npkComprehension:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/NetAppsUtilities.framework/NetAppsUtilities

+ (id)na_setWithSafeObject:(id)arg1;

- (bool)na_all:(id /* block */)arg1;
- (bool)na_allObjectsPassTest:(id /* block */)arg1;
- (bool)na_any:(id /* block */)arg1;
- (id)na_dictionaryByBucketingObjectsUsingKeyGenerator:(id /* block */)arg1;
- (id)na_dictionaryWithKeyGenerator:(id /* block */)arg1;
- (void)na_each:(id /* block */)arg1;
- (id)na_filter:(id /* block */)arg1;
- (id)na_firstObjectPassingTest:(id /* block */)arg1;
- (id)na_flatMap:(id /* block */)arg1;
- (id)na_map:(id /* block */)arg1;
- (id)na_reduceWithInitialValue:(id)arg1 reducer:(id /* block */)arg2;
- (bool)na_safeContainsObject:(id)arg1;
- (id)na_setByDiffingWithSet:(id)arg1;
- (id)na_setByFlattening;
- (id)na_setByIntersectingWithSet:(id)arg1;
- (id)na_setByRemovingObjectsFromSet:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore

- (void)nu_updateDigest:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore

+ (id)fc_set:(id /* block */)arg1;
+ (id)fc_unionOfSetsInArray:(id)arg1;

- (id)fc_arrayByTransformingWithBlock:(id /* block */)arg1;
- (id)fc_arrayOfObjectsPassingTest:(id /* block */)arg1;
- (bool)fc_containsAnyObjectInArray:(id)arg1;
- (bool)fc_containsObjectPassingTest:(id /* block */)arg1;
- (unsigned long long)fc_countOfObjectsPassingTest:(id /* block */)arg1;
- (id)fc_dictionaryOfSortedSetsWithKeyBlock:(id /* block */)arg1;
- (id)fc_diffAgainstSet:(id)arg1;
- (id)fc_firstObjectPassingTest:(id /* block */)arg1;
- (id)fc_mutableSetByTransformingWithBlock:(id /* block */)arg1;
- (id)fc_onlyObject;
- (id)fc_setByIntersectingSet:(id)arg1;
- (id)fc_setByMinusingSet:(id)arg1;
- (id)fc_setByRemovingObject:(id)arg1;
- (id)fc_setByTransformingWithBlock:(id /* block */)arg1;
- (id)fc_setByUnioningSet:(id)arg1;
- (id)fc_setOfObjectsPassingTest:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/NotesSupport.framework/NotesSupport

+ (id)ic_setFromNonNilArray:(id)arg1;
+ (id)ic_setFromNonNilObject:(id)arg1;

- (id)ic_compactMap:(id /* block */)arg1;
- (bool)ic_containsObjectMatchingPredicate:(id)arg1;
- (bool)ic_containsObjectPassingTest:(id /* block */)arg1;
- (id)ic_map:(id /* block */)arg1;
- (id)ic_objectOfClass:(Class)arg1;
- (id)ic_objectPassingTest:(id /* block */)arg1;
- (id)ic_objectsConformingToProtocol:(id)arg1;
- (id)ic_objectsOfClass:(Class)arg1;
- (id)ic_objectsPassingTest:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport

+ (id)tsu_intersectionOfSets:(id)arg1;
+ (bool)tsu_set:(id)arg1 isEqualToSet:(id)arg2;
+ (id)tsu_setWithSelectors:(SEL)arg1;

- (bool)tsu_containsObjectIdenticalTo:(id)arg1;
- (bool)tsu_isHomogeneousForClass:(Class)arg1;
- (id)tsu_onlyObject;
- (id)tsu_setByIntersectingSet:(id)arg1;
- (id)tsu_setByMappingObjectsUsingBlock:(id /* block */)arg1;
- (id)tsu_setBySubtractingSet:(id)arg1;
- (id)tsu_sortedArray;

// Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore

- (id)deepCopyWithZone:(struct _NSZone { }*)arg1;
- (id)jsonString;
- (id)pk_anyObjectPassingTest:(id /* block */)arg1;
- (id)pk_arrayCopy;
- (bool)pk_hasObjectPassingTest:(id /* block */)arg1;
- (id)pk_mutableArrayCopy;
- (id)pk_setByApplyingBlock:(id /* block */)arg1;
- (id)pk_setByRemovingObject:(id)arg1;

// Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices

- (id)_pl_filter:(id /* block */)arg1;
- (id)_pl_firstObjectPassingTest:(id /* block */)arg1;
- (id)_pl_map:(id /* block */)arg1;
- (id)_pl_prettyDescriptionWithIndent:(long long)arg1;
- (unsigned long long)pl_countOfObjectsPassingTest:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/PhotosIntelligence.framework/PhotosIntelligence

- (id)fetchedObjects;

// Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore

- (id)firstObject;

// Image: /System/Library/PrivateFrameworks/PodcastsFoundation.framework/PodcastsFoundation

- (id)filter:(id /* block */)arg1 compactMap:(id /* block */)arg2;
- (id)mt_compactMap:(id /* block */)arg1;
- (id)mt_filter:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences

- (id)setByIntersectingWithSet:(id)arg1;

// Image: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport

- (id)_pas_filteredSetWithTest:(id /* block */)arg1;
- (id)_pas_mappedSetWithTransform:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/PromotedContentPrediction.framework/PromotedContentPrediction

+ (id)adMetadataAvailableFeatures;
+ (id)adRecordAvailableFeatures;
+ (id)deviceAndSearchLevelAvailableFeatures;

// Image: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore

- (bool)safari_allObjectsPassTest:(id /* block */)arg1;
- (id)safari_anyObjectPassingTest:(id /* block */)arg1;
- (id)safari_arrayByMappingObjectsUsingBlock:(id /* block */)arg1;
- (bool)safari_containsObjectPassingTest:(id /* block */)arg1;
- (id)safari_mapAndFilterObjectsUsingBlock:(id /* block */)arg1;
- (id)safari_setByRemovingObject:(id)arg1;
- (id)safari_shortestURL;
- (id)safari_smallestObject:(id /* block */)arg1;
- (id)safari_sortedArrayUsingFinderLikeSorting;

// Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore

- (bool)containsObjectClass:(id)arg1;
- (id)scrc_deepMutableCopyWithZone:(struct _NSZone { }*)arg1;

// Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard

- (id)sb_switcherModifierDebugTimelineDescription;

// Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome

- (id)sbh_diffWithSet:(id)arg1;
- (id)sbh_map:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility

+ (bool)tsu_set:(id)arg1 isEqualToSet:(id)arg2;

- (bool)tsu_containsObjectIdenticalTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities

- (id)tu_anyObjectPassingTest:(id /* block */)arg1;
- (bool)tu_containsObjectPassingTest:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote

- (id)setByIntersectingSet:(id)arg1;
- (id)setByMinusingSet:(id)arg1;
- (id)setByRemovingObject:(id)arg1;

// Image: /System/Library/PrivateFrameworks/VisionKitCore.framework/VisionKitCore

- (id)vk_compactMap:(id /* block */)arg1;
- (bool)vk_containsObjectPassingTest:(id /* block */)arg1;
- (id)vk_map:(id /* block */)arg1;
- (id)vk_objectPassingTest:(id /* block */)arg1;
- (id)vk_objectsConformingToProtocol:(id)arg1;
- (id)vk_objectsOfClass:(Class)arg1;

// Image: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit

- (id)hiddenNetworkProfiles;
- (id)hs20Networks;
- (id)logStringWithScanRecords;
- (id)scanRecordWithSSID:(id)arg1;

// Image: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI

- (id)adhocNetworks;
- (id)infrastructureNetworks;
- (id)instantHotspotNetworks;
- (id)knownNetworks;
- (id)popularNetworks;
- (id)unconfiguredNetworks;

// Image: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy

- (id)bssidPredicate;
- (id)reformatBSSIDs;
- (id)tilePredicate;

// Image: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSPersistence.framework/TSPersistence

+ (id)tsp_consolidateFeatureInfos:(id)arg1 andReturnReadVersion:(out unsigned long long*)arg2 writeVersion:(out unsigned long long*)arg3;

- (id)tsp_initWithProtobufStringArray:(const void*)arg1;
- (void)tsp_saveToProtobufStringArray:(void*)arg1;
- (id)tsp_sortedDataArray;
- (id)tsp_sortedObjectArray;

// Image: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSStyles.framework/TSStyles

- (bool)tss_containsStyleOrVariationOfStyle:(id)arg1;
- (bool)tss_hasVariations;

// Image: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSUtility.framework/TSUtility

+ (id)tsu_intersectionOfSets:(id)arg1;
+ (bool)tsu_set:(id)arg1 isEqualToSet:(id)arg2;
+ (id)tsu_setWithSelectors:(SEL)arg1;

- (bool)tsu_containsKindOfClass:(Class)arg1;
- (bool)tsu_containsObjectIdenticalTo:(id)arg1;
- (bool)tsu_isHomogeneousForClass:(Class)arg1;
- (id)tsu_onlyObject;
- (id)tsu_setByIntersectingSet:(id)arg1;
- (id)tsu_setByMappingObjectsUsingBlock:(id /* block */)arg1;
- (id)tsu_setBySubtractingSet:(id)arg1;
- (id)tsu_sortedArray;

// Image: /usr/lib/libprequelite.dylib

- (void)sqliteBind:(struct sqlite3_stmt { }*)arg1 index:(int)arg2;

@end
