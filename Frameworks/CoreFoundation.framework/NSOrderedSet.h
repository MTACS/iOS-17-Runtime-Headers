
@interface NSOrderedSet : NSObject <CKDeepCopying, FCOrderedCollectionAdditions, NSCopying, NSFastEnumeration, NSMutableCopying, NSSecureCoding>

@property (readonly) unsigned long long count;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSOrderedSet *ef_flatten;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)newOrderedSetWithObjects:(const id*)arg1 count:(unsigned long long)arg2;
+ (id)orderedSet;
+ (id)orderedSetWithArray:(id)arg1;
+ (id)orderedSetWithArray:(id)arg1 copyItems:(bool)arg2;
+ (id)orderedSetWithArray:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
+ (id)orderedSetWithArray:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 copyItems:(bool)arg3;
+ (id)orderedSetWithObject:(id)arg1;
+ (id)orderedSetWithObjects:(id)arg1;
+ (id)orderedSetWithObjects:(const id*)arg1 count:(unsigned long long)arg2;
+ (id)orderedSetWithOrderedSet:(id)arg1;
+ (id)orderedSetWithOrderedSet:(id)arg1 copyItems:(bool)arg2;
+ (id)orderedSetWithOrderedSet:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
+ (id)orderedSetWithOrderedSet:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 copyItems:(bool)arg3;
+ (id)orderedSetWithSet:(id)arg1;
+ (id)orderedSetWithSet:(id)arg1 copyItems:(bool)arg2;
+ (bool)supportsSecureCoding;

- (id)allObjects;
- (id)array;
- (bool)containsObject:(id)arg1;
- (bool)containsObject:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
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
- (void)getObjects:(id*)arg1;
- (void)getObjects:(id*)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (unsigned long long)hash;
- (unsigned long long)indexOfObject:(id)arg1;
- (unsigned long long)indexOfObject:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (unsigned long long)indexOfObject:(id)arg1 inSortedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 options:(unsigned long long)arg3 usingComparator:(id /* block */)arg4;
- (unsigned long long)indexOfObjectAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(id /* block */)arg3;
- (unsigned long long)indexOfObjectPassingTest:(id /* block */)arg1;
- (unsigned long long)indexOfObjectWithOptions:(unsigned long long)arg1 passingTest:(id /* block */)arg2;
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
- (bool)intersectsOrderedSet:(id)arg1;
- (bool)intersectsSet:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToOrderedSet:(id)arg1;
- (bool)isNSOrderedSet__;
- (bool)isSubsetOfOrderedSet:(id)arg1;
- (bool)isSubsetOfSet:(id)arg1;
- (id)lastObject;
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
- (id)reversedOrderedSet;
- (id)set;
- (id)sortedArrayFromRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 options:(unsigned long long)arg2 usingComparator:(id /* block */)arg3;
- (id)sortedArrayUsingComparator:(id /* block */)arg1;
- (id)sortedArrayWithOptions:(unsigned long long)arg1 usingComparator:(id /* block */)arg2;

// Image: /System/Library/Frameworks/CloudKit.framework/CloudKit

- (id)CKDeepCopy;
- (id)CKDeepCopyWithLeafNodeCopyBlock:(id /* block */)arg1;
- (id)CKDescriptionPropertiesWithPublic:(bool)arg1 private:(bool)arg2 shouldExpand:(bool)arg3;
- (id)cksqlcs_appendSQLConstantValueToString:(id)arg1;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (bool)_subclassesMustBeExplicitlyMentionedWhenDecoded;
+ (bool)supportsSecureCoding;

- (id)_avgForKeyPath:(id)arg1;
- (id)_countForKeyPath:(id)arg1;
- (id)_maxForKeyPath:(id)arg1;
- (id)_minForKeyPath:(id)arg1;
- (id)_mutableArrayValueForKeyPath:(id)arg1 ofObjectAtIndex:(unsigned long long)arg2;
- (id)_mutableOrderedSetValueForKeyPath:(id)arg1 ofObjectAtIndex:(unsigned long long)arg2;
- (id)_mutableSetValueForKeyPath:(id)arg1 ofObjectAtIndex:(unsigned long long)arg2;
- (void)_setValue:(id)arg1 forKeyPath:(id)arg2 ofObjectAtIndex:(unsigned long long)arg3;
- (id)_sumForKeyPath:(id)arg1;
- (bool)_validateValue:(inout id*)arg1 forKeyPath:(id)arg2 ofObjectAtIndex:(unsigned long long)arg3 error:(out id*)arg4;
- (id)_valueForKeyPath:(id)arg1 ofObjectAtIndex:(unsigned long long)arg2;
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4;
- (Class)classForCoder;
- (id)differenceFromOrderedSet:(id)arg1;
- (id)differenceFromOrderedSet:(id)arg1 withOptions:(unsigned long long)arg2;
- (id)differenceFromOrderedSet:(id)arg1 withOptions:(unsigned long long)arg2 usingEquivalenceTest:(id /* block */)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)filteredOrderedSetUsingPredicate:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)orderedSetByApplyingDifference:(id)arg1;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2 context:(void*)arg3;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)sortedArrayUsingDescriptors:(id)arg1;
- (id)valueForKey:(id)arg1;
- (id)valueForKeyPath:(id)arg1;

// Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard

- (id)bs_compactMap:(id /* block */)arg1;
- (bool)bs_containsObjectPassingTest:(id /* block */)arg1;
- (id)bs_dictionaryByPartitioning:(id /* block */)arg1;
- (id)bs_filter:(id /* block */)arg1;
- (id)bs_firstObjectPassingTest:(id /* block */)arg1;
- (id)bs_map:(id /* block */)arg1;
- (id)bs_reduce:(id)arg1 block:(id /* block */)arg2;

// Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit

- (id)orderedSetByAddingObject:(id)arg1;
- (id)orderedSetByAddingObjectsFromArray:(id)arg1;
- (id)orderedSetByAddingObjectsFromOrderedSet:(id)arg1;

// Image: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation

- (bool)ef_all:(id /* block */)arg1;
- (bool)ef_any:(id /* block */)arg1;
- (id)ef_anyPassingTest:(id /* block */)arg1;
- (id)ef_compactMap:(id /* block */)arg1;
- (unsigned long long)ef_countObjectsPassingTest:(id /* block */)arg1;
- (id)ef_filter:(id /* block */)arg1;
- (id)ef_flatMap:(id /* block */)arg1;
- (id)ef_flatten;
- (id)ef_objectAfterObject:(id)arg1;
- (id)ef_objectBeforeObject:(id)arg1;
- (id)ef_partition:(id /* block */)arg1;
- (id)ef_prefix:(unsigned long long)arg1;
- (id)ef_subarrayWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)ef_subsetWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)ef_suffix:(unsigned long long)arg1;

// Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation

- (id)_gkDescriptionWithChildren:(long long)arg1;
- (id)_gkDistinctValuesForKeyPath:(id)arg1;
- (id)_gkFirstObject;
- (bool)_gkIsEqualToOrderedSet:(id)arg1;
- (id)_gkMapDictionaryWithKeyPath:(id)arg1;
- (id)_gkMapDictionaryWithKeyPath:(id)arg1 valueKeyPath:(id)arg2;
- (id)_gkValuesForKeyPath:(id)arg1;

// Image: /System/Library/PrivateFrameworks/IntentsFoundation.framework/IntentsFoundation

- (id)if_compactMap:(id /* block */)arg1;
- (id)if_map:(id /* block */)arg1;
- (id)if_orderedSetByAddingObject:(id)arg1;
- (id)if_orderedSetByAddingObjectsFromArray:(id)arg1;
- (id)if_orderedSetByAddingObjectsFromOrderedSet:(id)arg1;

// Image: /System/Library/PrivateFrameworks/MobileSafariUI.framework/MobileSafariUI

- (id)safari_changeFromSet:(id)arg1 withModificationCheck:(id /* block */)arg2;

// Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore

+ (id)fc_orderedSet:(id /* block */)arg1;

- (bool)fc_containsObjectPassingTest:(id /* block */)arg1;
- (id)fc_diffAgainstOrderedSet:(id)arg1;
- (id)fc_diffAgainstOrderedSet:(id)arg1 withEqualityTest:(id /* block */)arg2 identityValueProvider:(id /* block */)arg3;
- (id)fc_diffAgainstSortedOrderedCollection:(id)arg1 usingComparator:(id /* block */)arg2;
- (void)fc_enumerateObjectsPairwiseUsingBlock:(id /* block */)arg1;
- (id)fc_firstObjectPassingTest:(id /* block */)arg1;
- (id)fc_indexesOfObjectsInOrderedSet:(id)arg1;
- (bool)fc_isEqualToOrderedSet:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (bool)fc_isSortedUsingComparator:(id /* block */)arg1;
- (id)fc_objectInSortedOrderedCollectionWithFeature:(id)arg1 usingFeatureProvider:(id /* block */)arg2 comparator:(id /* block */)arg3;
- (id)fc_orderedSetByAddingObject:(id)arg1;
- (id)fc_orderedSetByCollectingObjectsWithBlock:(id /* block */)arg1;
- (id)fc_orderedSetByMinusingOrderedSet:(id)arg1;
- (id)fc_orderedSetByTransformingWithBlock:(id /* block */)arg1;
- (id)fc_orderedSetOfObjectsPassingTest:(id /* block */)arg1;
- (id)fc_orderedSetWithObjectsAtIndexes:(id)arg1;
- (id)fc_orderedSetWithObjectsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;

// Image: /System/Library/PrivateFrameworks/NotesSupport.framework/NotesSupport

- (bool)ic_containsObjectMatchingPredicate:(id)arg1;
- (bool)ic_containsObjectPassingTest:(id /* block */)arg1;
- (id)ic_objectPassingTest:(id /* block */)arg1;
- (id)ic_objectsMovedFromOrderedSet:(id)arg1;

// Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore

- (id)pk_anyObjectPassingTest:(id /* block */)arg1;
- (bool)pk_hasObjectPassingTest:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices

- (id)_pl_prettyDescriptionWithIndent:(long long)arg1;
- (unsigned long long)pl_indexOfObjectIdenticalTo:(id)arg1;
- (bool)pl_isSortedUsingComparator:(id /* block */)arg1;
- (id)pl_shortDescription;

// Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard

- (bool)sb_containsFloatingDockSuggestionDisplayItem:(id)arg1;
- (unsigned long long)sb_indexOfFloatingDockSuggestionDisplayItem:(id)arg1;

// Image: /System/Library/PrivateFrameworks/TextInputUI.framework/TextInputUI

- (id)allFieldSpecs;

// Image: /System/Library/PrivateFrameworks/VisualVoicemail.framework/VisualVoicemail

- (id)arrayByIntersectingWithOrderedSet:(id)arg1;
- (id)arrayBySubtractingOrderedSet:(id)arg1;

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

+ (id)wf_orderedSetByMergingOrderedSet:(id)arg1 withOrderedSet:(id)arg2 baseOrderedSet:(id)arg3;
+ (id)wf_orderedSetByMergingOrderedSet:(id)arg1 withOrderedSet:(id)arg2 baseOrderedSet:(id)arg3 elementComparator:(id /* block */)arg4;

@end
