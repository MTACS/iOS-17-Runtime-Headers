
@interface NSURL : NSObject <AFSecurityDigestibleChunksProviding, CKXPCSuitableString, IMJSONSerializableValueProviding, INJSONSerializable, MPCPlaybackEngineEventPayloadValueJSONConvertible, NSCopying, NSItemProviderReading, NSItemProviderWriting, NSSecureCoding, NSURLJSExports, PQLValuable, REDonatedActionIdentifierProviding, SBFFileCacheFileIdentifier, SFJSONSerializable, TSUDownloadItem, TSUURLWrapper, TUSanitizedCopying, UIItemProviderReading, UIItemProviderWriting, WFNaming, WFSystemShareableObject, _AFBundleResourceURLProviding, _MSComposeBundlePageControllerNSURL> {
    NSURL * _baseURL;
    void * _clients;
    void * _reserved;
    NSString * _urlString;
}

@property (nonatomic, readonly) NSOrderedSet *OZ_imageSequenceURLs;
@property (nonatomic, readonly) bool OZ_isImageSequenceURL;
@property (readonly) NSURL *URL;
@property (readonly, copy) NSURL *URLByDeletingLastPathComponent;
@property (readonly, copy) NSURL *URLByDeletingPathExtension;
@property (readonly, copy) NSURL *URLByResolvingSymlinksInPath;
@property (readonly, copy) NSURL *URLByStandardizingPath;
@property (readonly) NSURL *URLIfAvailable;
@property (getter=_pb_isDirectory, nonatomic, readonly) bool _pb_directory;
@property (getter=_pb_isFileProvider, nonatomic, readonly) bool _pb_isFileProvider;
@property (nonatomic, readonly) NSString *_sf_highLevelDomainFromHostFallingBackToHostOrAbsoluteString;
@property (nonatomic, readonly) bool _sf_isAppleOneURL;
@property (nonatomic, readonly) NSNumber *_sf_itunesItemIdentifier;
@property (nonatomic, readonly) NSString *_sf_topLevelDomain;
@property (setter=_setTitle:, nonatomic, copy) NSString *_title;
@property (nonatomic, readonly) NSString *_wb_userVisibleString;
@property (readonly, copy) NSString *aa_endpoint;
@property (nonatomic, readonly) NSString *absoluteString;
@property (readonly, copy) NSString *absoluteString;
@property (readonly, copy) NSURL *absoluteURL;
@property (nonatomic, readonly) int addressBookUID;
@property (nonatomic, readonly) bool ams_isBagLoadURL;
@property (nonatomic, readonly) bool ams_isHTTP;
@property (nonatomic, readonly) bool ams_isSecure;
@property (nonatomic, readonly) NSDictionary *ams_parameters;
@property (nonatomic, readonly) NSDictionary *ams_unmodifiedParameters;
@property (nonatomic, readonly) bool as_isPasskeyRegistrationURL;
@property (nonatomic, readonly) bool as_isPasskeyURL;
@property (nonatomic, readonly) long long as_passkeyURLType;
@property (readonly, copy) NSURL *baseURL;
@property (getter=isBasebandLogURL, nonatomic, readonly) bool basebandLogURL;
@property (nonatomic, readonly) NSString *br_lastEditorDeviceName;
@property (nonatomic, readonly) NSString *br_lastEditorName;
@property (nonatomic, readonly) NSPersonNameComponents *br_lastEditorNameComponents;
@property (readonly) int callService;
@property (nonatomic, readonly) bool ckAllowRetargeting;
@property (nonatomic, readonly) NSString *ckCollaborationSceneIdentifier;
@property (nonatomic, readonly) NSUUID *ckFaceTimeConversationUUID;
@property (nonatomic, readonly) bool ckIsLaunchAppURL;
@property (nonatomic, readonly) bool ckIsUnitTestingURL;
@property (nonatomic, readonly) NSString *ckLaunchURLBalloonPluginBundleID;
@property (nonatomic, readonly) NSDictionary *ckLaunchURLBalloonPluginPayload;
@property (nonatomic, readonly) NSString *ckLaunchURLPostComposeDismissal;
@property (nonatomic, readonly) NSString *ckLaunchURLPresentContentForMessageGUID;
@property (nonatomic, readonly) bool ckShouldInitiateCollaborationWithSend;
@property (nonatomic, readonly) bool ckShouldSendImmediately;
@property (nonatomic, readonly) bool ckShouldShowComposeUI;
@property (nonatomic, readonly) bool ckShouldShowDigitalTouchCanvas;
@property (nonatomic, readonly) NSArray *ckSuggestedReplies;
@property (nonatomic, readonly) NSURL *ckURLByPercentEncodingFragment;
@property (nonatomic, readonly) bool cls_fileExists;
@property (nonatomic, readonly) bool cls_isUbiquitous;
@property (nonatomic, readonly) bool cls_isUploaded;
@property (nonatomic, readonly) NSString *cps_domain;
@property (nonatomic, readonly) NSString *cps_fallbackBundleIdentifier;
@property (nonatomic, readonly) bool cps_isFileURL;
@property (nonatomic, readonly) bool cps_isHTTPFamilyURL;
@property (readonly, copy) NSData *dataRepresentation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) NSString *downloadTaskDescription;
@property (nonatomic, readonly) NSURL *downloadURL;
@property (nonatomic, readonly) NSURL *ef_caseNormalizedURL;
@property (nonatomic, readonly) NSString *ef_highLevelDomain;
@property (nonatomic, readonly) bool ef_isEligibleForRichLink;
@property (nonatomic, readonly) EFPathComponent *ef_lastPathComponent;
@property (nonatomic, readonly) NSURL *ef_urlByAddingSchemeIfNeeded;
@property (nonatomic, readonly) bool em_isAccountURL;
@property (nonatomic, readonly) bool em_isInternalMessageURL;
@property (nonatomic, readonly) bool em_isMailboxURL;
@property (nonatomic, readonly) bool em_isMessageURL;
@property (nonatomic, readonly) NSString *fileName;
@property (readonly, copy) NSURL *filePathURL;
@property (nonatomic, readonly) NSNumber *fileSize;
@property (readonly) const char *fileSystemRepresentation;
@property (getter=isFileURL, readonly) bool fileURL;
@property (readonly) bool forceAssist;
@property (nonatomic, readonly, copy) NSString *formattedPhoneNumber;
@property (nonatomic, readonly) NSString *fp_lastEditorDeviceName;
@property (nonatomic, readonly) NSPersonNameComponents *fp_lastEditorNameComponents;
@property (readonly, copy) NSString *fragment;
@property (readonly) bool hasDirectoryPath;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool hf_isHomeKnowledgeBasedArticleURL;
@property (readonly, copy) NSString *host;
@property (getter=isiWorkURL, readonly) bool iWorkURL;
@property (nonatomic, readonly) NSString *ic_UTI;
@property (nonatomic, readonly) long long ic_fileSize;
@property (nonatomic, readonly) bool ic_isAppStoreURL;
@property (nonatomic, readonly) bool ic_isBooksURL;
@property (nonatomic, readonly) bool ic_isExcludedFromBackups;
@property (nonatomic, readonly) bool ic_isExcludedFromCloudBackups;
@property (nonatomic, readonly) bool ic_isMapURL;
@property (nonatomic, readonly) bool ic_isNewsURL;
@property (nonatomic, readonly) bool ic_isPodcastsURL;
@property (nonatomic, readonly) bool ic_isReachable;
@property (nonatomic, readonly) bool ic_isSupportedAsAttachment;
@property (nonatomic, readonly) bool ic_isURLAnInternetLocator;
@property (nonatomic, readonly) bool ic_isWebURL;
@property (nonatomic, readonly) bool ic_isiTunesURL;
@property (nonatomic, readonly) NSURL *ic_uniquedURL;
@property (readonly) bool isEmergencyCallURL;
@property (readonly) bool isEmergencyURL;
@property (getter=atx_isOpenableFaceTimeURL, nonatomic, readonly) bool isOpenableFaceTimeURL;
@property (nonatomic, readonly) bool isSOS;
@property (nonatomic, readonly) bool isSheetURL;
@property (readonly) bool isVoicemailURL;
@property (nonatomic, readonly) bool isiWorkDocument;
@property (nonatomic, readonly) NSData *jsonData;
@property (readonly, copy) NSString *lastPathComponent;
@property (setter=ls_setPreferredLocalizations:, retain) NSArray *ls_preferredLocalizations;
@property (nonatomic, readonly) long long mtClockAppSection;
@property (nonatomic, readonly) NSString *mtID;
@property (nonatomic, readonly) bool mtIsForLastTimer;
@property (nonatomic, readonly) bool mtIsList;
@property (nonatomic, readonly) bool needsDownload;
@property (nonatomic, readonly) NSURL *normalizedURL;
@property (readonly) NSString *originatingUIIdentifier;
@property (readonly, copy) NSString *parameterString;
@property (readonly, copy) NSString *password;
@property (readonly, copy) NSString *path;
@property (readonly, copy) NSArray *pathComponents;
@property (readonly, copy) NSString *pathExtension;
@property (readonly) NSString *phoneNumber;
@property (readonly, copy) NSNumber *port;
@property (readonly, copy) NSString *query;
@property (nonatomic, readonly) NSDictionary *queryParameters;
@property (nonatomic, readonly) NSString *recentsUniqueID;
@property (readonly, copy) NSString *relativePath;
@property (readonly, copy) NSString *relativeString;
@property (nonatomic, readonly) NSString *resourceSpecifier;
@property (readonly, copy) NSString *resourceSpecifier;
@property (nonatomic, readonly, copy) NSURL *safari_URLByRemovingUserPasswordPathQueryAndFragment;
@property (nonatomic, readonly) NSURL *safari_canonicalURL;
@property (nonatomic, readonly) NSURL *safari_canonicalURLForStartPage;
@property (nonatomic, readonly) WBSPair *safari_composedIdentifierAndProfileIdentifierInSafariWebExtensionURL;
@property (nonatomic, readonly, copy) NSString *safari_defaultStatusMessageString;
@property (nonatomic, readonly) NSString *safari_displayNameForFile;
@property (nonatomic, readonly) NSString *safari_fileType;
@property (nonatomic, readonly) bool safari_hasCustomScheme;
@property (nonatomic, readonly) bool safari_hasLocalScheme;
@property (nonatomic, readonly, copy) NSString *safari_identityPreferenceDomain;
@property (nonatomic, readonly) bool safari_isAboutBlankURL;
@property (nonatomic, readonly) bool safari_isBlobURL;
@property (nonatomic, readonly) bool safari_isDataURL;
@property (nonatomic, readonly) bool safari_isEligibleToBeOpenedByServiceWorkers;
@property (nonatomic, readonly) bool safari_isEligibleToShowNotSecureWarning;
@property (nonatomic, readonly) bool safari_isEligibleforDirectSSO;
@property (nonatomic, readonly) bool safari_isHTTPFamilyURL;
@property (nonatomic, readonly) bool safari_isHTTPSURL;
@property (nonatomic, readonly) bool safari_isHTTPURL;
@property (nonatomic, readonly) bool safari_isJavaScriptURL;
@property (nonatomic, readonly) bool safari_isLocalOrPrivateNetworkURL;
@property (nonatomic, readonly) bool safari_isMailtoURL;
@property (nonatomic, readonly) bool safari_isOTPAuthMigrationURL;
@property (nonatomic, readonly) bool safari_isOTPAuthURL;
@property (nonatomic, readonly) bool safari_isReadingListURL;
@property (nonatomic, readonly) bool safari_isSafariExtensionURL;
@property (nonatomic, readonly) bool safari_isSafariResourceURL;
@property (nonatomic, readonly) bool safari_isSafariSpecificURL;
@property (nonatomic, readonly) bool safari_isSafariWebExtensionURL;
@property (nonatomic, readonly) bool safari_isSecureURL;
@property (nonatomic, readonly) bool safari_isSharedTabGroupURL;
@property (nonatomic, readonly) bool safari_isTelURL;
@property (nonatomic, readonly) bool safari_isTopLevelURL;
@property (nonatomic, readonly) bool safari_isURLTooLongToDisplay;
@property (nonatomic, readonly) bool safari_isWellKnownChangePasswordURL;
@property (nonatomic, readonly, copy) NSString *safari_mailtoURLStatusMessage;
@property (nonatomic, readonly) NSString *safari_readingListItemUUIDString;
@property (nonatomic, readonly, copy) NSString *safari_simplifiedURLStringForDeduping;
@property (nonatomic, readonly) NSString *safari_stringForListDisplay;
@property (nonatomic, readonly, copy) NSString *safari_userVisibleHostOrExtensionDisplayName;
@property (nonatomic, readonly, copy) NSURL *safari_wellKnownChangePasswordURL;
@property (readonly) TSUSandboxedURL *sandboxedURL;
@property (nonatomic, readonly) NSString *scheme;
@property (readonly, copy) NSString *scheme;
@property (nonatomic, readonly) NSString *sf_absoluteStringWithoutFragment;
@property (nonatomic, readonly) bool sf_isAppleNewsURL;
@property (nonatomic, readonly) bool sf_isFacetimeURL;
@property (nonatomic, readonly) bool sf_isOfflineReadingListURL;
@property (nonatomic, readonly) bool sf_isTestWebArchiveURL;
@property (nonatomic, readonly) bool sf_isWebSearchURL;
@property (nonatomic, readonly) NSUUID *sheetUUID;
@property (nonatomic, readonly) NSURL *ssb_canonicalizeURL;
@property (nonatomic, readonly) bool ssb_hasUserInfo;
@property (nonatomic, readonly) NSArray *ssb_hashes;
@property (nonatomic, readonly) bool ssb_isSafeURL;
@property (readonly, copy) NSURL *standardizedURL;
@property (readonly) Class superclass;
@property (readonly) bool suppressAssist;
@property (nonatomic, readonly) long long totalBytesExpectedToBeDownloaded;
@property (nonatomic, readonly) bool tsp_isIWorkAVAssetURL;
@property (nonatomic, readonly) NSString *tsu_UTI;
@property (getter=tsu_isInTrash, readonly) bool tsu_inTrash;
@property (readonly) bool tsu_isInTemporaryDirectory;
@property (readonly) bool tsu_isVolumeKnownToBeEjectable;
@property (readonly) bool tsu_isVolumeKnownToBeLocal;
@property (readonly) bool tsu_isVolumeKnownToBeRemovable;
@property (readonly, copy) NSString *user;
@property (nonatomic, readonly, copy) NSUUID *voicemailMessageUUID;
@property (nonatomic, readonly) long long voicemailRecordID;
@property (readonly) bool wasAlreadyAssisted;
@property (nonatomic, readonly) WFFileType *wfFileType;
@property (nonatomic, readonly, copy) NSString *wfName;
@property (nonatomic, readonly, copy) NSArray *writableTypeIdentifiersForItemProvider;

// Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation

+ (id)__unurl;
+ (id)bookmarkDataWithContentsOfURL:(id)arg1 error:(id*)arg2;
+ (id)resourceValuesForKeys:(id)arg1 fromBookmarkData:(id)arg2;
+ (bool)supportsSecureCoding;
+ (bool)writeBookmarkData:(id)arg1 toURL:(id)arg2 options:(unsigned long long)arg3 error:(id*)arg4;

- (id)bookmarkDataWithOptions:(unsigned long long)arg1 includingResourceValuesForKeys:(id)arg2 relativeToURL:(id)arg3 error:(id*)arg4;
- (bool)checkResourceIsReachableAndReturnError:(id*)arg1;
- (id)filePathURL;
- (id)fileReferenceURL;
- (bool)getResourceValue:(out id*)arg1 forKey:(id)arg2 error:(out id*)arg3;
- (bool)isFileReferenceURL;
- (void)removeAllCachedResourceValues;
- (void)removeCachedResourceValueForKey:(id)arg1;
- (id)resourceValuesForKeys:(id)arg1 error:(id*)arg2;
- (bool)setResourceValue:(id)arg1 forKey:(id)arg2 error:(id*)arg3;
- (bool)setResourceValues:(id)arg1 error:(id*)arg2;
- (void)setTemporaryResourceValue:(id)arg1 forKey:(id)arg2;
- (bool)startAccessingSecurityScopedResource;
- (void)stopAccessingSecurityScopedResource;

// Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork

- (bool)_isSafeDirectoryForDownloads:(int)arg1 withToken:(struct { unsigned int x1[8]; })arg2;
- (bool)_isSafeFileForBackgroundUploadForMe;

// Image: /System/Library/Frameworks/ClassKit.framework/ClassKit

+ (id)cls_configURL;
+ (void)cls_deleteFileAtExpectedURL:(id)arg1 containerURL:(id)arg2 itemID:(id)arg3 ownerName:(id)arg4 zoneName:(id)arg5 completion:(id /* block */)arg6;
+ (bool)cls_deleteFileAtURL:(id)arg1 error:(id*)arg2;
+ (id)cls_documentsURL;
+ (id)cls_documentsURLAndReturnError:(id*)arg1;
+ (id)cls_draftsURL;
+ (id)cls_draftsURLAndReturnError:(id*)arg1;
+ (void)cls_getUbiquitousContainerURLWithCompletion:(id /* block */)arg1;
+ (id)cls_libraryURL;
+ (id)cls_ubiquitousContainerURL;
+ (id)cls_ubiquitousContainerURL_Imp:(id*)arg1;
+ (void)cls_urlSuitableForOpeningForExpectedURL:(id)arg1 containerURL:(id)arg2 itemID:(id)arg3 ownerName:(id)arg4 zoneName:(id)arg5 completion:(id /* block */)arg6;

