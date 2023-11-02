
@interface NSItemProvider : NSObject <NSCopying, NSSecureCoding> {
    NSUUID * _UUID;
    <NSItemProviderDataTransferDelegate> * _dataTransferDelegate;
    <_NSItemProviderLoading> * _loadOperator;
    NSMutableDictionary * _metadata;
    NSMutableDictionary * _preferredRepresentationByType;
    id /* block */  _previewImageHandler;
    NSMutableDictionary * _representationByType;
    NSArray * _representations;
    NSString * _sanitizedSuggestedName;
    NSString * _suggestedName;
    NSMutableOrderedSet * _typeOrder;
    NSDictionary * _userInfo;
}

@property (readonly) NSUUID *_UUID;
@property (retain) <_NSItemProviderLoading> *_loadOperator;
@property (nonatomic, retain) NSMutableDictionary *_preferredRepresentationByType;
@property (nonatomic, retain) NSMutableDictionary *_representationByType;
@property (readonly) NSArray *_representations;
@property (readonly, copy) NSString *_sanitizedSuggestedName;
@property (nonatomic, retain) NSMutableOrderedSet *_typeOrder;
@property <NSItemProviderDataTransferDelegate> *dataTransferDelegate;
@property (nonatomic) struct CGSize { double x1; double x2; } preferredPresentationSize;
@property (nonatomic) long long preferredPresentationStyle;
@property (copy) id /* block */ previewImageHandler;
@property (nonatomic, readonly, copy) NSArray *registeredContentTypes;
@property (nonatomic, readonly, copy) NSArray *registeredContentTypesForOpenInPlace;
@property (readonly, copy) NSArray *registeredTypeIdentifiers;
@property (getter=sbui_isIgnored, setter=sbui_setIgnored:, nonatomic) bool sbui_ignored;
@property (setter=sbui_setPreferredApplicationBundleIdentifier:, nonatomic, copy) NSString *sbui_preferredApplicationBundleIdentifier;
@property (setter=sbui_setRequiredApplicationBundleIdentifier:, nonatomic, copy) NSString *sbui_requiredApplicationBundleIdentifier;
@property (nonatomic, readonly) bool sl_hasPossibleCollaborationRepresentation;
@property (nonatomic, readonly) NSArray *sl_representations;
@property (copy) NSString *suggestedName;
@property (nonatomic, readonly) bool supportsMessagesSendCopyRepresentation;
@property (nonatomic, readonly) bool supportsShareSheetSendCopyRepresentation;
@property (nonatomic, copy) NSData *teamData;
@property (copy) NSDictionary *userInfo;
@property (nonatomic, readonly) bool web_containsFileURLAndFileUploadContent;
@property (nonatomic, readonly) NSArray *web_fileUploadContentTypes;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_UUID;
- (void)_addRepresentationType:(id)arg1 preferredRepresentation:(long long)arg2 loader:(id /* block */)arg3;
- (void)_addRepresentationType:(id)arg1 preferredRepresentation:(long long)arg2 visibility:(long long)arg3 loader:(id /* block */)arg4;
- (void)_addRepresentationType_v2:(id)arg1 preferredRepresentation:(long long)arg2 loader:(id /* block */)arg3;
- (id)_availableTypes;
- (id)_availableTypesWithFilterBlock:(id /* block */)arg1;
- (void)_commonInitGenerateUUID:(bool)arg1;
- (bool)_hasRepresentationConformingToType:(id)arg1;
- (bool)_hasRepresentationOfType:(id)arg1;
- (void)_loadItemOfClass:(Class)arg1 forTypeIdentifier:(id)arg2 options:(id)arg3 coerceForCoding:(bool)arg4 completionHandler:(id /* block */)arg5;
- (void)_loadItemOfClass:(Class)arg1 withLoadHandler:(id /* block */)arg2 options:(id)arg3 coerceForCoding:(bool)arg4 completionHandler:(id /* block */)arg5;
- (id)_loadObjectOfClass:(Class)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)_loadOperator;
- (void)_loadPreviewImageOfClass:(Class)arg1 options:(id)arg2 coerceForCoding:(bool)arg3 completionHandler:(id /* block */)arg4;
- (id)_metadataValueForKey:(id)arg1;
- (id)_preferredRepresentationByType;
- (id)_representationByType;
- (id)_representationConformingToType:(id)arg1;
- (id)_representationForType:(id)arg1;
- (id)_representations;
- (id)_sanitizedSuggestedName;
- (void)_setItemRepresentation:(id)arg1;
- (void)_setMetadataValue:(id)arg1 forKey:(id)arg2;
- (id)_typeOrder;
- (bool)canLoadObjectOfClass:(Class)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataTransferDelegate;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasItemConformingToTypeIdentifier:(id)arg1;
- (bool)hasRepresentationConformingToTypeIdentifier:(id)arg1 fileOptions:(long long)arg2;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentsOfURL:(id)arg1;
- (id)initWithItem:(id)arg1 typeIdentifier:(id)arg2;
- (id)initWithObject:(id)arg1;
- (id)loadDataRepresentationForTypeIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)loadFileRepresentationForTypeIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)loadInPlaceFileRepresentationForTypeIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)loadItemForTypeIdentifier:(id)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)loadObjectOfClass:(Class)arg1 completionHandler:(id /* block */)arg2;
- (void)loadPreviewImageWithOptions:(id)arg1 completionHandler:(id /* block */)arg2;
- (id /* block */)previewImageHandler;
- (void)registerDataRepresentationForTypeIdentifier:(id)arg1 visibility:(long long)arg2 loadHandler:(id /* block */)arg3;
- (void)registerFileRepresentationForTypeIdentifier:(id)arg1 fileOptions:(long long)arg2 visibility:(long long)arg3 loadHandler:(id /* block */)arg4;
- (void)registerItemForTypeIdentifier:(id)arg1 loadHandler:(id /* block */)arg2;
- (void)registerObject:(id)arg1 visibility:(long long)arg2;
- (void)registerObjectOfClass:(Class)arg1 visibility:(long long)arg2 loadHandler:(id /* block */)arg3;
- (id)registeredTypeIdentifiers;
- (id)registeredTypeIdentifiersWithFileOptions:(long long)arg1;
- (id)representations;
- (void)setDataTransferDelegate:(id)arg1;
- (void)setPreviewImageHandler:(id /* block */)arg1;
- (void)setSuggestedName:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (void)set_loadOperator:(id)arg1;
- (void)set_preferredRepresentationByType:(id)arg1;
- (void)set_representationByType:(id)arg1;
- (void)set_typeOrder:(id)arg1;
- (id)suggestedName;
- (id)userInfo;

