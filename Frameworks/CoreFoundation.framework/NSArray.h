
@interface NSArray : NSObject <AADataType, AFSecurityDigestibleChunksProviding, AMSHashable, AMSSecureCodingSanitizable, APPCSupplementalContextAllowedTypes, ASDNotificationType, ATXScoreLogSerializable, CARMutableDeepCopying, CKDeepCopying, CKRecordValue, CLSCurationDebugItemCluster, CMSCoding, CRCodable, CRKJSONRepresentable, CSCoderEncoder, CUByteCodable, EFSQLValueCollectionExpressable, FCContentArchivable, FCOrderedCollectionAdditions, GCSJSONObject, HFPropertyListConvertible, HKCodedObject, HKFeatureAvailabilityRequirementsProviding, HKUUIDCollection, HMDOPACKValue, HMFObject, HVHeaderCollection, IMJSONSerializableValueProviding, INCacheableContainer, INCodableAttributeRelationComparing, INImageProxyInjecting, INIntentResolutionResultDataProviding, INJSONSerializable, INKeyImageProducing, ISStackedCompositorResource, InnerContentHash, MGRemoteQueryEncodable, MPCPlaybackEngineEventPayloadJSONValue, NFCBOREncodable, NSCopying, NSFastEnumeration, NSMutableCopying, NSSecureCoding, PQLBindable, PXSectionedFetchResult, REDonatedActionIdentifierProviding, SGDeepCopyWithoutEmptySchemaObjects, WFJSONObject, WFJavaScriptCoreBridgeableObject, WFPropertyListObject, _EFOrderedCollection>

@property (nonatomic, readonly) NSData *SHA256Data;
@property (nonatomic, readonly) NSString *SHA256HexString;
@property (nonatomic, readonly) void SIMDDouble2;
@property (nonatomic, readonly) void SIMDDouble3;
@property (nonatomic, readonly) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; } SIMDDouble3x3;
@property (nonatomic, readonly) void SIMDDouble4;
@property (nonatomic, readonly) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } SIMDDouble4x4;
@property (nonatomic, readonly) void SIMDDouble8;
@property (nonatomic, readonly) void SIMDFloat16;
@property (nonatomic, readonly) void SIMDFloat2;
@property (nonatomic, readonly) void SIMDFloat3;
@property (nonatomic, readonly) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; } SIMDFloat3x3;
@property (nonatomic, readonly) void SIMDFloat4;
@property (nonatomic, readonly) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } SIMDFloat4x4;
@property (nonatomic, readonly) void SIMDFloat8;
@property (nonatomic, readonly) struct { } SIMDQuatD;
@property (nonatomic, readonly) struct { } SIMDQuatF;
@property (nonatomic, readonly) IMMessageItem *__imLastMessageItem;
@property (readonly) INImage *_keyImage;
@property (readonly) bool aaf_hasObjects;
@property (nonatomic, readonly) NSDictionary *activeAccessoryDevicesSupportingAnnounce;
@property (nonatomic, readonly) NSArray *activeDevicesSupportingAnnounce;
@property (nonatomic, readonly) NSArray *activePersonalDevicesSupportingAnnounce;
@property (nonatomic, readonly) NSArray *an_homesSupportingAnnounce;
@property (nonatomic, readonly, copy) NSArray *attributeDescriptions;
@property (nonatomic, readonly) AXMVisionFeature *axm_featureWithHighestConfidence;
@property (nonatomic, readonly) NSArray *axm_featuresSortedByConfidence;
@property (nonatomic, readonly) NSDictionary *bw_builtInMicRouteDictionary;
@property (nonatomic, readonly) id carMutableDeepCopy;
@property (readonly) NSArray *clsCurationItems;
@property (nonatomic, readonly) FCContentArchive *contentArchive;
@property (nonatomic, readonly) long long count;
@property (nonatomic, readonly) unsigned long long count;
@property (readonly) unsigned long long count;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSArray *decodedCHIPReports;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *ef_SQLExpression;
@property (nonatomic, readonly) NSArray *ef_flatten;
@property (nonatomic, readonly) bool ef_isEmpty;
@property (nonatomic, readonly) NSNumber *ef_max;
@property (nonatomic, readonly) NSNumber *ef_mean;
@property (nonatomic, readonly) NSNumber *ef_median;
@property (nonatomic, readonly) NSNumber *ef_min;
@property (nonatomic, readonly, copy) NSArray *ef_mode;
@property (nonatomic, readonly) NSArray *ef_notEmpty;
@property (nonatomic, readonly) NSArray *ef_permutations;
@property (nonatomic, readonly) NSArray *ef_reverse;
@property (nonatomic, readonly) NSNumber *ef_standardDeviation;
@property (nonatomic, readonly) NSNumber *ef_sum;
@property (nonatomic, readonly) NSArray *ef_tail;
@property (nonatomic, readonly) unsigned long long em_messageListItemTotalCount;
@property (readonly, copy) NSArray *encodedCHIPReports;
@property (nonatomic, readonly) IMMessage *firstMessage;
@property (nonatomic, readonly) IMMessageItem *firstMessageItem;
@property (nonatomic, readonly) <NSObject><NSCopying> *firstObject;
@property (nonatomic, readonly) AXEventPathInfoRepresentation *firstPath;
@property (nonatomic, readonly) bool hasMixedSecretType;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *hashedDescription;
@property (readonly, copy) NSString *hmbDescription;
@property (getter=hmf_isEmpty, readonly) bool hmf_empty;
@property (nonatomic, readonly) NSArray *ic_deviceInfosByAddingAppearances;
@property (nonatomic, readonly) id ic_randomObject;
@property (nonatomic, readonly) NSArray *identifiers;
@property (nonatomic, readonly) NSArray *idsIdentifiers;
@property (nonatomic, readonly) bool isQueryResultSetInvalidated;
@property (nonatomic, readonly) IMMessage *lastFinishedMessage;
@property (nonatomic, readonly) IMMessage *lastIncomingFinishedMessage;
@property (nonatomic, readonly) IMMessage *lastIncomingMessage;
@property (nonatomic, readonly) IMMessage *lastMessage;
@property (nonatomic, readonly) IMMessageItem *lastMessageItem;
@property (nonatomic, readonly) <NSObject><NSCopying> *lastObject;
@property (nonatomic, readonly) NSArray *messages;
@property (nonatomic, readonly) NSArray *mr_allOutputDevices;
@property (nonatomic, readonly) NSString *mr_formattedDebugDescription;
@property (nonatomic, readonly) NSArray *mr_redactClusterMembers;
@property (nonatomic, readonly, copy) NSString *msv_compactDescription;
@property (nonatomic, readonly) id mtl_firstObject;
@property (nonatomic, readonly) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; } oz_SIMDFloat3x3;
@property (nonatomic, readonly) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } oz_SIMDFloat4x4;
@property (nonatomic, readonly) id pairedCompanion;
@property (nonatomic, readonly) NSArray *playedAnnouncements;
@property (nonatomic, readonly) NSArray *powerSet;
@property (nonatomic, readonly) unsigned long long prevailingLocalSecretType;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (nonatomic, readonly) NSArray *rapportIDs;
@property (readonly) NSArray<ISScalableCompositorResource> *resourceStack;
@property (nonatomic, readonly) NSArray *safari_allPermutations;
@property (readonly, copy) NSArray *sh_allClassNames;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *unplayedAnnouncements;
@property (nonatomic, readonly) NSArray *vf_flatten;
@property (nonatomic, readonly) NSArray *vk_generateAllPermutations;
@property (nonatomic, readonly) id vk_randomObject;
@property (nonatomic, readonly) NSArray *vk_randomizedArray;
@property (readonly, copy) NSArray *xpcEncodedCHIPReportsFromHMFEncodedMessage;

// Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)array;
+ (id)arrayWithArray:(id)arg1;
+ (id)arrayWithArray:(id)arg1 copyItems:(bool)arg2;
+ (id)arrayWithArray:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
+ (id)arrayWithArray:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 copyItems:(bool)arg3;
+ (id)arrayWithObject:(id)arg1;
+ (id)arrayWithObjects:(id)arg1;
+ (id)arrayWithObjects:(const id*)arg1 count:(unsigned long long)arg2;
+ (id)arrayWithOrderedSet:(id)arg1;
+ (id)arrayWithOrderedSet:(id)arg1 copyItems:(bool)arg2;
+ (id)arrayWithOrderedSet:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
+ (id)arrayWithOrderedSet:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 copyItems:(bool)arg3;
+ (id)arrayWithSet:(id)arg1;
+ (id)arrayWithSet:(id)arg1 copyItems:(bool)arg2;
+ (id)newArrayWithObjects:(const id*)arg1 count:(unsigned long long)arg2;
+ (bool)supportsSecureCoding;

- (unsigned long long)_cfTypeID;
- (id)_initByAdoptingBuffer:(id*)arg1 count:(unsigned long long)arg2 size:(unsigned long long)arg3;
- (id)allObjects;
- (id)arrayByAddingObject:(id)arg1;
- (id)arrayByAddingObjectsFromArray:(id)arg1;
- (id)arrayByApplyingSelector:(SEL)arg1;
- (id)arrayByExcludingObjectsInArray:(id)arg1;
- (id)arrayByExcludingToObjectsInArray:(id)arg1;
- (id)componentsJoinedByString:(id)arg1;
- (bool)containsObject:(id)arg1;
- (bool)containsObject:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (bool)containsObjectIdenticalTo:(id)arg1;
- (bool)containsObjectIdenticalTo:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (unsigned long long)countForObject:(id)arg1;
- (unsigned long long)countForObject:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)description;
- (id)descriptionWithLocale:(id)arg1;
- (id)descriptionWithLocale:(id)arg1 indent:(unsigned long long)arg2;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateObjectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 usingBlock:(id /* block */)arg3;
- (void)enumerateObjectsUsingBlock:(id /* block */)arg1;
- (void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
- (id)firstObject;
- (id)firstObjectCommonWithArray:(id)arg1;
- (void)getObjects:(id*)arg1;
- (void)getObjects:(id*)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (unsigned long long)hash;
- (unsigned long long)indexOfObject:(id)arg1;
- (unsigned long long)indexOfObject:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (unsigned long long)indexOfObject:(id)arg1 inSortedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 options:(unsigned long long)arg3 usingComparator:(id /* block */)arg4;
- (unsigned long long)indexOfObjectAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(id /* block */)arg3;
- (unsigned long long)indexOfObjectIdenticalTo:(id)arg1;
- (unsigned long long)indexOfObjectIdenticalTo:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (unsigned long long)indexOfObjectPassingTest:(id /* block */)arg1;
- (unsigned long long)indexOfObjectWithOptions:(unsigned long long)arg1 passingTest:(id /* block */)arg2;
- (id)indexesOfObject:(id)arg1;
- (id)indexesOfObject:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)indexesOfObjectIdenticalTo:(id)arg1;
- (id)indexesOfObjectIdenticalTo:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)indexesOfObjectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(id /* block */)arg3;
- (id)indexesOfObjectsPassingTest:(id /* block */)arg1;
- (id)indexesOfObjectsWithOptions:(unsigned long long)arg1 passingTest:(id /* block */)arg2;
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
- (bool)isEqual:(id)arg1;
- (bool)isEqualToArray:(id)arg1;
- (bool)isNSArray__;
- (id)lastObject;
- (void)makeObjectsPerformSelector:(SEL)arg1;
- (void)makeObjectsPerformSelector:(SEL)arg1 withObject:(id)arg2;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)objectAtIndex:(unsigned long long)arg1;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (id)objectAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(id /* block */)arg3;
- (id)objectEnumerator;
- (id)objectPassingTest:(id /* block */)arg1;
- (id)objectWithOptions:(unsigned long long)arg1 passingTest:(id /* block */)arg2;
- (id)objectsAtIndexes:(id)arg1;
- (id)objectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(id /* block */)arg3;
- (id)objectsPassingTest:(id /* block */)arg1;
- (id)objectsWithOptions:(unsigned long long)arg1 passingTest:(id /* block */)arg2;
- (id)reverseObjectEnumerator;
- (id)reversedArray;
- (id)sortedArrayFromRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 options:(unsigned long long)arg2 usingComparator:(id /* block */)arg3;
- (id)sortedArrayUsingComparator:(id /* block */)arg1;
- (id)sortedArrayUsingFunction:(int (*)arg1 context:(void*)arg2;
- (id)sortedArrayUsingSelector:(SEL)arg1;
- (id)sortedArrayWithOptions:(unsigned long long)arg1 usingComparator:(id /* block */)arg2;
- (id)subarrayWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;

// Image: /System/Library/Frameworks/Accounts.framework/Accounts

- (id)ac_filter:(id /* block */)arg1;
- (id)ac_firstObjectPassingTest:(id /* block */)arg1;
- (id)ac_map:(id /* block */)arg1;
- (id)ac_mapNullable:(id /* block */)arg1;

// Image: /System/Library/Frameworks/AddressBook.framework/AddressBook

- (id)abs_arrayByMappingTransform:(id /* block */)arg1;

// Image: /System/Library/Frameworks/ClassKit.framework/ClassKit

- (id)_cls_AppendUniqueElementsFrom:(id)arg1;
- (id)_cls_filter:(id /* block */)arg1;

// Image: /System/Library/Frameworks/CloudKit.framework/CloudKit

- (void)CKAssignToContainerWithID:(id)arg1;
- (id)CKCompactMap:(id /* block */)arg1;
- (id)CKCompactMapToDictionary:(id /* block */)arg1;
- (id)CKCompactReduceIntoDictionary:(id /* block */)arg1;
- (id)CKComponentsAndSubcomponentsJoinedByString:(id)arg1;
- (bool)CKContains:(id /* block */)arg1;
- (id)CKDeepCopy;
- (id)CKDeepCopyWithLeafNodeCopyBlock:(id /* block */)arg1;
- (id)CKDescriptionPropertiesWithPublic:(bool)arg1 private:(bool)arg2 shouldExpand:(bool)arg3;
- (id)CKFilter:(id /* block */)arg1;
- (id)CKFirstObjectPassingTest:(id /* block */)arg1;
- (id)CKFlatMap:(id /* block */)arg1;
- (id)CKMap:(id /* block */)arg1;
- (id)CKMapToDictionary:(id /* block */)arg1;
- (id)CKMapWithIndex:(id /* block */)arg1;
- (id)CKReduceIntoDictionary:(id /* block */)arg1;
- (id)CKShuffledArray;
- (id)_CKReduceIntoDictionary:(bool)arg1 block:(id /* block */)arg2;
- (id)ckEquivalencyProperties;
- (id)cksqlcs_appendSQLConstantValueToString:(id)arg1;

// Image: /System/Library/Frameworks/CoreServices.framework/CoreServices

+ (id)arrayByFilteringLaunchProhibitedAppsFrom:(id)arg1;

// Image: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight

- (void)encodeWithCSCoder:(id)arg1;

// Image: /System/Library/Frameworks/CoreTelephony.framework/Support/libCommCenterBase.dylib

+ (id)arrayWithJSONString:(const void*)arg1;

// Image: /System/Library/Frameworks/ExposureNotification.framework/ExposureNotification

- (id)enRandomlyShuffled;

// Image: /System/Library/Frameworks/ExtensionFoundation.framework/ExtensionFoundation

- (id)_EX_arrayAtIndex:(unsigned long long)arg1;
- (bool)_EX_boolAtIndex:(unsigned long long)arg1;
- (bool)_EX_boolAtIndex:(unsigned long long)arg1 defaultValue:(bool)arg2;
- (id)_EX_dictionaryAtIndex:(unsigned long long)arg1;
- (id)_EX_objectAtIndex:(unsigned long long)arg1 ofClass:(Class)arg2;
- (id)_EX_stringAtIndex:(unsigned long long)arg1;

// Image: /System/Library/Frameworks/FileProvider.framework/FileProvider

+ (id)fp_sortDescriptorByDisplayName;
+ (id)fp_sortDescriptorByDocumentSize;
+ (id)fp_sortDescriptorByLastUsedDate;
+ (id)fp_sortDescriptorByModifiedDateDescending;

- (id)_fp_componentsJoinedByAnd;
- (id)_fp_componentsJoinedByOr;
- (id)_fp_componentsWrappedInQuotes;
- (id)_fp_filter:(id /* block */)arg1;
- (id)_fp_map:(id /* block */)arg1;
- (id)fp_categorize:(id /* block */)arg1;
- (id /* block */)fp_comparator;
- (long long)fp_compareItem:(id)arg1 toItem:(id)arg2;
- (id)fp_filter:(id /* block */)arg1;
- (id)fp_itemIDs;
- (id)fp_itemIdentifiers;
- (id)fp_map:(id /* block */)arg1;
- (id)fp_mapWithIndex:(id /* block */)arg1;
- (id)fp_pickItemsFromArray:(id)arg1 correspondingToIndexesOfItemsInArray:(id)arg2;
- (id)fp_removingObjectsNotKindOfClasses:(id)arg1;
- (id)fp_shortDescriptionExpandingAtMost:(unsigned long long)arg1;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (bool)_subclassesMustBeExplicitlyMentionedWhenDecoded;
+ (id)arrayWithContentsOfFile:(id)arg1;
+ (id)arrayWithContentsOfURL:(id)arg1;
+ (id)arrayWithContentsOfURL:(id)arg1 error:(id*)arg2;
+ (id)newWithContentsOf:(id)arg1 immutable:(bool)arg2;
+ (id)newWithContentsOf:(id)arg1 immutable:(bool)arg2 error:(id*)arg3;

- (id)_avgForKeyPath:(id)arg1;
- (id)_countForKeyPath:(id)arg1;
- (id)_distinctUnionOfArraysForKeyPath:(id)arg1;
- (id)_distinctUnionOfObjectsForKeyPath:(id)arg1;
- (id)_distinctUnionOfSetsForKeyPath:(id)arg1;
- (id)_maxForKeyPath:(id)arg1;
- (id)_minForKeyPath:(id)arg1;
- (id)_mutableArrayValueForKeyPath:(id)arg1 ofObjectAtIndex:(unsigned long long)arg2;
- (id)_mutableOrderedSetValueForKeyPath:(id)arg1 ofObjectAtIndex:(unsigned long long)arg2;
- (id)_mutableSetValueForKeyPath:(id)arg1 ofObjectAtIndex:(unsigned long long)arg2;
- (void)_setValue:(id)arg1 forKeyPath:(id)arg2 ofObjectAtIndex:(unsigned long long)arg3;
- (id)_stringToWrite;
- (id)_sumForKeyPath:(id)arg1;
- (id)_unionOfArraysForKeyPath:(id)arg1;
- (id)_unionOfObjectsForKeyPath:(id)arg1;
- (id)_unionOfSetsForKeyPath:(id)arg1;
- (bool)_validateValue:(inout id*)arg1 forKeyPath:(id)arg2 ofObjectAtIndex:(unsigned long long)arg3 error:(out id*)arg4;
- (id)_valueForKeyPath:(id)arg1 ofObjectAtIndex:(unsigned long long)arg2;
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4;
- (void)addObserver:(id)arg1 toObjectsAtIndexes:(id)arg2 forKeyPath:(id)arg3 options:(unsigned long long)arg4 context:(void*)arg5;
- (id)arrayByApplyingDifference:(id)arg1;
- (Class)classForCoder;
- (id)debugDescription;
- (id)differenceFromArray:(id)arg1;
- (id)differenceFromArray:(id)arg1 withOptions:(unsigned long long)arg2;
- (id)differenceFromArray:(id)arg1 withOptions:(unsigned long long)arg2 usingEquivalenceTest:(id /* block */)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)filteredArrayUsingPredicate:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1;
- (id)initWithContentsOfURL:(id)arg1;
- (id)initWithContentsOfURL:(id)arg1 error:(id*)arg2;
- (id)pathsMatchingExtensions:(id)arg1;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2 context:(void*)arg3;
- (void)removeObserver:(id)arg1 fromObjectsAtIndexes:(id)arg2 forKeyPath:(id)arg3;
- (void)removeObserver:(id)arg1 fromObjectsAtIndexes:(id)arg2 forKeyPath:(id)arg3 context:(void*)arg4;
- (id)replacementObjectForPortCoder:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)sortedArrayHint;
- (id)sortedArrayUsingDescriptors:(id)arg1;
- (id)sortedArrayUsingFunction:(int (*)arg1 context:(void*)arg2 hint:(id)arg3;
- (id)sortedArrayUsingSelector:(SEL)arg1 hint:(id)arg2;
- (id)stringsByAppendingPathComponent:(id)arg1;
- (id)valueForKey:(id)arg1;
- (id)valueForKeyPath:(id)arg1;
- (bool)writeToFile:(id)arg1 atomically:(bool)arg2;
- (bool)writeToURL:(id)arg1 atomically:(bool)arg2;
- (bool)writeToURL:(id)arg1 error:(id*)arg2;

// Image: /System/Library/Frameworks/GameplayKit.framework/GameplayKit

- (id)shuffledArray;
- (id)shuffledArrayWithRandomSource:(id)arg1;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (bool)_permutationHelperForArray:(id)arg1 number:(long long)arg2 permutationHandler:(id /* block */)arg3;
+ (id)hk_arrayWithCount:(long long)arg1 generator:(id /* block */)arg2;
+ (id)indexableKeyPathsWithPrefix:(id)arg1;

- (id)_hk_featureAvailabilityRequirements;
- (bool)_permutationsWithCount:(long long)arg1 permutation:(id)arg2 depth:(long long)arg3 block:(id /* block */)arg4;
- (bool)applyConcepts:(id)arg1 forKeyPath:(id)arg2 error:(id*)arg3;
- (id)codingsForKeyPath:(id)arg1 error:(id*)arg2;
- (bool)hk_allElementsEqual;
- (bool)hk_allElementsUnique;
- (bool)hk_allObjectsPassTest:(id /* block */)arg1;
- (id)hk_averageUsingEvaluationBlock:(id /* block */)arg1;
- (bool)hk_containsObjectPassingTest:(id /* block */)arg1;
- (bool)hk_containsObjectsInArray:(id)arg1;
- (id)hk_dataForAllUUIDs;
- (void)hk_enumeratePermutationsOfSubsetsOfLength:(long long)arg1 block:(id /* block */)arg2;
- (void)hk_enumeratePermutationsWithBlock:(id /* block */)arg1;
- (bool)hk_enumerateUUIDsWithError:(id*)arg1 block:(id /* block */)arg2;
- (id)hk_filter:(id /* block */)arg1;
- (id)hk_firstObjectPassingTest:(id /* block */)arg1;
- (id)hk_firstObjectWithMaximumValueUsingEvaluationBlock:(id /* block */)arg1;
- (id)hk_firstObjectWithMinimumValueUsingEvaluationBlock:(id /* block */)arg1;
- (id)hk_firstSortedObjectWithComparison:(id /* block */)arg1;
- (id)hk_foldRightFrom:(id)arg1 with:(id /* block */)arg2;
- (id)hk_map:(id /* block */)arg1;
- (id)hk_map:(id /* block */)arg1 error:(id*)arg2;
- (id)hk_mapToDictionary:(id /* block */)arg1;
- (id)hk_mapToSet:(id /* block */)arg1;
- (id)hk_mutableSubarrayWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)hk_orPredicateWithPredicateBlock:(id /* block */)arg1;
- (void)hk_partitionArrayWithPartitionSetupBlock:(id /* block */)arg1 partitionMembershipCheckBlock:(id /* block */)arg2 partitionExtendBlock:(id /* block */)arg3 partitionFinalizeBlock:(id /* block */)arg4;
- (id)hk_reversed;
- (id)hk_shuffled;
- (id)hk_splitWithBucketCount:(long long)arg1;
- (double)hk_sumUsingEvaluationBlock:(id /* block */)arg1;