- (unsigned long long)_cls_stableHash;
- (void)attachSandboxExtensionToken:(id)arg1;
- (void)cls_checkForCKShareWithCompletion:(id /* block */)arg1;
- (id)cls_createDirectoryIfNeeded:(id*)arg1;
- (void)cls_createShareIfNeededWithOrgAdminUserRecordID:(id)arg1 userRecordID:(id)arg2 completion:(id /* block */)arg3;
- (bool)cls_fileExists;
- (bool)cls_isParentOfURL:(id)arg1;
- (bool)cls_isUbiquitous;
- (bool)cls_isUploaded;
- (id)cls_pathRelativeToURL:(id)arg1;
- (void)cls_performWithSandboxAccess:(id /* block */)arg1;
- (void)cls_removeCachedResourceValueForKeys:(id)arg1;
- (id)deleteContent;
- (id)sandboxExtensionTokenForAnyProcess;
- (id)sandboxExtensionTokenForProcess:(struct { unsigned int x1[8]; })arg1;
- (long long)totalAllocatedSizeIncludingSubDirectories:(bool)arg1 error:(id*)arg2;

// Image: /System/Library/Frameworks/CloudKit.framework/CloudKit

- (id)CKBladerunnerShareURLSlugBasedApplicationBundleID;
- (bool)CKMarkFilePurgeable:(id*)arg1;
- (id)CKPathAfterSlug;
- (id)CKSanitizedPath;
- (id)CKShareURLSlugBasedApplicationName;
- (id)CKURLSlug;
- (id)CKURLThroughSlug;
- (id)CKXPCSuitableString;
- (void)ck_bindInStatement:(id)arg1 atIndex:(unsigned long long)arg2;

// Image: /System/Library/Frameworks/CoreML.framework/CoreML

+ (id)uniqueDirectoryURLInPath:(id)arg1;

- (bool)removeItemAndReturnError:(id*)arg1;

// Image: /System/Library/Frameworks/CoreServices.framework/CoreServices

- (bool)conformsToOverridePatternWithKey:(id)arg1;
- (id)fmfURL;
- (id)fmipURL;
- (id)iCloudEmailPrefsURL;
- (id)iCloudSharingURL;
- (id)iCloudSharingURL_noFragment;
- (id)iTunesStoreURL;
- (id)iWorkApplicationName;
- (id)iWorkDocumentName;
- (bool)isiWorkURL;
- (id)keynoteLiveURL;
- (id)keynoteLiveURL_noFragment;
- (id)ls_preferredLocalizations;
- (void)ls_setPreferredLocalizations:(id)arg1;
- (id)mapsURL;
- (id)photosURL;

// Image: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight

- (bool)cs_addDocumentTracking;
- (bool)cs_isInMobileDocuments;

// Image: /System/Library/Frameworks/ExtensionFoundation.framework/ExtensionFoundation

- (id)_EX_containingApplicationBundleURL;
- (bool)_EX_isApplication;
- (bool)_EX_isContainedInDirectory:(id)arg1;
- (bool)_EX_isDirectory;

// Image: /System/Library/Frameworks/FileProvider.framework/FileProvider

+ (void)_fp_createInTempDirectoryWithName:(id)arg1 creationBlock:(id /* block */)arg2 completion:(id /* block */)arg3;
+ (id)fp_cloudStorageDirectory;
+ (void)fp_createEmptyTempFileWithName:(id)arg1 completion:(id /* block */)arg2;
+ (void)fp_createEmptyTempPackageWithName:(id)arg1 completion:(id /* block */)arg2;
+ (id)fp_homeDirectory;
+ (id)fp_homeDirectoryForUserID:(unsigned int)arg1;
+ (id)fp_homeDirectoryPathForUserID:(unsigned int)arg1;
+ (id)fp_personaSharedDirectory;
+ (id)fp_personaSharedDirectoryPathForUserID:(unsigned int)arg1;
+ (id)fp_supportDirectory;
+ (id)fp_tempDirectory;
+ (id)fp_uncachedContainerURLForSecurityApplicationGroupIdentifier:(id)arg1;
+ (id)fp_uniqueTempFolderWithError:(id*)arg1;

- (id)_fp_componentsRelativeToRoot:(id)arg1;
- (id)_fp_lookupURLOfChildWithName:(id)arg1 notMatchingFileID:(id)arg2;
- (bool)_fp_partOfAppInboxWithURLComponents:(id)arg1;
- (id)fp_addDocumentTrackingWithError:(id*)arg1;
- (id)fp_addTestConflictLoserFromItemAtURL:(id)arg1 lastEditorDeviceName:(id)arg2 lastEditorUserName:(id)arg3 error:(id*)arg4;
- (bool)fp_associateThumbnailFromDocumentAtURL:(id)arg1 error:(id*)arg2;
- (bool)fp_associateThumbnailToVersionAtURL:(id)arg1 thumbnailMetadata:(id)arg2 error:(id*)arg3;
- (void)fp_attachSecurityScopeFromURL:(id)arg1;
- (id)fp_bouncedNameWithIndex:(long long)arg1;
- (bool)fp_checkSandboxFileMetadataRead;
- (id)fp_commonDirectDescendantOf:(id)arg1;
- (void)fp_coordinatedDeleteWithHandler:(id /* block */)arg1;
- (id)fp_copyToTempFolderWithFilename:(id)arg1 queue:(id)arg2 precomputedItemSize:(unsigned long long)arg3 completion:(id /* block */)arg4;
- (id)fp_copyToURL:(id)arg1 queue:(id)arg2 precomputedItemSize:(unsigned long long)arg3 replacePlaceholder:(bool)arg4 completion:(id /* block */)arg5;
- (bool)fp_createSubFolder:(id)arg1 completionHandler:(id /* block */)arg2;
- (id /* block */)fp_defaultMoverBlock;
- (bool)fp_deleteAllowingCoordination:(bool)arg1 completionHandler:(id /* block */)arg2;
- (bool)fp_deleteStaleBusyFileWithFileDescriptor:(int)arg1 coordinatorPurposeIdentifier:(id)arg2;
- (bool)fp_deleteWithCompletionHandler:(id /* block */)arg1;
- (id)fp_directorySizeWithError:(id*)arg1;
- (id)fp_existingURLOfChildWithName:(id)arg1 isFolder:(bool)arg2;
- (id)fp_existingURLOfChildWithName:(id)arg1 isFolder:(bool)arg2 notMatchingFileID:(id)arg3 nextAvailableBounceNumber:(id*)arg4 forceFetchingBounceNumber:(bool)arg5;
- (id)fp_fpfsRootURL;
- (bool)fp_getSize:(unsigned long long*)arg1 error:(id*)arg2;
- (bool)fp_hasThumbnailOnImmutableDocument;
- (void)fp_hideExtension:(bool)arg1;
- (bool)fp_importUnderFolder:(id)arg1 allowCoordination:(bool)arg2 completionHandler:(id /* block */)arg3;
- (bool)fp_importUnderFolder:(id)arg1 allowCoordination:(bool)arg2 usingBlock:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
- (bool)fp_importUnderFolder:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)fp_importUnderFolder:(id)arg1 usingBlock:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
- (bool)fp_isAppInboxOrDescendants;
- (id)fp_isDatalessWithError:(id*)arg1;
- (bool)fp_isFolder;
- (bool)fp_isInSyncableRootFast;
- (bool)fp_isLocationOrInLocation:(id)arg1 relativeTo:(id)arg2;
- (bool)fp_isPackage;
- (bool)fp_isSymlink;
- (id)fp_issueSandboxExtensionOfClass:(const char *)arg1 report:(bool)arg2 error:(id*)arg3;
- (id)fp_lastEditorDeviceName;
- (id)fp_lastEditorNameComponents;
- (void)fp_makeWritableAndRemoveNonExportableAttributes;
- (bool)fp_makeWritableOnFD:(int)arg1 error:(id*)arg2;
- (bool)fp_makeWritableWithError:(id*)arg1;
- (bool)fp_matchesAlternateContentsURL:(id)arg1;
- (bool)fp_matchesApplicationContainerURL:(id)arg1;
- (bool)fp_matchesCloudDocsURL:(id)arg1;
- (bool)fp_matchesEDSLocation;
- (bool)fp_matchesFPFSURL:(id)arg1;
- (bool)fp_matchesFileProviderHeuristics:(unsigned int)arg1;
- (bool)fp_matchesFileProviderURL:(id)arg1;
- (bool)fp_matchesLiveFilesURL:(id)arg1;
- (id)fp_matchesUbiquitousHeuristics;
- (id)fp_moveToTempFolderWithFilename:(id)arg1 error:(id*)arg2;
- (bool)fp_moveUnderFolder:(id)arg1 withNewName:(id)arg2 allowBounce:(bool)arg3 allowCoordination:(bool)arg4 completionHandler:(id /* block */)arg5;
- (bool)fp_moveUnderFolder:(id)arg1 withNewName:(id)arg2 allowBounce:(bool)arg3 allowCoordination:(bool)arg4 moveHandler:(id /* block */)arg5 completionHandler:(id /* block */)arg6;
- (bool)fp_moveUnderFolder:(id)arg1 withNewName:(id)arg2 coordinationOptions:(unsigned long long)arg3 allowBounce:(bool)arg4 allowCoordination:(bool)arg5 completionHandler:(id /* block */)arg6;
- (bool)fp_moveUnderFolder:(id)arg1 withNewName:(id)arg2 coordinationOptions:(unsigned long long)arg3 allowBounce:(bool)arg4 allowCoordination:(bool)arg5 moveHandler:(id /* block */)arg6 completionHandler:(id /* block */)arg7;
- (id)fp_pathComponentDisplayMetadata;
- (id)fp_physicalURL;
- (bool)fp_queued_moveUnderFolder:(id)arg1 withNewName:(id)arg2 coordinationOptions:(unsigned long long)arg3 allowBounce:(bool)arg4 allowCoordination:(bool)arg5 moveHandler:(id /* block */)arg6 completionHandler:(id /* block */)arg7;
- (id)fp_realpathURL;
- (long long)fp_relationshipToItemAtURL:(id)arg1;
- (id)fp_relativePathOf:(id)arg1;
- (id)fp_relativePathWithRealpath:(id)arg1;
- (bool)fp_removeACLWithError:(id*)arg1;
- (bool)fp_removeFileProviderXattrsWithError:(id*)arg1;
- (bool)fp_renameWithNewName:(id)arg1 allowCoordination:(bool)arg2 completionHandler:(id /* block */)arg3;
- (bool)fp_renameWithNewName:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)fp_reparentUnderFolder:(id)arg1 allowBouncing:(bool)arg2 allowCoordination:(bool)arg3 completionHandler:(id /* block */)arg4;
- (bool)fp_reparentUnderFolder:(id)arg1 allowBouncing:(bool)arg2 completionHandler:(id /* block */)arg3;
- (bool)fp_reparentUnderFolder:(id)arg1 allowCoordination:(bool)arg2 completionHandler:(id /* block */)arg3;
- (bool)fp_reparentUnderFolder:(id)arg1 withNewName:(id)arg2 allowCoordination:(bool)arg3 completionHandler:(id /* block */)arg4;
- (bool)fp_reparentUnderFolder:(id)arg1 withNewName:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)fp_scanForURLOfChildWithName:(id)arg1 isFolder:(bool)arg2 maxChildrenCount:(unsigned long long)arg3 notMatchingFileID:(id)arg4 nextAvailableBounceNumber:(id*)arg5;
- (id)fp_scopeDescription;
- (id)fp_shortDescription;
- (bool)fp_trashUnderFolder:(id)arg1 allowCoordination:(bool)arg2 completionHandler:(id /* block */)arg3;
- (bool)fp_trashUnderFolder:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)fp_volumeUUID;
- (id)fp_withReadWriteAccess:(id /* block */)arg1;
- (unsigned long long)getMaxChildrenCount;
- (bool)shouldBeForwardedToFileProvider;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (id)URLByResolvingAliasFileAtURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
+ (id)URLByResolvingBookmarkData:(id)arg1 options:(unsigned long long)arg2 relativeToURL:(id)arg3 bookmarkDataIsStale:(bool*)arg4 error:(id*)arg5;
+ (id)URLWithDataRepresentation:(id)arg1 relativeToURL:(id)arg2;
+ (id)URLWithString:(id)arg1;
+ (id)URLWithString:(id)arg1 encodingInvalidCharacters:(bool)arg2;
+ (id)URLWithString:(id)arg1 relativeToURL:(id)arg2;
+ (id)_URLWithData:(id)arg1 relativeToURL:(id)arg2;
+ (id)_URLWithDataAsString:(id)arg1 relativeToURL:(id)arg2;
+ (id)_fileURLWithPath:(id)arg1 cachingResourceValuesForKeys:(id)arg2 error:(id*)arg3;
+ (id)_web_URLWithComponents:(struct { id x1; id x2; id x3; id x4; long long x5; id x6; id x7; id x8; })arg1;
+ (id)_web_URLWithString:(id)arg1 relativeToURL:(id)arg2;
+ (id)absoluteURLWithDataRepresentation:(id)arg1 relativeToURL:(id)arg2;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)fileURLWithFileSystemRepresentation:(const char *)arg1 isDirectory:(bool)arg2 relativeToURL:(id)arg3;
+ (id)fileURLWithPath:(id)arg1;
+ (id)fileURLWithPath:(id)arg1 isDirectory:(bool)arg2;
+ (id)fileURLWithPath:(id)arg1 isDirectory:(bool)arg2 relativeToURL:(id)arg3;
+ (id)fileURLWithPath:(id)arg1 relativeToURL:(id)arg2;
+ (id)fileURLWithPathComponents:(id)arg1;
+ (id)objectWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 error:(id*)arg3;
+ (id)readableTypeIdentifiersForItemProvider;
+ (id)writableTypeIdentifiersForItemProvider;

