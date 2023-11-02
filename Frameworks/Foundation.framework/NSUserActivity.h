
@interface NSUserActivity : NSObject <CMSCoding, CRContent, INCacheableObject, INJSONSerializable, REUserActivityProperties, SYDocumentProviding, UIItemProviderReading, UIItemProviderWriting> {
    id  _delegate;
    id  _frameworkDelegate;
    id  _internal;
}

@property (copy) NSURL *_canonicalURL;
@property (setter=_setContentAttributes:, copy) NSDictionary *_contentAttributes;
@property (setter=_setContentIdentifier:, copy) NSString *_contentIdentifier;
@property (setter=_setContentType:, copy) NSString *_contentType;
@property (setter=_setContentUserAction:, copy) NSString *_contentUserAction;
@property (getter=_isEligibleForUserActivityHandoff, setter=_setEligibleForUserActivityHandoff:) bool _eligibleForUserActivityHandoff;
@property (getter=_isEligibleForUserActivityIndexing, setter=_setEligibleForUserActivityIndexing:) bool _eligibleForUserActivityIndexing;
@property (getter=_isEligibleForUserActivityPublicIndexing, setter=_setEligibleForUserActivityPublicIndexing:) bool _eligibleForUserActivityPublicIndexing;
@property (getter=_isEligibleForUserActivityReminders, setter=_setEligibleForUserActivityReminders:) bool _eligibleForUserActivityReminders;
@property (setter=_setExpirationDate:, copy) NSDate *_expirationDate;
@property (setter=_setFrameworkDelegate:) <NSUserActivityDelegate> *_frameworkDelegate;
@property (setter=_setFrameworkPayload:, copy) NSDictionary *_frameworkPayload;
@property (readonly, retain) UAUserActivity *_internalUserActivity;
@property (setter=_setKeywords:, copy) NSSet *_keywords;
@property (readonly, copy) NSDate *_lastActivityDate;
@property (copy) NSDictionary *_linkContextInfo;
@property (retain) NSData *_linkContextPreviewMetadata;
@property (readonly, copy) NSDate *_madeCurrentDate;
@property (readonly, copy) NSDate *_madeCurrentEndDate;
@property (readonly) double _madeCurrentInterval;
@property (readonly, copy) NSDate *_madeInitiallyCurrentDate;
@property (setter=_setMinimalRequiredUserInfoKeys:, copy) NSSet *_minimalRequiredUserInfoKeys;
@property (setter=_setOptions:, copy) NSDictionary *_options;
@property (readonly, copy) NSUUID *_originalUniqueIdentifier;
@property (nonatomic, readonly) BSProcessHandle *_originatingProcess;
@property (readonly, copy) NSDate *_sentToIndexerDate;
@property (nonatomic, readonly) NSNumber *_sf_windowCreationMode;
@property (nonatomic, readonly) _SFNavigationIntent *_sf_windowCreationNavigationIntent;
@property (nonatomic, readonly) NSUUID *_sf_windowCreationRecentlyClosedTabUUID;
@property (nonatomic, readonly) NSUUID *_sf_windowCreationSourceBrowserControllerUUID;
@property (nonatomic, readonly) NSUUID *_sf_windowCreationTabGroupUUID;
@property (nonatomic, readonly) NSUUID *_sf_windowCreationTabUUID;
@property (nonatomic, readonly) NSString *_sourceApplication;
@property (setter=_setSubtitle:, copy) NSString *_subtitle;
@property (readonly) long long _suggestedActionType;
@property (readonly) <SYDocumentProviding> *_syDocumentProvider;
@property (readonly) NSUserActivity *_syOriginalUserActivity;
@property (copy) NSString *_syRelatedUniqueIdentifier;
@property (readonly) bool _syShouldCreateNewMessage;
@property (readonly, copy) NSString *_teamIdentifier;
@property (readonly, retain) NSUUID *_uniqueIdentifier;
@property (getter=_isUniversalLink) bool _universalLink;
@property (readonly) unsigned long long _userInfoChangeCount;
@property (nonatomic, readonly) NSString *activityType;
@property (readonly, copy) NSString *activityType;
@property (nonatomic, readonly, copy) NSString *cacheIdentifier;
@property (copy) NSURL *canonicalURL;
@property (nonatomic, retain) NSString *containerIdentifier;
@property (nonatomic, retain) NSString *containerTitle;
@property (copy) CSSearchableItemAttributeSet *contentAttributeSet;
@property (nonatomic, readonly) NSArray *contextIdentifierPath;
@property (nonatomic) double currentTime;
@property (readonly, copy) NSString *debugDescription;
@property <NSUserActivityDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) CIBarcodeDescriptor *detectedBarcodeDescriptor;
@property (getter=isEligibleForHandoff) bool eligibleForHandoff;
@property (getter=isEligibleForPrediction) bool eligibleForPrediction;
@property (getter=isEligibleForPublicIndexing) bool eligibleForPublicIndexing;
@property (getter=isEligibleForSearch) bool eligibleForSearch;
@property (copy) NSDate *expirationDate;
@property (nonatomic, copy) NSString *externalMediaContentIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) INInteraction *interaction;
@property (nonatomic, readonly) bool isClassKitDeepLink;
@property (nonatomic, retain) NSString *itemIdentifier;
@property (nonatomic, retain) NSString *itemTitle;
@property (copy) NSSet *keywords;
@property (copy) NSDictionary *linkContextInfo;
@property (nonatomic, retain) MKMapItem *mapItem;
@property bool needsSave;
@property (copy) NSString *persistentIdentifier;
@property (copy) NSURL *referrerURL;
@property (copy) NSSet *requiredUserInfoKeys;
@property (nonatomic) unsigned long long shortcutAvailability;
@property (nonatomic, copy) NSString *suggestedInvocationPhrase;
@property (readonly) Class superclass;
@property bool supportsContinuationStreams;
@property (nonatomic, copy) NSString *targetContentIdentifier;
@property (copy) NSString *targetContentIdentifier;
@property (nonatomic, readonly) NSString *title;
@property (copy) NSString *title;
@property (nonatomic, readonly, copy) NSString *tu_dynamicIdentifier;
@property (copy) NSDictionary *userInfo;
@property (copy) NSURL *webpageURL;
@property (nonatomic, readonly, copy) NSArray *writableTypeIdentifiersForItemProvider;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (id)_currentUserActivityUUID;
+ (bool)_currentUserActivityUUIDWithOptions:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)_fetchUserActivityWithUUID:(id)arg1 completionHandler:(id /* block */)arg2;
+ (id)_fetchUserActivityWithUUID:(id)arg1 intervalToWaitForDocumentSynchronizationToComplete:(double)arg2 completionHandler:(id /* block */)arg3;
+ (void)_registerUserActivityType:(id)arg1 dynamicActivityType:(id)arg2;
+ (bool)_supportsUserActivityAppLinks;
+ (void)_unregisterUserActivityType:(id)arg1 dynamicActivityType:(id)arg2;
+ (id)_userFacingErrorForLaunchServicesError:(id)arg1 userInfo:(id)arg2;
+ (void)deleteAllSavedUserActivitiesWithCompletionHandler:(id /* block */)arg1;
+ (void)deleteSavedUserActivitiesWithPersistentIdentifiers:(id)arg1 completionHandler:(id /* block */)arg2;