// Image: /System/Library/Frameworks/CloudKit.framework/CloudKit

- (void)registerCKShare:(id)arg1 container:(id)arg2 allowedSharingOptions:(id)arg3;
- (void)registerCKShareWithContainer:(id)arg1 allowedSharingOptions:(id)arg2 preparationHandler:(id /* block */)arg3;

// Image: /System/Library/Frameworks/GroupActivities.framework/GroupActivities

- (void)registerTUConversationActivityMetadata:(id)arg1;

// Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation

+ (id)_lp_itemProviderWithData:(id)arg1 MIMEType:(id)arg2;

- (void)_lp_loadFirstDataRepresentationMatchingMIMETypePredicate:(id /* block */)arg1 completionHandler:(id /* block */)arg2;

// Image: /System/Library/Frameworks/Photos.framework/Photos

- (id)initWithLivePhoto:(id)arg1;

// Image: /System/Library/Frameworks/SafariServices.framework/SafariServices

+ (void)_sf_loadObjectsFromItemProviders:(id)arg1 usingLoader:(int (*)arg2 completionHandler:(id /* block */)arg3;

- (void)_sf_loadObjectOfClasses:(id)arg1 completionHandler:(id /* block */)arg2;

// Image: /System/Library/Frameworks/UniformTypeIdentifiers.framework/UniformTypeIdentifiers

- (id)initWithContentsOfURL:(id)arg1 contentType:(id)arg2 openInPlace:(bool)arg3 coordinated:(bool)arg4 visibility:(long long)arg5;
- (id)loadDataRepresentationForContentType:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)loadFileRepresentationForContentType:(id)arg1 openInPlace:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)registerDataRepresentationForContentType:(id)arg1 visibility:(long long)arg2 loadHandler:(id /* block */)arg3;
- (void)registerFileRepresentationForContentType:(id)arg1 visibility:(long long)arg2 openInPlace:(bool)arg3 loadHandler:(id /* block */)arg4;
- (id)registeredContentTypes;
- (id)registeredContentTypesConformingToContentType:(id)arg1;
- (id)registeredContentTypesForOpenInPlace;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