// Image: /System/Library/Frameworks/ImageCaptureCore.framework/ImageCaptureCore

- (id)copyGroupIntoDictionary:(id /* block */)arg1;

// Image: /System/Library/Frameworks/Intents.framework/Intents

- (id)_JSONDictionaryRepresentationForIntent:(id)arg1 parameterName:(id)arg2;
- (long long)_compareSubProducerOne:(id)arg1 subProducerTwo:(id)arg2;
- (void)_injectProxiesForImages:(id /* block */)arg1 completion:(id /* block */)arg2;
- (id)_intents_cacheableObjects;
- (bool)_intents_compareValue:(id)arg1 relation:(unsigned long long)arg2;
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;
- (id)_intents_indexingRepresentation;
- (id)_intents_localizedCopyWithLocalizer:(id)arg1;
- (id)_intents_readableTitleWithLocalizer:(id)arg1 metadata:(id)arg2;
- (void)_intents_updateContainerWithCache:(id)arg1;
- (id)_keyImage;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (id)resolutionResultDataForIntent:(id)arg1 intentSlotDescription:(id)arg2 error:(id*)arg3;
- (void)transformResolutionResultForIntent:(id)arg1 intentSlotDescription:(id)arg2 withOptionsProvider:(id)arg3 completion:(id /* block */)arg4;

// Image: /System/Library/Frameworks/MapKit.framework/MapKit

- (id)_mapkit_arrayByRemovingObject:(id)arg1;
- (id)_mapkit_componentsJoinedInCommaDelimitedList;
- (unsigned long long)_mapkit_indexForObject:(id)arg1 usingSortFunction:(int (*)arg2 context:(void*)arg3;
- (id)_mapkit_joinedAddressComponents;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

- (bool)MPIsEmpty;
- (bool)isQueryResultSetInvalidated;

// Image: /System/Library/Frameworks/MediaSetup.framework/MediaSetup

- (bool)ms_anyPassingTest:(id /* block */)arg1;
- (id)ms_objectsPassingTest:(id /* block */)arg1;
- (id)ms_objectsWithOptions:(unsigned long long)arg1 passingTest:(id /* block */)arg2;

// Image: /System/Library/Frameworks/MessageUI.framework/MessageUI

- (id)mf_commaSeparatedRecipientListWithWidth:(double)arg1 forFont:(id)arg2;
- (id)mf_commaSeparatedRecipientListWithWidth:(double)arg1 forFont:(id)arg2 usingBlock:(id /* block */)arg3;
- (unsigned long long)mf_indexOfRecipientWithEmailAddress:(id)arg1;

// Image: /System/Library/Frameworks/MultipeerConnectivity.framework/MultipeerConnectivity

- (id)copyDeep_MC;

// Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI

- (id)ph_arrayDescriptionWithIndentation:(unsigned long long)arg1;
- (id)ph_arrayDescriptionWithIndentation:(unsigned long long)arg1 objectDescription:(id /* block */)arg2;

// Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore

- (id)CAMLType;
- (id)CA_addValue:(id)arg1 multipliedBy:(int)arg2;
- (id)CA_interpolateValue:(id)arg1 byFraction:(float)arg2;
- (id)CA_interpolateValues:(id)arg1 :(id)arg2 :(id)arg3 interpolator:(const struct ValueInterpolator { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; bool x15; }*)arg4;
- (void)encodeWithCAMLWriter:(id)arg1;

// Image: /System/Library/Frameworks/SceneKit.framework/SceneKit

+ (id)SCN_arrayWithSimdMatrix4:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;

- (id)SCNMutableDeepCopy;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })SCN_simdMatrix4Value;

// Image: /System/Library/Frameworks/Social.framework/Social

- (unsigned long long)countObjectsPassingTest:(id /* block */)arg1;
- (unsigned long long)countObjectsPassingTest:(id /* block */)arg1;
- (id)firstObjectPassingTest:(id /* block */)arg1;
- (id)firstObjectPassingTest:(id /* block */)arg1;
- (id)objectsPassingTest:(id /* block */)arg1;
- (id)objectsPassingTest:(id /* block */)arg1;

// Image: /System/Library/Frameworks/UserNotifications.framework/UserNotifications

- (void)un_each:(id /* block */)arg1;
- (id)un_filter:(id /* block */)arg1;
- (id)un_map:(id /* block */)arg1;
- (id)un_nonEmptyCopy;
- (id)un_safeArrayContainingClass:(Class)arg1;
- (id)un_safeArrayContainingClasses:(id)arg1;

// Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount

- (id)vs_componentsJoinedByAttributedString:(id)arg1;

// Image: /System/Library/Frameworks/Vision.framework/Vision

- (id)VNObservationsWithOriginatingRequestSpecifier:(id)arg1;
- (void)vn_enumerateObjectsAsSubarraysOfCount:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;

// Image: /System/Library/PrivateFrameworks/AAAFoundation.framework/AAAFoundation

+ (id)aaf_empty;

- (id)aaf_arrayAsCommaSeperatedString;
- (id)aaf_arrayByRemovingObject:(id)arg1;
- (id)aaf_filter:(id /* block */)arg1;
- (id)aaf_firstObjectPassingTest:(id /* block */)arg1;
- (bool)aaf_hasObjects;
- (bool)aaf_isSubsetOfArray:(id)arg1;
- (id)aaf_map:(id /* block */)arg1;
- (id)aaf_mapStoppable:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/AACCore.framework/AACCore

- (id)ae_adding:(id)arg1;
- (id)ae_addingItems:(id)arg1;
- (id)ae_filter:(id /* block */)arg1;
- (id)ae_firstMatching:(id /* block */)arg1;
- (void)ae_forEach:(id /* block */)arg1;
- (id)ae_map:(id /* block */)arg1;
- (id)ae_poppingFirstItem:(id*)arg1;
- (id)ae_split:(id*)arg1 includeBlock:(id /* block */)arg2;

// Image: /System/Library/PrivateFrameworks/APFoundation.framework/APFoundation

- (id)filteredArrayUsingBlock:(id /* block */)arg1;
- (id)jsonDataWithOptions:(unsigned long long)arg1;
- (id)jsonRepresentationWithOptions:(unsigned long long)arg1;
- (id)jsonString;
- (id)jsonStringWithOptions:(unsigned long long)arg1;
- (id)mapObjectsUsingBlock:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore

+ (id)ar_arrayWithFloats:(const float*)arg1 count:(unsigned long long)arg2;

- (id)ar_filter:(id /* block */)arg1;
- (id)ar_firstObjectPassingTest:(id /* block */)arg1;
- (id)ar_map:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/AXCoreUtilities.framework/AXCoreUtilities

- (id)ax_arrayByRemovingDuplicates;
- (bool)ax_containsObjectUsingBlock:(id /* block */)arg1;
- (id)ax_filteredArrayUsingBlock:(id /* block */)arg1;
- (id)ax_firstObjectUsingBlock:(id /* block */)arg1;
- (id)ax_flatMappedArrayUsingBlock:(id /* block */)arg1;
- (id)ax_mappedArrayUsingBlock:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities

+ (id)axmArrayByIgnoringNilElementsWithCount:(unsigned long long)arg1;

- (id)axm_featureWithHighestConfidence;
- (id)axm_featuresSortedByConfidence;

// Image: /System/Library/PrivateFrameworks/AXRuntime.framework/AXRuntime

- (id)_axRecursivelyPropertyListCoercedRepresentationWithError:(id*)arg1;
- (id)_axRecursivelyReconstitutedRepresentationFromPropertyListWithError:(id*)arg1;

// Image: /System/Library/PrivateFrameworks/AccessibilitySharedUISupport.framework/AccessibilitySharedUISupport

- (bool)containsString:(id)arg1 caseSensitive:(bool)arg2;

// Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities

+ (id)axArrayByIgnoringNilElementsWithCount:(unsigned long long)arg1;
+ (id)axArrayWithPossiblyNilArrays:(unsigned long long)arg1;

- (id)axFilterObjectsUsingBlock:(id /* block */)arg1;
- (id)axFirstObjectsUsingBlock:(id /* block */)arg1;
- (bool)axIsEqualToOrderedArray:(id)arg1 withPredicate:(id /* block */)arg2;
- (id)axMapObjectsUsingBlock:(id /* block */)arg1;
- (id)axSafeObjectAtIndex:(unsigned long long)arg1;
- (id)axUniqueArrayWithPredicate:(id /* block */)arg1;
- (id)firstPath;

// Image: /System/Library/PrivateFrameworks/AccessoryCommunications.framework/AccessoryCommunications

- (id)truncatedArray:(unsigned long long)arg1;

// Image: /System/Library/PrivateFrameworks/AdCore.framework/AdCore

- (id)AD_arrayForJSON;
- (id)AD_jsonString;
- (id)AD_jsonStringWithPrettyPrint:(bool)arg1;
- (id)arrayCappedToMaxItems:(unsigned long long)arg1;

// Image: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice

- (id)assetForIdentifier:(id)arg1;

// Image: /System/Library/PrivateFrameworks/Announce.framework/Announce

- (id)identifiers;
- (id)idsIdentifiers;
- (id)messages;
- (id)playedAnnouncements;
- (id)rapportIDs;
- (id)unplayedAnnouncements;

// Image: /System/Library/PrivateFrameworks/AnnounceDaemon.framework/AnnounceDaemon

- (id)activeAccessoryDevicesSupportingAnnounce;
- (id)activeDevicesSupportingAnnounce;
- (id)activePersonalDevicesSupportingAnnounce;
- (id)an_homesSupportingAnnounce;
- (id)devicesByRemovingNonAccessoryDevicesNotBelongingToUsers:(id)arg1;
- (id)devicesInHome:(id)arg1;
- (id)pairedCompanion;
- (id)personalDevicesForUser:(id)arg1;

// Image: /System/Library/PrivateFrameworks/AppAnalytics.framework/AppAnalytics

- (id)toJsonValueAndReturnError:(id*)arg1;

// Image: /System/Library/PrivateFrameworks/AppPredictionFoundation.framework/AppPredictionFoundation

- (long long)atx_INCustomObjectComparator:(id)arg1 object2:(id)arg2;
- (bool)atx_isFuzzyMatch:(id)arg1;

// Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal

- (id)atx_actionsFromActionResults;
- (id)atx_filterPlayMediaIntentsWithUnavailableAppDestinationGivenSBAppList:(id)arg1;
- (void)atx_writeToFile:(struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; }*)arg1;

// Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount

- (id)aa_arrayByRemovingObject:(id)arg1;
- (id)aa_filter:(id /* block */)arg1;
- (id)aa_firstObjectPassingTest:(id /* block */)arg1;
- (bool)aa_isSubsetOfArray:(id)arg1;
- (id)aa_map:(id /* block */)arg1;
- (id)aa_mapNullable:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices

+ (id)ams_arrayWithItem:(id)arg1 count:(unsigned long long)arg2;
+ (void)ams_enumerateObjectsForArrays:(id)arg1 usingBlock:(id /* block */)arg2;

- (bool)ams_allWithTest:(id /* block */)arg1;
- (bool)ams_anyWithTest:(id /* block */)arg1;
- (id)ams_arrayByRemovingObjectsFromArray:(id)arg1;
- (id)ams_dictionaryUsingTransform:(id /* block */)arg1;
- (id)ams_filterUsingTest:(id /* block */)arg1;
- (id)ams_firstObjectPassingTest:(id /* block */)arg1;
- (id)ams_invertedDictionaryUsingTransform:(id /* block */)arg1;
- (id)ams_invertedDictionaryUsingTransformIgnoresNil:(id /* block */)arg1;
- (id)ams_mapWithTransform:(id /* block */)arg1;
- (id)ams_mapWithTransformIgnoresNil:(id /* block */)arg1;
- (id)ams_nonEmptyComponentsJoinedByString:(id)arg1;
- (id)ams_objectAtIndex:(long long)arg1;
- (id)ams_reduceWithInitialResult:(id)arg1 updateAccumulatingResult:(id /* block */)arg2;
- (id)ams_sanitizedForSecureCoding;
- (id)hashedDescription;

// Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices

- (id)_af_lenient:(bool)arg1 map:(id /* block */)arg2;
- (void)af_enumerateDigestibleChunksWithOptions:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
- (id)af_firstObjectPassingTest:(id /* block */)arg1;
- (id)af_lenientMappedArray:(id /* block */)arg1;
- (id)af_lenientMappedDictionary:(id /* block */)arg1;
- (id)af_mappedArray:(id /* block */)arg1;
- (id)af_objectsPassingTest:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI

- (id)afui_arrayByMappingWithBlock:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit

+ (id)ak_arrayWithJSONResponseData:(id)arg1;