- (void).cxx_destruct;
- (void)_addKeywordsFromArray:(id)arg1;
- (id)_contentAttributes;
- (id)_contentIdentifier;
- (id)_contentType;
- (id)_contentUserAction;
- (bool)_createUserActivityDataWithOptions:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)_createUserActivityStringsWithOptions:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)_determineMatchingApplicationBundleIdentfierWithOptions:(id)arg1;
- (id)_determineMatchingApplicationBundleIdentifierWithOptions:(id)arg1;
- (id)_expirationDate;
- (id)_frameworkDelegate;
- (id)_frameworkPayload;
- (id)_initWithTypeIdentifier:(id)arg1 suggestedActionType:(long long)arg2 options:(id)arg3;
- (id)_initWithUserActivityData:(id)arg1;
- (id)_initWithUserActivityStrings:(id)arg1 secondaryString:(id)arg2 optionalData:(id)arg3;
- (id)_initWithUserActivityType:(id)arg1 dynamicActivityType:(id)arg2 options:(id)arg3;
- (id)_internalUserActivity;
- (bool)_isEligibleForUserActivityHandoff;
- (bool)_isEligibleForUserActivityIndexing;
- (bool)_isEligibleForUserActivityPublicIndexing;
- (bool)_isEligibleForUserActivityReminders;
- (id)_keywords;
- (id)_lastActivityDate;
- (id)_minimalRequiredUserInfoKeys;
- (id)_options;
- (id)_parentUserActivity;
- (void)_prepareUserActivityForLaunchingWithOptions:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_removeFrameworkPayloadValueForKey:(id)arg1;
- (void)_removeUserInfoValueForKey:(id)arg1;
- (void)_resignCurrent;
- (void)_setContentAttributes:(id)arg1;
- (void)_setContentIdentifier:(id)arg1;
- (void)_setContentType:(id)arg1;
- (void)_setContentUserAction:(id)arg1;
- (void)_setEligibleForUserActivityHandoff:(bool)arg1;
- (void)_setEligibleForUserActivityIndexing:(bool)arg1;
- (void)_setEligibleForUserActivityPublicIndexing:(bool)arg1;
- (void)_setEligibleForUserActivityReminders:(bool)arg1;
- (void)_setExpirationDate:(id)arg1;
- (void)_setFrameworkDelegate:(id)arg1;
- (void)_setFrameworkPayload:(id)arg1;
- (void)_setKeywords:(id)arg1;
- (void)_setLastActivityDate:(id)arg1;
- (void)_setMinimalRequiredUserInfoKeys:(id)arg1;
- (void)_setOptions:(id)arg1;
- (void)_setParentUserActivity:(id)arg1;
- (void)_setSubtitle:(id)arg1;
- (id)_subtitle;
- (long long)_suggestedActionType;
- (id)_teamIdentifier;
- (id)_uniqueIdentifier;
- (void)_updateFrameworkPayloadValue:(id)arg1 forKey:(id)arg2;
- (void)_updateUserInfoValue:(id)arg1 forKey:(id)arg2;
- (id)activityType;
- (void)addUserInfoEntriesFromDictionary:(id)arg1;
- (void)becomeCurrent;
- (id)contentAttributeSet;
- (id)contentAttributes;
- (id)contentType;
- (id)contentUserAction;
- (void)dealloc;
- (id)delegate;
- (void)didReceiveInputStream:(id)arg1 outputStream:(id)arg2;
- (void)didSynchronizeActivity;
- (id)expirationDate;
- (void)getContinuationStreamsWithCompletionHandler:(id /* block */)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithActivityType:(id)arg1;
- (id)initWithInternalUserActivity:(id)arg1;
- (id)initWithTypeIdentifier:(id)arg1;
- (void)invalidate;
- (bool)isEligibleForHandoff;
- (bool)isEligibleForPrediction;
- (bool)isEligibleForPublicIndexing;
- (bool)isEligibleForSearch;
- (bool)isEqual:(id)arg1;
- (id)keywords;
- (bool)needsSave;
- (id)persistentIdentifier;
- (id)referrerURL;
- (id)requiredUserInfoKeys;
- (void)resignCurrent;
- (void)setContentAttributeSet:(id)arg1;
- (void)setContentAttributes:(id)arg1;
- (void)setContentType:(id)arg1;
- (void)setContentUserAction:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEligibleForHandoff:(bool)arg1;
- (void)setEligibleForPrediction:(bool)arg1;
- (void)setEligibleForPublicIndexing:(bool)arg1;
- (void)setEligibleForSearch:(bool)arg1;
- (void)setExpirationDate:(id)arg1;
- (void)setKeywords:(id)arg1;
- (void)setNeedsSave:(bool)arg1;
- (void)setPersistentIdentifier:(id)arg1;
- (void)setReferrerURL:(id)arg1;
- (void)setRequiredUserInfoKeys:(id)arg1;
- (void)setSupportsContinuationStreams:(bool)arg1;
- (void)setTargetContentIdentifier:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (void)setWebPageURL:(id)arg1;
- (void)setWebpageURL:(id)arg1;
- (bool)supportsContinuationStreams;
- (id)targetContentIdentifier;
- (id)title;
- (id)typeIdentifier;
- (id)userInfo;
- (id)webPageURL;
- (id)webpageURL;
- (void)willSynchronizeActivity;

