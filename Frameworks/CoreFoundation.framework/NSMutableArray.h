
@interface NSMutableArray : NSArray <FCOrderedMutableCollectionAdditions, GEOComposedRouteStepTransitInstructionMerging>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation

+ (id)arrayWithCapacity:(unsigned long long)arg1;

- (void)_mutate;
- (void)addObject:(id)arg1;
- (void)addObjects:(const id*)arg1 count:(unsigned long long)arg2;
- (void)addObjectsFromArray:(id)arg1;
- (void)addObjectsFromArray:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)addObjectsFromOrderedSet:(id)arg1;
- (void)addObjectsFromOrderedSet:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)addObjectsFromSet:(id)arg1;
- (id)arrayByAddingObjectsFromArray:(id)arg1;
- (void)exchangeObjectAtIndex:(unsigned long long)arg1 withObjectAtIndex:(unsigned long long)arg2;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)initWithObjects:(const id*)arg1 count:(unsigned long long)arg2;
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)insertObjects:(id)arg1 atIndexes:(id)arg2;
- (void)insertObjects:(const id*)arg1 count:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)insertObjectsFromArray:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)insertObjectsFromArray:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 atIndex:(unsigned long long)arg3;
- (void)insertObjectsFromOrderedSet:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)insertObjectsFromOrderedSet:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 atIndex:(unsigned long long)arg3;
- (void)insertObjectsFromSet:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)moveObjectsAtIndexes:(id)arg1 toIndex:(unsigned long long)arg2;
- (void)removeAllObjects;
- (void)removeFirstObject;
- (void)removeLastObject;
- (void)removeObject:(id)arg1;
- (void)removeObject:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)removeObjectAtIndex:(unsigned long long)arg1;
- (void)removeObjectIdenticalTo:(id)arg1;
- (void)removeObjectIdenticalTo:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)removeObjectsAtIndexes:(id)arg1;
- (void)removeObjectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(id /* block */)arg3;
- (void)removeObjectsInArray:(id)arg1;
- (void)removeObjectsInArray:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)removeObjectsInOrderedSet:(id)arg1;
- (void)removeObjectsInOrderedSet:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)removeObjectsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)removeObjectsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 inArray:(id)arg2;
- (void)removeObjectsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 inArray:(id)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (void)removeObjectsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 inOrderedSet:(id)arg2;
- (void)removeObjectsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 inOrderedSet:(id)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (void)removeObjectsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 inSet:(id)arg2;
- (void)removeObjectsInSet:(id)arg1;
- (void)removeObjectsPassingTest:(id /* block */)arg1;
- (void)removeObjectsWithOptions:(unsigned long long)arg1 passingTest:(id /* block */)arg2;
- (void)replaceObject:(id)arg1;
- (void)replaceObject:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)replaceObjectsAtIndexes:(id)arg1 withObjects:(id)arg2;
- (void)replaceObjectsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withObjects:(const id*)arg2 count:(unsigned long long)arg3;
- (void)replaceObjectsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withObjectsFromArray:(id)arg2;
- (void)replaceObjectsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withObjectsFromArray:(id)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (void)replaceObjectsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withObjectsFromOrderedSet:(id)arg2;
- (void)replaceObjectsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withObjectsFromOrderedSet:(id)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (void)replaceObjectsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withObjectsFromSet:(id)arg2;
- (void)setArray:(id)arg1;
- (void)setObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setObject:(id)arg1 atIndexedSubscript:(unsigned long long)arg2;
- (void)setOrderedSet:(id)arg1;
- (void)setSet:(id)arg1;
- (void)sortRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 options:(unsigned long long)arg2 usingComparator:(id /* block */)arg3;
- (void)sortUsingComparator:(id /* block */)arg1;
- (void)sortUsingFunction:(int (*)arg1 context:(void*)arg2;
- (void)sortUsingFunction:(int (*)arg1 context:(void*)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (void)sortUsingSelector:(SEL)arg1;
- (void)sortWithOptions:(unsigned long long)arg1 usingComparator:(id /* block */)arg2;
- (id)sortedArrayFromRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 options:(unsigned long long)arg2 usingComparator:(id /* block */)arg3;

// Image: /System/Library/Frameworks/ExposureNotification.framework/ExposureNotification

- (void)enRandomlyShuffle;

// Image: /System/Library/Frameworks/FinanceKit.framework/FinanceKit

- (void)safelyAddObject:(id)arg1;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

- (void)applyDifference:(id)arg1;
- (Class)classForCoder;
- (void)filterUsingPredicate:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1;
- (id)initWithContentsOfURL:(id)arg1;
- (id)initWithContentsOfURL:(id)arg1 error:(id*)arg2;
- (void)removeObjectsFromIndices:(unsigned long long*)arg1 numIndices:(unsigned long long)arg2;
- (void)sortUsingDescriptors:(id)arg1;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

- (void)hk_addNonNilObject:(id)arg1;
- (void)hk_addObjectsFromArray:(id)arg1 passingTest:(id /* block */)arg2;
- (void)hk_addUniqueObjectsFromArray:(id)arg1;
- (id)hk_dequeue;
- (void)hk_removeObjectsPassingTest:(id /* block */)arg1;
- (void)hk_shuffle;

// Image: /System/Library/Frameworks/ImageCaptureCore.framework/ImageCaptureCore

- (void)addItemsMatchingType:(id)arg1 fromFolder:(id)arg2;
- (void)addItemsMatchingTypes:(id)arg1 fromFolder:(id)arg2;
- (void)addTruth:(bool)arg1 code:(long long)arg2;

// Image: /System/Library/Frameworks/MapKit.framework/MapKit

- (void)_mapkit_insertObject:(id)arg1 sortedUsingSelector:(SEL)arg2;
- (id)_mapkit_popLastObject;
- (void)_mapkit_sortUsingDistanceFromCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1;
- (void)_mapkit_sortUsingDistanceFromCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1 ascending:(bool)arg2;
- (void)_mapkit_sortUsingLatitude;
- (void)_mapkit_sortUsingLatitudeAscending:(bool)arg1;
- (void)_mapkit_sortUsingLongitude;
- (void)_mapkit_sortUsingLongitudeAscending:(bool)arg1;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

- (void)moveItemFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (void)removeItemAtIndex:(unsigned long long)arg1;

// Image: /System/Library/Frameworks/NotificationCenter.framework/NotificationCenter

- (id)nc_peek;
- (id)nc_pop;
- (void)nc_push:(id)arg1;

// Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit

- (void)removeExactObject:(id)arg1;
- (void)removeExactObjectsInArray:(id)arg1;

// Image: /System/Library/Frameworks/UserNotifications.framework/UserNotifications

- (void)un_safeAddObject:(id)arg1 class:(Class)arg2;
- (void)un_safeAddObject:(id)arg1 classes:(id)arg2;

// Image: /System/Library/Frameworks/Vision.framework/Vision

- (void)VNInsertObservationWithConfidence:(float)arg1 limitedToN:(unsigned long long)arg2 providedByBlock:(id /* block */)arg3;

// Image: /System/Library/PrivateFrameworks/AAAFoundation.framework/AAAFoundation

- (id)aaf_removeFirstObject;
- (id)aaf_removeLastObject;

// Image: /System/Library/PrivateFrameworks/APFoundation.framework/APFoundation

- (id)AD_validSigningAuthority;

// Image: /System/Library/PrivateFrameworks/AXCoreUtilities.framework/AXCoreUtilities

- (id)ax_dequeueObject;
- (void)ax_enqueueObject:(id)arg1;
- (id)ax_lastEnqueuedObject;
- (id)ax_nextDequeuedObject;
- (void)ax_removeObjectsFromArrayUsingBlock:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities

- (void)axSafelyAddObject:(id)arg1;
- (void)axSafelyAddObjectsFromArray:(id)arg1;

// Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal

- (void)shuffle;

// Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount

- (id)aa_removeFirstObject;
- (id)aa_removeLastObject;

// Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices

- (void)ams_addNullableObject:(id)arg1;
- (void)ams_addObjectsFromNullableArray:(id)arg1;
- (void)ams_removeObjectsPassingTest:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/AskPermission.framework/AskPermission

- (void)ap_addNullableObject:(id)arg1;

// Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard

- (void)bs_safeAddObject:(id)arg1;

// Image: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore

- (void)bds_addObjectIfNotNil:(id)arg1;

// Image: /System/Library/PrivateFrameworks/BookUtility.framework/BookUtility

- (void)bu_updateToMatchArray:(id)arg1 removalBlock:(id /* block */)arg2 insertionBlock:(id /* block */)arg3;

// Image: /System/Library/PrivateFrameworks/CDMFoundation.framework/CDMFoundation

- (void)_cdm_safeJSONTraverse;

// Image: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture

- (bool)bw_empty;
- (id)bw_peek;
- (id)bw_pop;
- (void)bw_push:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV

+ (id)nonRetainingArray;

- (void)removeAllObjectsWithClass:(Class)arg1;

// Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation

+ (id)nonRetainingArray;

- (void)CalFilterUsingBlock:(id /* block */)arg1;
- (void)removeAllObjectsWithClass:(Class)arg1;

// Image: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst

- (id)cat_popFirstObject;
- (void)cat_removeFirstObjectMatching:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit

- (bool)crk_pluckFlag:(id)arg1;
- (id)crk_pluckValueForNamedArgument:(id)arg1;

// Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation

- (void)_cn_addNonNilObject:(id)arg1;
- (void)_cn_addNonNilObjectIfNotPresent:(id)arg1;
- (void)_cn_addObject:(id)arg1 count:(unsigned long long)arg2;
- (void)_cn_addObject:(id)arg1 orPlaceholder:(id)arg2;
- (void)_cn_insertNonNilObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)_cn_removeObjectsPassingTest:(id /* block */)arg1;
- (void)_cn_reverseObjectsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)_cn_rotateRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 by:(long long)arg2;
- (void)_cn_sortUsingAuxiliarySortOrder:(id)arg1 transform:(id /* block */)arg2;

// Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream

- (void)MSRemoveOneObject:(id)arg1;
- (void)MSRemoveOneObjectByPointerComparison:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CoreRecents.framework/CoreRecents

- (void)cr_addNonNilObject:(id)arg1;
- (void)cr_addObject:(id)arg1 orPlaceholder:(id)arg2;
- (void)cr_insertObject:(id)arg1 usingComparator:(id /* block */)arg2;
- (void)cr_removeObjectsStartingAtIndex:(unsigned long long)arg1;

// Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils

- (id)popFirstObject;

// Image: /System/Library/PrivateFrameworks/DashBoard.framework/DashBoard

- (void)db_mutatingMap:(id /* block */)arg1;
- (bool)db_removeFirstObjectIfMatching:(id)arg1;
- (bool)db_removeFirstObjectsIfMatching:(id)arg1;

// Image: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera

- (void)dc_addNonNilObject:(id)arg1;
- (void)dc_insertNonNilObject:(id)arg1 atIndex:(long long)arg2;

// Image: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation

- (void)ef_addAbsentObjectsFromArrayAccordingToEquals:(id)arg1;
- (void)ef_addObject:(id)arg1 orPlaceholder:(id)arg2;
- (bool)ef_addObjectIfAbsent:(id)arg1;
- (bool)ef_addObjectIfAbsentAccordingToEquals:(id)arg1;
- (void)ef_addOptionalObject:(id)arg1;
- (unsigned long long)ef_insertObject:(id)arg1 usingComparator:(id /* block */)arg2 allowDuplicates:(bool)arg3;
- (unsigned long long)ef_insertObject:(id)arg1 usingSortDescriptors:(id)arg2;
- (unsigned long long)ef_insertObject:(id)arg1 usingSortFunction:(int (*)arg2 context:(void*)arg3 allowDuplicates:(bool)arg4;
- (unsigned long long)ef_insertObjectIfAbsent:(id)arg1 usingComparator:(id /* block */)arg2;
- (void)ef_moveObjectAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (id)ef_popElement;
- (id)ef_removeFirst;
- (unsigned long long)ef_removeObject:(id)arg1 usingComparator:(id /* block */)arg2;
- (unsigned long long)ef_removeObject:(id)arg1 usingSortFunction:(int (*)arg2 context:(void*)arg3;
- (void)ef_reverseObjects;
- (void)ef_trimToCount:(unsigned long long)arg1 fromStart:(bool)arg2;

// Image: /System/Library/PrivateFrameworks/FMCoreLite.framework/FMCoreLite

- (void)fm_safeAddObject:(id)arg1;

// Image: /System/Library/PrivateFrameworks/GameControllerFoundation.framework/GameControllerFoundation

- (void)gc_transformElementsUsingBlock:(id /* block */)arg1;
- (void)gc_transformElementsWithOptions:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;

// Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices

- (void)_geo_filter:(id /* block */)arg1;
- (bool)_transit_hasAnyFieldSet;
- (void)_transit_mergeFrom:(id)arg1;

// Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation

- (id)hmf_dequeue;
- (void)hmf_enqueue:(id)arg1;
- (void)hmf_enqueueMultiple:(id)arg1;
- (id)hmf_maybeDequeue;
- (void)hmf_removeFirstObject;

// Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI

- (id)hk_itemForIdentifier:(id)arg1;

// Image: /System/Library/PrivateFrameworks/HearingCore.framework/HearingCore

- (void)hcSafeAddObject:(id)arg1;

// Image: /System/Library/PrivateFrameworks/HomeDeviceSetup.framework/HomeDeviceSetup

- (void)hds_addNonNilObject:(id)arg1;

// Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation

+ (id)copyNonRetainingArray;
+ (id)nonRetainingArray;

- (void)__imRandomizeArray;
- (void)removeFirstObject;

// Image: /System/Library/PrivateFrameworks/IntentsFoundation.framework/IntentsFoundation

- (void)if_addObjectIfNonNil:(id)arg1;

// Image: /System/Library/PrivateFrameworks/MapsUI.framework/MapsUI

- (void)_mapsui_addObjectIfNotNil:(id)arg1;
- (void)_mapsui_addObjectsFromArrayIfNotNil:(id)arg1;

// Image: /System/Library/PrivateFrameworks/MediaAnalysis.framework/MediaAnalysis

- (void)vcp_sortBySize;

// Image: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices

- (void)msv_removeFirstObject;

// Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit

- (void)npkSafelyAddObject:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NanoTimeKit.framework/NanoTimeKit

- (id)dequeueCachedPhoto;
- (void)enqueueCachedPhoto:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NetAppsUtilities.framework/NetAppsUtilities

- (void)na_safeAddObject:(id)arg1;
- (void)na_safeAddObjectsFromArray:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore

- (void)fc_insertObject:(id)arg1 inOrderRelativeToContents:(unsigned long long)arg2;
- (void)fc_insertObject:(id)arg1 inOrderRelativeToContents:(unsigned long long)arg2;
- (void)fc_insertObject:(id)arg1 sortedUsingSelector:(SEL)arg2;
- (void)fc_insertObject:(id)arg1 sortedUsingSelector:(SEL)arg2;
- (void)fc_insertObjects:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)fc_insertObjects:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)fc_insertObjects:(id)arg1 inOrderRelativeToContents:(unsigned long long)arg2;
- (void)fc_insertObjects:(id)arg1 inOrderRelativeToContents:(unsigned long long)arg2;
- (id)fc_mergeSortedOrderedCollection:(id)arg1 usingComparator:(id /* block */)arg2;
- (id)fc_mergeSortedOrderedCollection:(id)arg1 usingComparator:(id /* block */)arg2;
- (id)fc_popFirstObject;
- (id)fc_popFirstObject;
- (id)fc_popLastObject;
- (id)fc_popLastObject;
- (id)fc_popLeadingObjectsOfCount:(unsigned long long)arg1;
- (id)fc_popLeadingObjectsOfCount:(unsigned long long)arg1;
- (void)fc_removeFirstObject;
- (void)fc_removeFirstObject;
- (void)fc_removeObject:(id)arg1 sortedUsingSelector:(SEL)arg2;
- (void)fc_removeObject:(id)arg1 sortedUsingSelector:(SEL)arg2;
- (void)fc_removeObjectsPassingTest:(id /* block */)arg1;
- (void)fc_removeObjectsPassingTest:(id /* block */)arg1;
- (void)fc_replaceObjectIdenticalTo:(id)arg1 withObject:(id)arg2;
- (void)fc_replaceObjectIdenticalTo:(id)arg1 withObject:(id)arg2;
- (void)fc_replaceObjectIdenticalTo:(id)arg1 withObjects:(id)arg2;
- (void)fc_replaceObjectIdenticalTo:(id)arg1 withObjects:(id)arg2;
- (void)fc_reverseObjects;
- (void)fc_reverseObjects;
- (void)fc_rotateRightWithCount:(unsigned long long)arg1;
- (void)fc_rotateRightWithCount:(unsigned long long)arg1;
- (void)fc_safelyAddObject:(id)arg1;
- (void)fc_safelyAddObject:(id)arg1;
- (void)fc_safelyAddObjectsFromArray:(id)arg1;
- (void)fc_safelyAddObjectsFromArray:(id)arg1;
- (void)fc_safelyAddStringIfNonNilAndNotZeroLength:(id)arg1;
- (void)fc_safelyAddStringIfNonNilAndNotZeroLength:(id)arg1;
- (id)fc_safelyPopFirstObject;
- (id)fc_safelyPopFirstObject;
- (void)fc_trimFromFrontToMaxCount:(unsigned long long)arg1;
- (void)fc_trimFromFrontToMaxCount:(unsigned long long)arg1;
- (void)fc_trimToMaxCount:(unsigned long long)arg1;
- (void)fc_trimToMaxCount:(unsigned long long)arg1;