- (id)URLByAppendingPathComponent:(id)arg1;
- (id)URLByAppendingPathComponent:(id)arg1 isDirectory:(bool)arg2;
- (id)URLByAppendingPathExtension:(id)arg1;
- (id)URLByDeletingLastPathComponent;
- (id)URLByDeletingPathExtension;
- (id)URLByResolvingSymlinksInPath;
- (id)URLByStandardizingPath;
- (id)_URLArchive;
- (id)_URLByEscapingSpacesAndControlChars;
- (unsigned long long)_cfTypeID;
- (struct __CFURL { }*)_cfurl;
- (struct __CFDictionary { }*)_clientsCreatingIfNecessary:(bool)arg1;
- (id)_fixedUpSideFaultError:(id)arg1;
- (void)_freeClients;
- (id)_hostString;
- (id)_initFileURLWithPath:(id)arg1 cachingResourceValuesForKeys:(id)arg2 error:(id*)arg3;
- (bool)_isAbsolute;
- (bool)_isDeallocating;
- (id)_parameterString;
- (void)_performWithPhysicalURL:(id /* block */)arg1;
- (long long)_promiseExtensionConsume;
- (void)_promiseExtensionRelease:(long long)arg1;
- (bool)_tryRetain;
- (id)_valueFromFaultDictionary:(id)arg1 forKey:(id)arg2;
- (id)_web_URLByRemovingLastPathComponent_nowarn;
- (id)_web_URLByRemovingUserAndPath_nowarn;
- (id)_web_URLByRemovingUserAndQueryAndFragment_nowarn;
- (struct { id x1; id x2; id x3; id x4; long long x5; id x6; id x7; id x8; })_web_URLComponents;
- (bool)_web_isJavaScriptURL;
- (id)_web_scriptIfJavaScriptURL;
- (id)_web_suggestedFilenameWithMIMEType:(id)arg1;
- (id)absoluteString;
- (id)absoluteURL;
- (id)baseURL;
- (bool)checkPromisedItemIsReachableAndReturnError:(id*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataRepresentation;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (const char *)fileSystemRepresentation;
- (id)fragment;
- (bool)getFileSystemRepresentation:(char *)arg1 maxLength:(unsigned long long)arg2;
- (bool)getPromisedItemResourceValue:(out id*)arg1 forKey:(id)arg2 error:(out id*)arg3;
- (bool)hasDirectoryPath;
- (unsigned long long)hash;
- (id)host;
- (id)init;
- (id)initAbsoluteURLWithDataRepresentation:(id)arg1 relativeToURL:(id)arg2;
- (id)initByResolvingAliasFileAtURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (id)initByResolvingBookmarkData:(id)arg1 options:(unsigned long long)arg2 relativeToURL:(id)arg3 bookmarkDataIsStale:(bool*)arg4 error:(id*)arg5;
- (id)initFileURLWithFileSystemRepresentation:(const char *)arg1 isDirectory:(bool)arg2 relativeToURL:(id)arg3;
- (id)initFileURLWithPath:(id)arg1;
- (id)initFileURLWithPath:(id)arg1 isDirectory:(bool)arg2;
- (id)initFileURLWithPath:(id)arg1 isDirectory:(bool)arg2 relativeToURL:(id)arg3;
- (id)initFileURLWithPath:(id)arg1 relativeToURL:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithDataRepresentation:(id)arg1 relativeToURL:(id)arg2;
- (id)initWithScheme:(id)arg1 host:(id)arg2 path:(id)arg3;
- (id)initWithString:(id)arg1;
- (id)initWithString:(id)arg1 encodingInvalidCharacters:(bool)arg2;
- (id)initWithString:(id)arg1 relativeToURL:(id)arg2;
- (id)initWithString:(id)arg1 relativeToURL:(id)arg2 encodingInvalidCharacters:(bool)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isFileURL;
- (bool)isKindOfClass:(Class)arg1;
- (bool)isMemberOfClass:(Class)arg1;
- (id)lastPathComponent;
- (id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(id /* block */)arg2;
- (id)parameterString;
- (id)password;
- (id)path;
- (id)pathComponents;
- (id)pathExtension;
- (id)port;
- (id)promisedItemResourceValuesForKeys:(id)arg1 error:(id*)arg2;
- (id)query;
- (id)relativePath;
- (id)relativeString;
- (oneway void)release;
- (id)resourceSpecifier;
- (id)retain;
- (unsigned long long)retainCount;
- (id)scheme;
- (id)standardizedURL;
- (id)user;
- (id)writableTypeIdentifiersForItemProvider;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)_hk_appendQueryParameterToURL:(id)arg1 forHKProfileIdentifier:(id)arg2;
+ (id)_hk_urlForAtrialFibrillationEventType;
+ (id)_hk_urlForElectrocardiogramType;
+ (id)_hk_urlForHKProfileIdentifier:(id)arg1;
+ (id)_hk_urlForHealthRecordsProviderSearch;
+ (id)_hk_urlForViewHealthRecords;
+ (id)hk_safeURLWithString:(id)arg1;
+ (id)hk_tapToHealthRadarURLForComponent:(unsigned long long)arg1 title:(id)arg2 description:(id)arg3 classification:(long long)arg4 reproducibility:(long long)arg5 keywords:(id)arg6 autoDiagnostics:(long long)arg7 attachments:(id)arg8;
+ (id)hk_tapToHealthRadarURLForComponent:(unsigned long long)arg1 title:(id)arg2 description:(id)arg3 classification:(long long)arg4 reproducibility:(long long)arg5 keywords:(id)arg6 autoDiagnostics:(long long)arg7 attachments:(id)arg8 collaborationContactHandles:(id)arg9;
+ (id)hk_tapToHealthRadarURLWithTitle:(id)arg1 description:(id)arg2 classification:(long long)arg3 reproducibility:(long long)arg4 keywords:(id)arg5 autoDiagnostics:(long long)arg6 attachments:(id)arg7;
+ (id)hk_tapToRadarURLForBundleID:(id)arg1 component:(unsigned long long)arg2 title:(id)arg3 description:(id)arg4 classification:(long long)arg5 reproducibility:(long long)arg6 keywords:(id)arg7 autoDiagnostics:(long long)arg8 attachments:(id)arg9;
+ (id)hk_tapToRadarURLForBundleID:(id)arg1 component:(unsigned long long)arg2 title:(id)arg3 description:(id)arg4 classification:(long long)arg5 reproducibility:(long long)arg6 keywords:(id)arg7 autoDiagnostics:(long long)arg8 attachments:(id)arg9 collaborationContactHandles:(id)arg10;
+ (id)hk_tapToRadarURLForBundleID:(id)arg1 component:(unsigned long long)arg2 title:(id)arg3 description:(id)arg4 classification:(long long)arg5 reproducibility:(long long)arg6 keywords:(id)arg7 autoDiagnostics:(long long)arg8 attachments:(id)arg9 collaborationContactHandles:(id)arg10 diagnosticExtensionOptions:(unsigned long long)arg11;

- (id)_hk_extractEncodedHKProfileIdentifier;
- (id)hk_fileSizeWithError:(id*)arg1;
- (bool)hk_isRewrittenEUDigitalCOVIDCertificateQRCodeURL;
- (bool)hk_isRewrittenHealthCardQRCodeURL;
- (bool)hk_isValidSafariViewControllerURL;
- (id)hk_valueForFirstInstanceOfParameterNamed:(id)arg1;

// Image: /System/Library/Frameworks/Intents.framework/Intents

+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;

- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;

// Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation

- (id)_lp_components;
- (id)_lp_componentsNoCopy;
- (id)_lp_faceTimeInviteLink;
- (id)_lp_faceTimeInviteTitle;
- (id)_lp_formattedTelephoneNumber;
- (bool)_lp_hasAllowedNonHTTPScheme;
- (bool)_lp_hasAllowedNonHTTPSchemeForMetadataDecoding;
- (bool)_lp_hasWalletRelatedScheme;
- (bool)_lp_isFaceTimeInviteURL;
- (bool)_lp_isTelephoneURL;
- (id)_lp_pathComponentAtIndex:(unsigned long long)arg1;
- (id)_lp_requestWithAttribution:(unsigned long long)arg1;
- (id)_lp_valueForQueryKey:(id)arg1;

// Image: /System/Library/Frameworks/Messages.framework/Messages

+ (id)__ms_cachesDirectory;

- (id)__ms_UTI;
- (bool)__ms_conformsToUTI:(id)arg1;

// Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore

- (id)CAMLType;
- (void)encodeWithCAMLWriter:(id)arg1;

// Image: /System/Library/Frameworks/QuickLook.framework/QuickLook

- (id)previewItemURL;

// Image: /System/Library/Frameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing

+ (id)_QLCreateTemporaryReplacementURLForOriginalFileAtURL:(id)arg1 withExtension:(id)arg2 temporaryDirectoryURL:(id*)arg3;
+ (id)_QLTemporaryURLWithExtension:(id)arg1 openingFileHandle:(int*)arg2 inDirectoryAtURL:(id)arg3;

- (id)_QLFileSize;
- (bool)_QLIsDataLess;
- (id)_QLIssueFileExtensionWithSandboxType:(const char *)arg1;
- (bool)_QLNeedsCoordination;
- (bool)_QLNeedsDownload;
- (id)_QLUrlFileSize;
- (id)_qlFastRealpathURL;
- (id)ql_realpathURL;

// Image: /System/Library/Frameworks/SafariServices.framework/SafariServices

+ (bool)_sf_canCreateURLsFromDropSession:(id)arg1;
+ (void)_sf_urlsFromDragItems:(id)arg1 completionHandler:(id /* block */)arg2;

- (void)_sf_accessingSecurityScopedResource:(id /* block */)arg1;
- (id)_sf_highLevelDomainFromHostFallingBackToHostOrAbsoluteString;
- (bool)_sf_isAppleOneURL;
- (id)_sf_itunesItemIdentifier;
- (id)_sf_topLevelDomain;
- (id)sf_absoluteStringWithoutFragment;
- (bool)sf_isAppleNewsURL;
- (bool)sf_isFacetimeURL;
- (bool)sf_isOfflineReadingListURL;
- (bool)sf_isTestWebArchiveURL;
- (bool)sf_isWebSearchURL;

// Image: /System/Library/Frameworks/Social.framework/Social

+ (id)SLTwitterAccessTokenURL;
+ (id)SLTwitterAccountGenerateURL;
+ (id)SLTwitterAccountSettingsURL;
+ (id)SLTwitterCleanupPushDestinationsURL;
+ (id)SLTwitterDirectMessageURL;
+ (id)SLTwitterFriendsURL;
+ (id)SLTwitterFriendshipsURL;
+ (id)SLTwitterImageLimitsURL;
+ (id)SLTwitterNearbyPlacesURL;
+ (id)SLTwitterRequestTokenURL;
+ (id)SLTwitterRetweetURLForTweetID:(id)arg1;
+ (id)SLTwitterTCoLengthURL;
+ (id)SLTwitterUpdateMultiPartStatusURL;
+ (id)SLTwitterUpdateStatusURL;
+ (id)SLTwitterUserInfoURL;
+ (id)SLTwitterUsersLookupURL;
+ (id)SLTwitterVerifyCredentialsURL;
+ (id)URLForFacebookGraphAPIWithDomain:(id)arg1 path:(id)arg2;
+ (id)URLForFacebookGraphAPIWithPath:(id)arg1;
+ (id)URLForFacebookPageAtPath:(id)arg1;
+ (id)URLForFacebookRESTMethod:(id)arg1;
+ (bool)_isBetaSwitchEnabledForKey:(struct __CFString { }*)arg1;

- (bool)isAppStoreURL;
- (bool)isAssetURL;
- (bool)isMusicStoreURL;
- (bool)loadingInUIWebViewWillLaunchAnotherApp;

// Image: /System/Library/Frameworks/UniformTypeIdentifiers.framework/UniformTypeIdentifiers

- (id)URLByAppendingPathComponent:(id)arg1 conformingToType:(id)arg2;
- (id)URLByAppendingPathExtensionForType:(id)arg1;

// Image: /System/Library/Frameworks/WebKit.framework/WebKit

+ (id)_web_URLWithWTFString:(const void*)arg1;
+ (bool)_web_canPerformAuthorizationWithURL:(id)arg1;
+ (bool)_web_willPerformSOKerberosAuthorizationWithURL:(id)arg1;

// Image: /System/Library/PrivateFrameworks/APFoundation.framework/APFoundation

- (id)jsonRepresentationWithOptions:(unsigned long long)arg1;

// Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit

- (id)wfo_URLByAppendingQueryItems:(id)arg1;
- (bool)wfo_isEqualToRedirectURI:(id)arg1;
- (id)wfo_normalizedURLComponents;

// Image: /System/Library/PrivateFrameworks/Announce.framework/Announce

- (double)audioDuration;

// Image: /System/Library/PrivateFrameworks/AppPredictionFoundation.framework/AppPredictionFoundation

- (bool)atx_isOpenableFaceTimeURL;
- (id)schemelessAbsoluteString;

// Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount

+ (id)aa_URLWithEndpoint:(id)arg1;

- (id)aa_endpoint;

// Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices

+ (bool)_isAppendWithUnmodifiedParametersFeatureFlagEnabled;
+ (id)ams_cachesDirectory;
+ (id)ams_dataVaultDirectory;
+ (id)ams_dynamicUIDirectory;
+ (id)ams_engagementDirectory;
+ (id)ams_realHomeDirectory;
+ (id)ams_unescapedStringForString:(id)arg1;

- (id)_sortedQueryItemsFromQueryItems:(id)arg1;
- (id)ams_URLByAppendingQueryItems:(id)arg1 preservingQueryEncoding:(bool)arg2;
- (id)ams_URLByAppendingQueryParameter:(id)arg1 name:(id)arg2;
- (id)ams_URLByAppendingQueryParameters:(id)arg1;
- (id)ams_URLByAppendingQueryParameters:(id)arg1 preservingQueryEncoding:(bool)arg2;
- (id)ams_URLByDeletingTrailingSlash;
- (id)ams_URLByReplaceingQueryParameters:(id)arg1;
- (id)ams_URLByReplaceingQueryParameters:(id)arg1 withEncodedParameters:(bool)arg2;
- (id)ams_URLByReplacingQueryItems:(id)arg1 withEncodedParameters:(bool)arg2;
- (id)ams_URLByReplacingSchemeWithScheme:(id)arg1;
- (id)ams_URLBySortingQueryParameters;
- (id)ams_URLQueryAllowedCharacterSet;
- (bool)ams_isBagLoadURL;
- (bool)ams_isHTTP;
- (bool)ams_isSecure;
- (id)ams_parameters;
- (id)ams_schemeSwizzledURL;
- (id)ams_unmodifiedParameters;

// Image: /System/Library/PrivateFrameworks/AskPermission.framework/AskPermission

- (id)ap_secureURL;

// Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices

+ (id)_af_URLWithMessageIdentifier:(id)arg1;

- (id)_af_messageIdentifierValue;
- (void)af_enumerateDigestibleChunksWithOptions:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
- (id)af_getBundleResourceURL;
- (bool)isAMOSCommittedIdentifier;
- (bool)isAMOSIdentifier;

// Image: /System/Library/PrivateFrameworks/AuthenticationServicesCore.framework/AuthenticationServicesCore

- (bool)as_isPasskeyRegistrationURL;
- (bool)as_isPasskeyURL;
- (long long)as_passkeyURLType;

// Image: /System/Library/PrivateFrameworks/BarcodeSupport.framework/BarcodeSupport

+ (id)_bcs_URLWithUserTypedString:(id)arg1;
+ (id)_bcs_appStoreSearchURLWithScheme:(id)arg1;
+ (id)_bcs_searchURLWithQuery:(id)arg1;

- (id)_bcs_displayString;
- (id)_bcs_fullURLDisplayString;
- (bool)_bcs_hasScheme:(id)arg1;
- (id)_bcs_hostWithoutWwwDot;
- (bool)_bcs_isDataDetectorURL;
- (bool)_bcs_isHTTPFamilyURL;
- (bool)_bcs_isMapsURL;
- (bool)_bcs_isOtpauthMigrationURL;
- (bool)_bcs_isOtpauthURL;
- (bool)_bcs_isRedirectedSHCURL;
- (bool)_bcs_isSHCURL;
- (bool)_bcs_isUPIURL;
- (id)_bcs_localizedDisplayNameForRedirectedSHCURL;
- (id)_bcs_redirectedHealthURLWithOriginalString:(id)arg1;

// Image: /System/Library/PrivateFrameworks/BlastDoor.framework/BlastDoor

- (bool)_bd_lp_hasAllowedNonHTTPScheme;
- (bool)_bd_lp_isHTTPFamilyURL;

// Image: /System/Library/PrivateFrameworks/BookLibraryCore.framework/BookLibraryCore

- (bool)bl_boolFromResourceValue:(id)arg1;
- (bool)bl_isDownloaded;
- (bool)bl_isDownloadedWithResourceValue:(id)arg1;
- (bool)bl_isDownloading;
- (bool)bl_isUbiquitous;
- (bool)bl_isUbiquitousPromise;
- (bool)hasUnresolvedConflicts;
- (id)identifierFromPermlink;
- (bool)isUploaded;
- (bool)isUploading;

// Image: /System/Library/PrivateFrameworks/BookUtility.framework/BookUtility

+ (id)bu_URLQueryParameterValueAllowedCharacterSet;
+ (id)bu_booksGroupContainerDocumentsURL;
+ (id)bu_booksGroupContainerURL;
+ (id)bu_booksRepositoryURL;
+ (id)bu_dictionaryForQueryString:(id)arg1 unescapedValues:(bool)arg2;
+ (id)bu_mediaURL;
+ (id)bu_queryStringForDictionary:(id)arg1 escapedValues:(bool)arg2;
+ (id)bu_urlWithAssetID:(id)arg1;

- (id)bu_assetIDFromURL;
- (id)bu_dictionaryForQueryItems;
- (id)bu_extendedAttributeNamed:(id)arg1 iCloudSyncable:(bool)arg2;
- (unsigned long long)bu_fileAllocatedSizeWithError:(id*)arg1;
- (id)bu_identifierFromPermlink;
- (bool)bu_isContainedWithinFileURL:(id)arg1;
- (bool)bu_isDirectory;
- (bool)bu_isFolder;
- (id)bu_isbnForURI;
- (id)bu_libraryIDFromURL;
- (bool)bu_removeExtendedAttributeNamed:(id)arg1 iCloudSyncable:(bool)arg2;
- (bool)bu_setExtendedAttributeNamed:(id)arg1 value:(id)arg2 iCloudSyncable:(bool)arg3;
- (id)bu_storeURLForISBNURN;
- (void)bu_storeURLForISBNURNWithCompletion:(id /* block */)arg1;
- (long long)bu_storeURLType;
- (long long)bu_storeURLTypeFromHost:(id)arg1;
- (id)bu_utType;

// Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion

+ (id)blt_metadataExtension;

- (bool)MD5:(unsigned char)arg1;
- (id)blt_metadataURL;

// Image: /System/Library/PrivateFrameworks/CDDataAccess.framework/CDDataAccess

+ (id)da_URLWithDirtyString:(id)arg1;
+ (id)da_URLWithScheme:(id)arg1 host:(id)arg2 port:(int)arg3 uri:(id)arg4;
+ (id)da_URLWithScheme:(id)arg1 host:(id)arg2 user:(id)arg3 port:(int)arg4 uri:(id)arg5;
+ (int)da_classicPortForScheme:(id)arg1;

- (id)URLByRemovingLastPathComponent;
- (id)URLWithUsername:(id)arg1;
- (id)URLWithUsername:(id)arg1 withPassword:(id)arg2;
- (id)URLWithoutUsername;
- (bool)da_isEqualToDAVURL:(id)arg1;
- (id)da_leastInfoStringRepresentationRelativeToParentURL:(id)arg1;
- (id)da_pathWithoutTrailingRemovingSlash;
- (id)da_rawPath;
- (id)da_urlByRemovingUsername;
- (id)da_urlBySettingHost:(id)arg1;
- (id)da_urlBySettingHost:(id)arg1 keepUsername:(bool)arg2;
- (id)da_urlBySettingPath:(id)arg1;
- (id)da_urlBySettingPath:(id)arg1 keepUsername:(bool)arg2;
- (id)da_urlBySettingPort:(id)arg1;
- (id)da_urlBySettingPort:(id)arg1 keepUsername:(bool)arg2;
- (id)da_urlBySettingScheme:(id)arg1;
- (id)da_urlBySettingScheme:(id)arg1 keepUsername:(bool)arg2;
- (id)da_urlBySettingUsername:(id)arg1;
- (id)da_urlForLogging;
- (id)uri;

// Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV

+ (id)URLWithDirtyString:(id)arg1;
+ (id)URLWithScheme:(id)arg1 host:(id)arg2 port:(int)arg3 uri:(id)arg4;
+ (int)classicPortForScheme:(id)arg1;
+ (id)davCompatibleFilenameForFilename:(id)arg1;
+ (id)iDiskSmallNameCompatibleNameForFilename:(id)arg1;

- (id)URLWithUsername:(id)arg1;
- (id)URLWithUsername:(id)arg1 withPassword:(id)arg2;
- (id)URLWithoutPassword;
- (id)URLWithoutUsername;
- (bool)absoluteURLisEqual:(id)arg1;
- (id)calDAV_leastInfoStringRepresentationRelativeToParentURL:(id)arg1;
- (id)initWithDirtyString:(id)arg1;
- (id)initWithScheme:(id)arg1 host:(id)arg2 port:(int)arg3 path:(id)arg4;
- (id)pathWithoutDecodingAndRemovingTrailingSlash;
- (id)pathWithoutTrailingRemovingSlash;
- (id)queryParameters;
- (id)serverURL;
- (id)unquotedPassword;
- (id)uri;

// Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation

+ (id)URLForMail:(id)arg1;
+ (id)URLForNoMail;
+ (id)URLForNoTel;
+ (id)URLForTel:(id)arg1;
+ (id)URLWithContactIdentifier:(id)arg1;
+ (id)_URLForAddress:(id)arg1 scheme:(id)arg2 noAddress:(id)arg3;
+ (bool)_isValidURI:(id)arg1;
+ (id)davCompatibleFilenameForFilename:(id)arg1;

- (id)URLWithUsername:(id)arg1 withPassword:(id)arg2;
- (bool)_hasDescription:(id)arg1;
- (bool)cal_caseInsensitiveHasScheme:(id)arg1;
- (id)cal_emailAddressString;
- (bool)cal_hasSchemeMailto;
- (bool)cal_hasSchemeTel;
- (id)cal_hostAfterGoogleRedirects;
- (bool)cal_isEquivalentToEmailAddress:(id)arg1;
- (bool)cal_isEquivalentToPhoneNumber:(id)arg1;
- (id)cal_phoneNumberString;
- (id)cal_resourceSpecifierNoLeadingSlashes;
- (bool)compareToLocalString:(id)arg1;
- (bool)compareToLocalURL:(id)arg1;
- (id)hostWithoutWWW;
- (id)initWithCalDirtyString:(id)arg1;
- (id)initWithScheme:(id)arg1 host:(id)arg2 port:(int)arg3 path:(id)arg4;
- (bool)isEqualToURLIgnoringScheme:(id)arg1;
- (bool)isNoMail;
- (bool)isNoTel;
- (bool)isOnRemoteFileSystem;
- (id)pathDecodedAndWithoutTrailingSlashRemoved;
- (id)pathWithoutTrailingRemovingSlash;
- (id)queryParameters;
- (id)serverURL;
- (id)unquotedPassword;

// Image: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit

- (id)cal_ShortDisplayStringForURL;

// Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI

- (id)_caseSensitiveQueryKeysAndValues;
- (id)configurationRequest;
- (bool)isConfigurationURL;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

+ (id)__ck_appleMapsURLForCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1 coordinateName:(id)arg2;
+ (id)ckSMSURLFromBusinessChatURL:(id)arg1;
+ (id)ckURLForChatIdentifier:(id)arg1 entryBody:(id)arg2;
+ (id)ckURLForResource:(id)arg1 withExtension:(id)arg2;

- (bool)ckAllowRetargeting;
- (id)ckCollaborationSceneIdentifier;
- (id)ckFaceTimeConversationUUID;
- (bool)ckIsLaunchAppURL;
- (bool)ckIsSMSPrivateURLScheme;
- (bool)ckIsUnitTestingURL;
- (id)ckLaunchURLBalloonPluginBundleID;
- (id)ckLaunchURLBalloonPluginPayload;
- (id)ckLaunchURLPostComposeDismissal;
- (id)ckLaunchURLPresentContentForMessageGUID;
- (bool)ckShouldInitiateCollaborationWithSend;
- (bool)ckShouldSendImmediately;
- (bool)ckShouldShowComposeUI;
- (bool)ckShouldShowDigitalTouchCanvas;
- (id)ckSuggestedReplies;
- (id)ckURLByPercentEncodingFragment;
- (id)ckWillNotLaunchComposeUIURL;

// Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit

+ (id)crk_iOSPlaceholderProfileURL;
+ (id)crk_macOSProfileURL;
+ (id)crk_overriddenDescriptionForItems:(id)arg1 originalDescription:(id)arg2;
+ (id)crk_uniqueTemporaryDirectoryURL;
+ (id)crk_uniqueTemporaryFileURL;

- (id)crk_escapedPath;
- (bool)crk_isBundle;
- (id)crk_sharingDescription;
- (id)crk_stringByRemovingWWWPrefixFromString:(id)arg1;

// Image: /System/Library/PrivateFrameworks/ClipServices.framework/ClipServices

+ (id)cps_preIngestedURLWithBundleIdentifier:(id)arg1;
+ (id)cps_resolvedURLWithStoreIconURLString:(id)arg1 iconSize:(unsigned long long)arg2;

- (id)cps_domain;
- (id)cps_fallbackBundleIdentifier;
- (bool)cps_isFileURL;
- (bool)cps_isHTTPFamilyURL;

// Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs

+ (void)br_containerIDsWithExternalReferencesTo:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)br_documentURLFromBookmarkableString:(id)arg1 completion:(id /* block */)arg2;
+ (id)br_documentURLFromBookmarkableString:(id)arg1 error:(id*)arg2;
+ (id)br_documentURLFromFileObjectID:(id)arg1 error:(id*)arg2;
+ (void)br_setIOPolicy:(int)arg1 type:(int)arg2 scope:(int)arg3 forBlock:(id /* block */)arg4;
+ (id)brc_ciconiaDumpDirForCurrentPersona;
+ (id)brc_ciconiaWorkDirForCurrentPersona;
+ (id)brc_fileURLWithFileDescriptor:(int)arg1;
+ (id)brc_fileURLWithVolumeDeviceID:(id)arg1 fileID:(id)arg2 isDirectory:(bool)arg3;
+ (id)brc_fileURLWithVolumeDeviceID:(id)arg1 fileID:(id)arg2 isDirectory:(bool)arg3 withError:(id*)arg4;

