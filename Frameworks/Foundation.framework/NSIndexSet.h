
@interface NSIndexSet : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    struct { 
        unsigned int _hasSingleRange : 1; 
        unsigned int _hasBitfield : 1; 
        unsigned int _reservedArrayBinderController : 30; 
    }  _indexSetFlags;
    union { 
        struct { 
            struct _NSRange { 
                unsigned long long location; 
                unsigned long long length; 
            } _range; 
        } _singleRange; 
        struct { 
            void *_data; 
            void *_reserved; 
        } _multipleRanges; 
        struct { 
            unsigned long long _bitfield; 
        } _singleBitfield; 
    }  _internal;
}

@property (readonly) NSArray *allNumbers;
@property (readonly) unsigned long long count;
@property (nonatomic, readonly) NSString *ed_logDescription;
@property (nonatomic, readonly) NSString *ed_uidQueryExpression;
@property (readonly) unsigned long long firstIndex;
@property (nonatomic, readonly) NSArray *ic_rangeArray;
@property (readonly) unsigned long long lastIndex;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } px_coveringRange;
@property (nonatomic, readonly) NSString *px_shortDescription;
@property (nonatomic, readonly) bool tsu_isSingleContiguousRange;
@property (nonatomic, readonly) NSArray *vk_rangeArray;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (id)_alloc;
+ (bool)_subclassesMustBeExplicitlyMentionedWhenDecoded;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)indexSet;
+ (id)indexSetWithBitfield:(unsigned long long)arg1;
+ (id)indexSetWithIndex:(unsigned long long)arg1;
+ (id)indexSetWithIndexes:(const unsigned long long*)arg1 count:(unsigned long long)arg2;
+ (id)indexSetWithIndexesInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
+ (void)initialize;
+ (bool)supportsSecureCoding;

- (void)__forwardEnumerateRanges:(id /* block */)arg1;
- (unsigned long long)__getContainmentVector:(out bool*)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (unsigned long long)_indexAtIndex:(unsigned long long)arg1;
- (unsigned long long)_indexOfRangeAfterOrContainingIndex:(unsigned long long)arg1;
- (unsigned long long)_indexOfRangeBeforeOrContainingIndex:(unsigned long long)arg1;
- (unsigned long long)_indexOfRangeContainingIndex:(unsigned long long)arg1;
- (id)_init;
- (id)_numberEnumerator;
- (void)_setContentToContentFromIndexSet:(id)arg1;
- (Class)classForCoder;
- (bool)containsIndex:(unsigned long long)arg1;
- (bool)containsIndexes:(id)arg1;
- (bool)containsIndexesInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (unsigned long long)countOfIndexesInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateIndexesInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 options:(unsigned long long)arg2 usingBlock:(id /* block */)arg3;
- (void)enumerateIndexesUsingBlock:(id /* block */)arg1;
- (void)enumerateIndexesWithOptions:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
- (void)enumerateRangesInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 options:(unsigned long long)arg2 usingBlock:(id /* block */)arg3;
- (void)enumerateRangesUsingBlock:(id /* block */)arg1;
- (void)enumerateRangesWithOptions:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
- (unsigned long long)firstIndex;
- (bool)getBitfield:(unsigned long long*)arg1;
- (unsigned long long)getIndexes:(unsigned long long*)arg1 maxCount:(unsigned long long)arg2 inIndexRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg3;
- (unsigned long long)hash;
- (unsigned long long)indexGreaterThanIndex:(unsigned long long)arg1;
- (unsigned long long)indexGreaterThanOrEqualToIndex:(unsigned long long)arg1;
- (unsigned long long)indexInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 options:(unsigned long long)arg2 passingTest:(id /* block */)arg3;
- (unsigned long long)indexLessThanIndex:(unsigned long long)arg1;
- (unsigned long long)indexLessThanOrEqualToIndex:(unsigned long long)arg1;
- (unsigned long long)indexPassingTest:(id /* block */)arg1;
- (unsigned long long)indexWithOptions:(unsigned long long)arg1 passingTest:(id /* block */)arg2;
- (id)indexesInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 options:(unsigned long long)arg2 passingTest:(id /* block */)arg3;
- (id)indexesPassingTest:(id /* block */)arg1;
- (id)indexesWithOptions:(unsigned long long)arg1 passingTest:(id /* block */)arg2;
- (id)init;
- (id)initWithBitfield:(unsigned long long)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIndex:(unsigned long long)arg1;
- (id)initWithIndexSet:(id)arg1;
- (id)initWithIndexes:(const unsigned long long*)arg1 count:(unsigned long long)arg2;
- (id)initWithIndexesInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (bool)intersectsIndexesInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToIndexSet:(id)arg1;
- (unsigned long long)lastIndex;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeAtIndex:(unsigned long long)arg1;
- (unsigned long long)rangeCount;
- (id)replacementObjectForPortCoder:(id)arg1;