// Image: /System/Library/Frameworks/AppClip.framework/AppClip

- (id)appClipActivationPayload;
- (void)setAppClipActivationPayload:(id)arg1;

// Image: /System/Library/Frameworks/ClassKit.framework/ClassKit

- (id)contextIdentifierPath;
- (bool)isClassKitDeepLink;

// Image: /System/Library/Frameworks/CoreImage.framework/CoreImage

- (id)detectedBarcodeDescriptor;
- (void)setDetectedCode:(id)arg1;

// Image: /System/Library/Frameworks/CoreNFC.framework/CoreNFC

- (id)ndefMessagePayload;
- (void)setNdefMessagePayload:(id)arg1;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)_hk_userActivityForAtrialFibrillationEventType;
+ (id)_hk_userActivityForElectrocardiogramType;

// Image: /System/Library/Frameworks/Intents.framework/Intents

+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;
+ (void)buildFromCachePayload:(id)arg1 identifier:(id)arg2 completion:(id /* block */)arg3;
+ (void)deleteAllInteractions;
+ (void)deleteInteractionsWithGroupIdentifier:(id)arg1;
+ (void)deleteInteractionsWithIdentifiers:(id)arg1;

- (bool)_accessedInteraction;
- (id)_appIntent;
- (long long)_executionContext;
- (bool)_hasInteraction;
- (id)_initWithIntent:(id)arg1;
- (id)_intentsIdentifier;
- (void)_intentsPrepareForEncoding;
- (id)_intents_copy;
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;
- (bool)_isEligibleForPrediction;
- (void)_setAccessedInteraction:(bool)arg1;
- (void)_setAppIntent:(id)arg1;
- (void)_setEligibleForPrediction:(bool)arg1;
- (void)_setExecutionContext:(long long)arg1;
- (void)_setInteraction:(id)arg1 donate:(bool)arg2;
- (id)cacheIdentifier;
- (void)generateCachePayloadWithCompletion:(id /* block */)arg1;
- (id)inInteraction;
- (id)interaction;
- (void)setInInteraction:(id)arg1;
- (void)setInteraction:(id)arg1;
- (void)setShortcutAvailability:(unsigned long long)arg1;
- (void)setSuggestedInvocationPhrase:(id)arg1;
- (unsigned long long)shortcutAvailability;
- (id)suggestedInvocationPhrase;

