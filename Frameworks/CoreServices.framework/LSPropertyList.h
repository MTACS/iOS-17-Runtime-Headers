
@interface LSPropertyList : NSObject <LSDetachable, NSCopying, PRSRoleProviding, PRSRoleProvidingInternal, _EXDictionaryLike>

@property (readonly) NSString *_applicationIdentifier;
@property (nonatomic, readonly) NSDictionary *_expensiveDictionaryRepresentation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool pbf_hasStaticSnapshotMapping;
@property (nonatomic, readonly) long long pbf_refreshDescriptorsFrequency;
@property (nonatomic, readonly) NSArray *pbf_staticDescriptorIdentifiers;
@property (nonatomic, readonly) bool pbf_supportsDynamicDescriptors;
@property (nonatomic, readonly) bool pbf_supportsGallery;
@property (nonatomic, readonly) NSString *prs_defaultRole;
@property (nonatomic, readonly) NSSet *prs_supportedRoles;
@property (nonatomic, readonly) bool prs_wantsLocation;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/CoreServices.framework/CoreServices

+ (id)new;
+ (id)propertyListWithContentsOfURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
+ (id)propertyListWithData:(id)arg1;
+ (id)propertyListWithDictionary:(id)arg1;

- (id)_applicationIdentifier;
- (id)_expensiveDictionaryRepresentation;
- (id)_init;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (void)detach;
- (id)init;
- (id)objectForKey:(id)arg1 ofClass:(Class)arg2;
- (id)objectForKey:(id)arg1 ofClass:(Class)arg2 valuesOfClass:(Class)arg3;
- (id)objectsForKeys:(id)arg1;

// Image: /System/Library/Frameworks/ClassKit.framework/ClassKit

- (id)dictionaryOfObjectsForKeys:(id)arg1;

// Image: /System/Library/Frameworks/ExtensionFoundation.framework/ExtensionFoundation

- (id)_EX_dictionaryForKey:(id)arg1;

// Image: /System/Library/PrivateFrameworks/PosterBoard.framework/PosterBoard

- (id)_infoForStaticDescriptorIdentifier:(id)arg1;
- (id)pbf_displayNameLocalizationKeyForStaticDescriptorIdentifier:(id)arg1;
- (bool)pbf_hasStaticSnapshotMapping;
- (id)pbf_posterBoardPosterDescriptorGalleryOptionsForStaticDescriptorIdentifier:(id)arg1;
- (id)pbf_posterBoardPosterDescriptorHeroGalleryOptionsForStaticDescriptorIdentifier:(id)arg1;
- (id)pbf_proactivePosterDescriptorGalleryOptionsForStaticDescriptorIdentifier:(id)arg1;
- (long long)pbf_refreshDescriptorsFrequency;
- (id)pbf_roleForDynamicDescriptorIdentifier:(id)arg1;
- (id)pbf_roleForStaticDescriptorIdentifier:(id)arg1;
- (id)pbf_staticDescriptorIdentifiers;
- (id)pbf_staticDescriptorsDictionary;
- (id)pbf_staticSnapshotKeyForIdentifier:(id)arg1 definition:(id)arg2;
- (bool)pbf_supportsDynamicDescriptors;
- (bool)pbf_supportsGallery;
- (id)pbf_userInfoForStaticDescriptorIdentifier:(id)arg1;

// Image: /System/Library/PrivateFrameworks/PosterBoardServices.framework/PosterBoardServices

- (id)prs_defaultRole;
- (id)prs_roleManifest;
- (id)prs_supportedRoles;
- (bool)prs_wantsLocation;

@end