- (void)_br_bookmarkableStringForRemoteOpeningAppWithBundleID:(id)arg1 onlyAllowItemKnowByServer:(bool)arg2 completion:(id /* block */)arg3;
- (void)_br_fetchItemServiceSyncProxy:(id /* block */)arg1;
- (id)_br_getAttributeValue:(id)arg1 withSecondaryConnection:(bool)arg2 withError:(id*)arg3;
- (bool)_br_isInLocalHomeDirectoryUnderCurrentPersona;
- (bool)_br_isInLocalHomeDirectoryUnderPersona:(id)arg1 needsPersonaSwitch:(bool)arg2;
- (bool)_br_isInPersonaRoot:(id)arg1;
- (bool)_br_isInSyncedLocationStrictly:(bool)arg1;
- (bool)_br_isInSyncedLocationWithCurrentPersonaID:(id)arg1 strictly:(bool)arg2 foundHomeDirectory:(bool)arg3 adoptionError:(id)arg4;
- (bool)_br_isParentOfURL:(id)arg1 strictly:(bool)arg2;
- (id)_br_itemServiceSyncProxy;
- (bool)_br_mightBeInSyncedLocationUnderCurrentPersonaID:(id)arg1 strictly:(bool)arg2;
- (id)br_URLByResolvingExternalDocumentReferenceWithError:(id*)arg1;
- (id)br_URLByResolvingInProcessExternalDocumentReferenceWithProperties:(id)arg1;
- (id)br_addFakeConflictLoserFromItemAtURL:(id)arg1 lastEditorDeviceName:(id)arg2 error:(id*)arg3;
- (id)br_addFakeConflictLoserFromItemAtURL:(id)arg1 lastEditorDeviceName:(id)arg2 lastEditorUserName:(id)arg3 error:(id*)arg4;
- (void)br_addPhysicalProperty;
- (void)br_bookmarkableStringForRemoteOpeningAppWithBundleID:(id)arg1 completion:(id /* block */)arg2;
- (void)br_bookmarkableStringWithEtag:(bool)arg1 completion:(id /* block */)arg2;
- (void)br_bookmarkableStringWithEtag:(bool)arg1 onlyAllowItemKnowByServer:(bool)arg2 completion:(id /* block */)arg3;
- (id)br_cachedBookmarkData;
- (unsigned short)br_capabilityToMoveToURL:(id)arg1 error:(id*)arg2;
- (id)br_cloudDocsContainer;
- (id)br_containerID;
- (id)br_containerIDIfIsDesktopOrDocumentsURL;
- (id)br_containerIDIfIsDocumentsContainerURL;
- (id)br_containerIDWithCurrentPersonaID:(id)arg1;
- (id)br_containerIDWithCurrentPersonaID:(id)arg1 needsPersonaSwitch:(bool)arg2;
- (void)br_containerIDsWithExternalReferencesWithHandler:(id /* block */)arg1;
- (id)br_creatorNameComponentsWithError:(id*)arg1;
- (id)br_debugDescription;
- (id)br_documentRecordIDWithError:(id*)arg1;
- (id)br_externalDocumentPropertiesWithError:(id*)arg1;
- (bool)br_getBirthDate:(long long*)arg1;
- (bool)br_getTagNames:(id*)arg1 error:(id*)arg2;
- (void)br_isConflictedWithHandler:(id /* block */)arg1;
- (id)br_isDatalessWithError:(id*)arg1;
- (bool)br_isDocumentsContainer;
- (bool)br_isExternalDocumentReference;
- (bool)br_isIgnoredByFileProvider;
- (bool)br_isInCloudDocsPrivateStorages;
- (bool)br_isInCloudDocsPrivateStoragesForRemoteDocumentVersions;
- (bool)br_isInLocalHomeDirectory;
- (bool)br_isInMobileDocuments;
- (bool)br_isInSharedDocsContainer;
- (bool)br_isInSyncedDesktop;
- (bool)br_isInSyncedDocuments;
- (bool)br_isInSyncedLocation;
- (bool)br_isInTrash;
- (bool)br_isModifiedSinceShared;
- (bool)br_isParentOfURL:(id)arg1;
- (bool)br_isParentOfURL:(id)arg1 strictly:(bool)arg2;
- (bool)br_isParentOfURL:(id)arg1 strictly:(bool)arg2 withNonMateralizingIOPolicy:(bool)arg3;
- (bool)br_isPromiseURL;
- (bool)br_isRootOwned;
- (bool)br_isStrictlyInSyncedLocation;
- (bool)br_isSymLink;
- (bool)br_isTopLevelSharedItem;
- (id)br_itemID;
- (id)br_lastEditorDeviceName;
- (id)br_lastEditorName;
- (id)br_lastEditorNameComponents;
- (id)br_logicalURL;
- (bool)br_mightBeBRAlias;
- (bool)br_mightBeOnDataSeparatedVolume;
- (id)br_pathRelativeToMobileDocuments;
- (id)br_pathRelativeToSyncedRootURL:(id)arg1 currentPersonaID:(id)arg2;
- (id)br_pathRelativeToSyncedRootURLForContainerID:(id)arg1;
- (id)br_physicalURL;
- (void)br_preCacheBookmarkData:(id)arg1 versionEtag:(id)arg2;
- (id)br_realpathURL;
- (id)br_realpathURLWithIsDirectory:(bool)arg1;
- (bool)br_setAccessTime:(unsigned long long)arg1 error:(id*)arg2;
- (bool)br_setTagNames:(id)arg1 error:(id*)arg2;
- (id)br_typeIdentifierWithError:(id*)arg1;
- (bool)br_wouldBeExcludedFromSync;
- (bool)brc_isDirectory:(bool*)arg1 isExists:(bool*)arg2 withError:(id*)arg3;
- (id)brc_issueSandboxExtensionOfClass:(const char *)arg1 error:(id*)arg2;

// Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon

- (id)brc_applicationBundleID;
- (id)brc_applicationContainerID;
- (id)brc_applicationName;
- (id)brc_attributesValues:(id)arg1 lookup:(id)arg2;
- (id)brc_iWorkPathExtensions;

// Image: /System/Library/PrivateFrameworks/CloudDocsUI.framework/CloudDocsUI

- (id)_ui_extendedAttributeForKey:(id)arg1;
- (void)_ui_setExtendedAttribute:(id)arg1 forKey:(id)arg2;

// Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary

- (id)cpl_redactedShareURL;
- (id)initWithCPLArchiver:(id)arg1;
- (id)plistArchiveWithCPLArchiver:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI

- (id)CNFQueryDictionary;
- (id)URLByAppendingCNFQueryDictionary:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync

+ (id)_SYTemporaryFileURL:(id*)arg1;
+ (id)_SYURLForNewTemporaryFile:(id*)arg1;

// Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore

+ (id)_cnui_dialRequestURLWithHandle:(id)arg1 contact:(id)arg2 faceTime:(bool)arg3 video:(bool)arg4 ttyType:(long long)arg5 channelIdentifier:(id)arg6;
+ (id)_cnui_expanseURLFutureWithHandle:(id)arg1;
+ (id)_cnui_expanseURLWithHandle:(id)arg1;
+ (id)_cnui_faceTimeAudioURLFutureWithHandle:(id)arg1 contact:(id)arg2;
+ (id)_cnui_faceTimeAudioURLWithHandle:(id)arg1 contact:(id)arg2;
+ (id)_cnui_faceTimeVideoURLFutureWithHandle:(id)arg1 contact:(id)arg2;
+ (id)_cnui_faceTimeVideoURLWithHandle:(id)arg1 contact:(id)arg2;
+ (id)_cnui_mailURLFutureWithHandle:(id)arg1 contact:(id)arg2;
+ (id)_cnui_mailURLWithHandle:(id)arg1 contact:(id)arg2;
+ (id)_cnui_messagesURLFutureWithHandle:(id)arg1 contact:(id)arg2;
+ (id)_cnui_messagesURLWithHandle:(id)arg1 contact:(id)arg2;
+ (id)_cnui_skypeTextURLFutureWithHandle:(id)arg1;
+ (id)_cnui_skypeTextURLWithHandle:(id)arg1;
+ (id)_cnui_skypeVideoURLFutureWithHandle:(id)arg1;
+ (id)_cnui_skypeVideoURLWithHandle:(id)arg1;
+ (id)_cnui_skypeVoiceURLFutureWithHandle:(id)arg1;
+ (id)_cnui_skypeVoiceURLWithHandle:(id)arg1;
+ (id)_cnui_telephonyURLFutureWithHandle:(id)arg1 contact:(id)arg2;
+ (id)_cnui_telephonyURLFutureWithHandle:(id)arg1 contact:(id)arg2 channelIdentifier:(id)arg3;
+ (id)_cnui_telephonyURLWithHandle:(id)arg1 contact:(id)arg2;
+ (id)_cnui_telephonyURLWithHandle:(id)arg1 contact:(id)arg2 channelIdentifier:(id)arg3;
+ (id)_cnui_ttyRelayURLFutureWithHandle:(id)arg1 contact:(id)arg2;
+ (id)_cnui_ttyRelayURLFutureWithHandle:(id)arg1 contact:(id)arg2 channelIdentifier:(id)arg3;
+ (id)_cnui_ttyRelayURLWithHandle:(id)arg1 contact:(id)arg2;
+ (id)_cnui_ttyRelayURLWithHandle:(id)arg1 contact:(id)arg2 channelIdentifier:(id)arg3;
+ (id)_cnui_ttyURLFutureWithHandle:(id)arg1 contact:(id)arg2;
+ (id)_cnui_ttyURLFutureWithHandle:(id)arg1 contact:(id)arg2 channelIdentifier:(id)arg3;
+ (id)_cnui_ttyURLWithHandle:(id)arg1 contact:(id)arg2;
+ (id)_cnui_ttyURLWithHandle:(id)arg1 contact:(id)arg2 channelIdentifier:(id)arg3;
+ (id)_cnui_walletPayURLFutureWithHandle:(id)arg1;
+ (id)_cnui_walletPayURLWithHandle:(id)arg1;
+ (id)log;

// Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit

+ (id)dc_dictionaryFromQueryString:(id)arg1;
+ (id)dc_queryItemsFromQueryDictionary:(id)arg1;
+ (id)dc_queryItemsFromQueryString:(id)arg1;
+ (id)dc_queryStringWithQueryDictionary:(id)arg1;
+ (id)dc_queryStringWithQueryDictionary:(id)arg1 addingPercentEscapes:(bool)arg2;
+ (id)wf_realHomeDirectoryURL;
+ (id)wf_realLibraryDirectoryURL;
+ (id)wf_savedShortcutStatesURL;
+ (id)wf_shortcutsDirectoryURL;

- (id)dc_fragmentQueryDictionary;
- (bool)dc_matchesHost:(id)arg1;
- (id)dc_queryDictionary;
- (id)wfName;
- (id)wf_displayPath;
- (id)wf_displayPathComponents;
- (bool)wf_fileExists;
- (bool)wf_fileHasExtendedAttribute:(id)arg1;
- (bool)wf_fileIsDirectory;
- (bool)wf_fileIsOnSameVolumeAsURL:(id)arg1;
- (bool)wf_fileIsReadable;
- (bool)wf_fileIsShortcutsOwned;
- (bool)wf_fileIsWritable;
- (id)wf_fileSize;
- (bool)wf_isContainedByDirectoryAtURL:(id)arg1;
- (id)wf_localizedDisplayName;
- (bool)wf_proposedFileIsContainedByDirectoryAtURL:(id)arg1;
- (long long)wf_relationshipToDirectoryAtURL:(id)arg1;
- (id)wf_relativePathFromURL:(id)arg1;
- (bool)wf_sandboxAllowsOperation:(const char *)arg1;
- (bool)wf_sandboxAllowsOperation:(const char *)arg1 withAuditToken:(struct { unsigned int x1[8]; })arg2;
- (bool)wf_sandboxAllowsReadingFile;
- (bool)wf_sandboxAllowsReadingFileWithAuditToken:(struct { unsigned int x1[8]; })arg1;
- (bool)wf_sandboxAllowsWritingFile;
- (bool)wf_sandboxAllowsWritingFileWithAuditToken:(struct { unsigned int x1[8]; })arg1;

// Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV

+ (id)CDVDefaultPortForScheme:(id)arg1;
+ (id)CDVURLWithScheme:(id)arg1 host:(id)arg2 port:(id)arg3 path:(id)arg4;
+ (id)CDVURLWithScheme:(id)arg1 user:(id)arg2 password:(id)arg3 host:(id)arg4 port:(id)arg5 path:(id)arg6;