// Image: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit

+ (id)avt_arrayWithFloat3;
+ (id)avt_arrayWithFloat4;
+ (id)avt_arrayWithFloat4x4:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;

- (void)avt_float3;
- (void)avt_float4;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })avt_float4x4;
- (id)avt_randomObject;

// Image: /System/Library/PrivateFrameworks/AvatarPersistence.framework/AvatarPersistence

- (id)avt_description;
- (id)avt_firstObjectPassingTest:(id /* block */)arg1;
- (id)avt_map:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/BacklightServices.framework/BacklightServices

- (id)bls_boundedDescription;
- (id)bls_boundedDescriptionWithMax:(long long)arg1;
- (id)bls_boundedDescriptionWithMax:(long long)arg1 transformer:(id /* block */)arg2;
- (id)bls_boundedDescriptionWithTransformer:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/BacklightServicesHost.framework/BacklightServicesHost

- (double)bls_doubleMedian;
- (unsigned long long)bls_unsignedIntegerMedian;

// Image: /System/Library/PrivateFrameworks/BannerKit.framework/BannerKit

- (id)bn_identificationsForPresentables;

// Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard

- (id)bs_compactMap:(id /* block */)arg1;
- (bool)bs_containsObjectPassingTest:(id /* block */)arg1;
- (id)bs_dictionaryByPartitioning:(id /* block */)arg1;
- (id)bs_differenceWithArray:(id)arg1;
- (void)bs_each:(id /* block */)arg1;
- (void)bs_enumerateObjectsOfClass:(Class)arg1 usingBlock:(id /* block */)arg2;
- (id)bs_filter:(id /* block */)arg1;
- (id)bs_first:(unsigned long long)arg1;
- (id)bs_firstObjectOfClass:(Class)arg1;
- (id)bs_firstObjectOfClassNamed:(id)arg1;
- (id)bs_firstObjectPassingTest:(id /* block */)arg1;
- (id)bs_flatten;
- (id)bs_flattenedDifferenceWithArray:(id)arg1;
- (id)bs_map:(id /* block */)arg1;
- (id)bs_mapNoNulls:(id /* block */)arg1;
- (id)bs_objectsOfClass:(Class)arg1;
- (id)bs_reduce:(id)arg1 block:(id /* block */)arg2;
- (id)bs_reverse;

// Image: /System/Library/PrivateFrameworks/BiomeDSL.framework/BiomeDSL

- (id)_bmdsl_randomObjectForKey:(id)arg1;
- (id)bmdsl_randomObject;
- (id)dslWithClass:(Class)arg1;
- (id)dslWithValueClassName:(id)arg1;

// Image: /System/Library/PrivateFrameworks/BiomeFoundation.framework/BiomeFoundation

+ (id)bm_shuffledArrayWithArray:(id)arg1;

// Image: /System/Library/PrivateFrameworks/BiomePubSub.framework/BiomePubSub

- (id)bpsPublisher;
- (id)publisher;

// Image: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore

- (id)bds_arrayByRemovingNSNulls;
- (id)bds_arrayByRemovingNSNullsInvokingBlockForNulls:(id /* block */)arg1;
- (void)bds_chainSuccessAndErrorCompletionSelectorCallsForSelector:(SEL)arg1 completion:(id /* block */)arg2;
- (void)bds_chainUntilNoErrorCompletionSelectorCallsForSelector:(SEL)arg1 completion:(id /* block */)arg2;
- (id)bds_dictionaryUsingPropertyAsKey:(id)arg1 uniquingKeysWith:(id /* block */)arg2;
- (void)bds_traverseBatchesOfSize:(unsigned long long)arg1 block:(id /* block */)arg2;

// Image: /System/Library/PrivateFrameworks/BookUtility.framework/BookUtility

- (id)bu_arrayByInvokingBlock:(id /* block */)arg1;
- (id)bu_arrayByRemovingDuplicates;
- (id)bu_arrayByRemovingItemsWithDuplicateValuesForKey:(id)arg1;
- (id)bu_arrayByRemovingNSNulls;
- (id)bu_arrayByRemovingNSNullsInvokingBlockForNulls:(id /* block */)arg1;
- (id)bu_arrayByRemovingObjectsInArray:(id)arg1;
- (id)bu_arrayOfObjectsWithOptions:(unsigned long long)arg1 passingTest:(id /* block */)arg2;
- (bool)bu_containsLocalizedStringCaseInsensitive:(id)arg1;
- (bool)bu_containsStringCaseInsensitive:(id)arg1;
- (id)bu_dictionaryUsingPropertyAsKey:(id)arg1;
- (long long)bu_indexOfObjectWithValue:(id)arg1 forKeyPath:(id)arg2;
- (id)bu_objectsMatching:(id /* block */)arg1;
- (id)bu_prettyDescription;
- (id)bu_reversedArray;
- (id /* block */)bu_sortDescriptorComparator;

// Image: /System/Library/PrivateFrameworks/BrookServices.framework/BrookServices

- (id)brk_shuffledArray;

// Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion

+ (id)arrayWithArray:(id)arg1 prependPath:(id)arg2;

- (unsigned long long)blt_sizeof;
- (id)objectSentinelNull;
- (id)objectWithNSNulls:(id)arg1;
- (id)objectWithNoNSNulls:(id*)arg1;

// Image: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService

- (id)nb_safeArrayAtIndex:(unsigned long long)arg1;
- (id)nb_safeDataAtIndex:(unsigned long long)arg1;
- (id)nb_safeNumberAtIndex:(unsigned long long)arg1;
- (id)nb_safeObjectAtIndex:(unsigned long long)arg1 class:(Class)arg2;
- (id)nb_safeStringAtIndex:(unsigned long long)arg1;

// Image: /System/Library/PrivateFrameworks/CDDataAccessExpress.framework/CDDataAccessExpress

- (bool)DACPLogArrayBeginsWithArray:(id)arg1;
- (id)DACPLogSubarrayFromIndexToEndOfArray:(unsigned long long)arg1;

// Image: /System/Library/PrivateFrameworks/CDMFoundation.framework/CDMFoundation

- (id)_cdm_filterWithBlock:(id /* block */)arg1;
- (bool)_cdm_hasKey:(id)arg1 withValue:(id)arg2;
- (id)_cdm_mapWithBlock:(id /* block */)arg1;
- (void)enumerateTaskParallelly:(id /* block */)arg1 blockCompleteAllTask:(id /* block */)arg2;

// Image: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture

+ (id)bw_selectedInputsArrayForBuiltInMicRouteDictionary:(id)arg1 dataSource:(id)arg2 polarPattern:(unsigned int)arg3;

- (id)bw_builtInMicRouteDictionary;
- (id)bw_intersectWithArray:(id)arg1;
- (id)powerSet;

// Image: /System/Library/PrivateFrameworks/CMImaging.framework/CMImaging

- (id)cmi_arrayByApplyingComprehension:(id /* block */)arg1;
- (bool)cmi_boolValueForIndex:(unsigned long long)arg1;
- (bool)cmi_boolValueForIndex:(unsigned long long)arg1 valid:(bool*)arg2;
- (bool)cmi_copy2DNestedBoolValuesToBuffer:(bool*)arg1 bufferStride:(unsigned long long)arg2 outerStartingIndex:(unsigned long long)arg3 outerCount:(unsigned long long)arg4 innerStartingIndex:(unsigned long long)arg5 innerCount:(unsigned long long)arg6;
- (bool)cmi_copy2DNestedCharValuesToBuffer:(char *)arg1 bufferStride:(unsigned long long)arg2 outerStartingIndex:(unsigned long long)arg3 outerCount:(unsigned long long)arg4 innerStartingIndex:(unsigned long long)arg5 innerCount:(unsigned long long)arg6;
- (bool)cmi_copy2DNestedFloatValuesToBuffer:(float*)arg1 bufferStride:(unsigned long long)arg2 outerStartingIndex:(unsigned long long)arg3 outerCount:(unsigned long long)arg4 innerStartingIndex:(unsigned long long)arg5 innerCount:(unsigned long long)arg6;
- (bool)cmi_copy2DNestedIntValuesToBuffer:(int*)arg1 bufferStride:(unsigned long long)arg2 outerStartingIndex:(unsigned long long)arg3 outerCount:(unsigned long long)arg4 innerStartingIndex:(unsigned long long)arg5 innerCount:(unsigned long long)arg6;
- (bool)cmi_copy2DNestedShortValuesToBuffer:(short*)arg1 bufferStride:(unsigned long long)arg2 outerStartingIndex:(unsigned long long)arg3 outerCount:(unsigned long long)arg4 innerStartingIndex:(unsigned long long)arg5 innerCount:(unsigned long long)arg6;
- (bool)cmi_copy2DNestedUnsignedCharValuesToBuffer:(char *)arg1 bufferStride:(unsigned long long)arg2 outerStartingIndex:(unsigned long long)arg3 outerCount:(unsigned long long)arg4 innerStartingIndex:(unsigned long long)arg5 innerCount:(unsigned long long)arg6;
- (bool)cmi_copy2DNestedUnsignedIntValuesToBuffer:(unsigned int*)arg1 bufferStride:(unsigned long long)arg2 outerStartingIndex:(unsigned long long)arg3 outerCount:(unsigned long long)arg4 innerStartingIndex:(unsigned long long)arg5 innerCount:(unsigned long long)arg6;
- (bool)cmi_copy2DNestedUnsignedShortValuesToBuffer:(unsigned short*)arg1 bufferStride:(unsigned long long)arg2 outerStartingIndex:(unsigned long long)arg3 outerCount:(unsigned long long)arg4 innerStartingIndex:(unsigned long long)arg5 innerCount:(unsigned long long)arg6;
- (bool)cmi_copyBoolValuesToBuffer:(bool*)arg1 startingIndex:(unsigned long long)arg2 count:(unsigned long long)arg3;
- (bool)cmi_copyCharValuesToBuffer:(char *)arg1 startingIndex:(unsigned long long)arg2 count:(unsigned long long)arg3;
- (bool)cmi_copyFloatValuesToBuffer:(float*)arg1 startingIndex:(unsigned long long)arg2 count:(unsigned long long)arg3;
- (bool)cmi_copyIntValuesToBuffer:(int*)arg1 startingIndex:(unsigned long long)arg2 count:(unsigned long long)arg3;
- (bool)cmi_copyShortValuesToBuffer:(short*)arg1 startingIndex:(unsigned long long)arg2 count:(unsigned long long)arg3;
- (bool)cmi_copyUnsignedCharValuesToBuffer:(char *)arg1 startingIndex:(unsigned long long)arg2 count:(unsigned long long)arg3;
- (bool)cmi_copyUnsignedIntValuesToBuffer:(unsigned int*)arg1 startingIndex:(unsigned long long)arg2 count:(unsigned long long)arg3;
- (bool)cmi_copyUnsignedShortValuesToBuffer:(unsigned short*)arg1 startingIndex:(unsigned long long)arg2 count:(unsigned long long)arg3;
- (float)cmi_floatValueForIndex:(unsigned long long)arg1;
- (float)cmi_floatValueForIndex:(unsigned long long)arg1 valid:(bool*)arg2;
- (int)cmi_intValueForIndex:(unsigned long long)arg1;
- (int)cmi_intValueForIndex:(unsigned long long)arg1 valid:(bool*)arg2;
- (float)cmi_interpolateValueForGain:(float)arg1;
- (bool)cmi_isValidGainValueArray;
- (id)cmi_numberForIndex:(unsigned long long)arg1 valid:(bool*)arg2;
- (id)cmi_selectValueForGain:(float)arg1;
- (unsigned int)cmi_unsignedIntValueForIndex:(unsigned long long)arg1;
- (unsigned int)cmi_unsignedIntValueForIndex:(unsigned long long)arg1 valid:(bool*)arg2;

// Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV

- (id)allObjectsWithClass:(Class)arg1;
- (bool)containsObjectIdenticalTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation

+ (id)arrayOfSetsBySplitting:(id)arg1 batchSize:(unsigned long long)arg2;

- (bool)CalContainsObjectIdenticalTo:(id)arg1;
- (id)CalFilter:(id /* block */)arg1;
- (id)CalFirstObjectPassingTest:(id /* block */)arg1;
- (id)CalFlatMap:(id /* block */)arg1;
- (id)CalMap:(id /* block */)arg1;
- (id)CalMutableRecursiveCopy;
- (id)CalStringValueForKeyPaths:(id)arg1;
- (id)CalStringValueForKeys:(id)arg1;
- (id)CalStringValueForKeys:(id)arg1 keyPaths:(id)arg2;
- (id)CalTake:(unsigned long long)arg1;
- (id)_CalArrayOfValueForKeyPaths:(id)arg1;
- (id)_CalArrayOfValueForKeys:(id)arg1;
- (id)_CalStringForArrayOfValues:(id)arg1;
- (id)allObjectsWithClass:(Class)arg1;
- (id)filteredArrayUsingTest:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/CalendarMigration.framework/CalendarMigration

- (void)enumerateCalAlarmRefsUsingBlock:(id /* block */)arg1;
- (void)enumerateCalAttachmentRefsUsingBlock:(id /* block */)arg1;
- (void)enumerateCalAttendeeRefsUsingBlock:(id /* block */)arg1;
- (void)enumerateCalCalendarRefsUsingBlock:(id /* block */)arg1;
- (void)enumerateCalEventRefsUsingBlock:(id /* block */)arg1;
- (void)enumerateCalNotificationRefsUsingBlock:(id /* block */)arg1;
- (void)enumerateCalResourceChangeRefsUsingBlock:(id /* block */)arg1;
- (void)enumerateCalStoreRefsUsingBlock:(id /* block */)arg1;
- (void)enumerateCalTaskRefsUsingBlock:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit

- (id)mutableDeepCopy;

// Image: /System/Library/PrivateFrameworks/CarKit.framework/CarKit

- (id)carMutableDeepCopy;

// Image: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport

- (id)cps_filter:(id /* block */)arg1;
- (id)cps_map:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/Cards.framework/Cards

- (id)_deepCopy;

// Image: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst

+ (id)cat_arrayFromIndexSet:(id)arg1;

- (id)cat_flatMapUsingBlock:(id /* block */)arg1;
- (void)cat_forEach:(id /* block */)arg1;
- (id)cat_map:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/CellularBridgeUI.framework/CellularBridgeUI

- (id)firstObjectPassingTest:(id /* block */)arg1;
- (bool)hasObjectPassingTest:(id /* block */)arg1;
- (id)max:(id /* block */)arg1;
- (id)nph_map:(id /* block */)arg1;
- (id)objectsPassingTest:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

- (id)__ck_IMChatItemsAtIndexes:(id)arg1;
- (id)__ck_chatItemWithGUID:(id)arg1;
- (id)__ck_failedMessagesForChatItemsWithConversationID:(long long)arg1;
- (unsigned long long)__ck_indexOfChatItemWithGUID:(id)arg1;
- (unsigned long long)__ck_indexOfMediaObject:(id)arg1;
- (unsigned long long)__ck_indexOfParentChatItemWithMesssageGUID:(id)arg1 associatedMessageRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (unsigned long long)__ck_indexOfPartOfMessage:(id)arg1 withMessagePartIndex:(unsigned long long)arg2;
- (unsigned long long)__ck_indexOfTransfer:(id)arg1;
- (id)__ck_indexSetForIndexPathItemsInSection:(long long)arg1;
- (id)__ck_indexSetForIndexPathRowsInSection:(long long)arg1;
- (id)__ck_indexesOfPartsOfMessageWithGUID:(id)arg1;
- (id)__ck_indexesOfPartsOfMessages:(id)arg1;
- (id)__ck_indexesOfPartsOfNonAttachmentMessages:(id)arg1;
- (id)__ck_indexesOfUnplayedAudioMessages;
- (id)__ck_messageForChatItemAtIndex:(unsigned long long)arg1;
- (id)__ck_parentChatItemWithMesssageGUID:(id)arg1 associatedMessageRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)__ck_proxyWithBundleIdentifier:(id)arg1;
- (id)__ck_shuffledArray;
- (void)__ck_unloadSizesAtIndexes:(id)arg1;
- (void)__ck_unloadTranscriptTextAtIndexes:(id)arg1;
- (id)__im_canonicalIDSAddressesFromEntities;
- (bool)ck_containsObjectIdenticalTo:(id)arg1;
- (id)composeRecipientAddresses;
- (id)composeRecipientHandles;
- (id)composeRecipientNormalizedAddresses;

// Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit

- (id)crk_JSONRepresentationWithPrettyPrinting:(bool)arg1 sortKeys:(bool)arg2;
- (bool)crk_allObjectsMatchPredicate:(id /* block */)arg1;
- (id)crk_arrayByRemovingFirstObject;
- (id)crk_arrayByRemovingObject:(id)arg1;
- (id)crk_arrayByRemovingObjectsInArray:(id)arg1;
- (bool)crk_containsObjectMatchingPredicate:(id /* block */)arg1;
- (id)crk_dictionaryUsingKeyGenerator:(id /* block */)arg1 valueGenerator:(id /* block */)arg2;
- (id)crk_filterUsingBlock:(id /* block */)arg1;
- (id)crk_firstMatching:(id /* block */)arg1;
- (id)crk_flatMapUsingBlock:(id /* block */)arg1;
- (bool)crk_isSortedByComparator:(id /* block */)arg1;
- (id)crk_mapToSetUsingBlock:(id /* block */)arg1;
- (id)crk_mapUsingBlock:(id /* block */)arg1;
- (id)crk_optionalObjectAtIndex:(unsigned long long)arg1;
- (id)crk_partitionUsingKeyGenerator:(id /* block */)arg1 valueGenerator:(id /* block */)arg2;
- (id)crk_sortedArrayForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 usingComparator:(id /* block */)arg2;
- (id)crk_sortedSubarrayWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 comparator:(id /* block */)arg2;
- (bool)crk_startsWith:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs

- (bool)br_all_of:(id /* block */)arg1;
- (bool)br_any_of:(id /* block */)arg1;
- (id)br_copy_if:(id /* block */)arg1;
- (bool)br_none_of:(id /* block */)arg1;
- (id)br_transform:(id /* block */)arg1;
- (id)br_transform:(id /* block */)arg1 keepNull:(bool)arg2;

// Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon

- (void)_CKLogToFileHandle:(id)arg1 atDepth:(int)arg2;

// Image: /System/Library/PrivateFrameworks/CloudMediaServicesInterfaceKit.framework/CloudMediaServicesInterfaceKit

- (id)cmsCoded;

// Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary

- (id)cplDeepCopy;
- (id)cplFullDescription;
- (id)initWithCPLArchiver:(id)arg1;
- (id)plistArchiveWithCPLArchiver:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CommonUtilities.framework/CommonUtilities

- (id)cutFirstObject;

// Image: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI

- (id)CNFRegArrayPassingTest:(id /* block */)arg1;
- (id)CNFRegArrayPassingTests:(id)arg1;

// Image: /System/Library/PrivateFrameworks/ContactsAssistantServices.framework/ContactsAssistantServices

- (id)filterUsingBlock:(id /* block */)arg1;
- (id)mapUsingBlock:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation

+ (id)_cn_arrayWithObject:(id)arg1 count:(unsigned long long)arg2;

- (bool)_cn_all:(id /* block */)arg1;
- (bool)_cn_any:(id /* block */)arg1;
- (id)_cn_arrayByRotatingRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 by:(long long)arg2;
- (id)_cn_balancedSlicesWithMaximumCount:(unsigned long long)arg1;
- (id)_cn_compactMap:(id /* block */)arg1;
- (id)_cn_concurrentMap:(id /* block */)arg1;
- (bool)_cn_containsObject:(id)arg1;
- (id)_cn_distinctObjects;
- (void)_cn_each:(id /* block */)arg1;
- (void)_cn_each:(id /* block */)arg1 until:(id /* block */)arg2;
- (void)_cn_each:(id /* block */)arg1 untilCancelled:(id)arg2;
- (void)_cn_each_reverse:(id /* block */)arg1;
- (id)_cn_filter:(id /* block */)arg1;
- (id)_cn_firstObjectPassingTest:(id /* block */)arg1;
- (id)_cn_flatMap:(id /* block */)arg1;
- (id)_cn_flatten;
- (id)_cn_groupBy:(id /* block */)arg1;
- (id)_cn_indexBy:(id /* block */)arg1;
- (unsigned long long)_cn_indexOfFirstObjectPassingTest:(id /* block */)arg1;
- (id)_cn_indicesForObjects:(id)arg1;
- (bool)_cn_isIdenticalToArray:(id)arg1;
- (bool)_cn_isNonEmpty;
- (id)_cn_join:(id)arg1;
- (id)_cn_joinWithBlock:(id /* block */)arg1;
- (id)_cn_lazy;
- (id)_cn_map:(id /* block */)arg1;
- (bool)_cn_none:(id /* block */)arg1;
- (id)_cn_partition:(id /* block */)arg1;
- (id)_cn_reduce:(id /* block */)arg1;
- (id)_cn_reduce:(id /* block */)arg1 initialValue:(id)arg2;
- (id)_cn_reversed;
- (id)_cn_safeSortedArrayUsingComparator:(id /* block */)arg1;
- (id)_cn_skip:(unsigned long long)arg1;
- (id)_cn_skipLast:(unsigned long long)arg1;
- (id)_cn_slicesWithMaximumCount:(unsigned long long)arg1;
- (id)_cn_sortedArrayUsingAuxiliarySortOrder:(id)arg1 transform:(id /* block */)arg2;
- (id)_cn_tail;
- (id)_cn_take:(unsigned long long)arg1;
- (id)_cn_takeLast:(unsigned long long)arg1;
- (id)_cn_zip:(id)arg1;
- (void)_cn_zip:(id)arg1 withBlock:(id /* block */)arg2;

// Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit

- (id)filteredArrayForKey:(id)arg1 boolValue:(bool)arg2;
- (id)filteredArrayForKey:(id)arg1 intValue:(int)arg2;
- (id)filteredArrayForKey:(id)arg1 value:(id)arg2;
- (id)objectMatchingKey:(id)arg1 boolValue:(bool)arg2;
- (id)objectMatchingKey:(id)arg1 intValue:(int)arg2;
- (id)objectMatchingKey:(id)arg1 value:(id)arg2;
- (id)objectsMatchingClass:(Class)arg1;
- (id)objectsNotMatchingClass:(Class)arg1;
- (void)sortedArrayUsingContentSortDescriptors:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)sortedArrayUsingContentSortDescriptors:(id)arg1 propertySubstitutor:(id /* block */)arg2 completionHandler:(id /* block */)arg3;

// Image: /System/Library/PrivateFrameworks/CoreCDP.framework/CoreCDP

- (bool)hasMixedSecretType;
- (unsigned long long)prevailingLocalSecretType;

// Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV

+ (id)_arrayWithIntArg:(int)arg1 additionalArgs:(char *)arg2;
+ (id)cdvArrayWithIntegers:(int)arg1;

// Image: /System/Library/PrivateFrameworks/CoreFollowUp.framework/CoreFollowUp

- (id)fl_map:(id /* block */)arg1;
- (id)fl_multiMap:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting

- (id)ch_descriptionWithSeparator:(id)arg1 filterBlock:(id /* block */)arg2;
- (id)ch_mappedArrayWithBlock:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream

- (id)MSDSPAssetCollectionWithMasterFileHash:(id)arg1;
- (id)MSDeepCopy;
- (id)MSDeepCopyWithZone:(struct _NSZone { }*)arg1;
- (id)MSMutableDeepCopy;
- (id)MSMutableDeepCopyWithZone:(struct _NSZone { }*)arg1;

// Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec

- (id)parsec_filterObjectsUsingBlock:(id /* block */)arg1;
- (id)parsec_mapAndFilterObjectsUsingBlock:(id /* block */)arg1;
- (id)parsec_mapAndFilterObjectsWithOptions:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
- (id)parsec_mapObjectsUsingBlock:(id /* block */)arg1;
- (id)parsec_numberAtIndex:(unsigned long long)arg1;
- (id)sf_asCardSections:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CoreRecents.framework/CoreRecents

- (unsigned long long)cr_binaryInsertionIndexOfObject:(id)arg1 usingComparator:(id /* block */)arg2 match:(bool*)arg3;
- (id)cr_firstObjectPassingTest:(id /* block */)arg1;
- (id)cr_insertionSortedArrayUsingComparator:(id /* block */)arg1;
- (id)cr_map:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine

- (id)flatten;

// Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech

- (id)_cs_initWithXPCObject:(id)arg1;
- (id)_cs_xpcObject;

// Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions

- (void)sg_enumerateChunksOfSize:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;

// Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals

- (id)hv_firstHeaderForKey:(id)arg1;
- (id)sg_deepCopyWithoutEmptySchemaObjects;
- (bool)sg_isEmptySchemaObject;

// Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils

+ (id)createWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 error:(id*)arg3;

- (id)cuFilteredArrayUsingBlock:(id /* block */)arg1;
- (const char *)encodedBytesAndReturnLength:(unsigned long long*)arg1 error:(id*)arg2;
- (id)encodedDataAndReturnError:(id*)arg1;

// Image: /System/Library/PrivateFrameworks/DashBoard.framework/DashBoard

- (id)db_filter:(id /* block */)arg1;
- (id)db_firstObjectPassingTest:(id /* block */)arg1;
- (id)db_map:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress

- (bool)DACPLogArrayBeginsWithArray:(id)arg1;
- (id)DACPLogSubarrayFromIndexToEndOfArray:(unsigned long long)arg1;

// Image: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon

- (id)findWithBlock:(id /* block */)arg1;
- (id)mapWithBlock:(id /* block */)arg1;
- (id)rejectItemsPassingTest:(id /* block */)arg1;
- (id)selectItemsPassingTest:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/DictionaryUI.framework/DictionaryUI

- (id)_filteredArrayOfObjectsPassingTest:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/DistributedEvaluation.framework/DistributedEvaluation

- (id)_fides_objectByReplacingValue:(id)arg1 withValue:(id)arg2;
- (id)_fides_shuffledArray;

// Image: /System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb

- (void)diffAgainstObject:(id)arg1 usingDiffBuilder:(id)arg2 withDescription:(id)arg3;

// Image: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer

- (void)enumerateBatchesOfSize:(unsigned long long)arg1 handler:(id /* block */)arg2;

// Image: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera

- (id)dc_arrayByGroupingIntoArraysWithMaxCount:(unsigned long long)arg1;
- (id)dc_compactMap:(id /* block */)arg1;
- (bool)dc_containsObjectPassingTest:(id /* block */)arg1;
- (id)dc_flatMap:(id /* block */)arg1;
- (bool)dc_indexIsValid:(long long)arg1;
- (unsigned long long)dc_indexOfSortedObject:(id)arg1 insertionIndex:(out unsigned long long*)arg2 usingComparator:(id /* block */)arg3;
- (id)dc_map:(id /* block */)arg1;
- (id)dc_objectAfter:(id)arg1;
- (id)dc_objectAfter:(id)arg1 wrap:(bool)arg2;
- (id)dc_objectBefore:(id)arg1;
- (id)dc_objectBefore:(id)arg1 wrap:(bool)arg2;
- (id)dc_objectPassingTest:(id /* block */)arg1;
- (id)dc_objectsOfClass:(Class)arg1;
- (id)dc_objectsPassingTest:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/DocumentManagerCore.framework/DocumentManagerCore

- (id)_doc_ranksForInsertingBelowRank:(id)arg1 spacing:(unsigned long long)arg2 count:(unsigned long long)arg3;
- (id)doc_computeNewRankForIndex:(long long)arg1;
- (id)doc_ranksForInsertingBelowRank:(id)arg1 count:(unsigned long long)arg2;
- (id)doc_ranksForInsertingBetweenHigherRank:(id)arg1 lowerRank:(id)arg2 count:(unsigned long long)arg3;

// Image: /System/Library/PrivateFrameworks/DuetActivityScheduler.framework/DuetActivityScheduler

+ (id)array:(id)arg1 withItemsIn:(id)arg2;
+ (id)arrayWithIntersectionOf:(id)arg1 and:(id)arg2;
+ (id)arrayWithUnionOf:(id)arg1 and:(id)arg2;

- (bool)anyItemsIntersectArray:(id)arg1;
- (double)cooccurrencesWith:(id)arg1;
- (double)correlationWith:(id)arg1;
- (double)mean;
- (double)standardDeviation;
- (double)standardDeviationWithMean:(double)arg1;

// Image: /System/Library/PrivateFrameworks/Email.framework/Email

- (unsigned long long)em_messageListItemTotalCount;
- (id)em_senderAddresses;

// Image: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation

- (id)ef_SQLExpression;
- (id)ef_SQLIsolatedExpression;
- (bool)ef_all:(id /* block */)arg1;
- (bool)ef_any:(id /* block */)arg1;
- (id)ef_arrayByAddingAbsentObjectsFromArray:(id)arg1;
- (id)ef_compactMap:(id /* block */)arg1;
- (id)ef_compactMapItemsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 usingTransform:(id /* block */)arg2;
- (id)ef_compactMapSelector:(SEL)arg1;
- (unsigned long long)ef_countObjectsPassingTest:(id /* block */)arg1;
- (void)ef_enumerateObjectsInBatchesOfSize:(unsigned long long)arg1 block:(id /* block */)arg2;
- (void)ef_enumerateObjectsInBatchesOfSize:(unsigned long long)arg1 objectArrayBlock:(id /* block */)arg2;
- (void)ef_enumerateObjectsInBatchesOfSize:(unsigned long long)arg1 overlapBy:(unsigned long long)arg2 block:(id /* block */)arg3;
- (id)ef_filter:(id /* block */)arg1;
- (id)ef_firstObjectPassingTest:(id /* block */)arg1;
- (id)ef_flatMap:(id /* block */)arg1;
- (id)ef_flatten;
- (id)ef_groupBy:(id /* block */)arg1;
- (id)ef_groupByObject:(id /* block */)arg1;
- (id)ef_groupByObject:(id /* block */)arg1 keyOptions:(unsigned long long)arg2 valueOptions:(unsigned long long)arg3;
- (unsigned long long)ef_indexOfObject:(id)arg1 usingComparator:(id /* block */)arg2;
- (unsigned long long)ef_indexOfObject:(id)arg1 usingSortFunction:(int (*)arg2 context:(void*)arg3;
- (unsigned long long)ef_indexWhereObjectWouldBeInserted:(id)arg1 usingComparator:(id /* block */)arg2;
- (id)ef_indicesOfStringsWithPrefix:(id)arg1;
- (bool)ef_isEmpty;
- (id)ef_lastObjectPassingTest:(id /* block */)arg1;
- (id)ef_map:(id /* block */)arg1;
- (id)ef_mapSelector:(SEL)arg1;
- (id)ef_max;
- (id)ef_mean;
- (id)ef_median;
- (id)ef_min;
- (id)ef_mode;
- (id)ef_notEmpty;
- (id)ef_objectSameAs:(id)arg1 usingComparator:(id /* block */)arg2;
- (id)ef_objectsPassingTest:(id /* block */)arg1;
- (id)ef_partition:(id /* block */)arg1;
- (id)ef_permutations;
- (id)ef_prefix:(unsigned long long)arg1;
- (id)ef_reduce:(id /* block */)arg1;
- (void)ef_renderSQLExpressionInto:(id)arg1;
- (void)ef_renderSQLExpressionInto:(id)arg1 conjoiner:(id)arg2;
- (id)ef_reverse;
- (id)ef_standardDeviation;
- (id)ef_subarrayWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)ef_subarraysOfSize:(unsigned long long)arg1;
- (id)ef_suffix:(unsigned long long)arg1;
- (id)ef_sum;
- (id)ef_tail;
- (id)ef_uniquifyWithComparator:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/FMCoreLite.framework/FMCoreLite

+ (id)fm_arrayByRepeatingWithCount:(unsigned long long)arg1 generatorBlock:(id /* block */)arg2;
+ (id)fm_arrayWithSafeObject:(id)arg1;

- (bool)fm_all:(id /* block */)arg1;
- (bool)fm_any:(id /* block */)arg1;
- (id)fm_arrayByFlattening;
- (id)fm_arrayWithResultsOfBlock:(id /* block */)arg1;
- (id)fm_dictionaryWithKeyGenerator:(id /* block */)arg1;
- (void)fm_each:(id /* block */)arg1;
- (id)fm_filter:(id /* block */)arg1;
- (id)fm_firstObjectPassingTest:(id /* block */)arg1;
- (id)fm_map:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices

- (id)_FTFilteredArrayForAPS;
- (id)_IDsFromURIs;
- (id)_URIsFromIDs;

// Image: /System/Library/PrivateFrameworks/FamilyCircle.framework/FamilyCircle

- (id)fa_firstObjectMatching:(id /* block */)arg1;
- (id)fa_map:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/FinHealthCore.framework/FinHealthCore

- (id)_firstObjectWithPredicate:(id /* block */)arg1 order:(long long)arg2;
- (id)firstObjectWithPredicate:(id /* block */)arg1;
- (int)intAtIndex:(unsigned long long)arg1;
- (id)lastObjectWithPredicate:(id /* block */)arg1;
- (id)stringAtIndex:(unsigned long long)arg1;
- (unsigned int)unsignedIntAtIndex:(unsigned long long)arg1;

// Image: /System/Library/PrivateFrameworks/Fitness.framework/Fitness

+ (id)fi_arrayByEnumeratingRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 usingBlock:(id /* block */)arg2;

- (id)fi_filteredArrayUsingBlock:(id /* block */)arg1;
- (id)fi_flatMapUsingBlock:(id /* block */)arg1;
- (id)fi_mapUsingBlock:(id /* block */)arg1;
- (id)fi_reduceWithReduction:(id)arg1 block:(id /* block */)arg2;

// Image: /System/Library/PrivateFrameworks/FocusUI.framework/FocusUI

- (bool)fcui_isEqualToActionArray:(id)arg1;

// Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation

- (id)_gkDescriptionWithChildren:(long long)arg1;
- (id)_gkDistinctValuesForKeyPath:(id)arg1;
- (id)_gkFilterWithBlock:(id /* block */)arg1;
- (id)_gkFirstObject;
- (id)_gkFoldWithInitialValue:(id)arg1 block:(id /* block */)arg2;
- (id)_gkGuestPlayersFromPlayers;
- (id)_gkIncompletePlayersFromPlayerIDs;
- (id)_gkInternalsFromPlayers;
- (id)_gkInternalsFromUncheckedPlayers;
- (id)_gkMapConcurrentlyWithBlock:(id /* block */)arg1;
- (id)_gkMapDictionaryWithKeyPath:(id)arg1;
- (id)_gkMapDictionaryWithKeyPath:(id)arg1 valueKeyPath:(id)arg2;
- (id)_gkMapWithBlock:(id /* block */)arg1;
- (id)_gkNonGuestPlayersFromPlayers;
- (id)_gkPlayersFromInternals;
- (id)_gkPlayersIDsFromPlayers;
- (id)_gkSubarraysByKeyWithBlock:(id /* block */)arg1;
- (void)_gkValidatePlayersForReturnFromAPI;
- (id)_gkValuesForKeyPath:(id)arg1;

// Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI

- (id)_gkCommaSeparatedRecipientListWithWidth:(float)arg1 forTextStyle:(id)arg2;
- (id)_gkCommaSeparatedRecipientListWithWidth:(float)arg1 forTextStyle:(id)arg2 usingSelector:(SEL)arg3;

// Image: /System/Library/PrivateFrameworks/GameControllerFoundation.framework/GameControllerFoundation

- (id)gc_arrayByTransformingElementsUsingBlock:(id /* block */)arg1;
- (id)gc_arrayByTransformingElementsWithOptions:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
- (void)gc_enumerateObjectsUsingBlock:(id /* block */)arg1;
- (void)gc_enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
- (id)gc_requiredObjectAtIndex:(unsigned long long)arg1 ofClass:(Class)arg2;
- (id)gc_requiredObjectAtIndex:(unsigned long long)arg1 ofClass:(Class)arg2 error:(out id*)arg3;
- (id)gc_reversedArray;

// Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices

- (id)_geo_compactMap:(id /* block */)arg1;
- (id)_geo_filtered:(id /* block */)arg1;
- (id)_geo_firstPhotoOfAtLeastSize:(struct CGSize { double x1; double x2; })arg1;
- (id)_geo_map:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation

+ (id)shortDescription;

- (id)describeElements:(id /* block */)arg1;
- (id)hmf_firstObjectWithCharacteristicType:(id)arg1;
- (id)hmf_firstObjectWithInstanceID:(id)arg1;
- (id)hmf_firstObjectWithName:(id)arg1;
- (id)hmf_firstObjectWithSPIUniqueIdentifier:(id)arg1;
- (id)hmf_firstObjectWithUUID:(id)arg1;
- (id)hmf_firstObjectWithUniqueIdentifier:(id)arg1;
- (id)hmf_firstObjectWithValue:(id)arg1 forKeyPath:(id)arg2;
- (id)hmf_firstObjectWithZoneID:(id)arg1;
- (bool)hmf_isEmpty;
- (id)hmf_objectPassingTest:(id /* block */)arg1;
- (id)hmf_objectWithOptions:(unsigned long long)arg1 passingTest:(id /* block */)arg2;
- (bool)hmf_objectsAreKindOfClass:(Class)arg1;
- (id)hmf_objectsPassingTest:(id /* block */)arg1;
- (id)hmf_objectsWithOptions:(unsigned long long)arg1 passingTest:(id /* block */)arg2;
- (id)privateDescription;
- (id)secureDescriptionWithBlacklistKeys:(id)arg1;
- (id)secureDescriptionWithIndent:(id)arg1 newLine:(bool)arg2 blacklistedKeys:(id)arg3;
- (id)shortDescription;

// Image: /System/Library/PrivateFrameworks/HealthExposureNotificationUI.framework/HealthExposureNotificationUI

- (id)enui_filter:(id /* block */)arg1;
- (id)enui_map:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/HealthRecordsExtraction.framework/HealthRecordsExtraction

- (id)hd_stringArrayValue;

// Image: /System/Library/PrivateFrameworks/HearingUtilities.framework/HearingUtilities

- (id)programThatMatchesProgram:(id)arg1;
- (void)setProgram:(id)arg1 withOtherSidePrograms:(id)arg2 selected:(bool)arg3;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

+ (id)hf_arrayWithNumbersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 stride:(unsigned long long)arg2;

- (unsigned long long)computeHashFromContents;
- (void)hf_fanOutAtIndex:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
- (id)hf_firstMostCommonObject;
- (id)hf_prettyDescription;
- (id)hf_prettyExpensiveDescription;
- (id)hf_prettyFullDescription;

// Image: /System/Library/PrivateFrameworks/HomeDeviceSetup.framework/HomeDeviceSetup

- (id)hds_compactMap:(id /* block */)arg1;
- (id)hds_objectsPassingTest:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore

- (id)hmbDescription;

// Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon

- (id)asSet;
- (id)combineAllFutures;
- (id)hmd_residentDeviceForMeshNode:(id)arg1;
- (id)hmd_residentWithIdentifier:(id)arg1;

// Image: /System/Library/PrivateFrameworks/HomeKitDaemonLegacy.framework/HomeKitDaemonLegacy

- (id)asSet;
- (id)combineAllFutures;
- (id)hmd_residentDeviceForMeshNode:(id)arg1;
- (id)hmd_residentWithIdentifier:(id)arg1;

// Image: /System/Library/PrivateFrameworks/HomeKitMatter.framework/HomeKitMatter

- (id)decodedCHIPReports;
- (id)encodedCHIPReports;
- (id)xpcEncodedCHIPReportsFromHMFEncodedMessage;

// Image: /System/Library/PrivateFrameworks/HomeMessagingUtils.framework/HomeMessagingUtils

- (id)hmu_compactMap:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/HomeRecommendationEngine.framework/HomeRecommendationEngine

- (id)hre_filteredToClass:(Class)arg1;

// Image: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore

- (id)componentsJoinedIntoListWithMaxItems:(int)arg1;

// Image: /System/Library/PrivateFrameworks/IMAssistantCore.framework/IMAssistantCore

- (id)__im_assistant_arrayByApplyingBlockWithIndex:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore

- (void)__enumerateItemsWithOptions:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
- (id)__imItems;
- (id)__imLastMessageItem;
- (void)enumerateMessagesWithOptions:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
- (bool)equivalentToRecipients:(id)arg1;
- (id)firstMessage;
- (id)firstMessageItem;
- (id)indexesOfPartsOfMessage:(id)arg1;
- (id)indexesOfPartsOfMessageItem:(id)arg1;
- (id)lastFinishedMessage;
- (id)lastIncomingFinishedMessage;
- (id)lastIncomingMessage;
- (id)lastMessage;
- (id)lastMessageItem;
- (id)messages;

// Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation

- (id)SHA256Data;
- (id)SHA256HexString;
- (void)_SHA256Bytes:(char *)arg1;
- (id)__IMStripPotentialTokenURIs;
- (id)__imArrayByApplyingBlock:(id /* block */)arg1;
- (id)__imArrayByApplyingBlock:(id /* block */)arg1 filter:(id /* block */)arg2;
- (id)__imArrayByFilteringWithBlock:(id /* block */)arg1;
- (id)__imDeepCopy;
- (id)__imFirstObject;
- (void)__imForEach:(id /* block */)arg1;
- (bool)__imIsMutable;
- (id)__imMapToDictionary:(id /* block */)arg1;
- (id)__imSetFromArray;
- (id)_copyForEnumerating;
- (bool)_hasSameMembers:(id)arg1;
- (bool)containsObject:(id)arg1 matchingComparison:(SEL)arg2;
- (bool)containsObjectIdenticalTo:(id)arg1;
- (long long)indexOfObject:(id)arg1 matchingComparison:(SEL)arg2;

// Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities

- (id)__im_canonicalIDSIDsFromAddresses;
- (bool)isArchivable_im;

// Image: /System/Library/PrivateFrameworks/IconServices.framework/IconServices

- (id)resourceStack;

// Image: /System/Library/PrivateFrameworks/InAppMessagesCore.framework/InAppMessagesCore

- (id)iam_compactMap:(id /* block */)arg1;
- (id)iam_dictionaryFromArrayOfICIIAMParameters;
- (id)iam_map:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/IntelligentRoutingDaemon.framework/IntelligentRoutingDaemon

- (id)allWhere:(id /* block */)arg1;
- (id)arrayByAddingObject:(id)arg1 withCapacityLimit:(unsigned long long)arg2;
- (id)firstWhere:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/IntentsFoundation.framework/IntentsFoundation

+ (id)_inf_arrayWithObjectIfNonNil:(id)arg1;
+ (id)if_arrayWithObjectIfNonNil:(id)arg1;

- (id)_inf_flatMap:(id /* block */)arg1;
- (id)_inf_objectsPassingTest:(id /* block */)arg1;
- (id)if_arrayByRemovingObject:(id)arg1;
- (id)if_arrayByRemovingObjectsInArray:(id)arg1;
- (id)if_compactMap:(id /* block */)arg1;
- (id)if_compactMapConcurrently:(id /* block */)arg1;
- (void)if_enumerateAsynchronously:(id /* block */)arg1 completionHandler:(id /* block */)arg2;
- (void)if_enumerateAsynchronouslyInSequence:(id /* block */)arg1 completionHandler:(id /* block */)arg2;
- (void)if_enumerateAsynchronouslyInSequenceOnQueue:(id)arg1 block:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
- (void)if_enumerateAsynchronouslyOnQueue:(id)arg1 block:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
- (id)if_escapedComponentsJoinedByString:(id)arg1 forLocale:(id)arg2;
- (id)if_firstObjectPassingTest:(id /* block */)arg1;
- (id)if_firstObjectWithBoolValue:(bool)arg1 forKey:(id)arg2;
- (id)if_firstObjectWithIntValue:(int)arg1 forKey:(id)arg2;
- (id)if_firstObjectWithValue:(id)arg1 forKey:(id)arg2;
- (id)if_flatMap:(id /* block */)arg1;
- (void)if_flatMapAsynchronously:(id /* block */)arg1 completionHandler:(id /* block */)arg2;
- (void)if_flatMapAsynchronouslyOnQueue:(id)arg1 transform:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
- (id)if_map:(id /* block */)arg1;
- (void)if_mapAsynchronously:(id /* block */)arg1 completionHandler:(id /* block */)arg2;
- (void)if_mapAsynchronouslyOnQueue:(id)arg1 transform:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
- (id)if_mapConcurrently:(id /* block */)arg1;
- (id)if_objectsNotOfClass:(Class)arg1;
- (id)if_objectsOfClass:(Class)arg1;
- (id)if_objectsPassingTest:(id /* block */)arg1;
- (id)if_objectsWithBoolValue:(bool)arg1 forKey:(id)arg2;
- (id)if_objectsWithIntValue:(int)arg1 forKey:(id)arg2;
- (id)if_objectsWithValue:(id)arg1 forKey:(id)arg2;

// Image: /System/Library/PrivateFrameworks/IntlPreferences.framework/IntlPreferences

- (id)filteredLanguagesBySearchString:(id)arg1;

// Image: /System/Library/PrivateFrameworks/MIME.framework/MIME

- (id)mf_dictionaryWithMessagesSortedByStore;
- (id)mf_uncommentedAddressList;

// Image: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions

- (id)MSg_copyIf:(id /* block */)arg1;
- (id)MSg_mutableCopyIf:(id /* block */)arg1;
- (bool)containsEntryWithIdentifier:(id)arg1;

// Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport

- (id)_maps_arrayWithObjectsConformingToProtocols:(id)arg1;
- (unsigned long long)_maps_indexOfObjectCorrespondingToIdentifiableObject:(id)arg1;
- (id)_maps_indexesOfObjectsCorrespondingToIdentifiableObjects:(id)arg1;

// Image: /System/Library/PrivateFrameworks/MarkupUI.framework/MarkupUI

- (id)muDeepMutableCopy;

// Image: /System/Library/PrivateFrameworks/MediaAnalysis.framework/MediaAnalysis

- (void)persistenceDelegate_enumerateInChunksOfSize:(unsigned long long)arg1 withOverageAllowance:(unsigned long long)arg2 usingBlock:(id /* block */)arg3;
- (id)vcp_adjustmentsResource;
- (id)vcp_avAsset:(bool)arg1;
- (float)vcp_getFpsRate;
- (bool)vcp_hasLocalAdjustments;
- (bool)vcp_hasLocalMovie:(bool)arg1;
- (bool)vcp_hasLocalPhoto:(bool)arg1;
- (bool)vcp_hasLocalSlowmo:(bool)arg1;
- (id)vcp_highResImageResourcesForAsset:(id)arg1;
- (bool)vcp_isOriginalLocal;
- (id)vcp_localMovieResourcesSorted:(bool)arg1;
- (id)vcp_localPhotoResourcesSorted:(bool)arg1;
- (id)vcp_movieResourcesSorted:(bool)arg1;
- (id)vcp_originalResource;
- (id)vcp_originalVideoResource;
- (id)vcp_photoResourcesSorted:(bool)arg1;
- (id)vcp_resourceWithType:(unsigned long long)arg1;
- (id)vcp_smallMovieDerivativeResource;
- (id)vcp_smallResourceMeetingCriteria:(id /* block */)arg1;
- (id)vcp_thumbnailResource;

// Image: /System/Library/PrivateFrameworks/MediaGroupsDaemon.framework/MediaGroupsDaemon

- (id)rq_coded;

// Image: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit

- (id)anyObject;
- (id)clsCurationItems;
- (id)flattenWithSeparator:(id)arg1;
- (id)indentBy:(unsigned long long)arg1 withSeparator:(id)arg2;
- (id)map:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote

- (id)changeDescriptionTo:(id)arg1 keyBlock:(id /* block */)arg2 isUpdatedBlock:(id /* block */)arg3 descriptionBlock:(id /* block */)arg4;
- (bool)mr_all:(id /* block */)arg1;
- (id)mr_allOutputDevices;
- (bool)mr_any:(id /* block */)arg1;
- (id)mr_arrayByRemovingLocalEndpoint;
- (id)mr_compactMap:(id /* block */)arg1;
- (bool)mr_containsAnyOf:(id)arg1;
- (id)mr_filter:(id /* block */)arg1;
- (id)mr_first:(id /* block */)arg1;
- (id)mr_flatMap:(id /* block */)arg1;
- (id)mr_formattedDebugDescription;
- (int)mr_ifDisabledWhyDisabled:(unsigned int)arg1;
- (bool)mr_isCommandSupported:(unsigned int)arg1;
- (bool)mr_isCommandSupportedAndEnabled:(unsigned int)arg1;
- (bool)mr_isEqualToOutputDevicesArray:(id)arg1;
- (id)mr_map:(id /* block */)arg1;
- (id)mr_redactClusterMembers;

// Image: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices

- (id)msv_compactDescription;
- (id)msv_compactMap:(id /* block */)arg1;
- (id)msv_enumeratedCompactMap:(id /* block */)arg1;
- (id)msv_enumeratedMap:(id /* block */)arg1;
- (id)msv_filter:(id /* block */)arg1;
- (long long)msv_firstIndexOfObjectEqualTo:(id)arg1;
- (long long)msv_firstIndexOfObjectsPassingTest:(id /* block */)arg1;
- (id)msv_firstWhere:(id /* block */)arg1;
- (id)msv_flatMap:(id /* block */)arg1;
- (id)msv_indexesOfObjectsEqualTo:(id)arg1;
- (long long)msv_lastIndexOfObjectEqualTo:(id)arg1;
- (long long)msv_lastIndexOfObjectsPassingTest:(id /* block */)arg1;
- (id)msv_map:(id /* block */)arg1;
- (id)msv_prefixUpToIndex:(long long)arg1;
- (bool)msv_reduceIntoBool:(bool)arg1 by:(id /* block */)arg2;
- (bool)msv_reduceIntoBool:(bool)arg1 enumeratedBy:(id /* block */)arg2;
- (double)msv_reduceIntoCGFloat:(double)arg1 by:(id /* block */)arg2;
- (double)msv_reduceIntoCGFloat:(double)arg1 enumeratedBy:(id /* block */)arg2;
- (double)msv_reduceIntoDouble:(double)arg1 by:(id /* block */)arg2;
- (double)msv_reduceIntoDouble:(double)arg1 enumeratedBy:(id /* block */)arg2;
- (float)msv_reduceIntoFloat:(float)arg1 by:(id /* block */)arg2;
- (float)msv_reduceIntoFloat:(float)arg1 enumeratedBy:(id /* block */)arg2;
- (int)msv_reduceIntoInt32:(int)arg1 by:(id /* block */)arg2;
- (int)msv_reduceIntoInt32:(int)arg1 enumeratedBy:(id /* block */)arg2;
- (long long)msv_reduceIntoInt64:(long long)arg1 by:(id /* block */)arg2;
- (long long)msv_reduceIntoInt64:(long long)arg1 enumeratedBy:(id /* block */)arg2;
- (long long)msv_reduceIntoInt:(long long)arg1 by:(id /* block */)arg2;
- (long long)msv_reduceIntoInt:(long long)arg1 enumeratedBy:(id /* block */)arg2;
- (id)msv_reduceIntoObject:(id)arg1 by:(id /* block */)arg2;
- (id)msv_reduceIntoObject:(id)arg1 enumeratedBy:(id /* block */)arg2;
- (unsigned int)msv_reduceIntoUInt32:(unsigned int)arg1 by:(id /* block */)arg2;
- (unsigned int)msv_reduceIntoUInt32:(unsigned int)arg1 enumeratedBy:(id /* block */)arg2;
- (unsigned long long)msv_reduceIntoUInt64:(unsigned long long)arg1 by:(id /* block */)arg2;
- (unsigned long long)msv_reduceIntoUInt64:(unsigned long long)arg1 enumeratedBy:(id /* block */)arg2;
- (unsigned long long)msv_reduceIntoUInt:(unsigned long long)arg1 by:(id /* block */)arg2;
- (unsigned long long)msv_reduceIntoUInt:(unsigned long long)arg1 enumeratedBy:(id /* block */)arg2;
- (id)msv_subarrayFromIndex:(long long)arg1;
- (id)msv_subarrayToIndex:(long long)arg1;
- (id)msv_suffixFromIndex:(long long)arg1;

// Image: /System/Library/PrivateFrameworks/Message.framework/Message

- (unsigned long long)mf_indexOfMailboxDictionaryWithName:(id)arg1;

// Image: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy

- (void)mf_enumerateByStoreUsingBlock:(id /* block */)arg1;
- (unsigned long long)mf_indexOfMailboxDictionaryWithName:(id)arg1;

// Image: /System/Library/PrivateFrameworks/MetricMeasurement.framework/MetricMeasurement

- (id)flattenArray;

// Image: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit

- (id)mt_condensedArray;
- (id)mt_deepCopy;
- (id)mt_map:(id /* block */)arg1;
- (void)mt_verifyEventData;

// Image: /System/Library/PrivateFrameworks/Montreal.framework/Montreal

- (id)exMRL_numberArrayDescription;

// Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer

- (id)nnmk_description;
- (id)nnmk_filter:(id /* block */)arg1;
- (id)nnmk_map:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit

- (id)npkComprehension:(id /* block */)arg1;
- (id)npkFindFirstObjectMatchingCondition:(id /* block */)arg1;
- (id)npkSafeObjectAtIndex:(unsigned long long)arg1;

// Image: /System/Library/PrivateFrameworks/NanoTimeKit.framework/NanoTimeKit

- (id)ntk_flatDescription;

// Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation

- (id)_navigation_firstObjectPassingTest:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/NearField.framework/NearField

- (id)encodeToCBOR;

// Image: /System/Library/PrivateFrameworks/NetAppsUtilities.framework/NetAppsUtilities

+ (id)na_arrayByRepeatingWithCount:(unsigned long long)arg1 generatorBlock:(id /* block */)arg2;
+ (id)na_arrayWithSafeObject:(id)arg1;
+ (id)na_arrayWithTerminator:(id)arg1 nullableObjects:(id)arg2;

