
@interface PHObject : NSObject <NSCopying, PHObjectFetchPropertySets, PLLocalUUIDConverter> {
    bool  _deleted;
    NSManagedObjectID * _objectID;
    PHPhotoLibrary * _photoLibrary;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _propertyHintLock;
    unsigned long long  _propertyHintLock_propertyHint;
    NSString * _uuid;
}

@property (readonly, copy) NSString *debugDescription;
@property (getter=isDeleted, readonly) bool deleted;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) id identifier;
@property (nonatomic, readonly, copy) NSString *localIdentifier;
@property (readonly) NSManagedObjectID *objectID;
@property (nonatomic, readonly) PHObjectReference *objectReference;
@property (readonly) PHPhotoLibrary *photoLibrary;
@property (readonly) unsigned long long propertyHint;
@property (readonly) NSObject *px_opaqueIdentifier;
@property (readonly) Class superclass;
@property (getter=isTransient, readonly) bool transient;
@property (readonly) NSString *uuid;

// Image: /System/Library/Frameworks/Photos.framework/Photos

+ (void)assertAllObjects:(id)arg1 forSelector:(SEL)arg2 areOfType:(Class)arg3;
+ (id)authorizationAwareFetchResultWithOptions:(id)arg1 fetchBlock:(id /* block */)arg2;
+ (id)entityKeyForPropertyKey:(id)arg1;
+ (id)entityKeyMap;
+ (void)extendPropertiesToFetch:(id)arg1 withProperties:(id)arg2;
+ (void)extendPropertiesToFetch:(id)arg1 withPropertySetClass:(Class)arg2;
+ (id)fetchPredicateForSharingFilter:(unsigned short)arg1;
+ (id)fetchPredicateFromComparisonPredicate:(id)arg1 options:(id)arg2;
+ (id)fetchType;
+ (id)identifierCode;
+ (id)identifierCodeFromLocalIdentifier:(id)arg1;
+ (id)identifierPropertiesToFetch;
+ (bool)isValidCloudIdentifierStringValue:(id)arg1;
+ (id)localIdentifierExpressionForFetchRequests;
+ (id)localIdentifierWithUUID:(id)arg1;
+ (id)localIdentifiersWithUUIDs:(id)arg1;
+ (id)managedEntityName;
+ (bool)managedObjectSupportsAllowedForAnalysis;
+ (bool)managedObjectSupportsBodyDetection;
+ (bool)managedObjectSupportsBursts;
+ (bool)managedObjectSupportsContributor;
+ (bool)managedObjectSupportsDetectionType;
+ (bool)managedObjectSupportsDuplicateVisibilityState;
+ (bool)managedObjectSupportsFaceState;
+ (bool)managedObjectSupportsHiddenState;
+ (bool)managedObjectSupportsKeyFaces;
+ (bool)managedObjectSupportsMontage;
+ (bool)managedObjectSupportsPendingState;
+ (bool)managedObjectSupportsPersonFilters;
+ (bool)managedObjectSupportsRejectedState;
+ (bool)managedObjectSupportsSavedAssetType;
+ (bool)managedObjectSupportsScreenshot;
+ (bool)managedObjectSupportsShareExitingState;
+ (bool)managedObjectSupportsShareExpiredState;
+ (bool)managedObjectSupportsShareTrashedState;
+ (bool)managedObjectSupportsSharingComposition;
+ (bool)managedObjectSupportsTorsoOnly;
+ (bool)managedObjectSupportsTrashedState;
+ (bool)managedObjectSupportsVisibilityState;
+ (id)objectIDsMatchingEntityFromObjectIDs:(id)arg1 context:(id)arg2;
+ (id)propertiesToFetchWithHint:(unsigned long long)arg1;
+ (unsigned long long)propertyFetchHintsForPropertySets:(id)arg1;
+ (id)propertyKeyForEntityKey:(id)arg1;
+ (id)propertySetAccessorsByPropertySet;
+ (Class)propertySetClassForPropertySet:(id)arg1;
+ (id)propertySetsForPropertyFetchHints:(unsigned long long)arg1;
+ (id)transformValueExpression:(id)arg1 forKeyPath:(id)arg2;
+ (id)uuidFromLocalIdentifier:(id)arg1;
+ (id)uuidsFromLocalIdentifiers:(id)arg1;

- (void).cxx_destruct;
- (id)_shortObjectIDURI;
- (void)addFetchPropertyHint:(unsigned long long)arg1;
- (void)assertRequiredFetchPropertyHints:(unsigned long long)arg1;
- (Class)changeRequestClass;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)fetchPropertySetsIfNeeded;
- (bool)hasLoadedPropertySet:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3;
- (bool)isDeleted;
- (bool)isEqual:(id)arg1;
- (bool)isTransient;
- (id)localIdentifier;
- (id)objectID;
- (id)objectReference;
- (id)photoLibrary;
- (unsigned long long)propertyHint;
- (id)uuid;

// Image: /System/Library/PrivateFrameworks/NanoPhotosCore.framework/NanoPhotosCore

+ (id)npto_localIdentifiersWithUUIDs:(id)arg1;

- (void)npto_setUUID:(id)arg1;
- (id)npto_uuid;

// Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore

- (id)px_opaqueIdentifier;

@end