- (id)CDVFileSystemSafePath;
- (bool)CDVIsEqualToURL:(id)arg1;
- (bool)CDVIsSafeRedirectForRequestURL:(id)arg1;
- (id)CDVPassword;
- (id)CDVRawLastPathComponent;
- (id)CDVRawLastPathComponentPreservingEscapes;
- (id)CDVRawPath;
- (id)CDVServerURL;
- (id)CDVServerURLWithPath:(bool)arg1;
- (id)CDVURLByDeletingLastPathComponent;
- (id)CDVURLWithPassword:(id)arg1;
- (id)CDVURLWithPath:(id)arg1;
- (id)CDVURLWithScheme:(id)arg1 userandpass:(id)arg2 host:(id)arg3 port:(id)arg4 path:(id)arg5 parameters:(id)arg6 encodePercents:(bool)arg7;
- (id)CDVURLWithUser:(id)arg1;
- (id)CDVfixedURLByAppendingPathComponent:(id)arg1;
- (id)initWithCDVScheme:(id)arg1 user:(id)arg2 password:(id)arg3 host:(id)arg4 port:(id)arg5 path:(id)arg6 parameterString:(id)arg7 query:(id)arg8 fragment:(id)arg9;
- (id)initWithCDVScheme:(id)arg1 user:(id)arg2 password:(id)arg3 host:(id)arg4 port:(id)arg5 path:(id)arg6 query:(id)arg7 fragment:(id)arg8;

// Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec

+ (struct _NSRange { unsigned long long x1; unsigned long long x2; })parsec_hostAndPortRangeFromURLString:(id)arg1;

- (id)sf_asPunchout;

// Image: /System/Library/PrivateFrameworks/CoreRepairCore.framework/CoreRepairCore

- (id)SHA256DigestData;
- (id)SHA256DigestString;
- (id)SHA384DigestData;

// Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess

+ (id)da_URLWithDirtyString:(id)arg1;
+ (id)da_URLWithScheme:(id)arg1 host:(id)arg2 port:(int)arg3 uri:(id)arg4;
+ (id)da_URLWithScheme:(id)arg1 host:(id)arg2 user:(id)arg3 port:(int)arg4 uri:(id)arg5;
+ (int)da_classicPortForScheme:(id)arg1;

- (id)URLByRemovingLastPathComponent;
- (id)URLWithUsername:(id)arg1;
- (id)URLWithUsername:(id)arg1 withPassword:(id)arg2;
- (id)URLWithoutUsername;
- (bool)da_isEqualToDAVURL:(id)arg1;
- (id)da_leastInfoStringRepresentationRelativeToParentURL:(id)arg1;
- (id)da_pathWithoutTrailingRemovingSlash;
- (id)da_rawPath;
- (id)da_urlByRemovingUsername;
- (id)da_urlBySettingHost:(id)arg1;
- (id)da_urlBySettingHost:(id)arg1 keepUsername:(bool)arg2;
- (id)da_urlBySettingPassword:(id)arg1;
- (id)da_urlBySettingPath:(id)arg1;
- (id)da_urlBySettingPath:(id)arg1 keepUsername:(bool)arg2;
- (id)da_urlBySettingPort:(id)arg1;
- (id)da_urlBySettingPort:(id)arg1 keepUsername:(bool)arg2;
- (id)da_urlBySettingScheme:(id)arg1;
- (id)da_urlBySettingScheme:(id)arg1 keepUsername:(bool)arg2;
- (id)da_urlBySettingUsername:(id)arg1;
- (id)da_urlForLogging;
- (id)uri;

// Image: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI

+ (id)dd_URLWithPotentiallyInvalidURLString:(id)arg1;

- (id)dd_AppleOtherSchemes;
- (id)dd_AppleiTunesSchemes;
- (id)dd_emailFromFacetimeScheme;
- (id)dd_emailFromMailtoScheme;
- (id)dd_emailFromTelScheme;
- (id)dd_emailFromValidSchemes:(id)arg1;
- (id)dd_formattedPhoneNumber;
- (id)dd_handleFromFacetimeSchemeFilteringForEmail:(bool)arg1;
- (bool)dd_hasHosts:(id)arg1 filterKey:(id)arg2 filterValue:(id)arg3;
- (bool)dd_isAnySimpleTelephonyScheme;
- (bool)dd_isAppleApps;
- (bool)dd_isAppleBooks;
- (bool)dd_isAppleMusic;
- (bool)dd_isApplePodcasts;
- (bool)dd_isAppleStore;
- (bool)dd_isAppleTV;
- (bool)dd_isAppleiTunesStore;
- (bool)dd_isCloudLink;
- (bool)dd_isMaps:(bool)arg1;
- (bool)dd_isMaps:(bool)arg1 isDirections:(bool*)arg2;
- (id)dd_phoneNumberFromFacetimeScheme;
- (id)dd_phoneNumberFromTelScheme;
- (id)dd_phoneNumberFromTelSchemeAndExtractBody:(id*)arg1;
- (id)dd_phoneNumberFromValidSchemes:(id)arg1;
- (bool)dd_previewActionSupported;
- (id)dd_productIdentifierFromAppleStoreScheme;
- (id)dd_rdarLinkFromTelScheme;

// Image: /System/Library/PrivateFrameworks/DiagnosticExtensions.framework/DiagnosticExtensions

- (void)accessWithSandboxExtension:(id)arg1 inBlock:(id /* block */)arg2;
- (id)generateSandboxExtensionForProcess:(int)arg1;

// Image: /System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb

+ (id)dnd_defaultSettingsURL;
+ (id)dnd_defaultSetupURL;
+ (id)dnd_settingsURLWithModeIdentifier:(id)arg1;
+ (id)dnd_setupURLWithSemanticType:(long long)arg1;

// Image: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer

+ (id)dnds_assertionSyncMetadataFileURL;
+ (id)dnds_backingStoreRootDirectoryURL;
+ (id)dnds_globalConfigurationBackingStoreFileURL;
+ (id)dnds_idsSyncEngineMetadataFileURL;
+ (id)dnds_legacySettingsFileURL;
+ (id)dnds_localAssertionBackingStoreFileURL;
+ (id)dnds_locationAssertionExplicitRegionFileURL;
+ (id)dnds_locationAssertionUntilExitRegionFileURL;
+ (id)dnds_meDeviceStoreFileURL;
+ (id)dnds_metricsBackingStoreFileURL;
+ (id)dnds_modeConfigurationsBackingStoreFileURL;
+ (id)dnds_modeConfigurationsSecureBackingStoreFileURL;
+ (id)dnds_placeholderModesLocalBackingStoreFileURL;
+ (id)dnds_rootDirectoryURL;
+ (id)dnds_settingsBackingStoreFileURL;
+ (id)dnds_syncEngineLastChanceFileURL;
+ (id)dnds_syncEngineMetadataFileURL;

// Image: /System/Library/PrivateFrameworks/Email.framework/Email

+ (id)em_mailToFromQueryItemKey;

- (id)em_internalMessageID;
- (bool)em_isAccountURL;
- (bool)em_isInternalMessageURL;
- (bool)em_isMailboxURL;
- (bool)em_isMessageURL;
- (id)em_messageIDHeader;

// Image: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation

+ (id)ef_accountAllowedCharacterSet;
+ (id)ef_defaultAllowedCharacterSet;
+ (id)ef_gmailAuthAllowedCharacterSet;
+ (id)ef_messageAllowedCharacterSet;
+ (id)ef_urlWithString:(id)arg1;
+ (id)ef_yahooAuthAllowedCharacterSet;

- (id)ef_URLByAppendingPathComponent:(id)arg1;
- (id)ef_URLByAppendingPathComponent:(id)arg1 isDirectory:(bool)arg2;
- (id)ef_URLByAppendingTimestampedPathComponent:(id)arg1 withExtension:(id)arg2;
- (id)ef_caseNormalizedURL;
- (bool)ef_hasHost:(id)arg1;
- (bool)ef_hasScheme:(id)arg1;
- (id)ef_highLevelDomain;
- (id)ef_hostNilForEmpty;
- (bool)ef_isEligibleForRichLink;
- (bool)ef_isHTTPOrHTTPSURL;
- (id)ef_lastPathComponent;
- (id)ef_urlByAddingPrefixToScheme:(id)arg1;
- (id)ef_urlByAddingSchemeIfNeeded;
- (id)ef_urlByRemovingPrefixFromScheme:(id)arg1;
- (id)ef_urlByReplacingSchemeWithScheme:(id)arg1;

// Image: /System/Library/PrivateFrameworks/FMCoreLite.framework/FMCoreLite

- (id)fm_preferencesPathURLForDomain:(id)arg1;
- (id)preferencesPathURLForDomain:(id)arg1;

// Image: /System/Library/PrivateFrameworks/FamilyCircle.framework/FamilyCircle

- (id)fa_URLByAddingAirdropInviteParams;
- (id)fa_URLByAddingQueryParams:(id)arg1;

// Image: /System/Library/PrivateFrameworks/FeedbackCore.framework/FeedbackCore

- (bool)handlesLogin;

// Image: /System/Library/PrivateFrameworks/Fitness.framework/Fitness

+ (id)_launchURLWithHostname:(id)arg1 workoutIdentifier:(id)arg2;
+ (id)fi_endWorkoutURLWithIdentifier:(id)arg1;
+ (id)fi_pauseWorkoutURLWithIdentifier:(id)arg1;
+ (id)fi_startBackdatedWorkoutURLWithDate:(id)arg1 workoutIdentifier:(id)arg2 workoutType:(unsigned long long)arg3 isIndoor:(bool)arg4 swimmingLocationType:(long long)arg5 showPicker:(bool)arg6;

// Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI

+ (id)_launchURLWithHostname:(id)arg1 workoutIdentifier:(id)arg2;
+ (id)fiui_URLDistanceUnit;
+ (id)fiui_URLEnergyUnit;
+ (id)fiui_URLTimeUnit;
+ (id)fiui_workoutInitiationURLWithWorkout:(id)arg1 presentConfiguration:(bool)arg2 skipCountdown:(bool)arg3;
+ (id)fiui_workoutPickerURL;
+ (id)fiui_workoutPickerURLComponents;

// Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation

+ (id)_gkGenerateFriendRequestURL:(id)arg1;

- (bool)_gkIsSecure;
- (bool)_gkIsValidServerURL;
- (id)_gkURLByAddingQueryParameters:(id)arg1;
- (id)_gkURLByReplacingSchemeWithScheme:(id)arg1;
- (id)cacheKeyRepresentation;

// Image: /System/Library/PrivateFrameworks/GenerationalStorage.framework/GenerationalStorage

- (id)gs_URLByUpdatingPathExtensionWithPathOrURL:(id)arg1;
- (void)gs_chmod:(unsigned short)arg1;
- (id)gs_issueExtension:(const char *)arg1 error:(id*)arg2;
- (id)gs_issueReadExtensionIfNeededForAuditToken:(struct { unsigned int x1[8]; })arg1;

// Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices

+ (id)_geo_URLWithString:(id)arg1 tokenSubstitutions:(id)arg2;

// Image: /System/Library/PrivateFrameworks/HealthAppServices.framework/HealthAppServices

- (id)_hk_appendProfileIdentifier:(id)arg1;

// Image: /System/Library/PrivateFrameworks/HealthRecordServices.framework/HealthRecordServices

- (id)hrs_URLByExpandingReference:(id)arg1;
- (id)hrs_fhirResourcePathComponentsAgainstBaseURL:(id)arg1;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

+ (id)_localeString;
+ (id)hf_allowAccessWhileLockedSettingsURL;
+ (id)hf_appStoreURLForBundleIdentifier:(id)arg1;
+ (id)hf_applePrivacyURL;
+ (id)hf_cameraRecordingURL;
+ (id)hf_faceRecognitionPrivacyURL;
+ (id)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;
+ (id)hf_homeHubRequiredLearnMoreURL;
+ (id)hf_learnAboutActivityLogsURL;
+ (id)hf_learnAboutNetworkProtectionURL;
+ (id)hf_learnAboutNetworksRequiringProfilesURL;
+ (id)hf_learnAboutUnshareableNetworksURL;
+ (id)hf_learnToAddAccessoriesURL;
+ (id)hf_learnToUpdateAppleTVURL;
+ (id)hf_locationDeviceSettingsURL;
+ (id)hf_locationFromURL:(id)arg1;
+ (id)hf_locationServicesSettingsURL;
+ (id)hf_losslessURL;
+ (id)hf_matterAccessoriesInSettingsApp;
+ (id)hf_notificationSettingsURL;
+ (id)hf_openiCloudKeychainPreferences;
+ (id)hf_openiCloudPasswordAndSecurityURL;
+ (id)hf_openiCloudPreferencesURL;
+ (id)hf_photosLibraryPeopleAlbumURL;
+ (id)hf_setupHomeHubLearnMoreURL;
+ (id)hf_systemSoftwareUpdate;
+ (id)hf_threadNetworkRequiredLearnMoreURL;
+ (id)hf_wifiSettingsURL;

- (bool)hf_isHomeKnowledgeBasedArticleURL;

// Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI

+ (id)_localeString;
+ (id)hu_allowAccessWhileLockedSettingsURL;
+ (id)hu_appStoreURLForBundleIdentifier:(id)arg1;
+ (id)hu_applePrivacyURL;
+ (id)hu_cameraRecordingURL;
+ (id)hu_faceRecognitionPrivacyURL;
+ (id)hu_learnAboutNetworkProtectionURL;
+ (id)hu_learnAboutNetworksRequiringProfilesURL;
+ (id)hu_learnAboutUnshareableNetworksURL;
+ (id)hu_learnToAddAccessoriesURL;
+ (id)hu_locationDeviceSettingsURL;
+ (id)hu_locationServicesSettingsURL;
+ (id)hu_losslessURL;
+ (id)hu_notificationSettingsURL;
+ (id)hu_openiCloudKeychainPreferences;
+ (id)hu_openiCloudPreferencesURL;
+ (id)hu_photosLibraryPeopleAlbumURL;
+ (id)hu_wifiSettingsURL;

- (bool)hu_isHomeKnowledgeBasedArticleURL;

// Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation

- (id)__imURLByAppendingQueryString:(id)arg1;

// Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities

+ (id)__im_URLForChatIdentifier:(id)arg1 entryBody:(id)arg2;
+ (id)__im_URLForChatIdentifier:(id)arg1 entryBody:(id)arg2 messageGUID:(id)arg3;

- (id)__im_WillNotLaunchComposeUI;
- (bool)__im_conformsToDomain:(id)arg1;
- (bool)__im_conformsToDomain:(id)arg1 domainExtension:(id)arg2;
- (id)im_URLByAppendingPathComponents:(id)arg1;
- (id)im_lastPathComponent;

// Image: /System/Library/PrivateFrameworks/IconFoundation.framework/IconFoundation

+ (id)coreGlyphsBundleURL;
+ (id)coreGlyphsPrivateBundleURL;

- (id)_IF_attributeModifiedDate;
- (bool)_IF_conformsToUTI:(id)arg1;
- (id)_IF_contentModifiedDate;
- (id)_IF_extendedAttributeForName:(id)arg1;
- (long long)_IF_fileSize;
- (bool)_IF_getResourceValue:(out id*)arg1 forKey:(id)arg2 error:(out id*)arg3;
- (bool)_IF_isAliasFile;
- (bool)_IF_isBootVolume;
- (bool)_IF_isDirectory;
- (bool)_IF_isOnBootVolume;
- (bool)_IF_isSymLink;
- (bool)_IF_isVolume;
- (id)_IF_modifiedDate;
- (bool)_IF_setExtendedAttribute:(id)arg1 forName:(id)arg2 error:(id*)arg3;
- (id)_IF_typeIdentifier;
- (id)_IF_volumeURL;

// Image: /System/Library/PrivateFrameworks/IconServices.framework/IconServices

+ (bool)__is__isNetBoot;
+ (unsigned int)__is__volumeTypeCodeFromURLProperties:(id)arg1;
+ (id)__is_coreTypesURL;
+ (id)_is_unregisteredPersonlityFileExtensions;

- (id)_IS_dataContainerIconDecoration;
- (id)_IS_dataContainerIconResource;
- (bool)_IS_isDataContainer;
- (bool)__has_ResourceFork;
- (id)__is__attributeModifiedDate;
- (bool)__is__conformsToUTI:(id)arg1;
- (id)__is__contentModifiedDate;
- (bool)__is__getResourceValue:(out id*)arg1 forKey:(id)arg2 error:(out id*)arg3;
- (bool)__is__isAliasFile;
- (bool)__is__isDirectory;
- (bool)__is__isPackage;
- (bool)__is__isSymLink;
- (bool)__is__isVolume;
- (id)__is__modifiedDate;
- (unsigned int)__is__volumeTypeCode;
- (unsigned char)__is_accessFlags;
- (id)__is_canonicalURL;
- (bool)__is_fileExists;
- (bool)__is_hasFileExtension:(id)arg1;
- (bool)__is_isAppExtension;
- (bool)__is_isApplication;
- (bool)__is_isBootVolume;
- (bool)__is_isBundleWithUnregisteredPersonality;
- (bool)__is_isOnBootVolume;
- (bool)__is_locked;
- (unsigned int)__is_packageTypeCode;
- (id)__is_resourceValuesForKeys:(id)arg1 error:(id*)arg2;
- (id)__is_typeIdentifier;
- (id)__is_volumeURL;

// Image: /System/Library/PrivateFrameworks/InstallCoordination.framework/InstallCoordination

- (id)urlByAppendingPathComponents:(id)arg1 lastIsDirectory:(bool)arg2;

// Image: /System/Library/PrivateFrameworks/InstalledContentLibrary.framework/InstalledContentLibrary

- (id)MI_URLByAppendingPathComponents:(id)arg1 lastIsDirectory:(bool)arg2;
- (id)MI_allAccessURLs;