- (bool)na_all:(id /* block */)arg1;
- (bool)na_allObjectsPassTest:(id /* block */)arg1;
- (bool)na_any:(id /* block */)arg1;
- (id)na_arrayByFlattening;
- (id)na_arrayWithResultsOfBlock:(id /* block */)arg1;
- (id)na_dictionaryByBucketingObjectsUsingKeyGenerator:(id /* block */)arg1;
- (id)na_dictionaryWithKeyGenerator:(id /* block */)arg1;
- (void)na_each:(id /* block */)arg1;
- (id)na_filter:(id /* block */)arg1;
- (id)na_firstObjectPassingTest:(id /* block */)arg1;
- (id)na_flatMap:(id /* block */)arg1;
- (id)na_map:(id /* block */)arg1;
- (id)na_reduceWithInitialValue:(id)arg1 reducer:(id /* block */)arg2;
- (bool)na_safeContainsObject:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore

- (id)nu_evaluateWithPipelineState:(id)arg1 error:(out id*)arg2;
- (void)nu_updateDigest:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore

+ (id)fc_array:(id /* block */)arg1;
+ (id)fc_arrayByAddingObjectsFromArray:(id)arg1 toArray:(id)arg2;
+ (id)fc_arrayByAddingObjectsFromArray:(id)arg1 toArray:(id)arg2 inRelativeOrder:(unsigned long long)arg3;
+ (id)fc_arrayByAddingUniqueObjectsFromArray:(id)arg1 toArray:(id)arg2;
+ (id)fc_generatedArrayWithCount:(unsigned long long)arg1 generator:(id /* block */)arg2;
+ (void)fc_walkArray:(id)arg1 andArray:(id)arg2 withBlock:(id /* block */)arg3;

- (id)contentArchive;
- (bool)fc_allObjectsPassTest:(id /* block */)arg1;
- (id)fc_arrayByAddingNonContainedObjectsFromArray:(id)arg1;
- (id)fc_arrayByCollectingObjectsWithBlock:(id /* block */)arg1;
- (id)fc_arrayByFlattening;
- (id)fc_arrayByMergingAdjacentObjectsWithMergePolicy:(id /* block */)arg1 mergeBlock:(id /* block */)arg2;
- (id)fc_arrayByRemovingFirstObject;
- (id)fc_arrayByRemovingKeysInDictionary:(id)arg1;
- (id)fc_arrayByRemovingObject:(id)arg1;
- (id)fc_arrayByRemovingObjectIdenticalTo:(id)arg1;
- (id)fc_arrayByRemovingObjectsAtIndexes:(id)arg1;
- (id)fc_arrayByRemovingObjectsInArray:(id)arg1;
- (id)fc_arrayByRemovingObjectsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)fc_arrayByRemovingObjectsPassingTest:(id /* block */)arg1;
- (id)fc_arrayByReplacingObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (id)fc_arrayByReplacingObjectIdenticalTo:(id)arg1 withObject:(id)arg2;
- (id)fc_arrayByReplacingObjectsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withObject:(id)arg2;
- (id)fc_arrayByReversingObjects;
- (id)fc_arrayByTransformingWithBlock:(id /* block */)arg1;
- (id)fc_arrayByTransformingWithBlockWithIndex:(id /* block */)arg1;
- (id)fc_arrayOfObjectsFailingTest:(id /* block */)arg1;
- (id)fc_arrayOfObjectsPassingTest:(id /* block */)arg1;
- (id)fc_arraysByExcisingRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)fc_arraysByPartitioningOnObjectsPassingTest:(id /* block */)arg1;
- (id)fc_arraysByPartitioningWithBudget:(id)arg1 indicesOfOverBudgetObjects:(id*)arg2 appraiser:(id /* block */)arg3 accumulator:(id /* block */)arg4 comparator:(id /* block */)arg5;
- (bool)fc_containsObjectPassingTest:(id /* block */)arg1;
- (bool)fc_containsObjectsAtBack:(id)arg1;
- (bool)fc_containsObjectsAtFront:(id)arg1;
- (bool)fc_containsObjectsWithValue:(id)arg1 forKey:(id)arg2;
- (double)fc_cosineDistanceToArray:(id)arg1;
- (unsigned long long)fc_countOfObjectsPassingTest:(id /* block */)arg1;
- (id)fc_dictionaryOfSortedObjectsWithKeyBlock:(id /* block */)arg1;
- (id)fc_dictionaryOfTransformedSortedObjectsWithKeyBlock:(id /* block */)arg1 valueBlock:(id /* block */)arg2;
- (id)fc_dictionaryWithKeyBlock:(id /* block */)arg1;
- (id)fc_dictionaryWithKeyBlock:(id /* block */)arg1 valueBlock:(id /* block */)arg2;
- (id)fc_dictionaryWithKeySelector:(SEL)arg1;
- (id)fc_dictionaryWithKeySelector:(SEL)arg1 valueSelector:(SEL)arg2;
- (id)fc_dictionaryWithValueBlock:(id /* block */)arg1;
- (id)fc_diffAgainstSortedOrderedCollection:(id)arg1 usingComparator:(id /* block */)arg2;
- (unsigned long long)fc_distanceFromArray:(id)arg1;
- (void)fc_enumerateIslandsOfCommonValuesForKeyBlock:(id /* block */)arg1 withBlock:(id /* block */)arg2;
- (void)fc_enumerateObjectsFromIndex:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
- (void)fc_enumerateObjectsInReverse:(bool)arg1 usingSkipAheadBlock:(id /* block */)arg2;
- (void)fc_enumerateObjectsPairwiseUsingBlock:(id /* block */)arg1;
- (void)fc_enumerateSideBySideWithArray:(id)arg1 reverse:(bool)arg2 block:(id /* block */)arg3;
- (double)fc_euclideanDistanceToArray:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })fc_expandIndex:(unsigned long long)arg1 toIncludeAdjacentObjectsPassingTest:(id /* block */)arg2;
- (id)fc_firstObjectFromIndex:(unsigned long long)arg1 passingTest:(id /* block */)arg2;
- (id)fc_firstObjectOfClass:(Class)arg1;
- (id)fc_firstObjectPassingTest:(id /* block */)arg1;
- (id)fc_firstObjectWithValue:(id)arg1 forKey:(id)arg2;
- (unsigned long long)fc_indexOfFirstObjectWithValue:(id)arg1 forKey:(id)arg2;
- (id)fc_indexesOfObjectsIdenticalTo:(id)arg1;
- (id)fc_indexesOfObjectsPassingTest:(id /* block */)arg1;
- (bool)fc_isEqualToArray:(id)arg1;
- (bool)fc_isEqualToArray:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (bool)fc_isSortedUsingComparator:(id /* block */)arg1;
- (id)fc_lastObjectPassingTest:(id /* block */)arg1;
- (id)fc_objectInSortedOrderedCollectionWithFeature:(id)arg1 usingFeatureProvider:(id /* block */)arg2 comparator:(id /* block */)arg3;
- (id)fc_objectsOfMaxValueWithValueBlock:(id /* block */)arg1 comparator:(id /* block */)arg2;
- (id)fc_objectsOfMinValueWithValueBlock:(id /* block */)arg1 comparator:(id /* block */)arg2;
- (id)fc_onlyObject;
- (id)fc_orderedSetByTransformingWithBlock:(id /* block */)arg1;
- (id)fc_randomObject;
- (id)fc_randomlyMergeWithArray:(id)arg1;
- (double)fc_reduceArrayWithDouble:(double)arg1 block:(id /* block */)arg2;
- (id)fc_reduceArrayWithInitial:(id)arg1 block:(id /* block */)arg2;
- (id)fc_rotateElementsFromTheIndexOfSelectedItem:(unsigned long long)arg1;
- (id)fc_safeObjectAtIndex:(unsigned long long)arg1;
- (id)fc_safeSubarrayWithCountFromBack:(unsigned long long)arg1;
- (id)fc_safeSubarrayWithCountFromFront:(unsigned long long)arg1;
- (id)fc_setByCollectingObjectsWithBlock:(id /* block */)arg1;
- (id)fc_setByTransformingWithBlock:(id /* block */)arg1;
- (id)fc_setOfObjectsPassingTest:(id /* block */)arg1;
- (id)fc_sortedArrayStartingWithElementsSatisfying:(id /* block */)arg1 sortedBy:(id /* block */)arg2;
- (void)fc_splitArrayWithTest:(id /* block */)arg1 result:(id /* block */)arg2;
- (id)fc_subarrayFromCount:(unsigned long long)arg1;
- (id)fc_subarrayFromIndex:(unsigned long long)arg1 inclusive:(bool)arg2;
- (id)fc_subarrayFromIndex:(unsigned long long)arg1 withMaxCount:(unsigned long long)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg3;
- (id)fc_subarrayInOrder:(unsigned long long)arg1 relativeToIndex:(unsigned long long)arg2 inclusive:(bool)arg3;
- (id)fc_subarrayInOrder:(unsigned long long)arg1 relativeToIndex:(unsigned long long)arg2 withMaxCount:(unsigned long long)arg3 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg4;
- (id)fc_subarrayToIndex:(unsigned long long)arg1 withMaxCount:(unsigned long long)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg3;
- (id)fc_subarrayUpToCountInclusive:(unsigned long long)arg1;
- (id)fc_subarrayUpToIndex:(unsigned long long)arg1 inclusive:(bool)arg2;
- (void)fc_subarrayWithCount:(unsigned long long)arg1 result:(id /* block */)arg2;
- (id)fc_subarrayWithMaxCount:(unsigned long long)arg1;
- (id)fc_subarrayWithPercentFromBeginning:(double)arg1;
- (id)fc_subarrayWithPercentToEnd:(double)arg1;
- (id)fc_uniqueByValueBlock:(id /* block */)arg1;
- (unsigned long long)fc_uniqueCount;
- (void)fc_visitSubarraysWithMaxCount:(unsigned long long)arg1 block:(id /* block */)arg2;

// Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared

- (id)ic_deviceInfosByAddingAppearances;

// Image: /System/Library/PrivateFrameworks/NotesSupport.framework/NotesSupport

+ (id)ic_arrayFromNonNilObject:(id)arg1;

- (bool)ic_allSatisfy:(id /* block */)arg1;
- (id)ic_arrayByAddingNonNilObject:(id)arg1;
- (id)ic_arrayByAddingObjectsFromNonNilArray:(id)arg1;
- (id)ic_arrayByGroupingIntoArraysWithMaxCount:(unsigned long long)arg1;
- (id)ic_arrayBySplittingIntoTwoArraysWithMaxPrefixCount:(unsigned long long)arg1;
- (id)ic_arrayBySplittingIntoTwoArraysWithMaxPrefixCount:(unsigned long long)arg1 prefixMatchingPredicate:(id /* block */)arg2;
- (id)ic_compactMap:(id /* block */)arg1;
- (bool)ic_containsObjectMatchingPredicate:(id)arg1;
- (bool)ic_containsObjectOfClass:(Class)arg1;
- (bool)ic_containsObjectPassingTest:(id /* block */)arg1;
- (id)ic_dictionaryByHashingContentWithFunction:(id /* block */)arg1;
- (id)ic_firstObjectConformingToProtocol:(id)arg1;
- (id)ic_firstObjectOfClass:(Class)arg1;
- (id)ic_flatMap:(id /* block */)arg1;
- (bool)ic_indexIsValid:(long long)arg1;
- (unsigned long long)ic_indexOfSortedObject:(id)arg1 insertionIndex:(out unsigned long long*)arg2 usingComparator:(id /* block */)arg3;
- (id)ic_map:(id /* block */)arg1;
- (id)ic_objectAfter:(id)arg1;
- (id)ic_objectAfter:(id)arg1 wrap:(bool)arg2;
- (id)ic_objectBefore:(id)arg1;
- (id)ic_objectBefore:(id)arg1 wrap:(bool)arg2;
- (id)ic_objectPassingTest:(id /* block */)arg1;
- (id)ic_objectsConformingToProtocol:(id)arg1;
- (id)ic_objectsOfClass:(Class)arg1;
- (id)ic_objectsPassingTest:(id /* block */)arg1;
- (id)ic_randomObject;
- (id)ic_subarrayFromIndex:(unsigned long long)arg1;

// Image: /System/Library/PrivateFrameworks/OSAnalytics.framework/OSAnalytics

- (id)sortedPids;

// Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport

+ (id)tsu_arrayByUnioningArray:(id)arg1 withArray:(id)arg2;
+ (id)tsu_arrayWithCGFloats:(const double*)arg1 count:(unsigned long long)arg2;
+ (id)tsu_arrayWithInts:(const int*)arg1 count:(unsigned long long)arg2;
+ (id)tsu_arrayWithNonNilObject:(id)arg1;
+ (id)tsu_arrayWithUIntegers:(const unsigned long long*)arg1 count:(unsigned long long)arg2;

- (void)sfu_appendJsonStringToString:(id)arg1;
- (id)tsu_anyObject;
- (id)tsu_arrayByAddingNonContainedObjectsFromArray:(id)arg1;
- (id)tsu_arrayByFlattening;
- (id)tsu_arrayByMappingObjectsUsingBlock:(id /* block */)arg1;
- (id)tsu_arrayByRemovingFirstObject;
- (id)tsu_arrayByRemovingObjectsIdenticalToObjectsInArray:(id)arg1;
- (id)tsu_arrayByReversingOrder;
- (id)tsu_arrayByTransformingWithBlock:(id /* block */)arg1;
- (id)tsu_arrayOfObjectsPassingTest:(id /* block */)arg1;
- (id)tsu_arrayWithObjectsInSet:(id)arg1;
- (bool)tsu_containsObjectPassingTest:(id /* block */)arg1;
- (void)tsu_enumerateSnapshotObjectsUsingBlock:(id /* block */)arg1;
- (id)tsu_firstObjectPassingTest:(id /* block */)arg1;
- (unsigned long long)tsu_indexOfSmallestObject;
- (id)tsu_indexesOfObjects:(id)arg1;
- (id)tsu_initWithCGFloats:(const double*)arg1 count:(unsigned long long)arg2;
- (id)tsu_initWithInts:(const int*)arg1 count:(unsigned long long)arg2;
- (id)tsu_initWithUIntegers:(const unsigned long long*)arg1 count:(unsigned long long)arg2;
- (id)tsu_intersectionWithArray:(id)arg1;
- (bool)tsu_isHomogeneousForClass:(Class)arg1;
- (id)tsu_localizedList;
- (id)tsu_objectPriorToObject:(id)arg1;
- (id)tsu_onlyObject;
- (id)tsu_rangeCheckedObjectAtIndex:(unsigned long long)arg1;
- (id)tsu_uniqueObjects;

// Image: /System/Library/PrivateFrameworks/PaperKit.framework/PaperKit

- (id)muDeepMutableCopy;

// Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore

+ (id)paymentBillingAddressInvalidErrorWithKey:(id)arg1 localizedDescription:(id)arg2;
+ (id)paymentContactInvalidErrorWithContactField:(id)arg1 localizedDescription:(id)arg2;
+ (id)paymentShippingAddressInvalidErrorWithKey:(id)arg1 localizedDescription:(id)arg2;
+ (id)paymentShippingAddressUnserviceableErrorWithLocalizedDescription:(id)arg1;
+ (id)pk_FilteredBillingErrorsForContactFields:(id)arg1 errors:(id)arg2;
+ (id)pk_FilteredCardErrors:(id)arg1;
+ (id)pk_FilteredShippingErrorsForContactFields:(id)arg1 errors:(id)arg2;
+ (id)pk_FilteredShippingErrorsForContactFields:(id)arg1 errors:(id)arg2 contactFieldOptional:(bool)arg3;

- (id)deepCopyWithZone:(struct _NSZone { }*)arg1;
- (id)jsonString;
- (id)nonZeroUnsignedLongLongArrayValue;
- (id)nonZeroUnsignedLongLongSetValue;
- (id)pk_arrayByApplyingBlock:(id /* block */)arg1;
- (id)pk_arrayByRemovingObject:(id)arg1;
- (id)pk_arrayByRemovingObjectsInArray:(id)arg1;
- (id)pk_arrayBySafelyApplyingBlock:(id /* block */)arg1;
- (bool)pk_containsObjectPassingTest:(id /* block */)arg1;
- (unsigned long long)pk_countObjectsPassingTest:(id /* block */)arg1;
- (id)pk_createArrayByApplyingBlock:(id /* block */)arg1;
- (id)pk_createArrayBySafelyApplyingBlock:(id /* block */)arg1;
- (id)pk_createMutableOrderedSetByApplyingBlock:(id /* block */)arg1;
- (id)pk_createMutableSetByApplyingBlock:(id /* block */)arg1;
- (id)pk_createOrderedSetByApplyingBlock:(id /* block */)arg1;
- (id)pk_createSetByApplyingBlock:(id /* block */)arg1;
- (id)pk_firstObjectPassingTest:(id /* block */)arg1;
- (id)pk_groupDictionaryByApplyingBlock:(id /* block */)arg1;
- (id)pk_indexDictionaryByApplyingBlock:(id /* block */)arg1;
- (id)pk_intersectArray:(id)arg1;
- (id)pk_lastObjectPassingTest:(id /* block */)arg1;
- (id)pk_objectsPassingTest:(id /* block */)arg1;
- (id)pk_shuffledArray;
- (id)stringArrayValue;
- (id)stringSetValue;

// Image: /System/Library/PrivateFrameworks/PersonaUI.framework/PersonaUI

- (id)pr_objectPassingTest:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices

- (bool)_pl_any:(id /* block */)arg1;
- (id)_pl_filter:(id /* block */)arg1;
- (id)_pl_firstObjectPassingTest:(id /* block */)arg1;
- (id)_pl_flatMap:(id /* block */)arg1;
- (id)_pl_groupBy:(id /* block */)arg1;
- (id)_pl_indexBy:(id /* block */)arg1;
- (id)_pl_map:(id /* block */)arg1;
- (id)_pl_prettyDescriptionWithIndent:(long long)arg1;
- (id)pl_arrayOfUniqueObjectsNotInOrderedSet:(id)arg1;
- (unsigned long long)pl_countOfObjectsPassingTest:(id /* block */)arg1;
- (unsigned long long)pl_indexOfFirstObjectInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 passingTest:(id /* block */)arg2;
- (unsigned long long)pl_indexOfFirstObjectPassingTest:(id /* block */)arg1;
- (unsigned long long)pl_indexOfLastObjectInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 passingTest:(id /* block */)arg2;
- (unsigned long long)pl_indexOfLastObjectPassingTest:(id /* block */)arg1;
- (id)pl_shortDescription;