// Image: /System/Library/Frameworks/MapKit.framework/MapKit

- (void)_mapkit_clearMapItemDonationFields;
- (void)_mapkit_populateFieldsForDonationOfMapItem:(id)arg1;
- (id)mapItem;
- (void)setMapItem:(id)arg1;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

- (id)_externalMediaContentBundleIdentifier;
- (void)_setExternalMediaContentBundleIdentifier:(id)arg1;
- (id)externalMediaContentIdentifier;
- (void)setExternalMediaContentIdentifier:(id)arg1;

// Image: /System/Library/Frameworks/SafariServices.framework/SafariServices

+ (id)_sf_windowCreationActivityFromSceneConnectionOptions:(id)arg1;
+ (id)_sf_windowCreationActivityWithMode:(long long)arg1;
+ (id)_sf_windowCreationActivityWithNavigationIntent:(id)arg1;
+ (id)_sf_windowCreationActivityWithRecentlyClosedTabUUID:(id)arg1 browserControllerUUID:(id)arg2;
+ (id)_sf_windowCreationActivityWithTabUUID:(id)arg1 tabGroupUUID:(id)arg2 browserControllerUUID:(id)arg3;

- (void)_sf_invalidateWindowCreationData;
- (id)_sf_windowCreationMode;
- (id)_sf_windowCreationNavigationIntent;
- (id)_sf_windowCreationRecentlyClosedTabUUID;
- (id)_sf_windowCreationSourceBrowserControllerUUID;
- (id)_sf_windowCreationTabGroupUUID;
- (id)_sf_windowCreationTabUUID;
- (id)sf_windowCreationNavigationIntentID;