// Image: /System/Library/PrivateFrameworks/IntentsFoundation.framework/IntentsFoundation

- (bool)if_isContainedByDirectoryAtURL:(id)arg1;

// Image: /System/Library/PrivateFrameworks/LinkServices.framework/LinkServices

- (id)ln_sandboxExtendedURLWithAuditToken:(struct { unsigned int x1[8]; })arg1;

// Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration

- (id)normalizedURL;

// Image: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit

+ (id)userCachesDirectoryURL:(bool)arg1;

// Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore

+ (id)payloadValueFromJSONValue:(id)arg1;

- (id)mpc_jsonValue;

// Image: /System/Library/PrivateFrameworks/Message.framework/Message

- (id)mf_firstPartNumber;
- (bool)mf_isResourceURL;
- (bool)mf_isValidAttachmentURL;
- (id)mf_lastPartNumber;
- (id)mf_partNumbers;
- (long long)mf_rowID;

// Image: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy

- (id)mf_firstPartNumber;
- (bool)mf_isResourceURL;
- (bool)mf_isValidAttachmentURL;
- (id)mf_lastPartNumber;
- (id)mf_partNumbers;
- (unsigned int)mf_rowID;

// Image: /System/Library/PrivateFrameworks/MobileInstallation.framework/MobileInstallation

- (id)MI_URLByAppendingPathComponents:(id)arg1 lastIsDirectory:(bool)arg2;
- (id)MI_allAccessURLs;

// Image: /System/Library/PrivateFrameworks/MobileStoreDemoKit.framework/MobileStoreDemoKit

+ (id)fileURLWithString:(id)arg1;

// Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer

+ (id)mtURLForClockAppSection:(long long)arg1;
+ (id)mtURLForClockAppSection:(long long)arg1 timerManager:(id)arg2;
+ (id)mtURLForScheme:(id)arg1;
+ (id)mtURLForSection:(long long)arg1;
+ (id)schemeForSection:(long long)arg1;

- (long long)mtClockAppSection;
- (id)mtID;
- (bool)mtIsForLastTimer;
- (bool)mtIsList;

// Image: /System/Library/PrivateFrameworks/NanoTimeKit.framework/NanoTimeKit

+ (id)nwcCurrentLocationURL;
+ (id)nwcCurrentLocationURLForLatitude:(double)arg1 longitude:(double)arg2;
+ (id)nwcCurrentLocationURLForLocation:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore

- (void)nu_updateDigest:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore

+ (id)fc_NewsURLForArticleID:(id)arg1 hardPaywall:(bool)arg2;
+ (id)fc_NewsURLForTagID:(id)arg1;
+ (id)fc_NewsURLWithPathComponents:(id)arg1 withScheme:(id)arg2;
+ (id)fc_URLWithResourceID:(id)arg1;
+ (id)fc_safeURLWithString:(id)arg1;
+ (id)fc_secureNewsURLForArticleID:(id)arg1 hardPaywall:(bool)arg2;

- (bool)_isFeldsparOldArticleURL;
- (bool)_isFeldsparOldChannelURL;
- (bool)_isFeldsparOldTopicURL;
- (id)fc_NewsArticleID;
- (id)fc_NewsArticleIDs;
- (id)fc_NewsIssueID;
- (id)fc_URLByAddingQueryItem:(id)arg1;
- (id)fc_URLByDeletingFragment;
- (id)fc_URLByDeletingQuery;
- (bool)fc_directoryExists;
- (id)fc_feldsparTagID;
- (bool)fc_hasValidArticleComponents;
- (bool)fc_isEqualToURL:(id)arg1;
- (bool)fc_isFeldsparInterstitialPreviewURL;
- (bool)fc_isHTTPScheme;
- (bool)fc_isHardPaywallNewsArticleURL:(out id*)arg1;
- (bool)fc_isNewsArticleURL;
- (bool)fc_isNewsIssueURL;
- (bool)fc_isNewsTagURL;
- (bool)fc_isNewsURL;
- (bool)fc_isResourceURL;
- (bool)fc_isStocksURL;
- (bool)fc_isStoreURL;
- (bool)fc_isWebArchiveURL;
- (bool)fc_isWebOptInURL;
- (id)fc_resourceID;

// Image: /System/Library/PrivateFrameworks/NewsServicesInternal.framework/NewsServicesInternal

+ (id)nss_MarketingPageURL;
+ (id)nss_NewsURLForArticleID:(id)arg1;
+ (id)nss_NewsURLForArticleID:(id)arg1 internal:(bool)arg2 targetIsVideo:(bool)arg3 hardPaywall:(bool)arg4;
+ (id)nss_NewsURLForArticleID:(id)arg1 routeURL:(id)arg2;
+ (id)nss_NewsURLForArticleID:(id)arg1 targetIsVideo:(bool)arg2;
+ (id)nss_NewsURLForArticleID:(id)arg1 title:(id)arg2;
+ (id)nss_NewsURLForFavoritesPicker;
+ (id)nss_NewsURLForForYou;
+ (id)nss_NewsURLForHistory;
+ (id)nss_NewsURLForIssueID:(id)arg1;
+ (id)nss_NewsURLForMagazines;
+ (id)nss_NewsURLForManageNotifications;
+ (id)nss_NewsURLForMyMagazines;
+ (id)nss_NewsURLForMySports;
+ (id)nss_NewsURLForMySportsHighlights;
+ (id)nss_NewsURLForMySportsScores;
+ (id)nss_NewsURLForPuzzle;
+ (id)nss_NewsURLForPuzzleHub;
+ (id)nss_NewsURLForPuzzleID:(id)arg1;
+ (id)nss_NewsURLForPuzzleTypeID:(id)arg1;
+ (id)nss_NewsURLForSaved;
+ (id)nss_NewsURLForTagID:(id)arg1;
+ (id)nss_NewsURLForTagID:(id)arg1 feedConfiguration:(unsigned long long)arg2;
+ (id)nss_NewsURLForWebLinkURL:(id)arg1;
+ (id)nss_NewsURLWithPathComponents:(id)arg1 internal:(bool)arg2;
+ (id)nss_NewsURLWithPathComponents:(id)arg1 queryItems:(id)arg2 internal:(bool)arg3;

- (id)_nss_URLByAppendingQueryItem:(id)arg1;
- (id)_nss_valueForQueryParameterWithKey:(id)arg1;
- (id)nss_URLWithCampaignID:(id)arg1;
- (id)nss_URLWithVideoTarget:(bool)arg1;
- (id)nss_campaignID;
- (bool)nss_hasRefreshParameter;
- (bool)nss_isAudioURL;
- (bool)nss_isNewsArticleURL;
- (bool)nss_isNewsArticleVideoURL;
- (bool)nss_isNewsTagURL;
- (bool)nss_isNewsURL;
- (bool)nss_isStocksURL;
- (bool)nss_isSubscribeURL;

// Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI

+ (bool)nu_canHandleNavigationAction:(id)arg1;
+ (id)nu_sanitizedURLForWebView:(id)arg1 navigationAction:(id)arg2;

- (id)nu_deepLinkURL;
- (bool)nu_handleExternalURLWithPrompt;

// Image: /System/Library/PrivateFrameworks/NewsURLBucket.framework/NewsURLBucket

- (id)nb_bridged_domain;
- (id)nb_domain;

// Image: /System/Library/PrivateFrameworks/NewsURLResolution.framework/NewsURLResolution

- (bool)nr_isNewsURL;
- (bool)nr_isWebURL;

// Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared

- (id)URLByDeletingFragment;
- (id)fileSize;

// Image: /System/Library/PrivateFrameworks/NotesSupport.framework/NotesSupport

+ (id)ic_urlFromWeblocFileAtURL:(id)arg1;

- (id)ic_UTI;
- (id)ic_dedupedURLWithProhibitedNames:(id)arg1;
- (long long)ic_fileSize;
- (bool)ic_isAppStoreURL;
- (bool)ic_isBooksURL;
- (bool)ic_isExcludedFromBackups;
- (bool)ic_isExcludedFromCloudBackups;
- (bool)ic_isMapURL;
- (bool)ic_isNewsURL;
- (bool)ic_isPodcastsURL;
- (bool)ic_isReachable;
- (bool)ic_isSafeFileURLForAttachment;
- (bool)ic_isSupportedAsAttachment;
- (bool)ic_isURLAnInternetLocator;
- (bool)ic_isWebURL;
- (bool)ic_isiTunesURL;
- (id)ic_uniquedURL;
- (void)ic_updateFlagToExcludeFromBackup:(bool)arg1;
- (void)ic_updateFlagToExcludeFromBackupNow:(bool)arg1;

// Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport

+ (id)URLWithPackagePart:(id)arg1;
+ (id)tsu_fileURLWithPath:(id)arg1;

- (id)URL;
- (bool)_isShareRole:(out bool*)arg1 role:(id)arg2 error:(id*)arg3;
- (id)initWithPackagePart:(id)arg1;
- (bool)isInternalToPackage;
- (id)tsu_displayName;
- (bool)tsu_displayName:(out id*)arg1 error:(id*)arg2;
- (id)tsu_documentIdentifier;
- (id)tsu_fileProviderBookmarkableString;
- (unsigned long long)tsu_fileSize;
- (bool)tsu_fileSize:(out unsigned long long*)arg1 error:(id*)arg2;
- (id)tsu_fileSystemTypeName;
- (id)tsu_fileTypeIdentifierHandlingFileCoordinationPromises;
- (bool)tsu_isDocumentUploaded;
- (bool)tsu_isDocumentUploaded:(out bool*)arg1 error:(id*)arg2;
- (bool)tsu_isFileSizeTooLargeForSharing;
- (bool)tsu_isInTrash;
- (bool)tsu_isOnAPFSVolume;
- (bool)tsu_isOnForeignVolume;
- (bool)tsu_isOnSameVolumeAs:(id)arg1;
- (bool)tsu_isShareCollaborator;
- (bool)tsu_isShareCollaborator:(out bool*)arg1 error:(id*)arg2;
- (bool)tsu_isShareOwner;
- (bool)tsu_isShareOwner:(out bool*)arg1 error:(id*)arg2;
- (bool)tsu_isShared;
- (bool)tsu_isShared:(out bool*)arg1 error:(id*)arg2;
- (void)tsu_performSecurityScopedResourceAccessAsynchronouslyUsingBlock:(id /* block */)arg1;
- (void)tsu_performSecurityScopedResourceAccessUsingBlock:(id /* block */)arg1;
- (id)tsu_reachableFileURLByDeletingUnreachablePathComponents;
- (void)tsu_removeCachedResourceValueForKeys:(id)arg1;
- (bool)tsu_setNeedsDocumentIdentifierAndReturnError:(out id*)arg1;
- (id)tsu_shareOwnerName;
- (bool)tsu_shareOwnerName:(out id*)arg1 error:(id*)arg2;

// Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore

- (bool)isAppleURL;

// Image: /System/Library/PrivateFrameworks/Pasteboard.framework/Pasteboard

- (bool)_pb_isDirectory;
- (bool)_pb_isFileProvider;

// Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices

- (id)pl_redactedShareURL;

// Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore

+ (id)px_openCameraAppURL;
+ (id)px_tempDirectoryFileURLWithFileName:(id)arg1 subdirectory:(id)arg2 fileExtension:(id)arg3;
+ (id)px_tempDirectoryFileURLWithSubdirectory:(id)arg1 fileExtension:(id)arg2;

- (id)px_URLByAppendingPathComponentFollowedByCurrentDateAndTime:(id)arg1;

// Image: /System/Library/PrivateFrameworks/PodcastsFoundation.framework/PodcastsFoundation

+ (id)dictionaryToEscapedQueryString:(id)arg1;
+ (id)percentEncodedStringToDictionary:(id)arg1;

- (id)URLByAppendingHashString:(id)arg1;
- (id)URLByAppendingQueryParameterKey:(id)arg1 value:(id)arg2;
- (id)URLByAppendingQueryParameters:(id)arg1;
- (id)URLByAppendingQueryString:(id)arg1;
- (id)URLByRemovingQueryParameters:(id)arg1;
- (id)URLByReplacingWithScheme:(id)arg1;
- (id)_lastModDateFormatter;
- (long long)cleanUrlToChannelStoreId;
- (id)cleanUrlToEpisodeGuid;
- (long long)cleanUrlToStoreId;
- (long long)cleanUrlToStoreTrackId;
- (id)components;
- (id)href;
- (id)im_jsonSerializableValue;
- (bool)isHLSPlaylist;
- (bool)isHLSPlaylistObjC;
- (bool)isPackagedMedia;
- (bool)isPackagedMediaObjC;
- (id)lastModifiedDateOfResource;
- (id)queryAsDictionary;
- (int)setXattr:(id)arg1 named:(id)arg2;
- (id)unescapedPath;
- (id)xattrNamed:(id)arg1;

// Image: /System/Library/PrivateFrameworks/PosterBoard.framework/PosterBoard

+ (id)pbf_URLsMatchingFileName:(id)arg1 beneathURL:(id)arg2 error:(out id*)arg3;
+ (id)pbf_archivedDataStoreBaseURL;
+ (id)pbf_dataStoreExtensionContainerURLForBaseURL:(id)arg1 version:(unsigned long long)arg2;
+ (id)pbf_dataStoreExtensionContainerURLForVersionDataStoreURL:(id)arg1;
+ (id)pbf_dataStoreExtensionPurgatoryURLForBaseURL:(id)arg1 version:(unsigned long long)arg2;
+ (id)pbf_dataStoreSQLiteDatabaseURLForBaseURL:(id)arg1 version:(unsigned long long)arg2;
+ (id)pbf_dataStoreSQLiteDatabaseURLForDataStoreURL:(id)arg1;
+ (id)pbf_dataStoreURLForBaseURL:(id)arg1 version:(unsigned long long)arg2;
+ (id)pbf_dataStoreVersionContainingURLForBaseURL:(id)arg1;
+ (id)pbf_descriptorIdentifierURLForType:(long long)arg1 identifierURL:(id)arg2;
+ (id)pbf_galleryCacheURLForBaseURL:(id)arg1 version:(unsigned long long)arg2;
+ (id)pbf_manifestURLInContainerURL:(id)arg1;
+ (id)pbf_providerInfoFileURLForIdentifierURL:(id)arg1;
+ (id)pbf_roleIdentifierURLForType:(long long)arg1 identifierURL:(id)arg2;
+ (id)pbf_snapshotURLForPath:(id)arg1 definition:(id)arg2 configuredProperties:(id)arg3 context:(id)arg4;
+ (id)pbf_switcherConfigurationOrderingURLForBaseURL:(id)arg1 version:(unsigned long long)arg2;
+ (id)pbf_switcherConfigurationOrderingURLForDataStoreURL:(id)arg1;
+ (id)pbf_switcherSelectedConfigurationURLForBaseURL:(id)arg1 version:(unsigned long long)arg2;
+ (id)pbf_switcherSelectedConfigurationURLForDataStoreURL:(id)arg1;
+ (id)pbf_temporaryDirectoryURL;
+ (id)pbf_versionsURLForIdentifierURL:(id)arg1;

- (bool)pbf_URLConformsToExpectedResourceValues:(id)arg1 error:(out id*)arg2;
- (bool)pbf_URLIsReachableAndConformToResourceValues:(id)arg1 error:(out id*)arg2;
- (bool)pbf_URLIsReachableAndConformsToAttributeValues:(id)arg1 error:(out id*)arg2;
- (bool)pbf_allowSuspendWithOpenFileHandle;
- (id)pbf_creationDate;
- (id)pbf_displayContextForPosterSnapshotURL;
- (id)pbf_fileProtectionType;
- (bool)pbf_isConfigurationSnapshotURL;
- (bool)pbf_isDirectory;
- (bool)pbf_isExcludedFromBackup;
- (bool)pbf_isGallerySnapshotURL;
- (bool)pbf_isPosterSnapshot;
- (bool)pbf_isPurgable;
- (bool)pbf_recursivelyUpdateFileAttributes:(id)arg1 error:(out id*)arg2;
- (bool)pbf_recursivelyUpdateResourceValues:(id)arg1 error:(out id*)arg2;
- (bool)pbf_recursivelyValidateContentsAreReachableAndConformToAttributeValues:(id)arg1 URLsNotConformingToAttributes:(out id*)arg2 error:(out id*)arg3;
- (bool)pbf_recursivelyValidateContentsAreReachableAndConformToResourceValues:(id)arg1 URLsNotConformingToAttributes:(out id*)arg2 error:(out id*)arg3;
- (bool)pbf_setAllowSuspendWithOpenFileHandle:(bool)arg1 error:(out id*)arg2;
- (bool)pbf_setExcludedFromBackup:(bool)arg1 error:(out id*)arg2;
- (bool)pbf_setFileProtection:(id)arg1 error:(out id*)arg2;
- (bool)pbf_setPurgable:(bool)arg1 error:(out id*)arg2;
- (id)pbf_snapshotDefinitionForPosterSnapshotURL;
- (bool)pbf_unarchiveToURL:(id)arg1 error:(out id*)arg2;
- (bool)pbf_updateFileAttributes:(id)arg1 error:(out id*)arg2;
- (bool)pbf_updateResourceValues:(id)arg1 error:(out id*)arg2;

// Image: /System/Library/PrivateFrameworks/PosterBoardServices.framework/PosterBoardServices