// Image: /System/Library/PrivateFrameworks/PhotosIntelligence.framework/PhotosIntelligence

- (id)fetchedObjects;

// Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore

+ (id)px_integersFrom:(long long)arg1 to:(long long)arg2;
+ (id)px_numbersFrom:(double)arg1 to:(double)arg2 increment:(double)arg3;

- (void)px_enumerateObjectsFromIndex:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
- (id)px_localizedComposedStringThatFitsWidth:(double)arg1 maxCount:(unsigned long long)arg2 useUndefinedMoreCount:(bool)arg3 withMeasuringBlock:(id /* block */)arg4;
- (id)px_localizedComposedStringThatFitsWidth:(double)arg1 withMeasuringBlock:(id /* block */)arg2;
- (id)px_localizedComposedStringWithCount:(unsigned long long)arg1 useUndefinedMoreCount:(bool)arg2;
- (id)px_objectAfterObject:(id)arg1;
- (id)px_subarrayAfterIndex:(unsigned long long)arg1;

// Image: /System/Library/PrivateFrameworks/PlugInKit.framework/PlugInKit

+ (id)arrayWithValues:(id)arg1 inBlock:(id /* block */)arg2;

// Image: /System/Library/PrivateFrameworks/PodcastsFoundation.framework/PodcastsFoundation

- (id)arrayByRemovingObject:(id)arg1;
- (id)arrayOfObjectsContainingMatchingKey:(id)arg1 matchingStrings:(id)arg2;
- (id)arrayRemovingMatchingStrings:(id)arg1;
- (id)arrayRemovingObjectsByKey:(id)arg1 matchingStrings:(id)arg2;
- (void)concurrentMapWithStrideSize:(unsigned long long)arg1 on:(id)arg2 withBlock:(id /* block */)arg3;
- (bool)containsStringCaseInsensitive:(id)arg1;
- (id)deepCopy;
- (id)filter:(id /* block */)arg1 compactMap:(id /* block */)arg2;
- (id)imReversedArray;
- (id)im_jsonSerializableValue;
- (long long)indexOfObjectWithValue:(id)arg1 forKeyPath:(id)arg2;
- (id)mt_allObjectsExcludingIndexes:(id)arg1;
- (id)mt_compactMap:(id /* block */)arg1;
- (id)mt_filter:(id /* block */)arg1;
- (id)mt_firstObjectPassingTest:(id /* block */)arg1;
- (id)mt_uniqueOrdered;
- (id)mt_uniqued;
- (unsigned long long)strideCountForSize:(unsigned long long)arg1;
- (id)subarrayForStrideIndex:(unsigned long long)arg1 withStrideSize:(unsigned long long)arg2;

// Image: /System/Library/PrivateFrameworks/Portrait.framework/Portrait

- (long long)_firstIndexAfterTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 startIndex:(long long)arg2 timeSelector:(SEL)arg3;
- (long long)_firstIndexAtOrAfterTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (long long)_firstIndexAtOrAfterTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 startIndex:(long long)arg2 lastIfEqual:(bool)arg3 timeSelector:(SEL)arg4;
- (long long)_firstIndexAtOrAfterTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 timeSelector:(SEL)arg2;
- (unsigned long long)_indexAtOrBeforeTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (unsigned long long)_indexAtOrBeforeTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 timeSelector:(SEL)arg2;
- (long long)_indexNearestTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (long long)_indexNearestTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 timeSelector:(SEL)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_indexRangeOfTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_indexRangeOfTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1 timeSelector:(SEL)arg2;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })_timeForObject:(id)arg1 timeSelector:(SEL)arg2;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })_timeRangeOfIndexRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })_timeRangeOfIndexRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 timeSelector:(SEL)arg2;

// Image: /System/Library/PrivateFrameworks/PowerUI.framework/PowerUI

- (double)mean;
- (double)median;
- (double)percentile:(double)arg1;
- (id)percentiles:(id)arg1;
- (double)standardDeviation;

// Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences

+ (void)pk_updateSpecifiers:(id)arg1 withIconsFromCache:(id)arg2;
+ (void)pk_updateSpecifiers:(id)arg1 withIconsFromCache:(id)arg2 isInterfaceRTL:(bool)arg3;

- (id)arrayByPerformingSpecifierUpdatesUsingBlock:(id /* block */)arg1;
- (unsigned long long)indexOfSpecifierWithID:(id)arg1;
- (id)specifierForID:(id)arg1;

// Image: /System/Library/PrivateFrameworks/PrivateFederatedLearning.framework/PrivateFederatedLearning

- (unsigned long long)flattenedCount;

// Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo

+ (id)arrayWithSIMDDouble2;
+ (id)arrayWithSIMDDouble3;
+ (id)arrayWithSIMDDouble3x3:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg1;
+ (id)arrayWithSIMDDouble4;
+ (id)arrayWithSIMDDouble4x4:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
+ (id)arrayWithSIMDDouble8;
+ (id)arrayWithSIMDFloat16;
+ (id)arrayWithSIMDFloat2;
+ (id)arrayWithSIMDFloat3;
+ (id)arrayWithSIMDFloat3x3:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg1;
+ (id)arrayWithSIMDFloat4;
+ (id)arrayWithSIMDFloat4x4:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
+ (id)arrayWithSIMDFloat8;
+ (id)arrayWithSIMDQuatD:(struct { })arg1;
+ (id)arrayWithSIMDQuatF:(struct { })arg1;
+ (id)oz_arrayWithSIMDFloat3x3:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg1;
+ (id)oz_arrayWithSIMDFloat4x4:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;

- (void)SIMDDouble2;
- (void)SIMDDouble3;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })SIMDDouble3x3;
- (void)SIMDDouble4;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })SIMDDouble4x4;
- (void)SIMDDouble8;
- (void)SIMDFloat16;
- (void)SIMDFloat2;
- (void)SIMDFloat3;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })SIMDFloat3x3;
- (void)SIMDFloat4;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })SIMDFloat4x4;
- (void)SIMDFloat8;
- (struct { })SIMDQuatD;
- (struct { })SIMDQuatF;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })oz_SIMDFloat3x3;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })oz_SIMDFloat4x4;

// Image: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport

+ (id)_pas_proxyArrayUsingObjectAtIndexBlock:(id /* block */)arg1 andCountBlock:(id /* block */)arg2;
+ (id)_pas_proxyArrayWithObject:(id)arg1 repetitions:(unsigned long long)arg2;

- (id)_pas_componentsJoinedByString:(id)arg1;
- (id)_pas_ensureImmutable;
- (void)_pas_enumerateChunksOfSize:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
- (id)_pas_filteredArrayWithIndexedTest:(id /* block */)arg1;
- (id)_pas_filteredArrayWithTest:(id /* block */)arg1;
- (id)_pas_leftFoldWithInitialObject:(id)arg1 accumulate:(id /* block */)arg2;
- (id)_pas_leftFoldWithInitialObject:(id)arg1 indexedAccumulate:(id /* block */)arg2;
- (id)_pas_mappedArrayWithIndexedTransform:(id /* block */)arg1;
- (id)_pas_mappedArrayWithTransform:(id /* block */)arg1;
- (id)_pas_proxyArrayByAppendingArray:(id)arg1;
- (id)_pas_proxyArrayDistillingStrings;
- (id)_pas_proxyArrayReversed;
- (id)_pas_proxyArrayRevivingStrings;
- (id)_pas_proxyArrayWithMapping:(id /* block */)arg1;
- (id)_pas_proxyArrayWithObjectsAtIndexes:(id)arg1;
- (id)_pas_proxyArrayWithRepetitions:(unsigned long long)arg1;
- (id)_pas_proxyComponentsJoinedByString:(id)arg1;
- (id)_pas_proxySubarrayWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)_pas_rightFoldWithInitialObject:(id)arg1 accumulate:(id /* block */)arg2;
- (id)_pas_rightFoldWithInitialObject:(id)arg1 indexedAccumulate:(id /* block */)arg2;
- (id)_pas_shuffledArrayUsingRng:(id)arg1;
- (id)_pas_unproxy;

// Image: /System/Library/PrivateFrameworks/PromotedContentPrediction.framework/PromotedContentPrediction

- (id)APOdml_arrayForJSON;
- (id)APOdml_jsonString;
- (id)APOdml_jsonStringWithPrettyPrint:(bool)arg1;

// Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine

- (unsigned long long)re_actionIdentifierHashValue;
- (id)re_arrayMappedWithArray:(id)arg1;

// Image: /System/Library/PrivateFrameworks/ReminderKitInternal.framework/ReminderKitInternal

- (id)shuffledArray;
- (id)shuffledArrayWithRandomSource:(id)arg1;

// Image: /System/Library/PrivateFrameworks/RemoteConfiguration.framework/RemoteConfiguration

- (id)rc_arrayByTransformingWithBlock:(id /* block */)arg1;
- (id)rc_arrayByTransformingWithBlockWithIndex:(id /* block */)arg1;
- (bool)rc_containsObjectPassingTest:(id /* block */)arg1;
- (id)rc_description;
- (id)rc_firstObjectPassingTest:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects

- (id)_sa_mappedArrayWithBlock:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore

+ (id)safari_arrayFromDictionaryOfObjectsByIndex:(id)arg1;
+ (id)safari_arrayWithArray:(id)arg1 copyAction:(long long)arg2;
+ (id)safari_arrayWithObjectsUnlessNil:(id)arg1;
+ (id)safari_arrayWithPropertyListData:(id)arg1 options:(unsigned long long)arg2;

- (id)_safari_computeLengthsOfLongestSubsequencesCommonWithArray:(id)arg1;
- (id)_safari_generateDiffWithLongestCommonSubsequenceLengths:(id)arg1 array:(id)arg2 indexIntoSelf:(unsigned long long)arg3 indexIntoArray:(unsigned long long)arg4;
- (id)_safari_generatePermutations:(id)arg1 withPosition:(unsigned long long)arg2 permutationsArray:(id)arg3;
- (id)safari_URLAtIndex:(unsigned long long)arg1;
- (bool)safari_allObjectsPassTest:(id /* block */)arg1;
- (id)safari_allPermutations;
- (id)safari_arrayAtIndex:(unsigned long long)arg1;
- (id)safari_arrayByAddingObjectsFromArrayIfNotDuplicates:(id)arg1;
- (id)safari_arrayByRemovingObject:(id)arg1;
- (bool)safari_containsObjectPassingTest:(id /* block */)arg1;
- (id)safari_dictionaryAtIndex:(unsigned long long)arg1;
- (id)safari_dictionaryByMappingObjectsAsKeysToObjectsUsingBlock:(id /* block */)arg1;
- (id)safari_dictionaryByMappingObjectsToKeysUsingBlock:(id /* block */)arg1;
- (id)safari_dictionaryOfArraysByMappingObjectsToKeysUsingBlock:(id /* block */)arg1;
- (id)safari_diffWithArray:(id)arg1;
- (void)safari_enumerateAsynchronouslyOnQueue:(id)arg1 enumerationBlock:(id /* block */)arg2 completionBlock:(id /* block */)arg3;
- (void)safari_enumerateOutwardFromIndex:(unsigned long long)arg1 otherIndex:(unsigned long long)arg2 usingBlock:(id /* block */)arg3;
- (void)safari_enumerateOutwardFromIndex:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
- (void)safari_enumerateZippedValuesWithArray:(id)arg1 withBlock:(id /* block */)arg2;
- (id)safari_filterObjectsUsingBlock:(id /* block */)arg1;
- (id)safari_firstObjectPassingTest:(id /* block */)arg1;
- (id)safari_flattenedArray;
- (id)safari_lastObjectPassingTest:(id /* block */)arg1;
- (id)safari_longestIncreasingSubsequenceUsingValues:(id /* block */)arg1;
- (id)safari_mapAndFilterObjectsUsingBlock:(id /* block */)arg1;
- (id)safari_mapAndFilterObjectsWithOptions:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
- (id)safari_mapObjectsUsingBlock:(id /* block */)arg1;
- (id)safari_maximumUsingComparator:(id /* block */)arg1;
- (id)safari_minimumUsingComparator:(id /* block */)arg1;
- (bool)safari_noObjectsPassTest:(id /* block */)arg1;
- (id)safari_numberAtIndex:(unsigned long long)arg1;
- (id)safari_objectAfter:(id)arg1;
- (id)safari_objectBefore:(id)arg1;
- (id)safari_orderedSetByApplyingBlock:(id /* block */)arg1;
- (id)safari_partionedArrayUsingCondition:(id /* block */)arg1;
- (id)safari_prefixWithMaxLength:(unsigned long long)arg1;
- (id)safari_reduceObjectsUsingBlock:(id /* block */)arg1;
- (id)safari_reduceObjectsWithInitialValue:(id)arg1 usingBlock:(id /* block */)arg2;
- (id)safari_setByApplyingBlock:(id /* block */)arg1;
- (id)safari_splitArrayUsingCondition:(id /* block */)arg1;
- (id)safari_stringAtIndex:(unsigned long long)arg1;

// Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared

- (id)safari_translateToArrayOfParsecModelsOfClass:(Class)arg1;

// Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore

- (id)scrc_deepMutableCopyWithZone:(struct _NSZone { }*)arg1;

// Image: /System/Library/PrivateFrameworks/Search.framework/Search

- (id)sp_copyForFeedback;

// Image: /System/Library/PrivateFrameworks/SearchToShareCore.framework/SearchToShareCore

- (id)sts_map:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI

- (id)searchui_safeObjectAtIndex:(unsigned long long)arg1;

// Image: /System/Library/PrivateFrameworks/SensorKitUI.framework/SensorKitUI

+ (id)skui_sortedServices:(id)arg1;

// Image: /System/Library/PrivateFrameworks/Settings/PrivacySettingsUI.framework/PrivacySettingsUI

- (bool)containsString:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI

- (bool)hasIccid:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant

- (id)by_actionsByRemovingAction:(id)arg1;

// Image: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet

- (id)sh_allClassNames;

// Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing

- (void)sf_differencesFromArray:(id)arg1 removedIndexes:(id*)arg2 insertedIndexes:(id*)arg3;
- (void)sf_differencesFromArray:(id)arg1 usingComparator:(id /* block */)arg2 removedIndexes:(id*)arg3 insertedIndexes:(id*)arg4;

// Image: /System/Library/PrivateFrameworks/Silex.framework/Silex

- (id)weakReferenceObjects;

// Image: /System/Library/PrivateFrameworks/SiriUIFoundation.framework/SiriUIFoundation

- (id)sruif_arrayByMappingWithBlock:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation

- (bool)containsAnyObjects:(id)arg1;
- (bool)containsObjects:(id)arg1;
- (id)indexesOfObjects:(id)arg1;
- (id)objectPassingTest:(id /* block */)arg1;
- (id)objectsPassingTest:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/SocialLayer.framework/SocialLayer

+ (id)arrayWithObject:(id)arg1 repeated:(unsigned long long)arg2;

- (void)sl_mapAsynchronously:(id /* block */)arg1 completionHandler:(id /* block */)arg2;
- (void)sl_mapAsynchronouslyOnQueue:(id)arg1 transform:(id /* block */)arg2 completionHandler:(id /* block */)arg3;

// Image: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl

- (bool)isVisuallyEqualToArray:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices

- (id)mapNonEmpty:(id /* block */)arg1;
- (id)stringRepresentation;
- (id)tokenizedStringArray:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard

- (id)dictionaryDescription;
- (id)sb_arrayByAddingOrMovingObject:(id)arg1;
- (id)sb_arrayByInsertingOrMovingObject:(id)arg1 toIndex:(unsigned long long)arg2;
- (id)sb_arrayByRemovingObject:(id)arg1;
- (id)sb_arrayByRemovingObjects:(id)arg1;
- (id)sb_switcherModifierDebugTimelineDescription;
- (id)sbsa_arrayByAddingOrReplacingObject:(id)arg1 passingTest:(id /* block */)arg2;
- (id)sbsa_arrayByAddingOrReplacingObjectMatchingClass:(id)arg1;
- (id)sbsa_onlyObjectOrNil;
- (id)sbsa_onlyObjectOrNilAssert;

// Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome

- (bool)sbh_containsAllObjectsInArray:(id)arg1;
- (bool)sbh_containsObjectInArray:(id)arg1;

// Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks

- (bool)sck_containsObjectPassingTest:(id /* block */)arg1;
- (id)sck_dictionaryWithKeyBlock:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/StocksCore.framework/StocksCore

- (bool)scw_containsObjectPassingTest:(id /* block */)arg1;
- (id)scw_dictionaryWithKeyBlock:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices

- (bool)_ss_any:(id /* block */)arg1;
- (id)_ss_arrayByRemovingObjectsPassingTest:(id /* block */)arg1;
- (id)_ss_filterUsingTest:(id /* block */)arg1;
- (id)_ss_firstObjectPassingTest:(id /* block */)arg1;
- (id)_ss_index:(id /* block */)arg1;
- (id)_ss_map:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading

- (int)propertyAtIndex:(unsigned int)arg1;

// Image: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility

+ (id)arrayWithCGFloats:(double*)arg1 count:(unsigned long long)arg2;
+ (id)arrayWithInts:(int*)arg1 count:(unsigned long long)arg2;