+ (id)__ck_itemProviderForAppleMapsCoordinateURL:(id)arg1 vCardURL:(id)arg2;

- (void)__ck_loadDataForAppleMapVCard:(id /* block */)arg1;
- (bool)supportedInQLController;

// Image: /System/Library/PrivateFrameworks/MobileSafari.framework/MobileSafari

- (void)safari_registerFileRepresentationForQuickLookDocument:(id)arg1;

// Image: /System/Library/PrivateFrameworks/MobileSafariUI.framework/MobileSafariUI

+ (id)safari_itemProviderForTab:(id)arg1 browserController:(id)arg2;
+ (id)safari_itemProviderForTabDocument:(id)arg1;

// Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore

- (id)_px_assetResourceBagsFromUniformTypeIdentifier:(id)arg1 atURL:(id)arg2;
- (long long)_px_assetResourceTypeFromUniformTypeIdentifier:(id)arg1;
- (id)_px_bestTypeIdentifierForItemProvider:(id)arg1;
- (bool)_px_isSupportedUniformTypeIdentifier:(id)arg1;
- (long long)_px_shareMediaTypeFromUniformTypeIdentifier:(id)arg1;
- (id)_px_sharedMediaVideoComplementFromURL:(id)arg1;
- (void)px_createAssetWithImportSessionID:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)px_createStreamShareSourceWithCompletionBlock:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet

- (void)loadGroupActivityMetadataWithCompletion:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing

- (void)loadFileURLRequiringOpenInPlace:(bool)arg1 completionHandler:(id /* block */)arg2;
- (void)loadURLClassWithPreviousError:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)preferredContentTypeForSavingWithCanOpenInPlace:(bool*)arg1;
- (bool)supportsMessagesSendCopyRepresentation;
- (bool)supportsShareSheetSendCopyRepresentation;

// Image: /System/Library/PrivateFrameworks/SharingUI.framework/SharingUI

- (void)sfui_loadLivePhotoWithCompletionHandler:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/SocialLayer.framework/SocialLayer

- (bool)sl_hasPossibleCollaborationRepresentation;
- (void)sl_loadRepresentationForTypeIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)sl_representations;

// Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices

- (bool)sbui_isIgnored;
- (id)sbui_preferredApplicationBundleIdentifier;
- (id)sbui_requiredApplicationBundleIdentifier;
- (void)sbui_setIgnored:(bool)arg1;
- (void)sbui_setPreferredApplicationBundleIdentifier:(id)arg1;
- (void)sbui_setRequiredApplicationBundleIdentifier:(id)arg1;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (id)itemProviderWithURL:(id)arg1 title:(id)arg2;

- (void)_NSItemProviderDidRegisterObject:(id)arg1;
- (void)_addFileURLRepresentationIfPossible;
- (Class)_highestFidelityClassForLoading:(id)arg1;
- (id)_loadObjectOfClass:(Class)arg1 userInfo:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)dataAvailabilityByTypeIdentifier;
- (bool)isDataAvailableImmediatelyForTypeIdentifier:(id)arg1;
- (struct CGSize { double x1; double x2; })preferredPresentationSize;
- (long long)preferredPresentationStyle;
- (void)registerFileProviderItemForTypeIdentifier:(id)arg1 visibility:(long long)arg2 loadHandler:(id /* block */)arg3;
- (void)registerFileRepresentationForTypeIdentifier:(id)arg1 dataAvailableImmediately:(bool)arg2 visibility:(long long)arg3 loadHandler:(id /* block */)arg4;
- (void)setDataAvailability:(bool)arg1 forTypeIdentifier:(id)arg2;
- (void)setPreferredPresentationSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setPreferredPresentationStyle:(long long)arg1;
- (void)setTeamData:(id)arg1;
- (id)teamData;

// Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore

- (bool)web_containsFileURLAndFileUploadContent;
- (id)web_fileUploadContentTypes;

// Image: /System/Library/PrivateFrameworks/WebPrivacy.framework/WebPrivacy

- (void)_wp_removeTrackingInformationFromURLRepresentation;

@end