+ (id)prs_posterPathContentsURLForInstanceURL:(id)arg1;
+ (id)prs_posterPathContentsURLForProviderURL:(id)arg1 type:(long long)arg2 posterUUID:(id)arg3 version:(unsigned long long)arg4;
+ (id)prs_posterPathIdentifierURLProviderURL:(id)arg1 type:(long long)arg2 posterUUID:(id)arg3;
+ (id)prs_posterPathInstanceURLForProviderURL:(id)arg1 type:(long long)arg2 posterUUID:(id)arg3 version:(unsigned long long)arg4;
+ (id)prs_posterPathInstanceURLForVersionsURL:(id)arg1 version:(unsigned long long)arg2;
+ (id)prs_posterPathSupplementContainerURLForInstanceURL:(id)arg1;
+ (id)prs_posterPathSupplementURLForInstanceURL:(id)arg1 supplement:(unsigned long long)arg2;
+ (id)prs_posterPathTypeURLForProviderURL:(id)arg1 type:(long long)arg2;
+ (id)prs_posterPathVersionsURLForProviderURL:(id)arg1 type:(long long)arg2 posterUUID:(id)arg3;

- (bool)prs_isPosterSnapshot;
- (id)prs_loadFromPlistWithError:(out id*)arg1;
- (bool)prs_storeToPlist:(id)arg1 error:(out id*)arg2;

// Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo

+ (id)motionBundleURLFromMotionDocURL:(id)arg1;

- (id)OZ_imageSequenceURLs;
- (bool)OZ_isImageSequenceURL;
- (bool)isEditableMotionProjectURL:(out id*)arg1;
- (bool)isMotionBundle;
- (id)oz_relativePathFromURL:(id)arg1;

// Image: /System/Library/PrivateFrameworks/PromotedContentProxy.framework/PromotedContentProxy

- (id)changeSchemeTo:(long long)arg1;
- (id)changeSchemeToString:(id)arg1;
- (bool)isHTTP;
- (id)queryItemForKey:(id)arg1;
- (id)removeQueryItemForKey:(id)arg1;
- (id)removeVideoAdIdentifier;
- (id)setQueryItem:(id)arg1 forKey:(id)arg2;
- (id)videoAdIdentifier;

// Image: /System/Library/PrivateFrameworks/QuickLookThumbnailingDaemon.framework/QuickLookThumbnailingDaemon

- (bool)qlt_getDeviceIdentifier:(int*)arg1;
- (bool)qlt_getDocumentIdentifier:(unsigned int*)arg1;
- (bool)qlt_getVolumeUUID:(unsigned char)arg1;

// Image: /System/Library/PrivateFrameworks/QuickLookUICore.framework/QuickLookUICore

+ (id)_QLCreateTemporaryDirectory:(id*)arg1;
+ (id)_QLCreateTemporaryDirectoryForOriginalFileAtURL:(id)arg1 error:(id*)arg2;
+ (id)_QLTemporaryFileURLWithType:(id)arg1 filename:(id)arg2;
+ (void)_QLTemporaryFileURLWithType:(id)arg1 forOriginalFileAtURL:(id)arg2 temporaryFileURL:(id*)arg3 temporaryDirectoryURL:(id*)arg4 fallbackUUID:(id)arg5;
+ (id)_QLTemporaryFileURLWithType:(id)arg1 uuid:(id)arg2;

- (bool)_QLDownloadingStatusIsNotCurrent;
- (bool)_QLIsHiddenFile;
- (bool)_QLIsPackageURL;
- (id)_QLSingleFileSizeForURL:(id)arg1;
- (id)_QLUrlFileSize;

// Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine

- (unsigned long long)re_actionIdentifierHashValue;

// Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit

- (id)rem_URLByAppendingReminderDataContainerPathComponent;

// Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI

- (bool)rui_isSupportedNativeURL;
- (bool)rui_isSupportedSafariURL;

// Image: /System/Library/PrivateFrameworks/SOS.framework/SOS

- (bool)isSOS;
- (id)sos_urlActivationReason;

// Image: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore

+ (id)safari_URLWithUserTypedString:(id)arg1;
+ (void)safari_enumeratePossibleURLsForUserTypedString:(id)arg1 withBlock:(id /* block */)arg2;
+ (struct _NSRange { unsigned long long x1; unsigned long long x2; })safari_hostAndPortRangeFromUserTypedString:(id)arg1;

- (id)_labelsOfDomainWithoutWWWOrMSubdomains:(id)arg1;
- (id)safari_URLByRemovingUserPasswordPathQueryAndFragment;
- (id)safari_URLByReplacingSchemeWithString:(id)arg1;
- (id)safari_canonicalURL;
- (id)safari_displayNameForFile;
- (bool)safari_hasSameOriginAsURL:(id)arg1;
- (bool)safari_hasSameOriginAsURL:(id)arg1 relaxingWWW:(bool)arg2;
- (bool)safari_hasSameSiteAsURL:(id)arg1;
- (bool)safari_isEligibleforDirectSSO;
- (bool)safari_isHTTPFamilyURL;
- (bool)safari_isSubdomainOfDomain:(id)arg1;
- (bool)safari_isWellKnownChangePasswordURL;
- (id)safari_wellKnownChangePasswordURL;

// Image: /System/Library/PrivateFrameworks/SafariSafeBrowsing.framework/SafariSafeBrowsing

- (id)ssb_canonicalizeURL;
- (bool)ssb_hasUserInfo;
- (id)ssb_hashes;
- (bool)ssb_isSafeURL;

// Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared

+ (id)safari_URLForReadingListItemWithUUIDString:(id)arg1;
+ (id)safari_URLWithDataAsString:(id)arg1;
+ (id)safari_URLWithDataAsString:(id)arg1 relativeToURL:(id)arg2;
+ (id)safari_URLWithUserTypedString:(id)arg1;
+ (id)safari_aboutBlankURL;
+ (id)safari_readingListURL;

- (id)safari_URLByDeletingUserAndPassword;
- (id)safari_URLByNormalizingSafariSpecificURL;
- (id)safari_URLByRemovingAllParameters;
- (id)safari_URLByReplacingHostWithString:(id)arg1;
- (id)safari_URLWithUniqueFilename;
- (id)safari_canonicalURLForStartPage;
- (id)safari_composedIdentifierAndProfileIdentifierInSafariWebExtensionURL;
- (id)safari_defaultStatusMessageString;
- (id)safari_displayNameWithTitle:(id)arg1;
- (id)safari_fileType;
- (bool)safari_hasCharactersBeyondPath;
- (bool)safari_hasCustomScheme;
- (bool)safari_hasLocalScheme;
- (bool)safari_hasScheme:(id)arg1;
- (bool)safari_hasUserOrPassword;
- (id)safari_identityPreferenceDomain;
- (bool)safari_isAboutBlankURL;
- (bool)safari_isBlobURL;
- (bool)safari_isDataURL;
- (bool)safari_isEligibleToBeOpenedByServiceWorkers;
- (bool)safari_isEligibleToShowNotSecureWarning;
- (bool)safari_isEqualOrHasSameHighLevelDomainAsURL:(id)arg1;
- (bool)safari_isEqualToURL:(id)arg1;
- (bool)safari_isHTTPSURL;
- (bool)safari_isHTTPURL;
- (bool)safari_isJavaScriptURL;
- (bool)safari_isLocalOrPrivateNetworkURL;
- (bool)safari_isMailtoURL;
- (bool)safari_isOTPAuthMigrationURL;
- (bool)safari_isOTPAuthURL;
- (bool)safari_isReadingListURL;
- (bool)safari_isSafariExtensionURL;
- (bool)safari_isSafariResourceURL;
- (bool)safari_isSafariSpecificURL;
- (bool)safari_isSafariWebExtensionURL;
- (bool)safari_isSecureURL;
- (bool)safari_isSharedTabGroupURL;
- (bool)safari_isTelURL;
- (bool)safari_isTopLevelURL;
- (bool)safari_isURLTooLongToDisplay;
- (id)safari_mailtoURLStatusMessage;
- (id)safari_originalDataAsString;
- (id)safari_path;
- (id)safari_readingListItemUUIDString;
- (id)safari_relativePathToURL:(id)arg1;
- (bool)safari_shouldBeAssociatedWithFaviconFromRedirectedURL:(id)arg1;
- (id)safari_simplifiedURLStringForDeduping;
- (id)safari_stringForListDisplay;
- (id)safari_stringForListDisplayWithAdditionalSimplificationOptions:(unsigned long long)arg1;
- (id)safari_userVisibleHost;
- (id)safari_userVisibleHostOrExtensionDisplayName;
- (id)safari_userVisibleHostWithoutWWWSubdomain;
- (id)safari_userVisibleHostWithoutWWWSubdomainIfSecure;
- (id)safari_userVisibleString;
- (id)safari_userVisibleStringConsideringLongURLs;
- (id)safari_wellKnownResponseCodeReliabilityURL;

// Image: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI

- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_safari_rangeOfUserInfoInUserVisibleString;
- (id)safari_attributedStringWithSimplificationOptions:(unsigned long long)arg1 attributes:(id)arg2 attributesForDeemphasizedText:(id)arg3 attributesForHTTPSProtocol:(id)arg4;

// Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore

- (id)absoluteStringWithoutQueryParameters;
- (id)baseDomainURL;

// Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation

- (id)dictionaryRepresentation;
- (id)jsonData;

// Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing

- (void)coordinateReadingWithSaveToTempDir:(bool)arg1 completionHandler:(id /* block */)arg2;
- (void)coordinateReadingWithSaveToTempDir:(bool)arg1 options:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (id)fileName;
- (bool)isiWorkDocument;
- (id)issueSandboxExtensionData;

// Image: /System/Library/PrivateFrameworks/Silex.framework/Silex

- (id)initWithJSONObject:(id)arg1 andVersion:(id)arg2;

// Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation

+ (id)_contentModificationDate:(id)arg1;
+ (id)_displayName:(id)arg1;
+ (bool)_hasUnresolvedConflict:(id)arg1;
+ (bool)_isDownloaded:(id)arg1;
+ (bool)_isDownloading:(id)arg1;
+ (bool)_isInCloud:(id)arg1;
+ (bool)_isUploaded:(id)arg1;
+ (bool)_isUploading:(id)arg1;
+ (long long)isHostnameReachable:(id)arg1;
+ (id)parseURLParams:(id)arg1;

- (id)contentModificationDate;
- (id)displayName;
- (bool)hasUnresolvedConflict;
- (bool)isDownloaded;
- (bool)isDownloading;
- (bool)isInCloud;
- (bool)isUploaded;
- (bool)isUploading;

// Image: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices

+ (id)_sp_URLFromFileID:(id)arg1 filename:(id)arg2 parentFileID:(id)arg3 documentID:(id)arg4;
+ (id)sp_URLFromFileID:(id)arg1 filename:(id)arg2 parentFileID:(id)arg3 documentID:(id)arg4;

// Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation

- (id)fileCacheStableDataRepresentation;

// Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks

+ (id)stocks_sanitizedURLFromString:(id)arg1;

// Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices

+ (id)_ss_copyDictionaryForQueryString:(id)arg1 unescapedValues:(bool)arg2;
+ (id)_ss_unescapedStringForString:(id)arg1;

- (id)_ss_URLByRemovingQueryParameter:(id)arg1;
- (bool)_ss_hasQueryParameter:(id)arg1;
- (id)_ss_valueForQueryParameter:(id)arg1;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (bool)isStoreServicesURL;

// Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading

+ (id)tsu_fileURLWithPath:(id)arg1;

- (id)URLExceptPrivate;
- (bool)isAssetsLibraryURL;
- (bool)isOnNonHFSVolume;
- (bool)isUbiquitous;
- (id)pathExceptPrivate;

// Image: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility

+ (bool)canHandleDownloadTask:(id)arg1;
+ (void)downloadManager:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
+ (void)downloadManager:(id)arg1 task:(id)arg2 didFinishDownloadingToURL:(id)arg3;
+ (id)filePathURLWithEscapes:(id)arg1;
+ (id)improperlyEscapedString:(id)arg1;
+ (id)properlyEscapedString:(id)arg1;
+ (id)relativeURLWithEscapes:(id)arg1;

- (id)downloadTaskDescription;
- (id)downloadURL;
- (bool)isRelative;
- (long long)totalBytesExpectedToBeDownloaded;
- (id)tsu_UTI;
- (bool)tsu_conformsToUTI:(id)arg1;

// Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit

- (long long)tv_imageURLType;
- (bool)tv_isAppIconURL;
- (bool)tv_isResourceURL;
- (bool)tv_isSymbolURL;
- (id)tv_resourceName;
- (id)tv_symbolName;

// Image: /System/Library/PrivateFrameworks/TeaUI.framework/TeaUI

- (void)ts_setTitle:(id)arg1;

// Image: /System/Library/PrivateFrameworks/TelephonyPreferences.framework/TelephonyPreferences

+ (id)tps_telephonyTapToRadarURLForError:(id)arg1;

// Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities

+ (id)TUDialRequestSchemeFaceTime;
+ (id)TUDialRequestSchemeFaceTimeAudio;
+ (id)TUDialRequestSchemeTelephony;
+ (id)_applyFaceTimeScheme:(id)arg1 toFaceTimeURL:(id)arg2;
+ (id)_faceTimeURLWithDestinationID:(id)arg1 addressBookUID:(int)arg2 audioOnly:(bool)arg3;
+ (id)_faceTimeURLWithHandle:(id)arg1 addressBookUID:(int)arg2 audioOnly:(bool)arg3;
+ (id)faceTimeAnswerURLWithSourceIdentifier:(id)arg1;
+ (id)faceTimeAppJoinConversationLinkURL;
+ (id)faceTimeAppJoinConversationURLForConversationLinkURL:(id)arg1;
+ (id)faceTimeAppVideoMessagePlaybackURLForUUID:(id)arg1;
+ (id)faceTimeAppViewLinkDetailsURL;
+ (id)faceTimeAppViewLinkDetailsURLForPseudonym:(id)arg1;
+ (id)faceTimeAudioScheme;
+ (id)faceTimeLaunchForIncomingCallURL;
+ (id)faceTimeLaunchForOutgoingConversationURL;
+ (id)faceTimeLaunchForScreeningURL;
+ (id)faceTimeMultiwayScheme;
+ (id)faceTimeNeedsBackgroundLaunchURL;
+ (id)faceTimeOpenLinkScheme;
+ (id)faceTimePinExchangeScheme;
+ (id)faceTimePromptURLWithURL:(id)arg1;
+ (id)faceTimeRefreshShareableContentURL;
+ (id)faceTimeRefreshShareableContentURLForBundleIdentifier:(id)arg1;
+ (id)faceTimeScheme;
+ (id)faceTimeShowAccessoryButtonEventsNoticeUIURL;
+ (id)faceTimeShowCarPlayInCallUIURL;
+ (id)faceTimeShowHandoffEligibleNearbyURL;
+ (id)faceTimeShowInCallUIURL;
+ (id)faceTimeShowIncomingTransmissionNoticeUIURL;
+ (id)faceTimeShowLagunaPullConversationURL;
+ (id)faceTimeShowSystemCallControlsURL;
+ (id)faceTimeSystemCallControlsScheme;
+ (id)faceTimeTelephonyURLWithPhoneNumber:(id)arg1;
+ (id)faceTimeTelephonyURLWithPhoneNumber:(id)arg1 showPrompt:(bool)arg2;
+ (id)faceTimeURLWithDestinationID:(id)arg1;
+ (id)faceTimeURLWithDestinationID:(id)arg1 addressBookUID:(int)arg2;
+ (id)faceTimeURLWithDestinationID:(id)arg1 addressBookUID:(int)arg2 audioOnly:(bool)arg3;
+ (id)faceTimeURLWithDestinationID:(id)arg1 addressBookUID:(int)arg2 forceAssist:(bool)arg3 suppressAssist:(bool)arg4 wasAssisted:(bool)arg5 audioOnly:(bool)arg6;
+ (id)faceTimeURLWithPhoneNumber:(id)arg1 addressBookUID:(int)arg2 audioOnly:(bool)arg3 forceAssist:(bool)arg4 suppressAssist:(bool)arg5 wasAssisted:(bool)arg6;
+ (id)faceTimeURLWithPhoneNumber:(id)arg1 addressBookUID:(int)arg2 forceAssist:(bool)arg3 suppressAssist:(bool)arg4 wasAssisted:(bool)arg5;
+ (id)faceTimeURLWithURL:(id)arg1;
+ (id)faceTimeUpdateForegroundAppURL;
+ (id)faceTimeUpdateForegroundAppURLForBundleIdentifier:(id)arg1 applicationType:(long long)arg2;
+ (id)faceTimeVideoMessagePlaybackURLForUUID:(id)arg1;
+ (id)faceTimeVideoMessageScheme;
+ (id)phoneAppVoicemailURLForMessageUUID:(id)arg1;
+ (id)phoneAppVoicemailURLForRecordID:(unsigned long long)arg1;
+ (id)screenSharingAppURL;
+ (id)showKeypadURL;
+ (id)telephonyURLForTelEmergencyCall;
+ (id)telephonyURLForVoicemail;
+ (id)telephonyURLWithDestinationID:(id)arg1;
+ (id)telephonyURLWithDestinationID:(id)arg1 addressBookUID:(int)arg2;
+ (id)telephonyURLWithDestinationID:(id)arg1 addressBookUID:(int)arg2 forceAssist:(bool)arg3 suppressAssist:(bool)arg4 wasAssisted:(bool)arg5;
+ (id)telephonyURLWithDestinationID:(id)arg1 promptUser:(bool)arg2;
+ (id)tu_defaultAllowedSchemes;