- (void)appendJsonStringToString:(id)arg1;
- (id)initWithCGFloats:(double*)arg1 count:(unsigned long long)arg2;
- (id)initWithInts:(int*)arg1 count:(unsigned long long)arg2;
- (id)tsu_arrayByFlattening;
- (id)tsu_arrayByMakingObjectsPerformSelector:(SEL)arg1;
- (id)tsu_arrayByMappingObjectsUsingBlock:(id /* block */)arg1;
- (id)tsu_arrayByRemovingObjectsIdenticalToObjectsInArray:(id)arg1;
- (id)tsu_arrayByRemovingObjectsInArray:(id)arg1;
- (id)tsu_arrayByReversingOrder;
- (id)tsu_arrayByTransformingWithBlock:(id /* block */)arg1;
- (id)tsu_arrayOfObjectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(id /* block */)arg3;
- (id)tsu_arrayOfObjectsPassingTest:(id /* block */)arg1;
- (id)tsu_arrayWithObjectsInSet:(id)arg1;
- (bool)tsu_containsObjectIdenticalTo:(id)arg1;
- (void)tsu_enumerateSnapshotObjectsUsingBlock:(id /* block */)arg1;
- (id)tsu_firstObjectPassingTest:(id /* block */)arg1;
- (unsigned long long)tsu_indexOfSmallestObject;
- (id)tsu_indexesOfObjects:(id)arg1;
- (id)tsu_intersectionWithArray:(id)arg1;
- (void)tsu_makeObjectsPerformSelector:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3;
- (void)tsu_makeObjectsPerformSelectorIfImplemented:(SEL)arg1;
- (void)tsu_makeObjectsPerformSelectorIfImplemented:(SEL)arg1 withObject:(id)arg2;
- (id)tsu_map:(id /* block */)arg1;
- (id)tsu_mutableArrayByMakingObjectsPerformSelector:(SEL)arg1;
- (id)tsu_objectAfterObjectIdenticalTo:(id)arg1;
- (id)tsu_objectBeforeObjectIdenticalTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit

- (id)tv_arrayByMappingObjectsUsingBlock:(id /* block */)arg1;
- (id)tv_randomizedArray;

// Image: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback

- (id)tvp_arrayByMappingObjectsUsingBlock:(id /* block */)arg1;
- (id)tvp_objectsPassingTest:(id /* block */)arg1;
- (id)tvp_randomizedArray;
- (bool)tvp_shallowIsEqualToArray:(id)arg1;

// Image: /System/Library/PrivateFrameworks/TelephonyRPC.framework/TelephonyRPC

- (id)firstObjectPassingTest:(id /* block */)arg1;
- (bool)hasObjectPassingTest:(id /* block */)arg1;
- (id)max:(id /* block */)arg1;
- (id)nph_map:(id /* block */)arg1;
- (id)objectsPassingTest:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities

- (bool)tu_containsObjectPassingTest:(id /* block */)arg1;
- (id)tu_firstObjectPassingTest:(id /* block */)arg1;
- (id)tu_mapAndFilterObjectsUsingBlock:(id /* block */)arg1;
- (id)tu_mapObjectsUsingBlock:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput

- (id)_arrayByFilteringCandidatesForNonExtendedView;
- (id)_arrayByFilteringEmojiCandidates:(long long)arg1;
- (id)_sortedArrayByFrequency;

// Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore

- (id)_readingStringWithin:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)_surfaceStringWithin:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)deletionRangesWithElementsToKeep:(id)arg1;
- (id)mecabraCandidateSurfaces;

// Image: /System/Library/PrivateFrameworks/TextInputTestingKit.framework/TextInputTestingKit

- (id)filterWithBlock:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition

- (id)_fieldsOfSource:(unsigned long long)arg1;
- (id)_fieldsOfType:(unsigned long long)arg1;
- (id)_flattenedFields;
- (id)crCodableDataRepresentation;
- (id)initWithCRCodableDataRepresentation:(id)arg1 objectProviderBlock:(id /* block */)arg2;

// Image: /System/Library/PrivateFrameworks/Translation.framework/Translation

- (id)_ltCompactMap:(id /* block */)arg1;
- (id)lt_filterUsingBlock:(id /* block */)arg1;
- (id)lt_firstObjectPassingTest:(id /* block */)arg1;
- (bool)lt_hasObjectPassingTest:(id /* block */)arg1;
- (id)lt_suffixWithMaxLength:(unsigned long long)arg1;

// Image: /System/Library/PrivateFrameworks/TranslationDaemon.framework/TranslationDaemon

- (void)_ltAsyncMap:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)_ltAsyncMap:(id /* block */)arg1 queue:(id)arg2 completion:(id /* block */)arg3;
- (void)_ltSequentialMap:(id /* block */)arg1 completion:(id /* block */)arg2;

// Image: /System/Library/PrivateFrameworks/TranslationUI.framework/TranslationUI

- (id)sortedLocalizedFor:(id)arg1;

// Image: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer

- (id)tri_contains:(id)arg1;
- (id)tri_intersects:(id)arg1;

// Image: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility

- (id)accessibilityElements;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })accessibilityFrame;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (id)ui_arrayByCompactingArray:(id)arg1;

- (id)_filteredArrayOfObjectsPassingTest:(id /* block */)arg1;
- (struct CGSize { double x1; double x2; })_legacy_drawComponentsJoinedByString:(id)arg1 atPoint:(struct CGPoint { double x1; double x2; }*)arg2 forWidth:(double)arg3 withFont:(id)arg4 lineBreakMode:(long long)arg5;
- (void)_makeObjectsPerformSelector:(SEL)arg1 object:(id)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (id)_ui_firstObject;
- (id)_ui_onlyObject;
- (id)ui_arrayByRemovingLastObjectEqualTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer

- (bool)uns_containsSimilarRecord:(id)arg1;
- (id)uns_map:(id /* block */)arg1 usingLibrarian:(id)arg2;

// Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI

- (bool)ikAssetArraysEqual:(id)arg1;
- (id)ikAssetAttributes;

// Image: /System/Library/PrivateFrameworks/VideosUICore.framework/VideosUICore

- (id)vui_arrayByApplyingChangeSet:(id)arg1 destinationObjects:(id)arg2;
- (id)vui_arrayByApplyingChangeSet:(id)arg1 destinationObjects:(id)arg2 updateObjectBlock:(id /* block */)arg3;
- (id)vui_arrayByApplyingChangeSet:(id)arg1 destinationObjectsBlock:(id /* block */)arg2;
- (id)vui_arrayByApplyingChangeSet:(id)arg1 destinationObjectsBlock:(id /* block */)arg2 updateObjectBlock:(id /* block */)arg3;
- (id)vui_arrayByMappingObjectsUsingBlock:(id /* block */)arg1;
- (id)vui_deepCopy;

// Image: /System/Library/PrivateFrameworks/VisionKitCore.framework/VisionKitCore

+ (void)heapsAlgorithm:(id)arg1 k:(long long)arg2 result:(id)arg3;
+ (id)vk_arrayFromNonNilObject:(id)arg1;

- (id)vk_arrayByAddingNonNilObject:(id)arg1;
- (id)vk_arrayByAddingObjectsFromNonNilArray:(id)arg1;
- (id)vk_arrayByGroupingIntoArraysWithMaxCount:(unsigned long long)arg1;
- (id)vk_arrayFromReplacingObject:(id)arg1 withObject:(id)arg2;
- (id)vk_compactMap:(id /* block */)arg1;
- (bool)vk_containsObjectPassingTest:(id /* block */)arg1;
- (unsigned long long)vk_countOfObjectsPassingTest:(id /* block */)arg1;
- (id)vk_firstObjectOfClass:(Class)arg1;
- (id)vk_flatMap:(id /* block */)arg1;
- (id)vk_generateAllPermutations;
- (bool)vk_indexIsValid:(long long)arg1;
- (unsigned long long)vk_indexOfSortedObject:(id)arg1 insertionIndex:(out unsigned long long*)arg2 usingComparator:(id /* block */)arg3;
- (id)vk_map:(id /* block */)arg1;
- (id)vk_objectAfter:(id)arg1;
- (id)vk_objectAfter:(id)arg1 wrap:(bool)arg2;
- (id)vk_objectBefore:(id)arg1;
- (id)vk_objectBefore:(id)arg1 wrap:(bool)arg2;
- (id)vk_objectPassingTest:(id /* block */)arg1;
- (id)vk_objectsConformingToProtocol:(id)arg1;
- (id)vk_objectsOfClass:(Class)arg1;
- (id)vk_objectsPassingTest:(id /* block */)arg1;
- (id)vk_randomObject;
- (id)vk_randomizedArray;
- (id)vk_safeObjectAtIndex:(long long)arg1;

// Image: /System/Library/PrivateFrameworks/VisualVoicemail.framework/IMAP.framework/IMAP

- (id)__vf_firstObjectPassingTest:(id /* block */)arg1;
- (id)arrayByApplyingSelector:(SEL)arg1;
- (void)mf_enumerateByStoreUsingBlock:(id /* block */)arg1;
- (unsigned long long)mf_indexOfMailboxDictionaryWithName:(id)arg1;
- (bool)vf_any:(id /* block */)arg1;
- (id)vf_filter:(id /* block */)arg1;
- (id)vf_flatMap:(id /* block */)arg1;
- (id)vf_flatten;
- (unsigned long long)vf_indexOfObject:(id)arg1 usingComparator:(id /* block */)arg2;
- (unsigned long long)vf_indexWhereObjectWouldBeInserted:(id)arg1 usingComparator:(id /* block */)arg2;
- (id)vf_map:(id /* block */)arg1;
- (id)vf_objectSameAs:(id)arg1 usingComparator:(id /* block */)arg2;
- (id)vf_subarraysOfSize:(unsigned long long)arg1;

// Image: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices

- (id)_nextKeywordUsingCursors:(struct __CFDictionary { }*)arg1;
- (id)_scrambledKeywordsAndAddToSet:(id)arg1;

// Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit

- (id)wlk_arrayDifference:(id)arg1;

// Image: /System/Library/PrivateFrameworks/Weather.framework/Weather

+ (id)waaxArrayByIgnoringNilElementsWithCount:(unsigned long long)arg1;

- (bool)wa_allObjectsPassTest:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/WeatherCore.framework/WeatherCore

- (bool)wc_allObjectsPassTest:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy

- (id)_web_lowercaseStrings;

// Image: /System/Library/PrivateFrameworks/WebPrivacy.framework/WebPrivacy

- (id)_wp_arrayByRemovingTrackingInformationFromURLs;
- (void)_wp_removeTrackingInformationFromURLs:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit

- (id)_matchingItem:(Class)arg1;
- (id)awdlDiagnosticsResults;
- (id)btDiagnosticsResults;
- (id)congestionDiagnosticsResults;
- (id)displayableHealthRecommendations;
- (id)dnsSettings;
- (id)ipv4Settings;
- (id)ipv6Settings;
- (id)noInternetDiagnosticsResults;
- (id)numberArrayToJsonString;
- (id)proxySettings;

// Image: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI

- (id)arrayAfterFilteringOutEmptyStrings;
- (id)stringFromContentsOfArray;
- (id)stringFromContentsOfArrayWithDelimiter:(id)arg1;

// Image: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy

- (id)mapObjectsUsingBlock:(id /* block */)arg1;
- (id)networksSortedBySignalStrengthWithMaxCount:(unsigned long long)arg1;

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

- (id)mtl_arrayByRemovingFirstObject;
- (id)mtl_arrayByRemovingLastObject;
- (id)mtl_arrayByRemovingObject:(id)arg1;
- (id)mtl_firstObject;

// Image: /System/Library/PrivateFrameworks/ZhuGeSupport.framework/ZhuGeSupport

+ (id)arrayFromShellCommandString:(id)arg1;
+ (id)graphicInfoArrayFromArray:(id)arg1;

// Image: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar

- (bool)ICSContainsArray:(id)arg1;
- (id)VCS_filter:(id /* block */)arg1;
- (id)VCS_map:(id /* block */)arg1;
- (void)_ICSParametersAppendingToString:(id)arg1;
- (void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2;
- (void)_ICSStringsForPropertyValuesWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2;

// Image: /System/Library/PrivateFrameworks/iCloudQuotaUI.framework/iCloudQuotaUI

- (unsigned long long)sortedInsertionIndexWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 block:(id /* block */)arg2;

// Image: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/KeynoteQuicklook.framework/KeynoteQuicklook

- (bool)kn_isEquivalentForCrossDocumentPasteMasterComparison:(id)arg1;

// Image: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSCharts.framework/TSCharts

- (id)tsch_initTSCHChartGridValuesArrayWithProtobufGridRowArray:(const void*)arg1;
- (id)tsch_initTSCHChartGridValuesWithProtobufGridRow:(const void*)arg1;
- (id)tsch_initWithSwapTupleArray:(const void*)arg1 unarchiver:(id)arg2;
- (id)tsch_initWithSwapTuples:(const void*)arg1 unarchiver:(id)arg2;
- (id)tsch_initWithSwapTuplesArray:(const void*)arg1 unarchiver:(id)arg2;
- (void)tsch_saveTSCHChartGridValuesArrayToProtobufGridRowArray:(void*)arg1;
- (void)tsch_saveTSCHChartGridValuesToProtobufGridRow:(void*)arg1;
- (void)tsch_saveToSwapTupleArray:(void*)arg1 archiver:(id)arg2;
- (void)tsch_saveToSwapTuples:(void*)arg1 archiver:(id)arg2;
- (void)tsch_saveToSwapTuplesArray:(void*)arg1 archiver:(id)arg2;

// Image: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSDrawables.framework/TSDrawables

- (id)tsd_deepCopyObjectsForUndoInContext:(id)arg1 inStylesheet:(id)arg2 outStylesheet:(id*)arg3;
- (void)tsd_deepCopyStyledObjectsInContext:(id)arg1 options:(id)arg2 completion:(id /* block */)arg3;
- (id)tsd_deepCopyStyledObjectsInContext:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (id)tsd_deepCopyStyledObjectsInContext:(id)arg1 stylesheet:(id*)arg2 options:(id)arg3 objectMap:(id*)arg4 error:(id*)arg5;
- (id)tsd_initWithExteriorTextWrapArray:(const void*)arg1;
- (id)tsd_initWithGeometryArray:(const void*)arg1;
- (void)tsd_saveToExteriorTextWrapArray:(void*)arg1 archiver:(id)arg2;
- (void)tsd_saveToGeometryArray:(void*)arg1 archiver:(id)arg2;

// Image: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSPersistence.framework/TSPersistence

- (void)tsp_deepCopyWithContext:(id)arg1 options:(id)arg2 completion:(id /* block */)arg3;
- (id)tsp_deepCopyWithContext:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (id)tsp_deepCopyWithContext:(id)arg1 options:(id)arg2 objectMap:(id*)arg3 error:(id*)arg4;
- (id)tsp_initWithColorArray:(const void*)arg1;
- (id)tsp_initWithDoubleArray:(const void*)arg1;
- (id)tsp_initWithNSRangeArray:(const void*)arg1;
- (id)tsp_initWithProtobufStringArray:(const void*)arg1;
- (id)tsp_initWithProtobufUUIDArray:(const void*)arg1;
- (id)tsp_initWithUInt32Array:(const void*)arg1;
- (void)tsp_saveToColorArray:(void*)arg1;
- (void)tsp_saveToDoubleArray:(void*)arg1;
- (void)tsp_saveToNSRangeArray:(void*)arg1;
- (void)tsp_saveToProtobufStringArray:(void*)arg1;
- (void)tsp_saveToProtobufUUIDArray:(void*)arg1;
- (void)tsp_saveToUInt32Array:(void*)arg1;

// Image: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSStyles.framework/TSStyles

- (int)tss_propertyAtIndex:(unsigned int)arg1;

// Image: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSText.framework/TSText

- (id)tswp_locale;
- (id)tswp_transcriber;
- (id)tswp_transcription;

// Image: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSUtility.framework/TSUtility

+ (id)tsu_arrayByUnioningArray:(id)arg1 withArray:(id)arg2;
+ (id)tsu_arrayWithCGFloats:(const double*)arg1 count:(unsigned long long)arg2;
+ (id)tsu_arrayWithInts:(const int*)arg1 count:(unsigned long long)arg2;
+ (id)tsu_arrayWithNonNilObject:(id)arg1;
+ (id)tsu_arrayWithUIntegers:(const unsigned long long*)arg1 count:(unsigned long long)arg2;

- (bool)tsu_allObjectsPassTest:(id /* block */)arg1;
- (id)tsu_anyObject;
- (id)tsu_arrayByAddingNonContainedObjectsFromArray:(id)arg1;
- (id)tsu_arrayByFlattening;
- (id)tsu_arrayByMappingObjectsUsingBlock:(id /* block */)arg1;
- (id)tsu_arrayByRemovingFirstObject;
- (id)tsu_arrayByRemovingObjectsAtIndexes:(id)arg1;
- (id)tsu_arrayByRemovingObjectsIdenticalToObjectsInArray:(id)arg1;
- (id)tsu_arrayByReversingOrder;
- (id)tsu_arrayByTransformingWithBlock:(id /* block */)arg1;
- (id)tsu_arrayOfObjectsPassingTest:(id /* block */)arg1;
- (id)tsu_arrayWithObjectsInSet:(id)arg1;
- (bool)tsu_containsObjectPassingTest:(id /* block */)arg1;
- (void)tsu_enumerateSnapshotObjectsUsingBlock:(id /* block */)arg1;
- (id)tsu_firstObjectPassingTest:(id /* block */)arg1;
- (unsigned long long)tsu_indexOfSmallestObject;
- (id)tsu_indexesOfObjects:(id)arg1;
- (id)tsu_initWithCGFloats:(const double*)arg1 count:(unsigned long long)arg2;
- (id)tsu_initWithInts:(const int*)arg1 count:(unsigned long long)arg2;
- (id)tsu_initWithUIntegers:(const unsigned long long*)arg1 count:(unsigned long long)arg2;
- (id)tsu_intersectionWithArray:(id)arg1;
- (bool)tsu_isHomogeneousForClass:(Class)arg1;
- (id)tsu_localizedList;
- (id)tsu_objectPriorToObject:(id)arg1;
- (id)tsu_onlyObject;
- (id)tsu_rangeCheckedObjectAtIndex:(unsigned long long)arg1;
- (id)tsu_uniqueObjects;

// Image: /usr/lib/libSESShared.dylib

- (bool)allSatisfy:(id /* block */)arg1;
- (id)filter:(id /* block */)arg1;
- (id)filterMap:(id /* block */)arg1;
- (id)find:(id /* block */)arg1;
- (id)randomElement;
- (id)ses_map:(id /* block */)arg1;

// Image: /usr/lib/libprequelite.dylib

- (void)sqliteBind:(struct sqlite3_stmt { }*)arg1 index:(int)arg2;

@end