// Image: /System/Library/PrivateFrameworks/NotesSupport.framework/NotesSupport

+ (id)ic_arrayFromNonNilObject:(id)arg1;

- (void)ic_addNonNilObject:(id)arg1;
- (void)ic_addObjectsFromNonNilArray:(id)arg1;
- (void)ic_insertNonNilObject:(id)arg1 atIndex:(long long)arg2;

// Image: /System/Library/PrivateFrameworks/OSAnalytics.framework/OSAnalytics

- (void)addImage:(unsigned char)arg1 address:(unsigned long long)arg2 size:(unsigned long long)arg3;
- (void)addImageLegacy:(unsigned char)arg1 address:(unsigned long long)arg2 size:(unsigned long long)arg3 name:(const char *)arg4 path:(const char *)arg5 arch:(const char *)arg6;
- (void)addPart:(id)arg1;
- (id)parent;
- (id)pop;
- (void)push:(id)arg1;
- (id)section_pop;
- (void)section_push:(id)arg1;
- (void)sortByAddressAndSetInferredSizes;
- (id)top;

// Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport

- (void)tsu_addNonNilObject:(id)arg1;
- (void)tsu_addObjects:(id)arg1;
- (void)tsu_addObjectsFromNonNilArray:(id)arg1;
- (id)tsu_dequeue;
- (void)tsu_enqueue:(id)arg1;
- (unsigned long long)tsu_insertObject:(id)arg1 usingComparator:(id /* block */)arg2;
- (id)tsu_pop;
- (void)tsu_push:(id)arg1;
- (void)tsu_removeObjectsIdenticalToObjectsInArray:(id)arg1;
- (void)tsu_trimObjectsFromIndex:(unsigned long long)arg1;

// Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore

- (void)pk_removeObjectsPassingTest:(id /* block */)arg1;
- (void)pk_safelyAddObjectsFromArray:(id)arg1;
- (void)safelyAddObject:(id)arg1;

// Image: /System/Library/PrivateFrameworks/PeopleSuggester.framework/PeopleSuggester

- (void)shuffle;

// Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices

- (void)_pl_addNonNilObject:(id)arg1;
- (unsigned long long)_pl_insertObject:(id)arg1 atBinarySearchingInsertionIndexWithComparator:(id /* block */)arg2;

// Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph

- (void)pha_shuffle;

// Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore

- (void)px_addObject:(id)arg1 removingFirstObjectIfNeededToKeepMaximumCount:(long long)arg2;
- (void)px_addObjectIfNotNil:(id)arg1;
- (void)px_insertObjects:(id)arg1 atIndex:(long long)arg2;
- (id)px_popFirst;
- (id)px_popFirstPassingTest:(id /* block */)arg1;
- (id)px_popLast;
- (id)px_popRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;

// Image: /System/Library/PrivateFrameworks/PhotosUIPrivate.framework/PhotosUIPrivate

- (void)pu_addCFString:(struct __CFString { }*)arg1;
- (void)pu_valuesChanged:(bool)arg1 forKey:(struct __CFString { }*)arg2;

// Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences

- (void)performSpecifierUpdatesUsingBlock:(id /* block */)arg1;
- (void)ps_addGroup:(id)arg1 afterGroup:(id)arg2;
- (void)ps_addPossibleObject:(id)arg1;
- (void)ps_addSpecifier:(id)arg1 toGroup:(id)arg2;
- (void)ps_addSpecifiers:(id)arg1 toGroup:(id)arg2;
- (void)ps_insertObject:(id)arg1 afterObject:(id)arg2;
- (void)ps_insertObjectsFromArray:(id)arg1 afterObject:(id)arg2;

// Image: /System/Library/PrivateFrameworks/PromotedContentPrediction.framework/PromotedContentPrediction

- (void)shuffle;

// Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI

- (void)_remoteUI_addObjectIfNotNil:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore

- (void)safari_addObjectUnlessNil:(id)arg1;
- (void)safari_addObjectsFromArrayUnlessNil:(id)arg1;
- (void)safari_insertObject:(id)arg1 afterObject:(id)arg2;
- (void)safari_insertObject:(id)arg1 inSortedOrderUsingComparator:(id /* block */)arg2;
- (void)safari_insertObjects:(id)arg1 afterObject:(id)arg2;
- (void)safari_removeObjectsAtIndexes:(id)arg1 withOffset:(long long)arg2 startingAtIndex:(unsigned long long)arg3;
- (void)safari_removeObjectsPassingTest:(id /* block */)arg1;
- (void)safari_setObject:(id)arg1 atIndex:(unsigned long long)arg2 withPaddingObject:(id)arg3;
- (id)safari_takeFirstObject;

// Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore

- (void)insertObjects:(id)arg1 atIndex:(unsigned long long)arg2;

// Image: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI

- (void)addSpecifier:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SiriUIFoundation.framework/SiriUIFoundation

- (bool)sruif_isValidIndexSetToInsert:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard

- (id)_sb_dequeue;
- (void)_sb_enqueue:(id)arg1;
- (id)_sb_peek;
- (void)_sb_safeAddObject:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome

- (id)sbh_removeObjectsPassingTest:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading

- (void)addProperty:(int)arg1;

// Image: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility

- (id)initWithResultsOfPerformingSelector:(SEL)arg1 onObjectsFromArray:(id)arg2;
- (id)initWithResultsOfPerformingSelector:(SEL)arg1 withObject:(id)arg2 onObjectsFromArray:(id)arg3;
- (id)pop_tsu;
- (void)push_tsu:(id)arg1;
- (void)tsu_addNonNilObject:(id)arg1;
- (void)tsu_addObjects:(id)arg1;
- (void)tsu_addObjectsFromNonNilArray:(id)arg1;
- (id)tsu_dequeue;
- (void)tsu_enqueue:(id)arg1;
- (void)tsu_removeObjectsIdenticalToObjectsInArray:(id)arg1;
- (void)tsu_removeObjectsIdenticalToObjectsInSet:(id)arg1;

// Image: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback

- (void)tvp_addObjectIfNotNil:(id)arg1;
- (void)tvp_shuffle;

// Image: /System/Library/PrivateFrameworks/TextToSpeech.framework/TextToSpeech

- (id)ax_nextDequeuedObjects:(unsigned long long)arg1;

// Image: /System/Library/PrivateFrameworks/TinCanShared.framework/TinCanShared

- (id)dequeue;
- (void)enqueue:(id)arg1;

// Image: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit

- (id)tk_dequeueObject;
- (void)tk_enqueueObject:(id)arg1;
- (void)tk_ensureHasItemsOrNullUpToIndex:(unsigned long long)arg1;
- (id)tk_lastEnqueuedObject;
- (id)tk_nextDequeuedObject;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

- (void)_kb_reverse;
- (bool)_listContainsOrderedItems;
- (void)_set_listContainsOrderedItems:(bool)arg1;
- (void)_set_syncQueue:(id)arg1;
- (id)_syncQueue;
- (id)_ui_dequeue;
- (void)_ui_enqueue:(id)arg1;
- (id)_ui_peek;
- (void)_uikbrtInsert:(id)arg1 after:(id)arg2;
- (void)_uikbrtInsert:(id)arg1 before:(id)arg2;
- (void)_uikbrtInsert:(id)arg1 beforeItemPassingTest:(id /* block */)arg2;
- (void)_uikbrtRemove:(id)arg1;
- (void)removeViewsFromSuperview;

// Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit

- (void)_insertOrderedNotificationRequest:(id)arg1;

// Image: /System/Library/PrivateFrameworks/VideosUICore.framework/VideosUICore

- (void)_vui_applyUpdateChanges:(id)arg1 destinationObjectsBlock:(id /* block */)arg2 updateObjectBlock:(id /* block */)arg3;
- (void)vui_addObjectIfNotNil:(id)arg1;
- (void)vui_addObjectsFromArrayIfNotNil:(id)arg1;
- (bool)vui_applyChangeSet:(id)arg1 destinationObjects:(id)arg2;
- (bool)vui_applyChangeSet:(id)arg1 destinationObjects:(id)arg2 updateObjectBlock:(id /* block */)arg3;
- (bool)vui_applyChangeSet:(id)arg1 destinationObjectsBlock:(id /* block */)arg2;
- (bool)vui_applyChangeSet:(id)arg1 destinationObjectsBlock:(id /* block */)arg2 updateObjectBlock:(id /* block */)arg3;
- (bool)vui_applyChangeSetIfAvailable:(id)arg1 destinationObjects:(id)arg2 replaceContentsOnNilChanges:(bool)arg3;

// Image: /System/Library/PrivateFrameworks/VisionKitCore.framework/VisionKitCore

- (void)vk_addNonNilObject:(id)arg1;
- (void)vk_addObjectsFromNonNilArray:(id)arg1;
- (void)vk_insertNonNilObject:(id)arg1 atIndex:(long long)arg2;
- (id)vk_peek;
- (id)vk_pop;
- (void)vk_push:(id)arg1;
- (void)vk_randomize;
- (void)vk_swapItemAtIndex:(long long)arg1 withItemAtIndex:(long long)arg2;

// Image: /System/Library/PrivateFrameworks/VisualVoicemail.framework/IMAP.framework/IMAP

- (bool)vf_addObjectIfAbsent:(id)arg1;
- (unsigned long long)vf_insertObject:(id)arg1 usingComparator:(id /* block */)arg2 allowDuplicates:(bool)arg3;
- (unsigned long long)vf_insertObject:(id)arg1 usingSortFunction:(int (*)arg2 context:(void*)arg3 allowDuplicates:(bool)arg4;
- (unsigned long long)vf_removeObject:(id)arg1 usingComparator:(id /* block */)arg2;

// Image: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation

- (void)wf_safelyAddObject:(id)arg1;

// Image: /System/Library/PrivateFrameworks/WebContentAnalysis.framework/WebContentAnalysis

- (struct _xmlNode { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)WF_pop;
- (void)WF_push:(struct _xmlNode { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)arg1;

// Image: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSCharts.framework/TSCharts

+ (id)tsch_instanceWithArchive:(const void*)arg1 unarchiver:(id)arg2;

- (id)tsch_initWithArchive:(const void*)arg1 unarchiver:(id)arg2;
- (void)tsch_saveToArchive:(void*)arg1 archiver:(id)arg2;

// Image: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSStyles.framework/TSStyles

- (void)tss_addProperty:(int)arg1;

// Image: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSTables.framework/TSTables

- (void)tsce_addObjectNonNil:(id)arg1;

// Image: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSUtility.framework/TSUtility

- (void)tsu_addNonNilObject:(id)arg1;
- (void)tsu_addObjects:(id)arg1;
- (void)tsu_addObjectsFromNonNilArray:(id)arg1;
- (id)tsu_dequeue;
- (void)tsu_enqueue:(id)arg1;
- (unsigned long long)tsu_insertObject:(id)arg1 usingComparator:(id /* block */)arg2;
- (id)tsu_peek;
- (id)tsu_pop;
- (void)tsu_push:(id)arg1;
- (void)tsu_removeObjectsIdenticalToObjectsInArray:(id)arg1;
- (void)tsu_trimObjectsFromIndex:(unsigned long long)arg1;

// Image: /usr/lib/libSESShared.dylib

- (id)popFirst;
- (void)pushLast:(id)arg1;

@end