- (id)URLByDeletingQueryParameterWithKey:(id)arg1;
- (id)URLBySettingQueryParameterValue:(id)arg1 forKey:(id)arg2;
- (id)_destinationIDConvertingNumbersToLatin:(bool)arg1;
- (bool)_dialAssistBooleanQueryParameterValueForKey:(id)arg1;
- (bool)_hasScheme:(id)arg1;
- (bool)_isPhoneNumberID:(id)arg1;
- (id)_mobilePhonePathParameters;
- (id)_mobilePhoneQueryParameters;
- (int)addressBookUID;
- (id)answerRequestSourceIdentifier;
- (int)callService;
- (id)conversationLinkURLForJoinConversation;
- (id)conversationLinkURLForOpenLinkURL;
- (id)faceTimeDestinationAccount;
- (bool)forceAssist;
- (long long)foregroundAppApplicationType;
- (id)foregroundAppBundleIdentifier;
- (id)formattedPhoneNumber;
- (bool)hasNoPromptOption;
- (bool)hasTelephonyScheme;
- (bool)isAnswerRequestURL;
- (bool)isBasebandLogURL;
- (bool)isDialCallURL;
- (bool)isEmergencyCallURL;
- (bool)isEmergencyURL;
- (bool)isFaceTimeAppJoinConversationLinkURL;
- (bool)isFaceTimeAppVideoMessagePlaybackURL;
- (bool)isFaceTimeAppViewLinkDetailsURL;
- (bool)isFaceTimeAudioPromptURL;
- (bool)isFaceTimeAudioURL;
- (bool)isFaceTimeMultiwayURL;
- (bool)isFaceTimeNeedsBackgroundLaunchURL;
- (bool)isFaceTimeOpenLinkURL;
- (bool)isFaceTimePromptURL;
- (bool)isFaceTimeURL;
- (bool)isLaunchForIncomingCallURL;
- (bool)isLaunchForOutgoingConversationURL;
- (bool)isLaunchForScreeningURL;
- (bool)isPhoneAppVoicemailURL;
- (bool)isRefreshShareableContentURL;
- (bool)isShowAccessoryButtonEventsNoticeURL;
- (bool)isShowCarPlayInCallUIURL;
- (bool)isShowHandoffEligibleNearbyURL;
- (bool)isShowInCallUIURL;
- (bool)isShowIncomingTransmissionNoticeURL;
- (bool)isShowKeypadURL;
- (bool)isShowLagunaPullConversationURL;
- (bool)isShowScreenSharingURL;
- (bool)isShowSystemCallControlsURL;
- (bool)isSystemCallControlsURL;
- (bool)isTelephonyPromptURL;
- (bool)isTelephonyURL;
- (bool)isUpdateForegroundAppURL;
- (bool)isVideoMessagePlaybackURL;
- (bool)isVoicemailURL;
- (bool)isWebSafeTelephoneURL;
- (id)originatingUIIdentifier;
- (id)phoneNumber;
- (id)pseudonymForLinkDetailsView;
- (id)queryParameters;
- (id)recentsUniqueID;
- (id)sanitizedCopy;
- (id)sanitizedCopyWithZone:(struct _NSZone { }*)arg1;
- (id)sanitizedCopyWithZone:(struct _NSZone { }*)arg1 allowedSchemes:(id)arg2;
- (bool)suppressAssist;
- (id)telephonyParameterDictionary;
- (id)tuQueryParameters;
- (id)videoMessageUUID;
- (id)voicemailMessageUUID;
- (long long)voicemailRecordID;
- (bool)wasAlreadyAssisted;
- (id)webSafeTelephoneURL;

// Image: /System/Library/PrivateFrameworks/TouchML.framework/TouchML

+ (void)initializeJSContext:(id)arg1;

- (id)filterQueryParameters:(id)arg1;
- (id)queryParameters;
- (id)withPathComponent:(id)arg1;
- (id)withQueryParameter:(id)arg1 :(id)arg2;
- (id)withQueryParameters:(id)arg1;

// Image: /System/Library/PrivateFrameworks/Trial.framework/Trial

+ (id)triContainerURLWithPath:(id)arg1 containerId:(id)arg2 containerType:(long long)arg3;
+ (id)triParseURLFromString:(id)arg1;
+ (id)triParseURLFromString:(id)arg1 isDirectory:(bool)arg2;

- (bool)triIsContainerURL;
- (bool)triIsEqual:(id)arg1;
- (id)triPathAsOwner:(bool)arg1;
- (id)triSaveURLToString;
- (id)triURLByResolvingSymlinksInPathIncludingPrivate;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (id)URLWithDisplayIdentifier:(id)arg1 forSearchResultDomain:(int)arg2 andIdentifier:(unsigned long long)arg3;
+ (bool)_allowsCreationOfFileURLFromItemProvider;
+ (void)_setAllowsCreationOfFileURLFromItemProvider:(bool)arg1;
+ (id)mapsURLWithQuery:(id)arg1;
+ (id)mapsURLWithSourceAddress:(id)arg1 destinationAddress:(id)arg2;
+ (id)ui_URLFromExportBookmark:(id)arg1;
+ (id)ui_cloudDocsContainerURL;
+ (id)ui_incomingDirectory:(bool)arg1;

- (id)_NSItemProviderArchive_customArchiveDictionary;
- (void)_NSItemProviderArchive_didUnarchiveCustomDictionary:(id)arg1;
- (void)_domain:(id*)arg1 subdomain:(id*)arg2;
- (void)_setTitle:(id)arg1;
- (id)_title;
- (bool)isAccountURL;
- (bool)isHTTPOrHTTPSURL;
- (bool)isInternalUIKitURL;
- (bool)isJavaScriptURL;
- (bool)isSpringboardHandledURL;
- (bool)isWebcalURL;
- (id)phobosURL;
- (id)radarWebURL;
- (id)searchResultDomain;
- (id)searchResultIdentifier;
- (id)ui_URLByResolvingSymlinksAndCopyingSecurityScope;
- (id)ui_bookmarkForExportWithError:(id*)arg1;
- (bool)ui_canOpenInPlace;
- (id)ui_downloadOperationForActivity:(id)arg1;
- (id)ui_downloadOperationForActivity:(id)arg1 inScene:(id)arg2;
- (bool)ui_hasReadSandboxExtended;
- (bool)ui_hasSandboxExtendedForClass:(const char *)arg1;
- (bool)ui_isContentManaged;
- (bool)ui_isFileProviderURL;
- (bool)ui_isUnfulfilledPromiseURL;
- (id)ui_issueReadSandboxExtensionWithError:(id*)arg1;
- (id)ui_issueReadWriteSandboxExtensionWithError:(id*)arg1;
- (id)ui_issueSandboxExtensionOfClass:(const char *)arg1 error:(id*)arg2;
- (id)ui_resolveOnDiskBookmarkAndPromise;
- (void)ui_scheduleForCleanup;
- (void)ui_setIsContentManaged:(bool)arg1;
- (void)ui_setIsFileProviderURL:(bool)arg1;

// Image: /System/Library/PrivateFrameworks/URLCompression.framework/URLCompression

- (id)padPayloadToV1Length;
- (id)transformPayloadWithBlock:(id /* block */)arg1;
- (id)truncatePayloadToV2Length;

// Image: /System/Library/PrivateFrameworks/URLFormatting.framework/URLFormatting

+ (id)_lp_URLWithData:(id)arg1 baseURL:(id)arg2;
+ (id)_lp_URLWithUserTypedString:(id)arg1 relativeToURL:(id)arg2;

- (id)_lp_URLByDeletingCommonIndexPageNames;
- (id)_lp_URLBySortingQueryItems;
- (id)_lp_highLevelDomain;
- (bool)_lp_isHTTPFamilyURL;
- (id)_lp_originalData;
- (id)_lp_simplifiedDisplayString;
- (id)_lp_simplifiedStringForDisplayOnly:(bool)arg1;
- (id)_lp_simplifiedURLStringForFuzzyMatching;
- (id)_lp_userVisibleString;
- (bool)_lp_userVisibleStringUsesEncodedHost;

// Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit

+ (id)nc_notificationSettingsURLForSectionIdentifier:(id)arg1 isAppClip:(bool)arg2;

// Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI

+ (id)vui_sortedQueryItemsFromDictionary:(id)arg1;

- (id)vui_URLByAddingQueryParamWithName:(id)arg1 value:(id)arg2;
- (id)vui_URLByAddingQueryParamsDictionary:(id)arg1;
- (bool)vui_containsQueryParamWithName:(id)arg1;
- (id)vui_parsedQueryParametersDictionary;

// Image: /System/Library/PrivateFrameworks/VideosUICore.framework/VideosUICore

+ (id)vui_URLWithString:(id)arg1;

- (long long)vuicore_imageURLType;
- (bool)vuicore_isAppIconURL;
- (bool)vuicore_isResourceOrSymbolURL;
- (bool)vuicore_isResourceURL;
- (bool)vuicore_isSymbolURL;
- (id)vuicore_resourceName;
- (id)vuicore_symbolName;

// Image: /System/Library/PrivateFrameworks/VisionCore.framework/VisionCore

- (const char *)VisionCoreE5RTPathAndReturnError:(id*)arg1;
- (id)VisionCoreFileSystemPathAndReturnError:(id*)arg1;

// Image: /System/Library/PrivateFrameworks/VisualVoicemail.framework/IMAP.framework/IMAP

+ (id)vf_defaultAllowedCharacterSet;

- (id)mf_firstPartNumber;
- (bool)mf_isResourceURL;
- (bool)mf_isValidAttachmentURL;
- (id)mf_lastPartNumber;
- (id)mf_partNumbers;
- (unsigned int)mf_rowID;
- (id)vf_hostNilForEmpty;

// Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos

- (id)rc_URLByAppendingStringToLastComponentBasename:(id)arg1;
- (id)rc_URLByFixingUpPersistentMediaRecordingsDirectory;
- (id)rc_URLByReplacingPathExtensionWithExtension:(id)arg1;
- (id)rc_URLByStandardizingResolvedPath;

// Image: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient

- (id)wfFileType;

// Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit

+ (id)wlk_URLWithServerConfig:(id)arg1 endpoint:(id)arg2 relativeToBaseURL:(bool)arg3 queryParameters:(id)arg4 suppressParameterEncoding:(bool)arg5;
+ (id)wlk_URLWithServerConfig:(id)arg1 routeName:(id)arg2 queryParameters:(id)arg3 suppressParameterEncoding:(bool)arg4;
+ (id)wlk_sortedQueryItemsFromDictionary:(id)arg1;

// Image: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation

+ (id)wf_cacheDirectory;
+ (id)wf_inMemoryAddress;

- (bool)wf_URLHasParameter:(id)arg1;
- (id)wf_URLWithTracking:(id)arg1;
- (bool)wf_isInMemoryAddress;

// Image: /System/Library/PrivateFrameworks/WeatherUI.framework/WeatherUI

+ (id)weatherURLForLocation:(id)arg1;

// Image: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks

- (id)_wb_userVisibleString;
- (bool)_webBookmarks_isHTTPFamilyURL;

// Image: /System/Library/PrivateFrameworks/WebContentAnalysis.framework/WebContentAnalysis

- (bool)WF_hostnameIsIPAddress;
- (id)WF_normalizedRelativePath;

// Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy

+ (id)_web_URLWithDataAsString:(id)arg1;
+ (id)_web_URLWithDataAsString:(id)arg1 relativeToURL:(id)arg2;
+ (id)_web_URLWithUserTypedString:(id)arg1;
+ (id)_web_uniqueWebDataURL;
+ (id)_webkit_URLWithUserTypedString:(id)arg1;

- (id)_web_URLByRemovingUserInfo;
- (const char *)_web_URLCString;
- (id)_web_hostData;
- (id)_web_hostString;
- (bool)_web_isEmpty;
- (id)_web_originalData;
- (id)_web_originalDataAsString;
- (id)_web_schemeData;
- (id)_web_userVisibleString;
- (id)_webkit_URLByRemovingFragment;
- (id)_webkit_URLFromURLOrSchemelessFileURL;
- (id)_webkit_canonicalize;
- (id)_webkit_canonicalize_with_wtf;
- (bool)_webkit_isFileURL;
- (bool)_webkit_isJavaScriptURL;
- (id)_webkit_scriptIfJavaScriptURL;
- (id)_webkit_suggestedFilenameWithMIMEType:(id)arg1;

// Image: /System/Library/PrivateFrameworks/WebPrivacy.framework/WebPrivacy

- (void)_wp_removeTrackingInformation:(id /* block */)arg1;
- (id)_wp_urlByRemovingTrackingInformation;

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

- (id)URLByAddingValuesFromQueryDictionary:(id)arg1;
- (id)wf_displayStringWithCharacterLimit:(long long)arg1;
- (id)wf_fileProviderItem;
- (id)wf_normalizedFileURLForROSP;

// Image: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar

+ (id)VCS_URLForAddress:(id)arg1 scheme:(id)arg2 noAddress:(id)arg3;
+ (id)VCS_URLForMail:(id)arg1;
+ (bool)VCS_isValidURI:(id)arg1;

- (void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2;

// Image: /System/Library/PrivateFrameworks/iCloudDriveCore.framework/iCloudDriveCore

- (id)brc_applicationBundleID;
- (id)brc_applicationContainerID;
- (id)brc_applicationName;
- (id)brc_iWorkPathExtensions;

// Image: /System/Library/PrivateFrameworks/iCloudQuota.framework/iCloudQuota

- (bool)icq_isICQLaunchURL;

// Image: /System/Library/PrivateFrameworks/iCloudQuotaUI.framework/iCloudQuotaUI

+ (id)icqURLForIndex:(long long)arg1;

- (long long)icqIndex;
- (bool)icqui_isJoinOrLeaveFamilySharingURL;
- (bool)icqui_isStopFamilySharingURL;

// Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud

+ (id)ic_queryParametersDictionaryFromString:(id)arg1;

- (id)ic_URLByAppendingQueryItems:(id)arg1;
- (id)ic_URLByAppendingQueryParameters:(id)arg1;
- (id)ic_queryParametersDictionary;

// Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore

+ (id)_URLQueryParameterValueAllowedCharacterSet;
+ (id)copyDictionaryForQueryString:(id)arg1 unescapedValues:(bool)arg2;
+ (id)escapedStringForString:(id)arg1;
+ (id)queryStringForDictionary:(id)arg1 escapedValues:(bool)arg2;
+ (id)unescapedStringForString:(id)arg1;

- (id)URLByAppendingQueryParameter:(id)arg1 value:(id)arg2;
- (id)copyQueryStringDictionaryWithUnescapedValues:(bool)arg1;
- (void)enumerateQueryWithBlock:(id /* block */)arg1;
- (bool)isSafeExternalURL;
- (id)sanitizedURL;
- (id)schemeSwizzledURL;
- (id)urlByReplacingSchemeWithScheme:(id)arg1;
- (id)urlBySettingQueryStringDictionary:(id)arg1;

// Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI

+ (id)termsAndConditionsURL;

- (long long)storeURLType;

// Image: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/NumbersQuicklook.framework/NumbersQuicklook

+ (id)sheetHyperlinkURLScheme;

- (id)initWithDefaultSheetURLForDocumentRoot:(id)arg1;
- (id)initWithSheet:(id)arg1;
- (bool)isSheetURL;
- (id)sheetUUID;

// Image: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSPersistence.framework/TSPersistence

+ (id)tsp_iWorkAVAssetURLWithUUID:(id)arg1 filename:(id)arg2 contentTypeUTI:(id)arg3;

- (id)tsp_embeddedUTI;
- (id)tsp_fileIdentifier;
- (bool)tsp_isIWorkAVAssetURL;
- (bool)tsp_matchesURL:(id)arg1;
- (bool)tsp_matchesURL:(id)arg1 canCompareFileID:(bool)arg2;
- (id)tsp_queryDictionary;

// Image: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSUtility.framework/TSUtility

+ (id)tsu_fileURLWithPath:(id)arg1;
+ (id)tsu_privacyContactsURL;
+ (id)tsu_urlFromUserProvidedTelephoneString:(id)arg1 withDataDetector:(id)arg2;

- (id)URL;
- (id)URLIfAvailable;
- (id)sandboxedURL;
- (id)tsu_URLExceptPrivate;
- (id)tsu_UTI;
- (bool)tsu_canOpenURL;
- (bool)tsu_conformsToAnyUTI:(id)arg1;
- (bool)tsu_conformsToUTI:(id)arg1;
- (id)tsu_contentModificationDateWithLogContext:(id)arg1;
- (id)tsu_documentIdentifier;
- (unsigned long long)tsu_fileSize;
- (bool)tsu_fileSize:(out unsigned long long*)arg1 error:(id*)arg2;
- (id)tsu_fileTypeIdentifierHandlingFileCoordinationPromises;
- (bool)tsu_isFileSizeLargerThanMaxFileSize:(unsigned long long)arg1;
- (bool)tsu_isFileSizeTooLargeForBookPublishing;
- (bool)tsu_isFileSizeTooLargeForSharing;
- (bool)tsu_isInTemporaryDirectory;
- (bool)tsu_isInTrash;
- (bool)tsu_isOnForeignVolume;
- (bool)tsu_isOnSameVolumeAs:(id)arg1;
- (bool)tsu_isVolumeKnownToBeEjectable;
- (bool)tsu_isVolumeKnownToBeLocal;
- (bool)tsu_isVolumeKnownToBeRemovable;
- (bool)tsu_matchesURL:(id)arg1;
- (bool)tsu_matchesURL:(id)arg1 canCompareFileID:(bool)arg2;
- (id)tsu_pathExceptPrivate;
- (id)tsu_prettyStringFromTelephoneURL;
- (id)tsu_reachableFileURLByDeletingUnreachablePathComponents;
- (void)tsu_removeCachedResourceValueForKeys:(id)arg1;
- (bool)tsu_setNeedsDocumentIdentifierAndReturnError:(out id*)arg1;
- (bool)tsu_volumeRenameOpenFail;
- (bool)tsu_volumeSupportsCloning;

// Image: /usr/lib/libprequelite.dylib

+ (id)newFromSqliteStatement:(struct sqlite3_stmt { }*)arg1 atIndex:(int)arg2;
+ (id)newFromSqliteValue:(struct sqlite3_value { }*)arg1;

- (void)sqliteBind:(struct sqlite3_stmt { }*)arg1 index:(int)arg2;

@end