// Image: /System/Library/Frameworks/CloudKit.framework/CloudKit

- (id)CKMap:(id /* block */)arg1;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)hk_indexSetWithDayIndexRange:(struct { long long x1; long long x2; })arg1;

- (void)hk_enumerateDayIndexRangesUsingBlock:(id /* block */)arg1;
- (void)hk_enumerateDayIndexRangesWithOptions:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;

// Image: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient

- (id)atx_asArray;

// Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI

- (long long)closestIndexToIndex:(unsigned long long)arg1 greaterIndexesFirst:(bool)arg2;

// Image: /System/Library/PrivateFrameworks/CameraEditKit.framework/CameraEditKit

- (unsigned long long)cek_indexNearestToIndex:(unsigned long long)arg1;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

- (void)__ck_enumerateIndexesByProximityToIndex:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
- (id)__ck_indexPathItemsInSection:(long long)arg1;
- (id)__ck_indexPathRowsInSection:(long long)arg1;
- (id)__ck_indexSetShiftedForInsertedIndexes:(id)arg1 removedIndexes:(id)arg2;

// Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation

- (bool)_cn_all:(id /* block */)arg1;
- (bool)_cn_any:(id /* block */)arg1;
- (void)_cn_each:(id /* block */)arg1;
- (id)_cn_filter:(id /* block */)arg1;
- (id)_cn_flatMap:(id /* block */)arg1;
- (id)_cn_map:(id /* block */)arg1;
- (id)_cn_mapRanges:(id /* block */)arg1;
- (id)_cn_shortDescription;

// Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet

- (id)_cd_commaSeparatedIndexes;

// Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting

- (bool)ch_intersectsIndexSet:(id)arg1;

// Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon

- (void)ed_enumerateUIDsWithLimit:(unsigned long long)arg1 reverseEnumeration:(bool)arg2 queryRangeCountLimit:(unsigned long long)arg3 batchLimit:(unsigned long long)arg4 usingBlock:(id /* block */)arg5;
- (void)ed_enumerateUIDsWithLimit:(unsigned long long)arg1 reverseEnumeration:(bool)arg2 usingBlock:(id /* block */)arg3;
- (id)ed_logDescription;
- (id)ed_nextRangesWithRangeCountLimit:(unsigned long long)arg1 reverseEnumeration:(bool)arg2;
- (id)ed_uidQueryExpression;
- (id)ed_uidQueryExpressionWithTableName:(id)arg1;

// Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation

- (id)_gkIndexSetByAddingIndex:(long long)arg1;
- (id)_gkIndexSetByRemovingIndex:(long long)arg1;

// Image: /System/Library/PrivateFrameworks/HealthMenstrualCycles.framework/HealthMenstrualCycles

+ (id)hk_indexSetWithArray:(id)arg1;

- (id)hk_indexSetSubtractingIndexes:(id)arg1;

// Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities

+ (id)__im_indexSetFromNumberArray:(id)arg1;

- (id)__im_numberArray;

// Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit

+ (id)indexSetWithIndexesInCyclicRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 itemCount:(unsigned long long)arg2;

- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_allInclusiveCyclicRangeForItemCount:(unsigned long long)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_filteredCyclicRangeForItemCount:(unsigned long long)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })cyclicRangeForItemCount:(unsigned long long)arg1 includeAllIndexes:(bool)arg2;

// Image: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy

- (id)mf_commaSeparatedString;

// Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore

- (unsigned long long)fc_countOfContiguousIndexesGreaterThanOrEqualToIndex:(unsigned long long)arg1;
- (unsigned long long)fc_countOfContiguousIndexesLessThanIndex:(unsigned long long)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })fc_enclosingRange;
- (void)fc_enumerateGapsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 usingBlock:(id /* block */)arg2;
- (id)fc_indexSetWithGapsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (bool)fc_isContiguous;

// Image: /System/Library/PrivateFrameworks/NotesSupport.framework/NotesSupport

- (id)ic_rangeArray;

// Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport

+ (id)tsu_indexSetWithIndices:(unsigned long long*)arg1 count:(unsigned long long)arg2;

- (unsigned long long)tsu_indexAtPosition:(unsigned long long)arg1;
- (id)tsu_indexSetByAddingIndex:(unsigned long long)arg1;
- (id)tsu_indexSetByAddingIndexes:(id)arg1;
- (id)tsu_indexSetByExcludingIndexes:(id)arg1;
- (id)tsu_indexSetByInsertingIndexes:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)tsu_indexSetByIntersectingWithIndexes:(id)arg1;
- (id)tsu_indexSetByIntersectingWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)tsu_initWithIndices:(unsigned long long*)arg1 count:(unsigned long long)arg2;
- (bool)tsu_intersectsIndexesInIndexSet:(id)arg1;
- (bool)tsu_isSingleContiguousRange;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })tsu_leadingRangeInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)tsu_localizedDescription;
- (unsigned long long)tsu_positionOfIndex:(unsigned long long)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })tsu_trailingRangeInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;

// Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices

- (id)_pl_indexSetByUpdatingWithChangedIndexes:(id)arg1 asInserts:(bool)arg2;
- (id)pl_indexSetAdjustedForDeletions:(id)arg1;
- (id)pl_indexSetAdjustedForInsertions:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })pl_rangeCoveringIndexSet;
- (id)pl_shortDescription;

// Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph

- (bool)pg_intersectsIndexSet:(id)arg1;

// Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore

- (struct _NSRange { unsigned long long x1; unsigned long long x2; })px_coveringRange;
- (void)px_enumerateMap:(id /* block */)arg1 usingBlock:(id /* block */)arg2;
- (unsigned long long)px_indexAtPosition:(unsigned long long)arg1;
- (id)px_indexSetAdjustedForDeletions:(id)arg1;
- (id)px_indexSetAdjustedForInsertions:(id)arg1;
- (id)px_intersectionWithIndexSet:(id)arg1;
- (bool)px_intersectsWithIndexSet:(id)arg1;
- (bool)px_isSingleRangeWithMax:(long long)arg1;
- (id)px_map:(id /* block */)arg1;
- (id)px_shortDescription;

// Image: /System/Library/PrivateFrameworks/Portrait.framework/Portrait

- (id)allNumbers;

// Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore

- (long long)firstIndexCommonWithIndexSet:(id)arg1;

// Image: /System/Library/PrivateFrameworks/Silex.framework/Silex

- (struct _NSRange { unsigned long long x1; unsigned long long x2; })firstRangeAfterIndex:(unsigned long long)arg1;

// Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices

- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;

// Image: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility

+ (id)tsu_indexSetWithIndices:(unsigned long long*)arg1 count:(unsigned long long)arg2;

- (id)initWithIndices:(unsigned long long*)arg1 count:(unsigned long long)arg2;
- (id)tsu_indexSetByAddingIndexes:(id)arg1;
- (id)tsu_indexSetByInsertingIndexes:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (bool)tsu_intersectsIndexesInIndexSet:(id)arg1;
- (bool)tsu_isSingleContiguousRange;

// Image: /System/Library/PrivateFrameworks/VisionKitCore.framework/VisionKitCore

+ (id)vk_indexSetWithNSNumberIndex:(id)arg1;

- (id)vk_rangeArray;

// Image: /System/Library/PrivateFrameworks/VisualVoicemail.framework/IMAP.framework/IMAP

- (id)mf_commaSeparatedString;

// Image: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSPersistence.framework/TSPersistence

- (id)tsp_initWithMessage:(const void*)arg1;
- (void)tsp_saveToMessage:(void*)arg1;

// Image: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSUtility.framework/TSUtility

+ (id)tsu_indexSetWithIndices:(unsigned long long*)arg1 count:(unsigned long long)arg2;

- (struct _NSRange { unsigned long long x1; unsigned long long x2; })tsu_boundingRange;
- (void)tsu_enumerateIndexesAndPositionsUsingBlock:(id /* block */)arg1;
- (void)tsu_enumerateRangesConcurrentlyUsingBeginBlock:(id /* block */)arg1 concurrentBlock:(id /* block */)arg2 finalBlock:(id /* block */)arg3;
- (void)tsu_enumerateSkippedIndexesWithOptions:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
- (void)tsu_enumerateSkippedRangesWithOptions:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
- (void)tsu_enumerateUniquePermutationsUsingBlock:(id /* block */)arg1;
- (unsigned long long)tsu_firstCommonIndexWithIndexes:(id)arg1;
- (unsigned long long)tsu_indexAtPosition:(unsigned long long)arg1;
- (id)tsu_indexSetByAddingIndex:(unsigned long long)arg1;
- (id)tsu_indexSetByAddingIndexes:(id)arg1;
- (id)tsu_indexSetByExcludingIndex:(unsigned long long)arg1;
- (id)tsu_indexSetByExcludingIndexes:(id)arg1;
- (id)tsu_indexSetByInsertingIndexes:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)tsu_indexSetByIntersectingWithIndexes:(id)arg1;
- (id)tsu_indexSetByIntersectingWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)tsu_indexSetByOutsettingRangesBy:(unsigned long long)arg1;
- (id)tsu_indexSetChunkIndex:(unsigned long long)arg1 ofChunkCount:(unsigned long long)arg2;
- (id)tsu_initWithIndices:(unsigned long long*)arg1 count:(unsigned long long)arg2;
- (bool)tsu_intersectsIndexesInIndexSet:(id)arg1;
- (bool)tsu_isSingleContiguousRange;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })tsu_leadingRangeInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)tsu_localizedDescription;
- (unsigned long long)tsu_nsIndexSetConcurrencyFactor;
- (unsigned long long)tsu_positionOfIndex:(unsigned long long)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })tsu_trailingRangeInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;

@end
