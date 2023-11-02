
@interface NSMutableSet : NSSet <HMFMerging, WFOutputTraversalContext>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation

+ (id)setWithCapacity:(unsigned long long)arg1;

- (void)_mutate;
- (void)addObject:(id)arg1;
- (void)addObjects:(const id*)arg1 count:(unsigned long long)arg2;
- (void)addObjectsFromArray:(id)arg1;
- (void)addObjectsFromArray:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)addObjectsFromOrderedSet:(id)arg1;
- (void)addObjectsFromOrderedSet:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)addObjectsFromSet:(id)arg1;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)initWithObjects:(const id*)arg1 count:(unsigned long long)arg2;
- (void)intersectOrderedSet:(id)arg1;
- (void)intersectSet:(id)arg1;
- (void)minusOrderedSet:(id)arg1;
- (void)minusSet:(id)arg1;
- (void)removeAllObjects;
- (void)removeObject:(id)arg1;
- (void)removeObjectsInArray:(id)arg1;
- (void)removeObjectsInArray:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)removeObjectsInOrderedSet:(id)arg1;
- (void)removeObjectsInOrderedSet:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)removeObjectsInSet:(id)arg1;
- (void)removeObjectsPassingTest:(id /* block */)arg1;
- (void)removeObjectsWithOptions:(unsigned long long)arg1 passingTest:(id /* block */)arg2;
- (void)replaceObject:(id)arg1;
- (void)setArray:(id)arg1;
- (id)setByAddingObjectsFromArray:(id)arg1;
- (id)setByAddingObjectsFromSet:(id)arg1;
- (void)setObject:(id)arg1;
- (void)setOrderedSet:(id)arg1;
- (void)setSet:(id)arg1;
- (void)unionOrderedSet:(id)arg1;
- (void)unionSet:(id)arg1;

// Image: /System/Library/Frameworks/CloudKit.framework/CloudKit

- (bool)CKSynchronizedAddIfAbsent:(id)arg1;
- (void)CKSynchronizedRemoveObject:(id)arg1;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

- (Class)classForCoder;
- (void)filterUsingPredicate:(id)arg1;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

- (void)hk_addNonNilObject:(id)arg1;
- (void)hk_removeObjectsPassingTest:(id /* block */)arg1;

// Image: /System/Library/Frameworks/MapKit.framework/MapKit

- (void)_mapkit_removeObjectsFromArray:(id)arg1;

// Image: /System/Library/PrivateFrameworks/AACCore.framework/AACCore

- (void)ae_removeFirstMatching:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/AXCoreUtilities.framework/AXCoreUtilities

- (void)ax_replaceWithMatchingObject:(id)arg1 updatingWithBlock:(id /* block */)arg2;

// Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities

- (void)axSafelyAddObject:(id)arg1;
- (void)axSafelyAddObjectsFromArray:(id)arg1;

// Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard

- (void)bs_safeAddObject:(id)arg1;

// Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation

- (void)_cn_addNonNilObject:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV

- (void)CDVAddItemParserMappingWithNameSpace:(id)arg1 name:(id)arg2 parseClass:(Class)arg3;

// Image: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera

- (void)dc_addNonNilObject:(id)arg1;
- (void)dc_removeNonNilObject:(id)arg1;

// Image: /System/Library/PrivateFrameworks/DuetActivityScheduler.framework/DuetActivityScheduler

- (void)_DAS_addOrReplaceObject:(id)arg1;
- (void)_DAS_addOrReplaceObjectsFromArray:(id)arg1;
- (void)_DAS_unionSetOverridingExisting:(id)arg1;

// Image: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore

+ (id)ec_emailAddressConvertiblesSetFromArray:(id)arg1 includeInvalid:(bool)arg2;

// Image: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation

- (void)ef_addOptionalObject:(id)arg1;
- (void)ef_removeObjectsInArray:(id)arg1;
- (id)ef_uniquedObject:(id)arg1;

// Image: /System/Library/PrivateFrameworks/FMCoreLite.framework/FMCoreLite

- (void)fm_safeAddObject:(id)arg1;

// Image: /System/Library/PrivateFrameworks/GameControllerFoundation.framework/GameControllerFoundation

- (void)gc_removeObjectsInArray:(id)arg1;

// Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices

- (void)_geo_filter:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation

- (bool)mergeObject:(id)arg1;
- (bool)shouldMergeObject:(id)arg1;

// Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation

+ (id)nonRetainingSet;

// Image: /System/Library/PrivateFrameworks/IntentsFoundation.framework/IntentsFoundation

- (void)if_addObjectIfNonNil:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NetAppsUtilities.framework/NetAppsUtilities

- (void)na_safeAddObject:(id)arg1;
- (void)na_safeAddObjectsFromArray:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore

- (void)fc_removeObjectsFromArray:(id)arg1;
- (void)fc_safelyAddObject:(id)arg1;
- (void)fc_safelyAddObjects:(id)arg1;
- (void)fc_safelyIntersectSet:(id)arg1;
- (void)fc_safelyMinusSet:(id)arg1;
- (void)fc_safelyRemoveObject:(id)arg1;
- (void)fc_safelyUnionSet:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NotesSupport.framework/NotesSupport

- (void)ic_addNonEmptyString:(id)arg1;
- (void)ic_addNonNilObject:(id)arg1;
- (void)ic_addObjectsFromNonNilArray:(id)arg1;
- (void)ic_removeNonNilObject:(id)arg1;
- (void)ic_removeObjectsFromNonNilArray:(id)arg1;

// Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport

- (void)tc_addMessageEntry:(id)arg1;
- (void)tsu_addNonNilObject:(id)arg1;
- (void)tsu_addObjectsFromNonNilArray:(id)arg1;
- (void)tsu_removeEqualObject:(id)arg1;
- (void)tsu_removeObjectsPassingTest:(id /* block */)arg1;
- (void)tsu_xorSet:(id)arg1;

// Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore

- (void)pk_safelyAddObject:(id)arg1;

// Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices

- (void)pl_addObjectIfNotNil:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore

- (void)safari_addObjectUnlessNil:(id)arg1;
- (void)safari_setObject:(id)arg1;

// Image: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility

- (void)tsu_addNonNilObject:(id)arg1;
- (void)tsu_xorSet:(id)arg1;

// Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit

+ (id)_vk_newWeakSet;

// Image: /System/Library/PrivateFrameworks/VisionKitCore.framework/VisionKitCore

+ (id)vk_setFromNonNilArray:(id)arg1;

- (void)vk_addNonNilObject:(id)arg1;
- (void)vk_addObjectsFromNonNilArray:(id)arg1;
- (void)vk_removeNonNilObject:(id)arg1;
- (void)vk_removeObjectsFromNonNilArray:(id)arg1;

// Image: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit

- (id)_equivalentExistingNetworkProfile:(id)arg1;
- (void)compareAndUpdateDuplicateScanRecords:(id)arg1;
- (bool)removeNetworkProfile:(id)arg1;
- (bool)replaceNetworkProfile:(id)arg1;

// Image: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSUtility.framework/TSUtility

- (void)tsu_addNonNilObject:(id)arg1;
- (void)tsu_addObjectsFromNonNilArray:(id)arg1;
- (void)tsu_removeEqualObject:(id)arg1;
- (void)tsu_removeObjectsPassingTest:(id /* block */)arg1;
- (void)tsu_xorSet:(id)arg1;

@end