// Image: /System/Library/PrivateFrameworks/AppPredictionUI.framework/AppPredictionUI

+ (bool)apui_isSupportedForCardRequests;

- (id)apui_intent;

// Image: /System/Library/PrivateFrameworks/Cards.framework/Cards

- (id)underlyingInteraction;

// Image: /System/Library/PrivateFrameworks/CloudMediaServicesInterfaceKit.framework/CloudMediaServicesInterfaceKit

+ (id)instanceFromCMSCoded:(id)arg1;

- (id)cmsCoded;

// Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore

+ (id)_cnui_searchMailUserActivityForContact:(id)arg1;
+ (id)_cnui_sendMessageIntentWithHandle:(id)arg1 contact:(id)arg2;
+ (id)_cnui_startAudioCallIntentWithHandle:(id)arg1 contact:(id)arg2;
+ (id)_cnui_startVideoCallIntentWithHandle:(id)arg1 contact:(id)arg2;
+ (id)_cnui_userActivityWithActivityType:(id)arg1 handle:(id)arg2 contact:(id)arg3 intentWithPerson:(id /* block */)arg4;

// Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals

+ (id)sg_userActivityWithRequiredString:(id)arg1;

- (id)sg_serialize;

// Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer

+ (id)mtUserActivityWithActivityType:(id)arg1;
+ (id)mtUserActivityWithActivityType:(id)arg1 title:(id)arg2;
+ (id)mtUserActivityWithActivityType:(id)arg1 title:(id)arg2 keywords:(id)arg3;

// Image: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2

- (id)ts_sourceApplication;

// Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore

+ (bool)px_allowsDonationsForCurrentProcess;
+ (void)px_requestActivityWithActivityType:(id)arg1 titleProvider:(id /* block */)arg2 completionBlock:(id /* block */)arg3;

- (bool)px_isCurrent;
- (void)px_setPersistentIdentifierFromAsset:(id)arg1;
- (void)px_setPersistentIdentifierFromAssetCollection:(id)arg1;

// Image: /System/Library/PrivateFrameworks/PodcastsUI.framework/PodcastsUI

- (id)containerIdentifier;
- (id)containerTitle;
- (double)currentTime;
- (id)itemIdentifier;
- (id)itemTitle;
- (void)setContainerIdentifier:(id)arg1;
- (void)setContainerTitle:(id)arg1;
- (void)setCurrentTime:(double)arg1;
- (void)setItemIdentifier:(id)arg1;
- (void)setItemTitle:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;

// Image: /System/Library/PrivateFrameworks/SeymourUI.framework/SeymourUI

- (id)smu_sourceApplication;

// Image: /System/Library/PrivateFrameworks/Synapse.framework/Synapse

+ (void)_syFetchCurrentUserActivityWithCompletion:(id /* block */)arg1;
+ (id)_syReturnToSenderActivityWithOriginalUserActivity:(id)arg1;

- (id)_canonicalURL;
- (id)_linkContextInfo;
- (id)_linkContextPreviewMetadata;
- (id)_syDocumentProvider;
- (bool)_syIsBacklinkUserActivity;
- (bool)_syIsShowBacklinkIndicatorUserActivity;
- (id)_syLoggableDescription;
- (id)_syOriginalUserActivity;
- (id)_syRelatedUniqueIdentifier;
- (bool)_syShouldCreateNewMessage;
- (id)_syUserInfoDomainIdentifiers;
- (id)_syUserInfoLinkIdentifiers;
- (id)canonicalURL;
- (id)linkContextInfo;
- (void)loadDocumentWithHandler:(id /* block */)arg1;
- (void)setCanonicalURL:(id)arg1;
- (void)setLinkContextInfo:(id)arg1;
- (void)set_canonicalURL:(id)arg1;
- (void)set_linkContextInfo:(id)arg1;
- (void)set_linkContextPreviewMetadata:(id)arg1;
- (void)set_syOriginalUserActivity:(id)arg1;
- (void)set_syRelatedUniqueIdentifier:(id)arg1;
- (void)set_syShouldCreateNewMessage:(bool)arg1;

