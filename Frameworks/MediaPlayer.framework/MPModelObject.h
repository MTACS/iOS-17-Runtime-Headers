
@interface MPModelObject : NSObject <NSCopying, NSObject, NSSecureCoding> {
    MPIdentifierSet * _identifiers;
    bool  _isFinalized;
    MPIdentifierSet * _originalIdentifierSet;
    NSMutableDictionary * _storage;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *humanDescription;
@property (nonatomic, readonly, copy) MPIdentifierSet *identifiers;
@property (nonatomic, readonly) MPModelObject *innermostModelObject;
@property (nonatomic, readonly) struct MPLibraryAddStatusObserverConfiguration { bool x1; bool x2; bool x3; bool x4; bool x5; } libraryAddStatusObserverConfiguration;
@property (nonatomic, readonly) long long libraryRemovalSupportedOptions;
@property (nonatomic, readonly, copy) NSString *msp_shortDescription;
@property (getter=nms_recommendationObject, setter=nms_setRecommendationObject:, nonatomic, retain) NMSMusicRecommendation *nms_recommendationObject;
@property (nonatomic, readonly) NSString *nms_syncInfoContainerIdentifier;
@property (nonatomic, readonly) MPIdentifierSet *originalIdentifierSet;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

+ (void)_indexProperties;
+ (bool)_lookupPropertyForSelector:(SEL)arg1 result:(id /* block */)arg2;
+ (id)_modelKeyForPropertySelector:(SEL)arg1;
+ (id)classesForSecureCoding;
+ (long long)genericObjectType;
+ (void)initialize;
+ (void)performWithoutEnforcement:(id /* block */)arg1;
+ (id)requiredKeepLocalStatusObservationProperties;
+ (id)requiredLibraryAddStatusObservationProperties;
+ (id)requiredLibraryRemovalProperties;
+ (bool)resolveInstanceMethod:(SEL)arg1;
+ (bool)supportsKeepLocalStatusObservation;
+ (bool)supportsLibraryAddStatusObservation;
+ (bool)supportsLibraryRemoval;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_isModelKey:(id)arg1;
- (id)_sanitizedStorage;
- (id)_stateDumpObject;
- (id)contentItemCollectionInfo;
- (id)copyWithIdentifiers:(id)arg1;
- (id)copyWithIdentifiers:(id)arg1 block:(id /* block */)arg2;
- (id)copyWithIdentifiers:(id)arg1 propertySet:(id)arg2;
- (id)copyWithPropertySet:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasLoadedValueForKey:(id)arg1;
- (bool)hasLoadedValuesForPropertySet:(id)arg1;
- (unsigned long long)hash;
- (id)humanDescription;
- (id)identifiers;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifiers:(id)arg1;
- (id)initWithIdentifiers:(id)arg1 block:(id /* block */)arg2;
- (bool)isEqual:(id)arg1;
- (struct MPLibraryAddStatusObserverConfiguration { bool x1; bool x2; bool x3; bool x4; bool x5; })libraryAddStatusObserverConfiguration;
- (long long)libraryRemovalSupportedOptions;
- (id)mediaItemPropertyValues;
- (id)mergeWithObject:(id)arg1;
- (id)newKeepLocalStatusObserverConfiguration;
- (id)originalIdentifierSet;
- (void)setValue:(id)arg1 forModelKey:(id)arg2;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForModelKey:(id)arg1;
- (id)valueForUndefinedKey:(id)arg1;

// Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore

+ (id)mqf_requiredItemPlaybackProperties;
+ (id)mqf_requiredSectionPlaybackProperties;

- (id)MPC_modelObjectWithStoreFrontLocalEquivalentModelObject:(id)arg1;
- (id)mpc_radioContentReference;
- (id)msp_shortDescription;

// Image: /System/Library/PrivateFrameworks/MusicUI.framework/MusicUI

- (id)innermostModelObject;

// Image: /System/Library/PrivateFrameworks/NanoMediaBridgeUI.framework/NanoMediaBridgeUI

- (unsigned long long)nmu_metricsMoreActionContentType;

// Image: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync

+ (id)nms_modelObjectWithLibraryPersistentID:(long long)arg1;
+ (id)nms_modelObjectWithLibraryPersistentID:(long long)arg1 block:(id /* block */)arg2;

- (bool)nms_prefersCatalogRepresentation;
- (id)nms_recommendationObject;
- (void)nms_setRecommendationObject:(id)arg1;
- (id)nms_syncInfoContainerIdentifier;

@end