// Image: /System/Library/PrivateFrameworks/SystemPaperPresentation.framework/SystemPaperPresentation

+ (id)ic_userActivityWithData:(id)arg1;

// Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities

+ (bool)_isActivityTypeAllowedForDialRequest:(id)arg1;
+ (bool)_isActivityTypeAllowedForJoinRequest:(id)arg1;
+ (id)makeActivityWithIntent:(id)arg1 dialRequestAttachment:(id)arg2;
+ (id)makeActivityWithIntent:(id)arg1 joinRequestAttachment:(id)arg2;

- (id)dialRequestAttachment;
- (id)joinRequestAttachment;
- (id)tu_dynamicIdentifier;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (id)objectWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 error:(id*)arg3;
+ (id)readableTypeIdentifiersForItemProvider;
+ (id)writableTypeIdentifiersForItemProvider;

- (id)_originatingProcess;
- (void)_setOriginatingProcess:(id)arg1;
- (void)_setSourceApplication:(id)arg1;
- (id)_sourceApplication;
- (id)initWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 error:(id*)arg3;
- (id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(id /* block */)arg2;
- (void)setTargetContentIdentifier:(id)arg1;
- (id)targetContentIdentifier;

// Image: /System/Library/PrivateFrameworks/UserActivity.framework/UserActivity

+ (bool)_currentUserActivityProxiesWithOptions:(id)arg1 matching:(id)arg2 completionHandler:(id /* block */)arg3;
+ (bool)_registerAsProxyForApplication:(int)arg1 options:(id)arg2 completionBlock:(id /* block */)arg3;

- (unsigned long long)_beginUserInfoUpdate:(id)arg1;
- (id)_copyWithNewUUID;
- (id)_createUserActivityDataWithSaving:(bool)arg1 options:(id)arg2 error:(id*)arg3;
- (id)_createUserActivityStringsWithSaving:(bool)arg1 options:(id)arg2 string:(id*)arg3 optionalString:(id*)arg4 data:(id*)arg5 error:(id*)arg6;
- (bool)_finishUserInfoUpdate;
- (void)_forceSave;
- (bool)_isUniversalLink;
- (id)_madeCurrentDate;
- (id)_madeCurrentEndDate;
- (double)_madeCurrentInterval;
- (id)_madeInitiallyCurrentDate;
- (id)_objectForIdentifier:(id)arg1;
- (id)_originalUniqueIdentifier;
- (id)_payloadForIdentifier:(id)arg1;
- (id /* block */)_payloadUpdateBlockForIdentifier:(id)arg1;
- (void)_sendToCoreSpotlightIndexer;
- (id)_sentToIndexerDate;
- (void)_setDirty:(bool)arg1 identifier:(id)arg2;
- (void)_setPayload:(id)arg1 object:(id)arg2 identifier:(id)arg3;
- (void)_setPayload:(id)arg1 object:(id)arg2 identifier:(id)arg3 dirty:(bool)arg4;
- (void)_setPayloadIdentifier:(id)arg1 object:(id)arg2 withBlock:(id /* block */)arg3;
- (bool)_supportsSynchronizeActivityWithTimeout;
- (void)_updateForwardToCoreSpotlightIndexer:(BOOL)arg1;
- (unsigned long long)_userInfoChangeCount;
- (id)contentAttributeSet;
- (bool)doSaveUserActivityWithTimeout:(double)arg1 isCurrent:(bool)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)setContentAttributeSet:(id)arg1;
- (void)set_universalLink:(bool)arg1;

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

- (id)wf_referenceInDatabase:(id)arg1;

@end
