
@interface NSError : NSObject <AMSSecureCodingSanitizable, ARDictionaryCoding, BSDescriptionProviding, EFPubliclyDescribable, HMFObject, IMJSONSerializableValueProviding, IMMetricsDataSource, MGRemoteQueryDecodable, MPCPlaybackEngineEventPayloadValueJSONConvertible, NSCopying, NSSecureCoding, PQLValuable> {
    long long  _code;
    NSString * _domain;
    void * _reserved;
    NSDictionary * _userInfo;
}

@property (nonatomic, readonly) int CKSQLiteCode;
@property (nonatomic, readonly) int CKSQLiteExtendedCode;
@property (nonatomic, readonly) NSString *CPSafeDescription;
@property (nonatomic, readonly, copy) NSString *_bcs_privacyPreservingDescription;
@property (nonatomic, readonly) bool _geo_isXPCInterruptedError;
@property (getter=_geo_isNetworkError, nonatomic, readonly) bool _geo_networkError;
@property (getter=_mapkit_isCLDenied, nonatomic, readonly) bool _mapkit_CLDenied;
@property (getter=_mapkit_isCLErrorNetwork, nonatomic, readonly) bool _mapkit_CLErrorNetwork;
@property (getter=_mapkit_isCLHeadingFailure, nonatomic, readonly) bool _mapkit_CLHeadingFailure;
@property (getter=_mapkit_isCLLocationUnknown, nonatomic, readonly) bool _mapkit_CLLocationUnknown;
@property (nonatomic, readonly, retain) NSURL *_mapkit_locationErrorSettingsURL;
@property (nonatomic, readonly) bool _maps_isCancellation;
@property (readonly) bool _maps_isCloudKitErrorContainingNotFoundMarkersOnly;
@property (readonly) bool _maps_isCloudKitTokenExpirationError;
@property (readonly) bool _maps_isFileNotFoundError;
@property (getter=ac_isDiskFullSQLError, nonatomic, readonly) bool ac_diskFullSQLError;
@property (getter=ac_isUnrecoverableDatabaseError, nonatomic, readonly) bool ac_unrecoverableDatabaseError;
@property (nonatomic, readonly, copy) NSString *ae_verboseDescription;
@property (getter=ams_isBagValueMissingError, nonatomic, readonly) bool ams_bagValueMissingError;
@property (nonatomic, readonly) NSString *ams_message;
@property (nonatomic, readonly) NSArray *ams_multipleUnderlyingErrors;
@property (getter=ams_isTimeoutError, nonatomic, readonly) bool ams_timeoutError;
@property (nonatomic, readonly) NSString *ams_title;
@property (nonatomic, readonly) NSError *ams_underlyingError;
@property (getter=ams_isUserCancelledError, nonatomic, readonly) bool ams_userCancelledError;
@property (nonatomic, readonly, copy) NSArray *attributeDescriptions;
@property (nonatomic, readonly) bool bl_isAMSStatusCode401;
@property (nonatomic, readonly) bool bl_isUserCancelError;
@property (nonatomic, readonly) bool bu_isCancelError;
@property (nonatomic, readonly) bool bu_isCorruptedError;
@property (nonatomic, readonly) bool bu_isFileExistsError;
@property (nonatomic, readonly) bool bu_isNoPermissionError;
@property (nonatomic, readonly) bool bu_isNoSuchFileError;
@property (nonatomic, readonly) bool bu_isOutOfSpaceError;
@property (nonatomic, readonly) bool bu_isReadError;
@property (nonatomic, readonly) bool bu_isWriteError;
@property (nonatomic, readonly, copy) NSDictionary *cat_dictionaryValue;
@property (readonly) long long code;
@property (getter=isComparisonError, nonatomic, readonly) bool comparisonError;
@property (nonatomic, readonly) bool cps_isUserCanceledError;
@property (nonatomic, readonly, copy) NSString *cps_privacyPreservingDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=dnds_isOutOfSpaceError, nonatomic, readonly) bool dnds_outOfSpaceError;
@property (readonly, copy) NSString *domain;
@property (nonatomic, readonly, copy) NSArray *ds_localizedAppNames;
@property (nonatomic, readonly, copy) NSSet *ds_localizedPermissionNames;
@property (nonatomic, readonly, copy) NSDictionary *ds_underlyingErrorsBySource;
@property (nonatomic, readonly) bool ef_isCancelledError;
@property (nonatomic, readonly) bool ef_isConnectionInterruptedError;
@property (nonatomic, readonly) bool ef_isNotSupportedError;
@property (nonatomic, readonly) bool ef_isTemporarilyUnavailableError;
@property (nonatomic, readonly) bool ef_isTimeoutError;
@property (nonatomic, readonly, copy) NSString *ef_publicDescription;
@property (nonatomic, readonly) NSError *ef_underlyingError;
@property (nonatomic, readonly) bool em_isInternalError;
@property (nonatomic, readonly) bool em_isItemNotFoundError;
@property (nonatomic, readonly) NSURL *fp_collidingURL;
@property (nonatomic, readonly) bool fp_isFeatureUnsupportedError;
@property (nonatomic, readonly) bool fp_isNameTooLongError;
@property (nonatomic, readonly) bool fp_isNotPermittedError;
@property (nonatomic, readonly) bool fp_isRemoteCrashError;
@property (nonatomic, readonly) bool fp_isSyncAnchorExpiredError;
@property (nonatomic, readonly) NSObject *fp_prettyDescription;
@property (nonatomic, readonly) NSError *fp_unwrappedInternalError;
@property (getter=isFromRequest, nonatomic, readonly) bool fromRequest;
@property (readonly) NSArray *gc_failingKeyPath;
@property (readonly) unsigned long long hash;
@property (getter=hd_isFromRequest, nonatomic, readonly) bool hd_fromRequest;
@property (nonatomic, readonly) unsigned short hd_messageID;
@property (nonatomic, readonly) NSString *hd_messageIDSDeviceIdentifier;
@property (nonatomic, readonly) NSString *hd_messageIDSIdentifier;
@property (nonatomic, readonly) NSDate *hd_messageSent;
@property (nonatomic, readonly) NSDictionary *hd_persistentUserInfo;
@property (readonly, copy) NSString *helpAnchor;
@property (nonatomic, readonly) bool hf_isAlreadyPairedError;
@property (nonatomic, readonly) bool hf_isHomeKitNamingError;
@property (nonatomic, readonly) bool hf_isHomeKitUnreachableError;
@property (nonatomic, readonly) bool hf_isThreadNetworkRequiredError;
@property (getter=isHMError, nonatomic, readonly) bool hmError;
@property (nonatomic, readonly, copy) NSError *hmPublicError;
@property (readonly) double hmbCloudKitRetryDelay;
@property (readonly) double hmbDefaultCloudKitRetryDelay;
@property (readonly) bool hmbIsCKChangeTokenExpiredError;
@property (readonly) bool hmbIsCKLimitExceededError;
@property (readonly) bool hmbIsCKManateeUnavailableError;
@property (readonly) bool hmbIsCKMissingManateeIdentityError;
@property (readonly) bool hmbIsCKNotAuthenticatedError;
@property (readonly) bool hmbIsCKPartialFailureError;
@property (readonly) bool hmbIsCKUnsyncedKeychainError;
@property (readonly) bool hmbIsCKZoneDeletedError;
@property (readonly) bool hmbIsCloudKitError;
@property (readonly) bool hmbIsSQLiteConstraintError;
@property (getter=hmbIsRetryShareOperationError, readonly) bool hmbRetryShareOperationError;
@property (getter=hmd_isCKError, readonly) bool hmd_ckError;
@property (readonly, copy) NSError *hmd_conciseCKError;
@property (readonly, copy) NSError *hmd_convertedCKError;
@property (readonly, copy) NSError *hmd_hmErrorFromCKError;
@property (getter=hmd_isInternalCKError, readonly) bool hmd_internalCKError;
@property (getter=hmd_isNonRecoverableCKError, readonly) bool hmd_nonRecoverableCKError;
@property (getter=hmd_isRecordConflictCKError, readonly) bool hmd_recordConflictCKError;
@property (readonly, copy) NSNumber *hmd_retryAfterCKError;
@property (getter=isHMFError, nonatomic, readonly) bool hmfError;
@property (getter=hmmtr_isMatterError, readonly) bool hmmtr_matterError;
@property (nonatomic, readonly) NSString *idsIdentifier;
@property (getter=isInformational, nonatomic, readonly) bool informational;
@property (nonatomic, readonly) bool isAuthKitUnableToPromptDueToNetworkError;
@property (nonatomic, readonly) bool isAuthKitUnableToPromptError;
@property (nonatomic, readonly) bool isAuthenticationError;
@property (readonly) bool isFileExistsError;
@property (nonatomic, readonly, copy) LNDialog *ln_dialog;
@property (nonatomic, readonly, copy) LNStaticDeferredLocalizedString *ln_staticDeferredLocalizedString;
@property (readonly, copy) NSString *localizedDescription;
@property (readonly, copy) NSString *localizedFailureReason;
@property (readonly, copy) NSArray *localizedRecoveryOptions;
@property (readonly, copy) NSString *localizedRecoverySuggestion;
@property (nonatomic, readonly) unsigned short messageID;
@property (nonatomic, readonly) NSDate *messageSent;
@property (nonatomic, readonly) bool mpc_isAirplayDeviceBusyError;
@property (nonatomic, readonly) bool mpc_isAirplayStreamingNotSupportedError;
@property (nonatomic, readonly) bool mpc_isAssetUnavailableFailure;
@property (nonatomic, readonly) bool mpc_isKeyServerNoOfflineSlotError;
@property (nonatomic, readonly) bool mpc_isLeaseTakenError;
@property (nonatomic, readonly) bool mpc_isQueueLoadingFailure;
@property (nonatomic, readonly) bool mpc_isRentalContentRequiresDownloadError;
@property (nonatomic, readonly) bool mpc_isResourceUnavailableError;
@property (nonatomic, readonly) bool mpc_isUnrecoverableAssetLoadingError;
@property (nonatomic, readonly) MPRemoteCommandStatus *mpc_remoteCommandStatus;
@property (nonatomic, readonly) NSString *msv_signature;
@property (nonatomic, readonly) NSError *msv_underlyingError;
@property (nonatomic, readonly) NSDictionary *persistentUserInfo;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly) id recoveryAttempter;
@property (readonly) int retIOKitError;
@property (nonatomic, readonly) NSError *safari_errorByAddingRequestUUIDInPrivacyPreservingUserInfo;
@property (nonatomic, readonly) bool safari_isCloudKitBatchTooLargeError;
@property (nonatomic, readonly) bool safari_isCloudKitMissingZoneError;
@property (nonatomic, readonly) bool safari_isCloudKitNonExistentRecordError;
@property (nonatomic, readonly) bool safari_isInCloudKitErrorDomain;
@property (nonatomic, readonly) bool safari_isInWebKitLegacyErrorDomain;
@property (nonatomic, readonly) bool safari_isLocalNetworkContentFilteringError;
@property (nonatomic, readonly) bool safari_isOrContainsClientSideNetworkError;
@property (nonatomic, readonly) bool safari_isOrContainsCloudKitMissingZoneError;
@property (nonatomic, readonly) bool safari_isOrContainsNetworkUnavailableError;
@property (nonatomic, readonly) bool safari_isPrivacyProxyError;
@property (nonatomic, readonly) bool safari_isPrivacyProxyFailClosedError;
@property (nonatomic, readonly) bool safari_isRecoverableByPageFormatMenu;
@property (nonatomic, readonly) bool safari_isSQLiteCorruptionError;
@property (nonatomic, readonly) bool safari_isSQLiteError;
@property (nonatomic, readonly) bool safari_isUnrecoverableCloudKitError;
@property (nonatomic, readonly, copy) NSString *safari_privacyPreservingDescription;
@property (nonatomic, readonly, copy) NSError *safari_privacyPreservingError;
@property (nonatomic, readonly, copy) NSError *serializableError;
@property (nonatomic, readonly) bool sh_isAudioDiscontinuity;
@property (nonatomic, readonly) bool sh_isCoreCompressionError;
@property (nonatomic, readonly) bool sh_isCoreDaemonExit;
@property (nonatomic, readonly) bool sh_isCoreFileParsingError;
@property (nonatomic, readonly) bool sh_isCoreMatchAttemptCancelledError;
@property (nonatomic, readonly) bool sh_isCoreMatchAttemptRejectedError;
@property (nonatomic, readonly) bool sh_isCoreMediaItemMissingRequiredProperties;
@property (nonatomic, readonly) bool sh_isCoreMissingEntitlementsError;
@property (nonatomic, readonly) bool sh_isCustomCatalogInvalid;
@property (nonatomic, readonly) bool sh_isCustomCatalogInvalidURL;
@property (nonatomic, readonly) bool sh_isInternalError;
@property (nonatomic, readonly) bool sh_isInvalidAudioFormat;
@property (nonatomic, readonly) bool sh_isMatchAttemptFailed;
@property (nonatomic, readonly) bool sh_isMediaLibraryError;
@property (nonatomic, readonly) bool sh_isMediaLibraryPublicError;
@property (nonatomic, readonly) bool sh_isShazamCoreError;
@property (nonatomic, readonly) bool sh_isShazamKitPublicError;
@property (nonatomic, readonly) bool sh_isSignatureDurationInvalid;
@property (nonatomic, readonly) bool sh_isSignatureInvalid;
@property (readonly, copy) NSString *shortDescription;
@property (nonatomic, readonly) NSString *ssb_privacyPreservingDescription;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *tsp_actualDataDigest;
@property (nonatomic, readonly) NSDate *tsp_dataCreationTime;
@property (nonatomic, readonly) NSString *tsp_dataCreationVersion;
@property (nonatomic, readonly) long long tsp_dataIdentifier;
@property (nonatomic, readonly) unsigned long long tsp_dataLength;
@property (nonatomic, readonly) NSString *tsp_dataType;
@property (nonatomic, readonly) NSString *tsp_dataValidationReason;
@property (nonatomic, readonly) NSString *tsp_expectedDataDigest;
@property (nonatomic, readonly) bool tsp_expectedDataDigestMatch;
@property (nonatomic, readonly) NSSet *tsp_hints;
@property (nonatomic, readonly) NSString *tsp_hintsDescription;
@property (nonatomic, readonly) bool tsp_isCorruptZipOfPackageError;
@property (nonatomic, readonly) bool tsp_isCorruptedError;
@property (nonatomic, readonly) bool tsp_isDataCorruptionError;
@property (nonatomic, readonly) bool tsp_isDataDigestMismatchError;
@property (nonatomic, readonly) bool tsp_isDocumentTooNewError;
@property (nonatomic, readonly) bool tsp_isLikelyOSCorruption;
@property (nonatomic, readonly) bool tsp_isLikelyZeroBytesCorruption;
@property (nonatomic, readonly) bool tsp_isPasswordInputError;
@property (nonatomic, readonly) bool tsp_isReadError;
@property (nonatomic, readonly) bool tsp_isRecoverable;
@property (nonatomic, readonly) bool tsp_isTSPError;
@property (nonatomic, readonly) bool tsp_isUnsupportedVersionError;
@property (nonatomic, readonly) bool tsp_isWriteError;
@property (nonatomic, readonly) bool tsu_isCancelError;
@property (nonatomic, readonly) bool tsu_isCorruptedError;
@property (nonatomic, readonly) bool tsu_isFeatureUnsupportedError;
@property (nonatomic, readonly) bool tsu_isFileExistsError;
@property (nonatomic, readonly) bool tsu_isNoPermissionError;
@property (nonatomic, readonly) bool tsu_isNoSuchFileError;
@property (nonatomic, readonly) bool tsu_isOutOfSpaceError;
@property (nonatomic, readonly) bool tsu_isReadError;
@property (nonatomic, readonly) bool tsu_isWriteError;
@property (nonatomic, readonly) NSString *tsu_zipArchiveErrorDescription;
@property (nonatomic, readonly) NSString *tsu_zipArchiveErrorEntryName;
@property (readonly, copy) NSArray *underlyingErrors;
@property (readonly, copy) NSDictionary *userInfo;
@property (nonatomic, readonly) bool vm_isCancelledError;
@property (nonatomic, readonly) bool vm_isConnectionInterruptedError;
@property (nonatomic, readonly) bool vm_isNotSupportedError;
@property (nonatomic, readonly) bool vm_isTemporarilyUnavailableError;
@property (nonatomic, readonly) bool vm_isTimeoutError;
@property (nonatomic, readonly) NSError *vm_underlyingError;
@property (nonatomic, readonly) bool wf_isUnsupportedOnPlatformError;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (id)_readCorruptErrorWithFormat:(id)arg1;
+ (void)_registerBuiltInFormatters;
+ (void)_registerFormatter:(int (*)arg1 forErrorKey:(id)arg2 parameters:(const char *)arg3;
+ (void)_setFileNameLocalizationEnabled:(bool)arg1;
+ (void)_web_addErrorsWithCodesAndDescriptions:(id)arg1 inDomain:(id)arg2;
+ (id)_web_errorWithDomain:(id)arg1 code:(long long)arg2 URL:(id)arg3;
+ (id)_web_errorWithDomain:(id)arg1 code:(long long)arg2 failingURL:(id)arg3;
+ (id)errorWithDomain:(id)arg1 code:(long long)arg2 userInfo:(id)arg3;
+ (void)setUserInfoValueProviderForDomain:(id)arg1 provider:(id /* block */)arg2;
+ (bool)supportsSecureCoding;
+ (id /* block */)userInfoValueProviderForDomain:(id)arg1;

- (unsigned long long)_cfTypeID;
- (id)_cocoaErrorString:(id)arg1;
- (id)_cocoaErrorString:(id)arg1 fromBundle:(id)arg2 tableName:(id)arg3;
- (id)_cocoaErrorStringWithKind:(id)arg1;
- (id)_cocoaErrorStringWithKind:(id)arg1 variant:(id)arg2;
- (long long)_collectApplicableUserInfoFormatters:(struct { /* ? */ }**)arg1 max:(long long)arg2;
- (id)_formatCocoaErrorString:(id)arg1 parameters:(const char *)arg2 applicableFormatters:(struct { /* ? */ }**)arg3 count:(long long)arg4;
- (struct __CFString { }*)_retainedUserInfoCallBackForKey:(id)arg1;
- (bool)_web_errorIsInDomain:(id)arg1;
- (id)_web_failingURL;
- (id)_web_initWithDomain:(id)arg1 code:(long long)arg2 failingURL:(id)arg3;
- (id)_web_initWithDomain_nowarn:(id)arg1 code:(long long)arg2 URL:(id)arg3;
- (id)_web_localizedDescription;
- (id)brc_description;
- (long long)code;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)domain;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)helpAnchor;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDomain:(id)arg1 code:(long long)arg2 userInfo:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)localizedDescription;
- (id)localizedFailureReason;
- (id)localizedRecoveryOptions;
- (id)localizedRecoverySuggestion;
- (id)recoveryAttempter;
- (id)redactedDescription;
- (id)replacementObjectForPortCoder:(id)arg1;
- (id)underlyingErrors;
- (id)userInfo;

// Image: /System/Library/Frameworks/Accounts.framework/Accounts

- (bool)ac_isDiskFullSQLError;
- (bool)ac_isUnrecoverableDatabaseError;
- (id)ac_sanitizeObject:(id)arg1;
- (id)ac_secureCodingError;

// Image: /System/Library/Frameworks/CallKit.framework/CallKit

+ (id)cx_callDirectoryManagerErrorWithCode:(long long)arg1;
+ (id)cx_callDirectoryManagerErrorWithCode:(long long)arg1 userInfo:(id)arg2;
+ (id)cx_callDirectoryStoreErrorWithCode:(long long)arg1;
+ (id)cx_channelErrorWithCode:(long long)arg1;
+ (id)cx_errorWithCode:(long long)arg1;
+ (id)cx_incomingCallErrorWithCode:(long long)arg1;
+ (id)cx_notificationServiceExtensionErrorWithCode:(long long)arg1;
+ (id)cx_requestTransactionErrorWithCode:(long long)arg1;

// Image: /System/Library/Frameworks/ClassKit.framework/ClassKit

+ (bool)cls_assignError:(id*)arg1 code:(long long)arg2 description:(id)arg3;
+ (bool)cls_assignError:(id*)arg1 code:(long long)arg2 errorObject:(id)arg3 description:(id)arg4;
+ (bool)cls_assignError:(id*)arg1 code:(long long)arg2 errorObject:(id)arg3 format:(id)arg4;
+ (bool)cls_assignError:(id*)arg1 code:(long long)arg2 format:(id)arg3;
+ (bool)cls_assignError:(id*)arg1 fromError:(id)arg2;
+ (id)cls_createErrorWithCode:(long long)arg1 description:(id)arg2;
+ (id)cls_createErrorWithCode:(long long)arg1 errorObject:(id)arg2 description:(id)arg3;
+ (id)cls_createErrorWithCode:(long long)arg1 errorObject:(id)arg2 format:(id)arg3;
+ (id)cls_createErrorWithCode:(long long)arg1 format:(id)arg2;
+ (id)cls_createErrorWithCode:(long long)arg1 successfulObjects:(id)arg2 underlyingErrors:(id)arg3 description:(id)arg4;
+ (id)cls_createErrorWithCode:(long long)arg1 underlyingError:(id)arg2 description:(id)arg3;

- (void)cls_debug:(id)arg1;
- (void)cls_info:(id)arg1;
- (bool)cls_isClassKitError;
- (bool)cls_isRetryable:(bool)arg1;
- (void)cls_log:(id)arg1;
- (void)cls_notice:(id)arg1;
- (id)cls_underlyingErrorWithDomain:(id)arg1;
- (void)cls_warn:(id)arg1;

// Image: /System/Library/Frameworks/CloudKit.framework/CloudKit

+ (id)CKErrorFromErrno;
+ (id)CKErrorWithPOSIXCode:(int)arg1;
+ (bool)CKIsConstraintError:(id)arg1;
+ (bool)CKIsCorruptDatabaseError:(id)arg1;
+ (bool)CKIsDiskFullError:(id)arg1;
+ (bool)CKIsForeignKeyConstraintError:(id)arg1;
+ (bool)CKIsNoMatchingRowError:(id)arg1;
+ (bool)CKIsNoUniqueRowError:(id)arg1;
+ (bool)CKIsUniqueConstraintError:(id)arg1;

- (void)CKAssignToContainerWithID:(id)arg1;
- (id)CKClientSuitableError;
- (id)CKClientSuitableErrorSpecificUserInfo;
- (id)CKClientSuitableUnderlyingError;
- (id)CKDescriptionPropertiesWithPublic:(bool)arg1 private:(bool)arg2 shouldExpand:(bool)arg3;
- (id)CKErrorScopedToZoneIDs:(id)arg1;
- (bool)CKHasCKErrorInUnderlyingErrors;
- (bool)CKHasTopLevelUnderlyingError;
- (bool)CKIsCKError;
- (bool)CKIsCKSQLiteError;
- (bool)CKIsNotFoundError;
- (bool)CKIsObjectNotFoundError;
- (bool)CKIsPOSIXErrorCode:(long long)arg1;
- (id)CKItemErrorForID:(id)arg1;
- (int)CKSQLiteCode;
- (int)CKSQLiteExtendedCode;
- (void)ck_bindInStatement:(id)arg1 atIndex:(unsigned long long)arg2;
- (bool)isComparisonError;

// Image: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth

+ (id)errorWithInfo:(id)arg1;

// Image: /System/Library/Frameworks/DeviceCheck.framework/DeviceCheck

+ (id)dc_errorWithCode:(long long)arg1;
+ (id)dc_errorWithCode:(long long)arg1 userInfo:(id)arg2;

// Image: /System/Library/Frameworks/EventKit.framework/EventKit

+ (bool)_cal_serializedEntryForKey:(id)arg1 value:(id)arg2 outKey:(id*)arg3 outValue:(id*)arg4;
+ (id)_defaultDescriptionForCADErrorCode:(int)arg1;
+ (id)_defaultDescriptionForEKErrorCode:(long long)arg1;
+ (id)errorWithCADErrorCode:(int)arg1;
+ (id)errorWithCADErrorCode:(int)arg1 description:(id)arg2;
+ (id)errorWithCADResult:(int)arg1;
+ (id)errorWithDomain:(id)arg1 code:(unsigned long long)arg2 description:(id)arg3 underlyingError:(id)arg4 reason:(id)arg5;
+ (id)errorWithEKErrorCode:(long long)arg1;
+ (id)errorWithEKErrorCode:(long long)arg1 description:(id)arg2;
+ (id)errorWithEKErrorCode:(long long)arg1 description:(id)arg2 reason:(id)arg3;
+ (id)errorWithEKErrorCode:(long long)arg1 description:(id)arg2 underlyingError:(id)arg3 reason:(id)arg4;
+ (id)errorWithEKErrorCode:(long long)arg1 underlyingError:(id)arg2;

- (bool)cal_isCertificateError;
- (id)cal_serializableError;
- (id)cal_serializableUserInfo;
- (struct __SecTrust { }*)cal_trustInfoCopy;

// Image: /System/Library/Frameworks/ExtensionFoundation.framework/ExtensionFoundation

+ (id)_EX_errorWithCode:(long long)arg1 description:(id)arg2;
+ (id)_EX_errorWithCode:(long long)arg1 underlyingError:(id)arg2;
+ (id)_EX_hostIsLackingRequiredEntitlementErrorWithHostPID:(int)arg1 requiredEntitlements:(id)arg2;
+ (id)_EX_parameterError;
+ (id)_EX_processExitedErrorWithName:(id)arg1 pid:(int)arg2;
+ (id)_EX_unimplementedError;

// Image: /System/Library/Frameworks/FileProvider.framework/FileProvider

+ (id)_fp_errorWithPOSIXCode:(int)arg1 itemURL:(id)arg2 debugDescription:(id)arg3 message:(id)arg4;
+ (id)fileProviderErrorForCollisionWithItem:(id)arg1;
+ (id)fileProviderErrorForNonExistentItemWithIdentifier:(id)arg1;
+ (id)fileProviderErrorForRejectedDeletionOfItem:(id)arg1;
+ (id)fp_errorForCollisionWithURL:(id)arg1;
+ (id)fp_errorWithPOSIXCode:(int)arg1;
+ (id)fp_errorWithPOSIXCode:(int)arg1 description:(id)arg2;
+ (id)fp_errorWithPOSIXCode:(int)arg1 itemURL:(id)arg2 debugDescription:(id)arg3;
+ (void)fp_initLocalizationStrings;
+ (id)fp_invalidArgumentError:(id)arg1;
+ (id)fp_translocatedError:(id)arg1;

- (id)fp_annotatedErrorWithItem:(id)arg1 variant:(id)arg2;
- (id)fp_annotatedErrorWithItems:(id)arg1 variant:(id)arg2;
- (id)fp_annotatedErrorWithName:(id)arg1;
- (id)fp_annotatedErrorWithName:(id)arg1 path:(id)arg2 variant:(id)arg3;
- (id)fp_annotatedErrorWithOperationItem:(id)arg1;
- (id)fp_annotatedErrorWithRecoveryAttempter:(id)arg1 fpProviderDomainId:(id)arg2;
- (id)fp_annotatedErrorWithURL:(id)arg1 variant:(id)arg2;
- (id)fp_asWarning;
- (id)fp_collidingURL;
- (id)fp_genericPreflightError;
- (id)fp_internalErrorForVendorErrorWithCallerDescription:(id)arg1 itemCreationBlock:(id /* block */)arg2;
- (bool)fp_isCocoaErrorCode:(long long)arg1;
- (bool)fp_isFeatureUnsupportedError;
- (bool)fp_isFileProviderError:(long long)arg1;
- (bool)fp_isFileProviderInternalError:(long long)arg1;
- (bool)fp_isGenericPreflightError;
- (bool)fp_isNameTooLongError;
- (bool)fp_isNotPermittedError;
- (bool)fp_isPOSIXErrorCode:(int)arg1;
- (bool)fp_isRemoteCrashError;
- (bool)fp_isSyncAnchorExpiredError;
- (bool)fp_isWarning;
- (id)fp_prettyDescription;
- (id)fp_prettyDescription:(unsigned long long)arg1;
- (id)fp_recoverableErrorWithBlock:(id /* block */)arg1 fpProviderDomainId:(id)arg2 operationService:(id)arg3;
- (id)fp_strippedError;
- (id)fp_unwrappedErrorForDomains:(id)arg1;
- (id)fp_unwrappedInternalError;
- (id)fp_userInfoFPItem;
- (id)fp_userInfoItem;
- (id)fp_userInfoValueForKey:(id)arg1;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)_hk_OAuth2_defaultDescriptionForErrorCode:(long long)arg1;
+ (id)_hk_OAuth2_error:(long long)arg1 userInfo:(id)arg2 underlyingError:(id)arg3;
+ (id)_hk_OAuth2_errorForBadRequestStatusWithResponse:(id)arg1 data:(id)arg2;
+ (id)_hk_OAuth2_errorForUnauthorizedStatusWithRequest:(id)arg1 response:(id)arg2;
+ (id)_hk_OAuth2_errorFromResponseData:(id)arg1 defaultError:(id)arg2 parseError:(id*)arg3;
+ (id)_hk_OAuth2_rawErrorForRequest:(id)arg1 response:(id)arg2 data:(id)arg3;
+ (id)hk_HTTPErrorRepresentingResponse:(id)arg1 request:(id)arg2;
+ (id)hk_HTTPErrorWithHTTPStatusCode:(long long)arg1 URLResponse:(id)arg2;
+ (id)hk_OAuth2_error:(long long)arg1;
+ (id)hk_OAuth2_error:(long long)arg1 underlyingError:(id)arg2;
+ (id)hk_OAuth2_errorForRequest:(id)arg1 response:(id)arg2 data:(id)arg3;
+ (id)hk_OAuth2_errorFromErrorValue:(id)arg1;
+ (bool)hk_assignError:(id*)arg1 code:(long long)arg2 description:(id)arg3;
+ (bool)hk_assignError:(id*)arg1 code:(long long)arg2 description:(id)arg3 underlyingError:(id)arg4;
+ (bool)hk_assignError:(id*)arg1 code:(long long)arg2 format:(id)arg3;
+ (bool)hk_assignError:(id*)arg1 code:(long long)arg2 userInfo:(id)arg3;
+ (bool)hk_assignError:(id*)arg1 invalidArgument:(id)arg2 class:(Class)arg3 selector:(SEL)arg4;
+ (bool)hk_assignError:(id*)arg1 nilArgument:(id)arg2 class:(Class)arg3 selector:(SEL)arg4;
+ (id)hk_databaseInaccessibleBeforeFirstUnlockError;
+ (id)hk_databaseSchemaRolledBackError;
+ (id)hk_error:(long long)arg1 class:(Class)arg2 selector:(SEL)arg3 format:(id)arg4;
+ (id)hk_error:(long long)arg1 description:(id)arg2;
+ (id)hk_error:(long long)arg1 description:(id)arg2 underlyingError:(id)arg3;
+ (id)hk_error:(long long)arg1 format:(id)arg2;
+ (id)hk_error:(long long)arg1 userInfo:(id)arg2;
+ (id)hk_errorForInvalidArgument:(id)arg1 class:(Class)arg2 selector:(SEL)arg3;
+ (id)hk_errorForInvalidArgument:(id)arg1 class:(Class)arg2 selector:(SEL)arg3 format:(id)arg4;
+ (id)hk_errorForNilArgument:(id)arg1 class:(Class)arg2 selector:(SEL)arg3;
+ (id)hk_featureUnavailableForProfileError;
+ (id)hk_healthDataUnavailableError;
+ (id)hk_healthStoreUnavailableError;
+ (id)hk_invalidProfileError;
+ (id)hk_protectedDataInaccessibilityError;
+ (id)hk_transactionInterruptedError;

- (id)_hk_OAuth2_errorByAddingItemsToUserInfo:(id)arg1;
- (bool)hk_OAuth2_isAccessDeniedError;
- (bool)hk_OAuth2_isBearerAuthenticationError;
- (bool)hk_OAuth2_isOAuth2Error;
- (bool)hk_OAuth2_isOAuth2ErrorWithCode:(long long)arg1;
- (id)hk_errorByAddingEntriesToUserInfo:(id)arg1;
- (bool)hk_isAuthorizationDeniedError;
- (bool)hk_isAuthorizationNotDeterminedError;
- (bool)hk_isCocoaFileExistsError;
- (bool)hk_isCocoaNoSuchFileError;
- (bool)hk_isDatabaseAccessibilityError;
- (bool)hk_isDatabaseSchemaRolledBackError;
- (bool)hk_isDatabaseTransactionError;
- (bool)hk_isDuplicateObjectError;
- (bool)hk_isErrorInDomain:(id)arg1 code:(long long)arg2;
- (bool)hk_isFeatureDisabledError;
- (bool)hk_isHFDUnsupportedError;
- (bool)hk_isHealthKitError;
- (bool)hk_isHealthKitErrorWithCode:(long long)arg1;
- (bool)hk_isHealthStoreUnavailableError;
- (bool)hk_isInternalFailureError;
- (bool)hk_isInvalidArgumentError;
- (bool)hk_isObjectNotFoundError;
- (bool)hk_isOntologyConceptNotFoundError;
- (bool)hk_isRequiredAuthorizationError;
- (bool)hk_isServiceDeviceNotFoundError;
- (bool)hk_isStreamFailureError;
- (bool)hk_isTimeoutError;
- (bool)hk_isTransactionInterruptedError;
- (bool)hk_isUserCanceledError;
- (bool)hk_isXPCConnectionError;
- (bool)hk_isXPCConnectionInterruptedError;
- (id)hk_sanitizedError;
- (id)hk_sanitizedErrorForDomain:(id)arg1;
- (id)hk_underlyingErrorWithDomain:(id)arg1;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

+ (id)hmErrorWithCode:(long long)arg1;
+ (id)hmErrorWithCode:(long long)arg1 description:(id)arg2 reason:(id)arg3 suggestion:(id)arg4;
+ (id)hmErrorWithCode:(long long)arg1 description:(id)arg2 reason:(id)arg3 suggestion:(id)arg4 underlyingError:(id)arg5;
+ (id)hmErrorWithCode:(long long)arg1 userInfo:(id)arg2;
+ (id)hmInternalErrorWithCode:(long long)arg1;
+ (id)hmInternalErrorWithCode:(long long)arg1 underlyingError:(id)arg2;
+ (id)hmInternalErrorWithCode:(long long)arg1 userInfo:(id)arg2;
+ (id)hmPrivateErrorWithCode:(long long)arg1;
+ (id)hmPrivateErrorWithCode:(long long)arg1 description:(id)arg2 underlyingError:(id)arg3;
+ (id)hmPrivateErrorWithCode:(long long)arg1 underlyingError:(id)arg2;
+ (id)hmStringFromErrorCode:(long long)arg1;
+ (id)hm_errorWithNWError:(id)arg1;

- (id)hmPublicError;
- (bool)isHMError;

// Image: /System/Library/Frameworks/MapKit.framework/MapKit

+ (id)_errorWithExtensionServiceError:(long long)arg1;

- (long long)_mapkit_directionsErrorCode;
- (id)_mapkit_error;
- (id)_mapkit_errorWithDirectionsError:(id)arg1;
- (id)_mapkit_errorWithDirectionsError:(id)arg1 stringTokens:(id)arg2;
- (bool)_mapkit_isCLDenied;
- (bool)_mapkit_isCLErrorNetwork;
- (bool)_mapkit_isCLHeadingFailure;
- (bool)_mapkit_isCLLocationUnknown;
- (bool)_mapkit_isDirectionsError;
- (bool)_mapkit_isLocationAuthorizationError;
- (id)_mapkit_locationErrorSettingsURL;
- (id)_mapkit_transitIncident;
- (long long)_mapkit_underlyingGEOError;

// Image: /System/Library/Frameworks/MatterSupport.framework/MatterSupport

+ (id)mts_errorWithCode:(long long)arg1;
+ (id)mts_errorWithCode:(long long)arg1 description:(id)arg2;
+ (id)mts_errorWithCode:(long long)arg1 underlyingError:(id)arg2;
+ (id)mts_errorWithCode:(long long)arg1 underlyingError:(id)arg2 description:(id)arg3;
+ (id)mts_stubErrorForMethod:(id)arg1;

// Image: /System/Library/Frameworks/MediaSetup.framework/MediaSetup

- (bool)CKErrorHasErrorCode:(unsigned long long)arg1;
- (bool)CKErrorHasUnderlyingErrorCode:(long long)arg1;
- (bool)isErrorFatal;
- (id)translateCKErrorToMSError;

// Image: /System/Library/Frameworks/Metal.framework/Metal

+ (id)errorWithMTLCaptureErrorCode:(long long)arg1;

- (id)initWithIOAccelError:(long long)arg1;

// Image: /System/Library/Frameworks/MetricKit.framework/MetricKit

+ (id)_defaultDescriptionForMXErrorCode:(long long)arg1;
+ (id)errorWithMXErrorCode:(long long)arg1;

// Image: /System/Library/Frameworks/MusicKit.framework/MusicKit

+ (id)musicKit_defaultLibraryError;

// Image: /System/Library/Frameworks/Photos.framework/Photos

+ (id)_ph_genericErrorWithUnderlyingError:(id)arg1 localizedDescription:(id)arg2;
+ (id)ph_errorWithCode:(long long)arg1 localizedDescription:(id)arg2;
+ (id)ph_errorWithDomain:(id)arg1 code:(long long)arg2 userInfo:(id)arg3;
+ (id)ph_genericEntitlementError;
+ (id)ph_genericErrorWithLocalizedDescription:(id)arg1;
+ (id)ph_genericErrorWithUnderlyingError:(id)arg1 localizedDescription:(id)arg2;

// Image: /System/Library/Frameworks/ReplayKit.framework/ReplayKit

+ (id)_rpUserErrorForCode:(long long)arg1 userInfo:(id)arg2;
+ (id)_scUserErrorForCode:(long long)arg1 userInfo:(id)arg2;

// Image: /System/Library/Frameworks/SafariServices.framework/SafariServices

- (id)failingURL;

// Image: /System/Library/Frameworks/SensorKit.framework/SensorKit

+ (id)errorWithUnderlyingErrorFromExistingError:(id)arg1;

// Image: /System/Library/Frameworks/ShazamKit.framework/ShazamKit

- (bool)isShazamPublicErrorWithCode:(long long)arg1;
- (bool)sh_isAudioDiscontinuity;
- (bool)sh_isCustomCatalogInvalid;
- (bool)sh_isCustomCatalogInvalidURL;
- (bool)sh_isInternalError;
- (bool)sh_isInvalidAudioFormat;
- (bool)sh_isMatchAttemptFailed;
- (bool)sh_isMediaLibraryError;
- (bool)sh_isMediaLibraryPublicError;
- (bool)sh_isShazamKitPublicError;
- (bool)sh_isSignatureDurationInvalid;
- (bool)sh_isSignatureInvalid;

// Image: /System/Library/Frameworks/UserNotifications.framework/UserNotifications

+ (id)_un_descriptionForUNErrorCode:(long long)arg1;
+ (id)_un_descriptionForUNPrivateErrorCode:(long long)arg1;
+ (id)_updateUserInfo:(id)arg1 withLocalizedDescription:(id)arg2;
+ (id)un_errorWithUNErrorCode:(long long)arg1 userInfo:(id)arg2;
+ (id)un_errorWithUNPrivateErrorCode:(long long)arg1 userInfo:(id)arg2;

// Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount

- (id)vs_secureCodingSafeError;

// Image: /System/Library/Frameworks/WatchConnectivity.framework/WatchConnectivity

+ (id)userInfoDictionaryWithErrorStringsForErrorCode:(long long)arg1;
+ (id)wcErrorFromInternalError:(id)arg1;
+ (id)wcErrorFromReceivedCode:(long long)arg1;
+ (id)wcErrorWithCode:(long long)arg1;
+ (id)wcErrorWithCode:(long long)arg1 underlyingError:(id)arg2;
+ (id)wcErrorWithCode:(long long)arg1 underlyingWCErrorWithCode:(long long)arg2;
+ (id)wcErrorWithCode:(long long)arg1 userInfo:(id)arg2;
+ (id)wcInternalErrorWithCode:(long long)arg1;

// Image: /System/Library/PrivateFrameworks/AACCore.framework/AACCore

+ (id)formattedCode:(long long)arg1;

- (id)ae_verboseDescription;
- (id)verboseDescriptionWithIndentation:(unsigned long long)arg1;

// Image: /System/Library/PrivateFrameworks/APFoundation.framework/APFoundation

- (id)jsonRepresentationWithOptions:(unsigned long long)arg1;

// Image: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore

- (id)encodeToDictionary;
- (id)initWithDictionary:(id)arg1;

// Image: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation

- (id)ATPError;
- (id)initWithATPError:(id)arg1;

// Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference

+ (id)AVConferenceServiceError:(long long)arg1 detailCode:(long long)arg2 description:(id)arg3;
+ (id)AVConferenceServiceError:(long long)arg1 detailedCode:(long long)arg2 filePath:(id)arg3 description:(id)arg4 reason:(id)arg5;
+ (id)AVConferenceServiceError:(long long)arg1 detailedCode:(long long)arg2 returnCode:(long long)arg3 filePath:(id)arg4 description:(id)arg5 reason:(id)arg6;

// Image: /System/Library/PrivateFrameworks/AXCoreUtilities.framework/AXCoreUtilities

+ (id)ax_errorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3;
+ (id)ax_errorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3 arguments:(char *)arg4;
+ (id)ax_errorWithDomain:(id)arg1 description:(id)arg2;

- (id)ax_nonRedundantDescription;

// Image: /System/Library/PrivateFrameworks/AccessibilityAudit.framework/AccessibilityAudit

+ (id)_axAudit_error:(long long)arg1 description:(id)arg2;

// Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit

+ (id)wf_mailComposerUnavailableError;

// Image: /System/Library/PrivateFrameworks/AdCore.framework/AdCore

- (void)AD_Log:(id)arg1;
- (id)initWithAdCode:(long long)arg1 andDescription:(id)arg2;

// Image: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice

+ (id)_ATErrorFromAMSError:(id)arg1;
+ (id)_ATErrorFromBLError:(id)arg1;
+ (id)_ATErrorFromCoreMediaError:(id)arg1;
+ (id)_ATErrorFromICError:(id)arg1;
+ (id)_ATErrorFromICServerError:(id)arg1;
+ (id)_ATErrorFromMBError:(id)arg1;
+ (id)at_ATErrorFromError:(id)arg1;

// Image: /System/Library/PrivateFrameworks/Announce.framework/Announce

+ (id)_descriptionForErrorCode:(long long)arg1;
+ (id)an_errorWithCode:(long long)arg1;
+ (id)an_errorWithCode:(long long)arg1 component:(id)arg2;
+ (id)an_errorWithCode:(long long)arg1 component:(id)arg2 description:(id)arg3;

// Image: /System/Library/PrivateFrameworks/AppSSOKerberos.framework/AppSSOKerberos

+ (id)KDCUnreachable;
+ (id)credentialMissing;
+ (id)hostNameMissing;
+ (id)invalidKerberosOperation;
+ (id)kerberosErrorWithCode:(long long)arg1 withDescription:(id)arg2;
+ (id)passwordChangeNotEnabled;
+ (id)passwordSyncNotEnabled;
+ (id)servicePrincipalNameMissing;
+ (id)sourceAppNotAllowed;
+ (id)unhandledKerberosResult;

// Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount

+ (id)aa_errorWithCode:(long long)arg1;
+ (id)aa_errorWithCode:(long long)arg1 underlyingError:(id)arg2;
+ (id)aa_errorWithCode:(long long)arg1 userInfo:(id)arg2;
+ (id)aa_errorWithServerResponse:(id)arg1;

- (id)_aa_userReadableError;
- (bool)aa_isAACustodianRecoveryError;
- (bool)aa_isAACustodianRecoveryErrorWithCode:(long long)arg1;
- (bool)aa_isAAErrorWithCode:(long long)arg1;
- (bool)aa_isAASignInErrorWithCode:(long long)arg1;
- (id)aa_partialErrorsByName;

// Image: /System/Library/PrivateFrameworks/AppleCV3DMOVKit.framework/AppleCV3DMOVKit

+ (id)appleCV3DMOVKitErrorWithDomain:(id)arg1 message:(id)arg2 code:(long long)arg3;
+ (id)movReaderInterfaceErrorWithMessage:(id)arg1 code:(long long)arg2;
+ (id)movReaderInterfaceWarningWithMessage:(id)arg1 code:(long long)arg2;
+ (id)movWriterInterfaceErrorWithMessage:(id)arg1 code:(long long)arg2;
+ (id)movWriterInterfaceWarningWithMessage:(id)arg1 code:(long long)arg2;

// Image: /System/Library/PrivateFrameworks/AppleIDSSOAuthentication.framework/AppleIDSSOAuthentication

+ (id)aida_errorWithCode:(long long)arg1;
+ (id)aida_errorWithCode:(long long)arg1 userInfo:(id)arg2;

// Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices

- (id)_ams_firstUnderlyingErrorPassingTest:(id /* block */)arg1;
- (id)ams_errorByAddingToMultipleUnderlyingErrors:(id)arg1;
- (id)ams_errorByAddingUnderlyingError:(id)arg1;
- (id)ams_errorByAddingUserInfo:(id)arg1;
- (id)ams_errorByCombiningWithUnderlyingError:(id)arg1;
- (id)ams_errorWithMultipleUnderlyingErrors:(id)arg1;
- (id)ams_errorWithUnderlyingError:(id)arg1;
- (bool)ams_hasDomain:(id)arg1;
- (bool)ams_hasDomain:(id)arg1 code:(unsigned long long)arg2;
- (bool)ams_isBagValueMissingError;
- (bool)ams_isTimeoutError;
- (bool)ams_isUserCancelledError;
- (id)ams_message;
- (id)ams_multipleUnderlyingErrors;
- (bool)ams_recursiveHasDomain:(id)arg1 code:(unsigned long long)arg2;
- (id)ams_sanitizedForSecureCoding;
- (id)ams_title;
- (id)ams_underlyingError;
- (id)ams_underlyingErrorWithDomain:(id)arg1;
- (id)ams_underlyingErrorWithDomain:(id)arg1 code:(unsigned long long)arg2;

// Image: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit

+ (id)ak_errorWithCode:(long long)arg1;
+ (id)ak_errorWithCode:(long long)arg1 underlyingError:(id)arg2;
+ (id)ak_errorWithCode:(long long)arg1 userInfo:(id)arg2;
+ (id)ak_generalErrorWithCode:(long long)arg1 errorDomain:(id)arg2 underlyingError:(id)arg3;
+ (id)ak_passkeyErrorWithCode:(long long)arg1;
+ (id)ak_wrappedAnisetteError:(int)arg1;
+ (id)ak_wrappedAnisetteError:(long long)arg1 underlyingADIErrorCode:(int)arg2;

- (id)ak_errorByAppendingUserInfo:(id)arg1;
- (bool)ak_isAuthenticationError;
- (bool)ak_isAuthenticationErrorWithCode:(long long)arg1;
- (bool)ak_isIncompatibleDevicesError;
- (bool)ak_isServiceError;
- (bool)ak_isSurrogateAuthAlreadyInProgressError;
- (bool)ak_isUnableToPromptError;
- (bool)ak_isUserCancelError;
- (bool)ak_isUserInitiatedError;
- (bool)ak_isUserSkippedError;
- (bool)ak_isUserTryAgainError;

// Image: /System/Library/PrivateFrameworks/BacklightServices.framework/BacklightServices

- (id)bls_loggingString;
- (id)bls_shortLoggingString;

// Image: /System/Library/PrivateFrameworks/BarcodeSupport.framework/BarcodeSupport

- (id)_bcs_privacyPreservingDescription;

// Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard

+ (id)bs_errorWithDomain:(id)arg1 code:(long long)arg2 configuration:(id /* block */)arg3;

- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

// Image: /System/Library/PrivateFrameworks/BoardServices.framework/BoardServices

- (bool)isBSServiceConnectionError;

// Image: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore

- (void)logRecursively;

// Image: /System/Library/PrivateFrameworks/BookLibraryCore.framework/BookLibraryCore

- (bool)bl_isAMSStatusCode401;
- (bool)bl_isUserCancelError;
- (void)logRecursively;

// Image: /System/Library/PrivateFrameworks/BookUtility.framework/BookUtility

+ (id)bu_IOErrorWithCode:(long long)arg1;
+ (id)bu_errorWithCode:(long long)arg1 userInfo:(id)arg2;
+ (id)bu_errorWithDomain:(id)arg1 code:(long long)arg2 alertTitle:(id)arg3 alertMessage:(id)arg4;
+ (id)bu_errorWithDomain:(id)arg1 code:(long long)arg2 alertTitle:(id)arg3 alertMessage:(id)arg4 userInfo:(id)arg5;
+ (id)bu_errorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3 recoverySuggestion:(id)arg4;
+ (id)bu_errorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3 underlyingError:(id)arg4;
+ (id)bu_errorWithError:(id)arg1 alertTitle:(id)arg2 alertMessage:(id)arg3 additionalUserInfo:(id)arg4;
+ (id)bu_fileReadCorruptedFileErrorWithUserInfo:(id)arg1;
+ (id)bu_fileReadPOSIXErrorWithNumber:(int)arg1 userInfo:(id)arg2;
+ (id)bu_fileReadUnknownErrorWithUserInfo:(id)arg1;
+ (id)bu_fileWritePOSIXErrorWithNumber:(int)arg1 userInfo:(id)arg2;
+ (id)bu_fileWriteUnknownErrorWithUserInfo:(id)arg1;
+ (id)bu_userInfoWithErrorType:(long long)arg1 userInfo:(id)arg2;

- (void)bu_enumerateErrorUsingBlock:(id /* block */)arg1;
- (id)bu_errorPreservingAlertTitle;
- (id)bu_errorPreservingCancel;
- (bool)bu_isCancelError;
- (bool)bu_isCorruptedError;
- (bool)bu_isErrorPassingTest:(id /* block */)arg1;
- (bool)bu_isFileExistsError;
- (bool)bu_isNoPermissionError;
- (bool)bu_isNoSuchFileError;
- (bool)bu_isOutOfSpaceError;
- (bool)bu_isReadError;
- (bool)bu_isWriteError;
- (id)bu_localizedAlertMessage;
- (id)bu_localizedAlertTitle;

// Image: /System/Library/PrivateFrameworks/BrightnessControl.framework/BrightnessControl

- (id)initWithBCError:(unsigned long long)arg1;
- (id)initWithIOKitError:(int)arg1;
- (int)retIOKitError;

// Image: /System/Library/PrivateFrameworks/CDDataAccess.framework/CDDataAccess

- (id)DAExtendedDescription;

// Image: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst

+ (id)formattedCode:(long long)arg1;

- (id)cat_dictionaryValue;
- (id)formattedCode;
- (id)verboseDescription;
- (id)verboseDescriptionWithIdentation:(unsigned long long)arg1;

// Image: /System/Library/PrivateFrameworks/CellularBridgeUI.framework/CellularBridgeUI

+ (id)NPHCellularErrorWithCode:(long long)arg1 forSubscriptionContext:(id)arg2;
+ (id)NPHCellularSanitizedError:(id)arg1 forSubscriptionContext:(id)arg2;
+ (bool)_canControlLTEVoiceOptionsSeparately;
+ (id)_titleAndMessageDictForError:(id)arg1 forSubscriptionContext:(id)arg2;

// Image: /System/Library/PrivateFrameworks/ChronoServices.framework/ChronoServices

+ (id)chs_initWithErrorCode:(long long)arg1;

// Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit

+ (id)crk_EDUProfileErrorWithCode:(long long)arg1 errorDictionary:(id)arg2;
+ (id)crk_EDUProfileErrorWithCode:(long long)arg1 errorField:(id)arg2 andValue:(id)arg3;
+ (id)crk_allOrNoneKeysErrorWithProvidedKeys:(id)arg1 allOrNoneKeys:(id)arg2;
+ (id)crk_badFieldTypeErrorWithField:(id)arg1;
+ (id)crk_errorForSecurityOSStatus:(int)arg1;
+ (id)crk_errorWithPOSIXCode:(int)arg1;
+ (id)crk_malformedProfileErrorWithField:(id)arg1 value:(id)arg2;
+ (id)crk_missingFieldErrorWithField:(id)arg1;
+ (id)crk_topLevelUserIsBothLeaderAndMemberErrorWithUserIdentifier:(id)arg1;
+ (id)crk_topLevelUserIsNeitherLeaderNorMemberErrorWithUserIdentifier:(id)arg1;
+ (id)crk_unsupportedValueErrorWithField:(id)arg1 value:(id)arg2;
+ (id)crk_valueNotUniqueErrorWithField:(id)arg1 value:(id)arg2;

// Image: /System/Library/PrivateFrameworks/ClipServices.framework/ClipServices

+ (id)cps_errorWithCode:(long long)arg1;
+ (id)cps_errorWithCode:(long long)arg1 underlyingError:(id)arg2;

- (bool)cps_isUserCanceledError;
- (id)cps_privacyPreservingDescription;

// Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs

+ (id)br_errorFromErrno;
+ (id)br_errorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3;
+ (id)br_errorWithDomain:(id)arg1 code:(long long)arg2 userInfo:(id)arg3 description:(id)arg4;
+ (id)br_errorWithPOSIXCode:(int)arg1;
+ (id)br_errorWithPOSIXCode:(int)arg1 description:(id)arg2;
+ (id)brc_addPartialError:(id)arg1 forURL:(id)arg2 toError:(id)arg3;
+ (id)brc_errorAcceptAlreadyInProgressForURL:(id)arg1;
+ (id)brc_errorAccountMismatch;
+ (id)brc_errorAccountSessionOpenFailed;
+ (id)brc_errorAppLibraryNotFound:(id)arg1;
+ (id)brc_errorBuddyFlowNeedsToRun;
+ (id)brc_errorCantCallFPInSyncBubble;
+ (id)brc_errorCantFetchLatestVersionOnItem:(id)arg1 description:(id)arg2;
+ (id)brc_errorCiconiaAborted:(id)arg1;
+ (id)brc_errorCiconiaCannotDefer;
+ (id)brc_errorCiconiaFailed:(id)arg1;
+ (id)brc_errorCiconiaTimedout;
+ (id)brc_errorClientZoneNotFound:(id)arg1;
+ (id)brc_errorCollisionWithItem:(id)arg1;
+ (id)brc_errorCompatibilityIssue;
+ (id)brc_errorCoreAnalyticsErrorCountMismatchWithExpected:(id)arg1 actual:(id)arg2;
+ (id)brc_errorCorruptedDB;
+ (id)brc_errorDaemonShouldBeLoggedOut;
+ (id)brc_errorDeletingNonEmptyDirectoryNonRecursively;
+ (id)brc_errorDocumentAtURL:(id)arg1 isNotExternalToAppLibrary:(id)arg2;
+ (id)brc_errorDocumentEvicted;
+ (id)brc_errorDocumentIsNoLongerSharedAtIdentifier:(id)arg1;
+ (id)brc_errorDocumentIsNotGreedy;
+ (id)brc_errorDocumentIsNotShared;
+ (id)brc_errorDocumentIsNotSharedAtIdentifier:(id)arg1;
+ (id)brc_errorDocumentWithFilename:(id)arg1 size:(long long)arg2 isTooLargeToUpload:(long long)arg3;
+ (id)brc_errorDownloadCancelled;
+ (id)brc_errorDriveDisabledOrAppLibraryDisabled;
+ (id)brc_errorExcludedFromSyncDueToFilename;
+ (id)brc_errorExcludedFromSyncUnderRoot;
+ (id)brc_errorFolderHasSharedSubitems;
+ (id)brc_errorFolderHasSharedSubitemsWithSharedByMeURLs:(id)arg1 sharedToMeURLs:(id)arg2;
+ (id)brc_errorFolderHierarchyTooDeep;
+ (id)brc_errorForRejectedDeletionOfItem:(id)arg1;
+ (id)brc_errorInvalidParameter:(id)arg1 value:(id)arg2;
+ (id)brc_errorItemAlreadyPartOfAShare;
+ (id)brc_errorItemAlreadyPausedFromSyncByBundleID:(id)arg1;
+ (id)brc_errorItemChanged;
+ (id)brc_errorItemInTrash;
+ (id)brc_errorItemIneligibleFromSyncForInode:(id)arg1;
+ (id)brc_errorItemNotFound:(id)arg1;
+ (id)brc_errorItemNotPausedFromSync;
+ (id)brc_errorItemNotShareable;
+ (id)brc_errorItemProcessingDisabled;
+ (id)brc_errorLoggedOut;
+ (id)brc_errorLoggedOutWithUnderlyingError:(id)arg1;
+ (id)brc_errorMethodNotImplemented:(SEL)arg1;
+ (id)brc_errorNoAppLibraryForBundle:(id)arg1;
+ (id)brc_errorNoBRItemService;
+ (id)brc_errorNoDocument:(id)arg1 underlyingPOSIXError:(int)arg2;
+ (id)brc_errorNoDocumentAtURL:(id)arg1 underlyingError:(id)arg2;
+ (id)brc_errorNoEtagAvailableForDownloadOfItemWithIdentifier:(id)arg1;
+ (id)brc_errorNoEtagInContentSignature;
+ (id)brc_errorNoSuitableClientApp;
+ (id)brc_errorNotInCloud:(id)arg1;
+ (id)brc_errorNotOnDisk:(id)arg1;
+ (id)brc_errorNotSupportedInFPFS;
+ (id)brc_errorOperationCancelled;
+ (id)brc_errorPathOutsideAnyCloudDocsAppLibraryAtURL:(id)arg1;
+ (id)brc_errorPermissionError:(id)arg1;
+ (id)brc_errorPermissionErrorAtURL:(id)arg1;
+ (id)brc_errorRequestedVersionHasLocalEdits;
+ (id)brc_errorRescheduleDownloadForMoreRecentServerVersion;
+ (id)brc_errorSyncBlocked;
+ (id)brc_errorSyncDisabled:(id)arg1;
+ (id)brc_errorUnknownKey:(id)arg1;
+ (id)brc_unkownErrorWithDescription:(id)arg1;

- (bool)_br_getFileProviderDomainErrorCode:(long long*)arg1;
- (id)_br_populateUserInfoDictWithDomain:(id)arg1 code:(long long)arg2;
- (id)_createWrappedErrorWithDomain:(id)arg1 code:(long long)arg2;
- (id)br_fileProviderError;
- (id)br_fileProviderErrorWithFPFS:(bool)arg1;
- (bool)br_isCloudDocsErrorCode:(long long)arg1;
- (bool)br_isCocoaErrorCode:(long long)arg1;
- (bool)br_isNSXPCConnectionError;
- (bool)br_isPOSIXErrorCode:(long long)arg1;
- (id)br_underlyingPOSIXError;

// Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon

+ (id)brc_daemonAccessDisabledError;
+ (id)brc_errorWithDomain:(id)arg1 code:(long long)arg2 underlyingError:(id)arg3;
+ (void)initialize;

- (id)_brc_cloudKitInternalWithErrorCode:(long long)arg1;
- (id)_brc_cloudKitPluginErrorPayload;
- (bool)_brc_isCloudKitErrorCode:(long long)arg1;
- (bool)_brc_isCloudKitInternalErrorCode:(long long)arg1;
- (bool)_brc_isCloudKitInternalErrorSafeToSyncUpWithoutSyncDown;
- (bool)_brc_isCloudKitPluginErrorCode:(long long)arg1;
- (bool)_brc_isCloudKitZoneNotFoundError;
- (bool)_brc_isCloudKitZoneUserDeletedError;
- (id)br_cloudKitErrorForIdentifier:(id)arg1;
- (double)br_suggestedRetryTimeInterval;
- (bool)brc_checkErrorsFromCloudKit:(id /* block */)arg1;
- (id)brc_cloudKitErrorForRecordID:(id)arg1;
- (id)brc_cloudKitErrorForSubscriptionID:(id)arg1;
- (id)brc_cloudKitErrorForZone:(id)arg1;
- (id)brc_cloudKitErrorMessage;
- (unsigned long long)brc_containerResetErrorForSharedZone:(bool)arg1 resetReason:(id*)arg2;
- (bool)brc_containsCloudKitErrorCode:(long long)arg1;
- (bool)brc_containsCloudKitInternalErrorCode:(long long)arg1;
- (id)brc_description;
- (bool)brc_isCloudKitAccountTemporarilyUnavailable;
- (bool)brc_isCloudKitAssetFileModified;
- (bool)brc_isCloudKitAtomicFailure;
- (bool)brc_isCloudKitCancellationError;
- (bool)brc_isCloudKitErrorChainedToNewParent:(id*)arg1;
- (bool)brc_isCloudKitErrorImplyingZoneNeedsCreation;
- (bool)brc_isCloudKitErrorNeedsPCSPrep;
- (bool)brc_isCloudKitErrorRemappedToNewRecordName:(id*)arg1;
- (bool)brc_isCloudKitErrorRequiringAssetRecheck;
- (bool)brc_isCloudKitErrorRequiringAssetRescan;
- (bool)brc_isCloudKitErrorRequiringAssetReupload;
- (bool)brc_isCloudKitErrorRequiringSkipThrottling;
- (bool)brc_isCloudKitErrorSafeToSyncUpWithoutSyncDown;
- (bool)brc_isCloudKitErrorUnsupportedOSForItemAndGetMinimumSupported:(id*)arg1;
- (bool)brc_isCloudKitErrorUnsupportedOSForZoneAndGetMinimumSupported:(id*)arg1;
- (bool)brc_isCloudKitErrorZoneMigrated;
- (bool)brc_isCloudKitErrorZoneUndergoingMigration;
- (bool)brc_isCloudKitOutOfQuota;
- (bool)brc_isCloudKitPCSChainingError;
- (bool)brc_isCloudKitPCSDecryptionFailure;
- (bool)brc_isCloudKitUnknownItemError;
- (bool)brc_isDenylistError;
- (bool)brc_isEverRetriable;
- (bool)brc_isExpectedErrorForTelemetry;
- (bool)brc_isIgnorableListDirectoryError;
- (bool)brc_isIndividualItemBlacklistError;
- (bool)brc_isOutOfSpaceError;
- (bool)brc_isReferenceValidationError;
- (bool)brc_isResetError;
- (bool)brc_isRetriable;
- (bool)brc_isRetriableForPCSChaining;
- (bool)brc_isStaleRecordUpdateError;
- (bool)brc_isUserInitiatedRetriable;
- (bool)brc_isXPCConnectionError;
- (bool)brc_shouldRetryBubbleLater;
- (bool)brc_shouldRetryLater;
- (id)brc_strippedError;
- (int)brc_syncOperationErrorKind;
- (id)brc_telemetryReportableErrorWithRecordName:(id*)arg1;
- (id)brc_wrappedError;

// Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon

+ (id)CKLogErrorWithCode:(long long)arg1 format:(id)arg2;

// Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary

- (id)_cplReinflatedUserInfoForXPCDidChange:(bool*)arg1;
- (id)_cplSafeUserInfoForXPCDidChange:(bool*)arg1;
- (id)cplReinflatedErrorForXPC;
- (int)cplReturnCode;
- (id)cplSafeErrorForXPC;
- (id)cplShortDomainDescription;
- (id)cplUnderlyingError;
- (id)cplUnderlyingPOSIXError;
- (bool)isCPLError;
- (bool)isCPLErrorWithCode:(long long)arg1;
- (bool)isCPLOperationCancelledError;
- (bool)isCPLOperationDeferredError;

// Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync

+ (id)errorFromSYErrorInfo:(id)arg1;
+ (id)errorWithSYError:(long long)arg1 userInfo:(id)arg2;

- (id)CPSafeDescription;
- (id)idsIdentifier;
- (id)initWithSYError:(long long)arg1 userInfo:(id)arg2;
- (bool)isFromRequest;
- (unsigned short)messageID;
- (id)messageSent;
- (id)persistentUserInfo;

// Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit

+ (id)userCancelledError;
+ (id)wfSiriPunchOutError;
+ (id)wfUnsupportedUserInterfaceError;

- (bool)wf_isSiriPunchOutError;
- (bool)wf_isUnsupportedUserInterfaceError;
- (bool)wf_isUserCancelledError;

// Image: /System/Library/PrivateFrameworks/CoreCDP.framework/CoreCDP

+ (id)cdp_errorWithCode:(long long)arg1;
+ (id)cdp_errorWithCode:(long long)arg1 underlyingError:(id)arg2;
+ (id)cdp_errorWithCode:(long long)arg1 userInfo:(id)arg2;

- (bool)cdp_isCDPErrorWithCode:(long long)arg1;
- (bool)cdp_isLoginHardLimit;
- (bool)cdp_isLoginSoftLimit;
- (bool)shouldDisplayToUser;

// Image: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal

- (id)errorByExtendingUserInfoWithDictionary:(id)arg1;
- (bool)isAuthKitUnableToPromptDueToNetworkError;
- (bool)isAuthKitUnableToPromptError;
- (bool)isAuthenticationError;
- (bool)isCoolDownError;
- (bool)isICSCInvalidError;
- (bool)isICSCRecoveryHardLimitError;
- (bool)isLoginHardLimit;
- (bool)isLoginSoftLimit;
- (bool)isRecordNotViableError;
- (bool)isRecoveryPETHardLimitError;
- (bool)isRecoveryPETSoftLimitError;

// Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP

+ (id)_userInfoWithDescription:(id)arg1 reason:(id)arg2 suggestion:(id)arg3 underlyingError:(id)arg4;
+ (id)errorWithHMErrorCode:(long long)arg1;
+ (id)errorWithHMErrorCode:(long long)arg1 reason:(id)arg2 underlyingError:(id)arg3;
+ (id)errorWithHMErrorCode:(long long)arg1 userInfo:(id)arg2;
+ (id)errorWithOSStatus:(int)arg1;
+ (id)hapErrorWithCode:(long long)arg1;
+ (id)hapErrorWithCode:(long long)arg1 description:(id)arg2 reason:(id)arg3 suggestion:(id)arg4 underlyingError:(id)arg5;

- (bool)isHAPError;

// Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream

+ (id)MMCSErrorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3;
+ (id)MSErrorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3;
+ (id)MSErrorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3 suggestion:(id)arg4;
+ (id)MSErrorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3 underlyingError:(id)arg4;
+ (id)MSErrorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3 underlyingError:(id)arg4 additionalUserInfo:(id)arg5;

- (int)MMCSErrorType;
- (bool)MMCSIsAuthorizationError;
- (bool)MMCSIsCancelError;
- (bool)MMCSIsFatalError;
- (bool)MMCSIsNetworkConditionsError;
- (id)MMCSRetryAfterDate;
- (bool)MSASStateMachineIsCanceledError;
- (bool)MSCanBeIgnored;
- (bool)MSContainsErrorWithDomain:(id)arg1 code:(long long)arg2;
- (id)MSFindPrimaryError;
- (bool)MSIsAuthError;
- (bool)MSIsBadTokenError;
- (bool)MSIsCounted;
- (bool)MSIsFatal;
- (bool)MSIsQuotaError;
- (bool)MSIsRegistrationError;
- (bool)MSIsTemporaryNetworkError;
- (id)MSMMCSRetryAfterDate;
- (id)MSMakePrimaryError;
- (bool)MSNeedsBackoff;
- (id)MSVerboseDescription;
- (void)_MMCSApplyBlock:(id /* block */)arg1;
- (void)_MSApplyBlock:(id /* block */)arg1;
- (id)_MSVerboseDescriptionRecursionCount:(int)arg1;

// Image: /System/Library/PrivateFrameworks/CorePrescriptionLite.framework/CorePrescriptionLite

+ (id)crxf_descriptionForErrorCode:(long long)arg1;
+ (id)crxf_errorWithCode:(long long)arg1 file:(const char *)arg2 line:(int)arg3 userInfo:(id)arg4;

// Image: /System/Library/PrivateFrameworks/DEPClientLibrary.framework/DEPClientLibrary

+ (id)DEPErrorWithDomain:(id)arg1 code:(long long)arg2 descriptionArray:(id)arg3 errorType:(id)arg4;
+ (id)DEPErrorWithDomain:(id)arg1 code:(long long)arg2 descriptionArray:(id)arg3 suggestion:(id)arg4 USEnglishSuggestion:(id)arg5 underlyingError:(id)arg6 errorType:(id)arg7;
+ (id)DEPErrorWithDomain:(id)arg1 code:(long long)arg2 descriptionArray:(id)arg3 underlyingError:(id)arg4 errorType:(id)arg5;

- (id)DEPFindPrimaryError;
- (id)DEPUSEnglishDescription;

// Image: /System/Library/PrivateFrameworks/DMCUtilities.framework/DMCUtilities

+ (id)DMCErrorWithDomain:(id)arg1 code:(long long)arg2 descriptionArray:(id)arg3 errorType:(id)arg4;
+ (id)DMCErrorWithDomain:(id)arg1 code:(long long)arg2 descriptionArray:(id)arg3 suggestion:(id)arg4 USEnglishSuggestion:(id)arg5 underlyingError:(id)arg6 errorType:(id)arg7;
+ (id)DMCErrorWithDomain:(id)arg1 code:(long long)arg2 descriptionArray:(id)arg3 suggestion:(id)arg4 USEnglishSuggestion:(id)arg5 underlyingError:(id)arg6 errorType:(id)arg7 addtionalUserInfo:(id)arg8;
+ (id)DMCErrorWithDomain:(id)arg1 code:(long long)arg2 descriptionArray:(id)arg3 underlyingError:(id)arg4 errorType:(id)arg5;

- (bool)DMCContainsErrorDomain:(id)arg1 code:(long long)arg2;
- (id)DMCCopyAsPrimaryError;
- (id)DMCErrorType;
- (id)DMCFindPrimaryError;
- (id)DMCUSEnglishDescription;
- (id)DMCUSEnglishSuggestion;
- (id)DMCVerboseDescription;

// Image: /System/Library/PrivateFrameworks/DVTInstrumentsUtilities.framework/DVTInstrumentsUtilities

+ (id)dvtiuErrorWithCode:(unsigned long long)arg1;
+ (id)dvtiuErrorWithFormat:(id)arg1;
+ (id)dvtiu_errorWithCode:(unsigned long long)arg1 description:(id)arg2 recoverySuggestion:(id)arg3;

- (bool)dvtiu_isNoSuchFileOrDirectoryError;
- (bool)dvtiu_isURLAlreadyExistsError;
- (void)enumerateFailedCapabilityRequirements:(id /* block */)arg1;
- (bool)getRecommendedRecoveryAction:(id*)arg1 parameter:(id*)arg2;
- (bool)isCapabilityRequirementFailure;

// Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess

- (id)DAExtendedDescription;

// Image: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACardDAV.framework/DACardDAV

- (bool)DA_isFailedDependencyError;

// Image: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DASubCal.framework/DASubCal

- (bool)isSubCalAuthError;
- (bool)isSubCalReachabilityError;

// Image: /System/Library/PrivateFrameworks/DebugHierarchyFoundation.framework/DebugHierarchyFoundation

+ (id)debugHierarchyErrorFromException:(id)arg1 caughtDuringRequest:(id)arg2 forMethodSignature:(const char *)arg3;

- (id)debugHierarchyResponseDataForRequest:(id)arg1;

// Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement

- (id)serializableError;

// Image: /System/Library/PrivateFrameworks/DigitalSeparation.framework/DigitalSeparation

+ (id)ds_errorFromIgnorableError:(id)arg1 sourceName:(id)arg2;

- (id)ds_localizedAppNames;
- (id)ds_localizedPermissionNames;
- (id)ds_underlyingErrorsBySource;

// Image: /System/Library/PrivateFrameworks/DisembarkUI.framework/DisembarkUI

- (bool)dkui_isBackupDisabled;

// Image: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer

- (bool)dnds_isOutOfSpaceError;

// Image: /System/Library/PrivateFrameworks/Email.framework/Email

+ (id)em_internalErrorWithReason:(id)arg1;
+ (id)em_internalErrorWithReason:(id)arg1 userInfo:(id)arg2;
+ (id)em_itemNotFoundError;
+ (id)em_itemTimeoutError;

- (bool)em_isInternalError;
- (bool)em_isItemNotFoundError;

// Image: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation

+ (id)ef_SQLiteErrorWithCode:(int)arg1;
+ (id)ef_cancelledError;
+ (id)ef_connectionInterruptedError;
+ (id)ef_notSupportedError;
+ (void)ef_setDecoder:(id /* block */)arg1 forDomain:(id)arg2;
+ (id)ef_temporarilyUnavailableError;
+ (id)ef_timeoutError;

- (id)ef_initWithDomain:(id)arg1 code:(long long)arg2 underlyingError:(id)arg3;
- (bool)ef_isCancelledError;
- (bool)ef_isConnectionInterruptedError;
- (bool)ef_isNotSupportedError;
- (bool)ef_isTemporarilyUnavailableError;
- (bool)ef_isTimeoutError;
- (id /* block */)ef_match;
- (id)ef_publicDescription;
- (id)ef_underlyingError;

// Image: /System/Library/PrivateFrameworks/FMCoreLite.framework/FMCoreLite

+ (id)fm_cancelledError;
+ (id)fm_errorWithCode:(long long)arg1;
+ (id)fm_genericError;
+ (id)fm_timeoutError;

- (bool)fm_isCancelledError;
- (bool)fm_isFileNotFoundError;
- (bool)fm_isTimeoutError;

// Image: /System/Library/PrivateFrameworks/FSKit.framework/FSKit

+ (id)_fskit_errorWithFSKitCode:(int)arg1 itemURL:(id)arg2 debugDescription:(id)arg3 message:(id)arg4;
+ (id)_fskit_errorWithFSKitCode:(int)arg1 variant:(id)arg2;
+ (id)fskit_errorWithFSKitCode:(int)arg1;
+ (id)fskit_errorWithFSKitCode:(int)arg1 variant:(id)arg2;
+ (id)fskit_errorWithPOSIXCode:(int)arg1 description:(id)arg2;
+ (id)fskit_errorWithPOSIXCode:(int)arg1 itemURL:(id)arg2 debugDescription:(id)arg3;
+ (void)fskit_initLocalizationStrings;

- (bool)fskit_isFSKitError:(long long)arg1;
- (id)fskit_userInfoValueForKey:(id)arg1;

// Image: /System/Library/PrivateFrameworks/FamilyCircle.framework/FamilyCircle

+ (id)fa_familyErrorWithCode:(long long)arg1;
+ (id)fa_familyErrorWithCode:(long long)arg1 exception:(id)arg2;
+ (id)fa_familyErrorWithCode:(long long)arg1 underlyingError:(id)arg2;
+ (id)fa_familyErrorWithCode:(long long)arg1 userInfo:(id)arg2;

// Image: /System/Library/PrivateFrameworks/FeedbackCore.framework/FeedbackCore

- (bool)isFBKErrorWithCode:(long long)arg1;

// Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices

+ (id)sceneMessageErrorWithCode:(long long)arg1;

// Image: /System/Library/PrivateFrameworks/GPUToolsCapture.framework/GPUToolsCapture

- (id)dy_errorSignature;

// Image: /System/Library/PrivateFrameworks/GPUToolsCore.framework/GPUToolsCore

- (id)dy_errorSignature;

// Image: /System/Library/PrivateFrameworks/GPUToolsDiagnostics.framework/GPUToolsDiagnostics

- (id)dy_errorSignature;

// Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation

+ (id)_gkPrivacyNoticeNotAcceptedError;
+ (id)_gkUnauthenticatedError;
+ (id)_gkUserErrorForGameSessionErrorCode:(long long)arg1 userInfo:(id)arg2;
+ (id)serverErrorForCode:(long long)arg1 withReason:(id)arg2;
+ (id)serverErrorForCode:(long long)arg1 withUserInfo:(id)arg2;
+ (id)userErrorForCode:(long long)arg1 description:(id)arg2;
+ (id)userErrorForCode:(long long)arg1 underlyingError:(id)arg2;
+ (id)userErrorForCode:(long long)arg1 underlyingErrors:(id)arg2;
+ (id)userErrorForCode:(long long)arg1 userInfo:(id)arg2;
+ (id)userErrorForInternalErrorCode:(long long)arg1 reason:(id)arg2;
+ (id)userErrorForServerCode:(long long)arg1 reason:(id)arg2;
+ (id)userErrorForServerCode:(long long)arg1 reason:(id)arg2 userInfo:(id)arg3;
+ (id)userErrorForServerError:(id)arg1;
+ (id)userErrorForServerError:(id)arg1 userInfo:(id)arg2;

- (bool)_gkIsUnauthenticatedError;
- (id)getUnderlyingErrorWithServerStatusCode:(int)arg1;

// Image: /System/Library/PrivateFrameworks/GameControllerFoundation.framework/GameControllerFoundation

+ (id)gc_IPCError:(long long)arg1 userInfo:(id)arg2;

- (id)gc_failingKeyPath;

// Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices

+ (id)GEOErrorWithCode:(long long)arg1;
+ (id)GEOErrorWithCode:(long long)arg1 reason:(id)arg2;
+ (id)GEOErrorWithCode:(long long)arg1 reason:(id)arg2 underlyingError:(id)arg3;
+ (id)GEOErrorWithCode:(long long)arg1 reason:(id)arg2 userInfo:(id)arg3;
+ (id)GEOErrorWithCode:(long long)arg1 userInfo:(id)arg2;
+ (id)_geo_errorFromXPCData:(id)arg1;
+ (id)_geo_errorFromXPCError:(id)arg1;
+ (id)geo_insufficientFilesystemCapacityWithBytesNeeded:(unsigned long long)arg1 bytesAvailable:(unsigned long long)arg2;
+ (id)zilchDecoderErrorForNoSolution;

- (id)_geo_directionsErrorInfo;
- (id)_geo_etaTrafficUpdateErrorInfo;
- (bool)_geo_isNetworkError;
- (bool)_geo_isXPCInterruptedError;
- (id)_geo_newXPCData;
- (id)zilchDecoderTileLoadingError;

// Image: /System/Library/PrivateFrameworks/HID.framework/HID

+ (id)errorWithIOReturn:(int)arg1;

// Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation

+ (id)hmfErrorWithCode:(long long)arg1;
+ (id)hmfErrorWithCode:(long long)arg1 reason:(id)arg2;
+ (id)hmfErrorWithCode:(long long)arg1 reason:(id)arg2 suggestion:(id)arg3;
+ (id)hmfErrorWithCode:(long long)arg1 reason:(id)arg2 suggestion:(id)arg3 underlyingError:(id)arg4;
+ (id)hmfErrorWithCode:(long long)arg1 userInfo:(id)arg2;
+ (id)hmfUnspecifiedError;
+ (id)hmf_errorWithException:(id)arg1;
+ (id)hmf_unarchiveFromData:(id)arg1 error:(id*)arg2;
+ (id)shortDescription;

- (bool)isHMFError;
- (id)privateDescription;
- (id)shortDescription;

// Image: /System/Library/PrivateFrameworks/HardwareDiagnostics.framework/Diagnostics/D52g_D53g_D53p_D54p.bundle/D52g_D53g_D53p_D54p

- (id)dictionaryRepresentation;

// Image: /System/Library/PrivateFrameworks/HardwareDiagnostics.framework/HardwareDiagnostics

- (id)dictionaryRepresentation;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

+ (id)hk_errorWithCodableError:(id)arg1;

- (id)hd_cloudKitErrorRequiringUserAction;
- (double)hd_cloudKitRetryDelay;
- (void)hd_enumerateCloudKitPartialErrorsByKeyWithHandler:(id /* block */)arg1;
- (void)hd_enumerateCloudKitPartialErrorsWithHandler:(id /* block */)arg1;
- (id)hd_errorForAnalytics;
- (id)hd_errorStrippingCloudKitPartialFailuresWithShouldIgnoreBlock:(id /* block */)arg1;
- (id)hd_errorStrippingExpectedCloudKitPartialFailures;
- (id)hd_errorSurfacingFatalCloudKitPartialFailure;
- (id)hd_errorSurfacingFatalCloudKitPartialFailureForAnalytics;
- (id)hd_failingSQLStatement;
- (bool)hd_isConstraintViolation;
- (bool)hd_isCorruptionError;
- (bool)hd_isDatabaseCorruptionError;
- (bool)hd_isFromRequest;
- (bool)hd_isManateeIdentityLossError;
- (bool)hd_isNotADatabaseError;
- (bool)hd_isResponseTimeout;
- (unsigned short)hd_messageID;
- (id)hd_messageIDSDeviceIdentifier;
- (id)hd_messageIDSIdentifier;
- (id)hd_messageSent;
- (id)hd_persistentMessage;
- (id)hd_persistentUserInfo;
- (bool)hd_shouldPreventCloudKitCacheUpdate;
- (int)hd_sqliteExtendedErrorCode;
- (id)hk_codableError;

// Image: /System/Library/PrivateFrameworks/HealthHearing.framework/HealthHearing

- (bool)hearing_audioDSP_isHAENDisabled;
- (bool)hearing_isExpectedError;

// Image: /System/Library/PrivateFrameworks/HealthRecordServices.framework/HealthRecordServices

+ (id)hrs_accumulatedErrorWithAuthorizationFailures:(id)arg1 resourceFetchFailures:(id)arg2 otherErrors:(id)arg3;
+ (id)hrs_authorizationOrResourceFetchErrorFromError:(id)arg1;
+ (id)hrs_cocoaErrorWithCode:(long long)arg1;
+ (id)hrs_cocoaInvalidValueError;
+ (id)hrs_cocoaValueNotFoundError;
+ (id)hrs_errorWithAccumulatedErrors:(id)arg1;
+ (id)hrs_resourceParsingErrorWithUnderlyingError:(id)arg1;

- (id)_hrs_accumulatedErrorsForUserInfoKey:(id)arg1;
- (id)hrs_accumulatedAuthorizationFailures;
- (id)hrs_accumulatedOtherErrors;
- (id)hrs_accumulatedResourceFetchFailures;
- (id)hrs_completeDescription;
- (id)hrs_completeDescriptionRedactingSensitiveItemsIfNecessary:(bool)arg1;
- (bool)hrs_hasAuthorizationFailure;
- (bool)hrs_hasResourceFetchFailure;
- (bool)hrs_isReloginRequiredError;
- (id)hrs_safelyLoggableDescription;
- (id)hrs_userInfoValueForKey:(id)arg1 prefixedWith:(id)arg2 redactIfNecessary:(bool)arg3;

// Image: /System/Library/PrivateFrameworks/HealthRecordsExtraction.framework/HealthRecordsExtraction

- (id)mappedError;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

+ (id)hf_errorWithCode:(long long)arg1;
+ (id)hf_errorWithCode:(long long)arg1 description:(id)arg2;
+ (id)hf_errorWithCode:(long long)arg1 descriptionFormat:(id)arg2;
+ (id)hf_errorWithCode:(long long)arg1 descriptionFormat:(id)arg2 arguments:(char *)arg3;
+ (id)hf_errorWithCode:(long long)arg1 operation:(id)arg2 options:(id)arg3;
+ (id)hf_errorWithCode:(long long)arg1 title:(id)arg2 description:(id)arg3;
+ (id)hf_internalErrorWithDescription:(id)arg1;
+ (id)hf_mappedHMError:(id)arg1;

- (id)hf_errorWithAddedUserInfo:(id)arg1;
- (id)hf_errorWithOperationType:(id)arg1 failedItemName:(id)arg2;
- (id)hf_errorWithOperationType:(id)arg1 options:(id)arg2;
- (bool)hf_isAlreadyPairedError;
- (bool)hf_isHFErrorWithCode:(long long)arg1;
- (bool)hf_isHMErrorWithCode:(long long)arg1;
- (bool)hf_isHMErrorWithCodePrivate:(long long)arg1;
- (bool)hf_isHMHomeWalletKeyErrorWithCode:(long long)arg1;
- (bool)hf_isHomeKitNamingError;
- (bool)hf_isHomeKitUnreachableError;
- (bool)hf_isPublicHMError;
- (bool)hf_isThreadNetworkRequiredError;

// Image: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI

+ (id)_hmiErrorWithCode:(unsigned long long)arg1 description:(id)arg2 reason:(id)arg3 suggestion:(id)arg4 underlyingError:(id)arg5;
+ (id)hmiErrorWithCode:(long long)arg1;
+ (id)hmiErrorWithCode:(long long)arg1 description:(id)arg2;
+ (id)hmiErrorWithCode:(long long)arg1 description:(id)arg2 underlyingError:(id)arg3;
+ (id)hmiErrorWithCode:(long long)arg1 underlyingError:(id)arg2;
+ (id)hmiPrivateErrorWithCode:(long long)arg1;
+ (id)hmiPrivateErrorWithCode:(long long)arg1 description:(id)arg2;
+ (id)hmiPrivateErrorWithCode:(long long)arg1 description:(id)arg2 suggestion:(id)arg3 underlyingError:(id)arg4;
+ (id)hmiPrivateErrorWithCode:(long long)arg1 description:(id)arg2 underlyingError:(id)arg3;
+ (id)hmiPrivateErrorWithCode:(long long)arg1 underlyingError:(id)arg2;

// Image: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore

+ (id)hmbErrorWithSQLContext:(id)arg1;
+ (id)hmbErrorWithSQLContext:(id)arg1 statement:(const char *)arg2;
+ (id)hmbErrorWithSQLite3Context:(struct sqlite3 { }*)arg1;
+ (id)hmbErrorWithSQLite3Context:(struct sqlite3 { }*)arg1 statement:(const char *)arg2;
+ (id)hmbErrorWithSQLite3Statement:(struct sqlite3_stmt { }*)arg1;
+ (id)hmbErrorWithSQLite3Status:(int)arg1;
+ (bool)hmbIsUnretriableCKInternalErrorCode:(long long)arg1;
+ (id)hmbRetryShareOperationError;

- (bool)_hmbIsCKErrorOrHasPartialFailureWithCode:(long long)arg1;
- (bool)_hmbIsCKErrorWithCode:(long long)arg1;
- (id)hmbCKInternalError;
- (double)hmbCloudKitRetryDelay;
- (double)hmbDefaultCloudKitRetryDelay;
- (bool)hmbIsCKChangeTokenExpiredError;
- (bool)hmbIsCKLimitExceededError;
- (bool)hmbIsCKManateeUnavailableError;
- (bool)hmbIsCKMissingManateeIdentityError;
- (bool)hmbIsCKNotAuthenticatedError;
- (bool)hmbIsCKPartialFailureError;
- (bool)hmbIsCKUnsyncedKeychainError;
- (bool)hmbIsCKZoneDeletedError;
- (bool)hmbIsCloudKitError;
- (bool)hmbIsCloudKitInternalError;
- (bool)hmbIsRetryShareOperationError;
- (bool)hmbIsSQLiteConstraintError;

// Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon

+ (id)errorWithSQLite3Context:(struct sqlite3 { }*)arg1;
+ (id)errorWithSQLite3Context:(struct sqlite3 { }*)arg1 statement:(const char *)arg2;
+ (id)errorWithSQLite3Statement:(struct sqlite3_stmt { }*)arg1;
+ (id)hmd_validationErrorWithDescription:(id)arg1;
+ (id)hmd_validationErrorWithDescription:(id)arg1 managedObject:(id)arg2 attributeName:(id)arg3;

- (id)hmd_actualCKErrorFromCKErrorPartialFailure:(id)arg1;
- (id)hmd_conciseCKError;
- (id)hmd_convertedCKError;
- (id)hmd_hmErrorFromCKError;
- (bool)hmd_isCKError;
- (bool)hmd_isInternalCKError;
- (bool)hmd_isNonRecoverableCKError;
- (bool)hmd_isRecordConflictCKError;
- (id)hmd_retryAfterCKError;

// Image: /System/Library/PrivateFrameworks/HomeKitDaemonLegacy.framework/HomeKitDaemonLegacy

+ (id)errorWithSQLite3Context:(struct sqlite3 { }*)arg1;
+ (id)errorWithSQLite3Context:(struct sqlite3 { }*)arg1 statement:(const char *)arg2;
+ (id)errorWithSQLite3Statement:(struct sqlite3_stmt { }*)arg1;
+ (id)hmd_HTTPMessageTransportErrorWithCode:(long long)arg1;

- (id)hmd_actualCKErrorFromCKErrorPartialFailure:(id)arg1;
- (id)hmd_conciseCKError;
- (id)hmd_convertedCKError;
- (id)hmd_hmErrorFromCKError;
- (bool)hmd_isCKError;
- (bool)hmd_isInternalCKError;
- (bool)hmd_isNonRecoverableCKError;
- (bool)hmd_isRecordConflictCKError;
- (id)hmd_retryAfterCKError;

// Image: /System/Library/PrivateFrameworks/HomeKitMatter.framework/HomeKitMatter

- (bool)hmmtr_isMatterError;

// Image: /System/Library/PrivateFrameworks/HomeMessagingUtils.framework/HomeMessagingUtils

+ (id)hmu_IDSValidationErrorWithCode:(long long)arg1;
+ (id)hmu_IDSValidationErrorWithCode:(long long)arg1 description:(id)arg2;
+ (id)hmu_errorWithDomain:(id)arg1 code:(long long)arg2;
+ (id)hmu_errorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3;

// Image: /System/Library/PrivateFrameworks/HomePodSettings.framework/HomePodSettings

+ (id)hpsError:(unsigned long long)arg1 localizedDescription:(id)arg2;
+ (id)hpsError:(unsigned long long)arg1 userInfo:(id)arg2;

// Image: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing

+ (id)hs_cloudErrorWithCode:(long long)arg1 userInfo:(id)arg2;
+ (id)hs_cloudLibraryUploadErrorWithCode:(long long)arg1 userInfo:(id)arg2;
+ (id)hs_homeSharingErrorWithCode:(long long)arg1 userInfo:(id)arg2;

// Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation

+ (id)genericErrorWithFile:(const char *)arg1 function:(const char *)arg2 lineNumber:(long long)arg3;

// Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities

+ (id)errorArrayFromSerializedErrorArray_im:(id)arg1;
+ (id)serializedErrorArrayFromErrorArray_im:(id)arg1;

- (id)initWithSerializedError_im:(id)arg1;
- (id)serializedError_im;

// Image: /System/Library/PrivateFrameworks/IOGPU.framework/IOGPU

- (id)initWithIOGPUError:(long long)arg1;

// Image: /System/Library/PrivateFrameworks/KeychainCircle.framework/KeychainCircle

+ (id)errorWithCoreCryptoStatus:(int)arg1 description:(id)arg2 args:(char *)arg3;
+ (id)errorWithCoreCryptoStatus:(int)arg1 userInfo:(id)arg2;
+ (id)errorWithJoiningError:(int)arg1 format:(id)arg2;
+ (id)errorWithJoiningError:(int)arg1 format:(id)arg2 arguments:(char *)arg3;
+ (id)errorWithOSStatus:(int)arg1 description:(id)arg2 args:(char *)arg3;
+ (id)errorWithOSStatus:(int)arg1 userInfo:(id)arg2;

- (id)initWithCoreCryptoStatus:(int)arg1 description:(id)arg2 args:(char *)arg3;
- (id)initWithCoreCryptoStatus:(int)arg1 userInfo:(id)arg2;
- (id)initWithJoiningError:(int)arg1 userInfo:(id)arg2;
- (id)initWithOSStatus:(int)arg1 description:(id)arg2 args:(char *)arg3;
- (id)initWithOSStatus:(int)arg1 userInfo:(id)arg2;

// Image: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit

+ (id)errorWithDescription:(id)arg1;
+ (id)errorWithDomain:(id)arg1 code:(long long)arg2 localizedDescription:(id)arg3;
+ (id)errorWithDomain:(id)arg1 code:(long long)arg2 localizedDescription:(id)arg3 userInfo:(id)arg4;

// Image: /System/Library/PrivateFrameworks/LinkMetadata.framework/LinkMetadata

+ (id)errorWithErrno:(int)arg1 forFilePath:(id)arg2;

// Image: /System/Library/PrivateFrameworks/LinkServices.framework/LinkServices

- (id)ln_dialog;
- (id)ln_staticDeferredLocalizedString;

// Image: /System/Library/PrivateFrameworks/MFAAuthentication.framework/MFAAuthentication

+ (id)MFAA_errorWithDomain:(id)arg1 code:(long long)arg2;
+ (id)MFAA_errorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3;
+ (id)MFAA_errorWithDomain:(id)arg1 code:(long long)arg2 failureReason:(id)arg3;

// Image: /System/Library/PrivateFrameworks/MIME.framework/MIME

+ (id)mf_decodeFailedErrorWithUserInfo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/MOVStreamIO.framework/MOVStreamIO

+ (id)internalErrorWithMessage:(id)arg1 code:(long long)arg2;
+ (id)internalWarningWithMessage:(id)arg1 code:(long long)arg2;
+ (id)mioPixelBufferPoolErrorWithMessage:(id)arg1 code:(long long)arg2;
+ (id)movStreamIOErrorWithDomain:(id)arg1 message:(id)arg2 code:(long long)arg3;
+ (id)movStreamIOWarningWithDomain:(id)arg1 message:(id)arg2 code:(long long)arg3;
+ (void)populateReaderError:(id*)arg1 message:(id)arg2 code:(long long)arg3;
+ (void)populateStreamError:(id*)arg1 message:(id)arg2 code:(long long)arg3;
+ (id)readerErrorWithMessage:(id)arg1 code:(long long)arg2;
+ (id)readerWarningWithMessage:(id)arg1 code:(long long)arg2;
+ (id)streamErrorWithMessage:(id)arg1 code:(long long)arg2;
+ (id)writerWarningWithMessage:(id)arg1 code:(long long)arg2;

- (id)errorByAddingStreamId:(id)arg1;

// Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration

+ (id)MCErrorWithDomain:(id)arg1 code:(long long)arg2 descriptionArray:(id)arg3 errorType:(id)arg4;
+ (id)MCErrorWithDomain:(id)arg1 code:(long long)arg2 descriptionArray:(id)arg3 suggestion:(id)arg4 USEnglishSuggestion:(id)arg5 underlyingError:(id)arg6 errorType:(id)arg7;
+ (id)MCErrorWithDomain:(id)arg1 code:(long long)arg2 descriptionArray:(id)arg3 suggestion:(id)arg4 USEnglishSuggestion:(id)arg5 underlyingError:(id)arg6 errorType:(id)arg7 extraUserInfo:(id)arg8;
+ (id)MCErrorWithDomain:(id)arg1 code:(long long)arg2 descriptionArray:(id)arg3 underlyingError:(id)arg4 errorType:(id)arg5;

- (bool)MCContainsErrorDomain:(id)arg1 code:(long long)arg2;
- (id)MCCopyAsPrimaryError;
- (id)MCErrorType;
- (id)MCFindPrimaryError;
- (id)MCUSEnglishDescription;
- (id)MCUSEnglishSuggestion;
- (id)MCVerboseDescription;

// Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport

+ (id)MSPSyncErrorWithCode:(long long)arg1 description:(id)arg2;
+ (id)_maps_cancellationError;

- (bool)_maps_isCancellation;
- (bool)_maps_isCloudKitErrorContainingNotFoundMarkersOnly;
- (bool)_maps_isCloudKitErrorWithCode:(long long)arg1 partialErrorsPolicy:(long long)arg2;
- (bool)_maps_isCloudKitTokenExpirationError;
- (bool)_maps_isErrorOfDomain:(id)arg1 code:(long long)arg2;
- (bool)_maps_isFileNotFoundError;
- (bool)_maps_isFoundationWriteError;
- (bool)isMSPSyncErrorWithCode:(long long)arg1;

// Image: /System/Library/PrivateFrameworks/MediaGroupsDaemon.framework/MediaGroupsDaemon

+ (id)rq_instanceFromCoded:(id)arg1;

- (id)rq_coded;

// Image: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit

+ (id)errorWithDescription:(id)arg1;
+ (id)errorWithDomain:(id)arg1 code:(long long)arg2 localizedDescription:(id)arg3;
+ (id)errorWithDomain:(id)arg1 code:(long long)arg2 localizedDescription:(id)arg3 userInfo:(id)arg4;

// Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore

+ (bool)_isAgeVerificationError:(id)arg1;
+ (id)errorForICError:(id)arg1 response:(id)arg2;
+ (id)mpc_userInfoFromJSONValue:(id)arg1;
+ (id)payloadValueFromJSONValue:(id)arg1;

- (bool)mpc_isAirplayDeviceBusyError;
- (bool)mpc_isAirplayStreamingNotSupportedError;
- (bool)mpc_isAssetUnavailableFailure;
- (bool)mpc_isKeyServerNoOfflineSlotError;
- (bool)mpc_isLeaseTakenError;
- (bool)mpc_isQueueLoadingFailure;
- (bool)mpc_isRentalContentRequiresDownloadError;
- (bool)mpc_isResourceUnavailableError;
- (bool)mpc_isSubscriptionRequiredError;
- (bool)mpc_isUnrecoverableAssetLoadingError;
- (id)mpc_jsonValue;
- (id)mpc_remoteCommandStatus;
- (id)mpc_userInfoJSONValue;

// Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote

- (id)initWithMRError:(long long)arg1;
- (id)initWithMRError:(long long)arg1 description:(id)arg2;
- (id)initWithMRError:(long long)arg1 format:(id)arg2;
- (id)initWithMRError:(long long)arg1 userInfo:(id)arg2;
- (bool)isInformational;
- (id)mr_errorByEnvelopingWithMRError:(long long)arg1;
- (id)mr_initWithProtobuf:(id)arg1;
- (id)mr_protobuf;
- (id)recursiveUnderlyingError;

// Image: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices

+ (id)MSVErrorWithMissingDependencies:(id)arg1;
+ (id)MSVErrorWithMissingDependency:(id)arg1;
+ (id)_msv_errorWithDomain:(id)arg1 code:(long long)arg2 underlyingError:(id)arg3 underlyingErrors:(id)arg4 userInfo:(id)arg5 debugDescriptionFormat:(id)arg6 arguments:(char *)arg7;
+ (id)msv_errorWithDomain:(id)arg1 code:(long long)arg2 debugDescription:(id)arg3;
+ (id)msv_errorWithDomain:(id)arg1 code:(long long)arg2 underlyingError:(id)arg3 debugDescription:(id)arg4;
+ (id)msv_errorWithDomain:(id)arg1 code:(long long)arg2 underlyingError:(id)arg3 userInfo:(id)arg4 debugDescription:(id)arg5;
+ (id)msv_errorWithDomain:(id)arg1 code:(long long)arg2 underlyingErrors:(id)arg3 debugDescription:(id)arg4;
+ (id)msv_errorWithDomain:(id)arg1 code:(long long)arg2 underlyingErrors:(id)arg3 userInfo:(id)arg4 debugDescription:(id)arg5;
+ (id)msv_errorWithDomain:(id)arg1 code:(long long)arg2 userInfo:(id)arg3 debugDescription:(id)arg4;

- (id)msv_analyticSignature;
- (id)msv_codeDescription;
- (id)msv_description;
- (id)msv_errorByRemovingUnsafeUserInfo;
- (id)msv_errorByUnwrappingDomain:(id)arg1;
- (id)msv_errorByUnwrappingDomain:(id)arg1 code:(long long)arg2;
- (id)msv_errorByWrappingWithDomain:(id)arg1 code:(long long)arg2 debugDescription:(id)arg3;
- (id)msv_errorByWrappingWithDomain:(id)arg1 code:(long long)arg2 userInfo:(id)arg3 debugDescription:(id)arg4;
- (id)msv_firstValueForUserInfoKey:(id)arg1;
- (id)msv_signature;
- (id)msv_underlyingError;

// Image: /System/Library/PrivateFrameworks/Message.framework/Message

- (bool)mf_isInaccessibleAccountCredentialError;
- (bool)mf_isMissingAccountCredentialError;
- (bool)mf_isSMIMEError;
- (bool)mf_isUserCancelledError;
- (id)mf_moreInfo;
- (id)mf_shortDescription;
- (bool)mf_shouldBeReportedToUser;
- (bool)mf_shouldFailDownload;

// Image: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy

- (bool)mf_isInaccessibleAccountCredentialError;
- (bool)mf_isMissingAccountCredentialError;
- (bool)mf_isSMIMEError;
- (bool)mf_isUserCancelledError;
- (id)mf_moreInfo;
- (id)mf_shortDescription;
- (bool)mf_shouldBeReportedToUser;
- (bool)mf_shouldFailDownload;

// Image: /System/Library/PrivateFrameworks/MobileMailUI.framework/MobileMailUI

- (id)mf_messageFragment;

// Image: /System/Library/PrivateFrameworks/MobileStoreDemoKit.framework/MobileStoreDemoKit

+ (id)errorDomainMSDWithCode:(long long)arg1 message:(id)arg2;
+ (id)errorDomainMSDWithCode:(long long)arg1 message:(id)arg2 reason:(id)arg3;
+ (id)masterServerErrorRetryAfter:(id)arg1;
+ (id)masterServerErrorWithCode:(long long)arg1 mesage:(id)arg2 reason:(id)arg3;

- (id)initWithDomainMSDCode:(long long)arg1 message:(id)arg2;
- (id)initWithDomainMSDCode:(long long)arg1 message:(id)arg2 reason:(id)arg3;

// Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary

+ (id)ml_errorWithCode:(unsigned long long)arg1;
+ (id)ml_errorWithCode:(unsigned long long)arg1 description:(id)arg2;

// Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer

+ (id)errorWithCode:(long long)arg1;
+ (id)errorWithCode:(long long)arg1 userInfo:(id)arg2;
+ (id)genericErrorWithMessage:(id)arg1;
+ (id)httpErrorWithCode:(long long)arg1 message:(id)arg2;

- (bool)isAuthenticationError;

// Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit

- (id)npk_errorWithDomain:(id)arg1 code:(long long)arg2;

// Image: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry

- (id)nr_filteredError;
- (id)nr_safeDescription;

// Image: /System/Library/PrivateFrameworks/NanoTimeKit.framework/NanoTimeKit

+ (id)greenfield_addWatchFaceErrorWithCode:(long long)arg1;
+ (id)greenfield_addWatchFaceErrorWithCode:(long long)arg1 message:(id)arg2;
+ (id)greenfield_decodeWatchFaceErrorWithCode:(long long)arg1 message:(id)arg2;
+ (id)greenfield_encodeWatchFaceErrorWithCode:(long long)arg1 message:(id)arg2;
+ (id)ntk_errorWithCode:(long long)arg1;

// Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation

+ (id)_navigation_errorWithCode:(long long)arg1;
+ (id)_navigation_errorWithCode:(long long)arg1 debugDescription:(id)arg2 underlyingError:(id)arg3;
+ (id)_navigation_errorWithCode:(long long)arg1 userInfo:(id)arg2;

- (id)_navigation_errorCodeAsString;

// Image: /System/Library/PrivateFrameworks/NetAppsUtilities.framework/NetAppsUtilities

+ (id)na_cancelledError;
+ (id)na_errorWithCode:(unsigned long long)arg1;
+ (id)na_genericError;
+ (id)na_timeoutError;

- (bool)na_isCancelledError;
- (bool)na_isTimeoutError;

// Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore

- (id)descriptionWithIndent:(long long)arg1;

// Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore

+ (id)fc_HTTPErrorWithURL:(id)arg1 statusCode:(unsigned long long)arg2 requestUUID:(id)arg3 additionalUserInfo:(id)arg4;
+ (id)fc_authUserAccountInvalid;
+ (id)fc_belowMinimumVersionError;
+ (id)fc_blockedInCurrentStorefrontErrorWithIdentifiers:(id)arg1;
+ (id)fc_canaryDownError;
+ (id)fc_emptyM3UPlaylistError;
+ (id)fc_encryptionErrorWithCode:(unsigned long long)arg1;
+ (id)fc_encryptionErrorWithCode:(unsigned long long)arg1 description:(id)arg2;
+ (id)fc_encryptionErrorWithCode:(unsigned long long)arg1 descriptionFormat:(id)arg2;
+ (id)fc_encryptionRequiredError;
+ (id)fc_errorWithCode:(long long)arg1 description:(id)arg2;
+ (id)fc_errorWithCode:(long long)arg1 description:(id)arg2 additionalUserInfo:(id)arg3;
+ (id)fc_exceededQueryBudgetErrorWithAdditionalUserInfo:(id)arg1;
+ (id)fc_expiredAVAssetCertificateError;
+ (id)fc_feedDroppedError;
+ (id)fc_invalidAVAssetKeyURIError;
+ (id)fc_invalidBookmarkErrorWithUserInfo:(id)arg1;
+ (id)fc_invalidChannelErrorForTagID:(id)arg1;
+ (id)fc_invalidGapErrorWithUserInfo:(id)arg1;
+ (id)fc_invalidSectionErrorForTagID:(id)arg1;
+ (id)fc_missingANFDocumentErrorForArticleID:(id)arg1;
+ (id)fc_missingAppConfigErrorWithUnderlyingError:(id)arg1;
+ (id)fc_missingAssetErrorWithAssetHandles:(id)arg1;
+ (id)fc_missingAssetKeyError;
+ (id)fc_missingBridgedGroupError;
+ (id)fc_missingResourceErrorWithDescription:(id)arg1;
+ (id)fc_notAvailableError;
+ (id)fc_notCachedError;
+ (id)fc_offlineErrorWithReason:(long long)arg1;
+ (id)fc_operationCancelledErrorWithAdditionalUserInfo:(id)arg1;
+ (id)fc_partialFailureErrorWithUserInfo:(id)arg1;
+ (id)fc_requestDroppedErrorForDroppedFeeds:(unsigned long long)arg1 totalFeeds:(unsigned long long)arg2;
+ (id)fc_secureSubscriptionsDisallowedError;
+ (id)fc_unauthorizedAVAssetCertificateError;
+ (id)fc_unauthorizedAVAssetKeyErrorWithKeyURI:(id)arg1;
+ (id)fc_unauthorizedAssetKeyErrorWithWrappingKeyID:(id)arg1;
+ (id)fc_unzipFailedErrorWithErrorCode:(int)arg1;

- (id)fc_errorWithMaximumRetryAfter:(double)arg1;
- (bool)fc_hasCKErrorWithCodePassingTest:(id /* block */)arg1;
- (bool)fc_hasErrorCode:(long long)arg1;
- (bool)fc_hasIdentityLostError;
- (bool)fc_hasIdentityStillSyncingError;
- (bool)fc_hasUnderlyingErrorPassingTest:(id /* block */)arg1;
- (bool)fc_isAVUnauthorizedError;
- (bool)fc_isAuthenticationUserCancelled;
- (bool)fc_isBlockedInStoreFrontError;
- (bool)fc_isCKErrorWithCode:(long long)arg1;
- (bool)fc_isCKErrorWithCodePassingTest:(id /* block */)arg1;
- (bool)fc_isCKUnknownItemError;
- (bool)fc_isCancellationError;
- (bool)fc_isHTTPNotFoundError;
- (bool)fc_isMissingZoneError;
- (bool)fc_isNetworkUnavailableError;
- (bool)fc_isOfflineError;
- (bool)fc_isOfflineErrorOfflineReason:(long long*)arg1;
- (bool)fc_isOperationThrottledError;
- (bool)fc_isRecoverableNetworkError;
- (bool)fc_isRequestDroppedError;
- (bool)fc_isServiceUnavailableError;
- (bool)fc_isTemporaryNetworkOrServerError;
- (bool)fc_isUnknownItemError;
- (bool)fc_shouldRetry;
- (id)fc_underlyingCKErrorUserInfoValueForKey:(id)arg1 forItemID:(id)arg2;

// Image: /System/Library/PrivateFrameworks/NewsFoundation.framework/NewsFoundation

+ (id)fc_createStateMachineErrorForCode:(long long)arg1 userInfo:(id)arg2;

- (bool)fc_isStateMachineError:(long long)arg1;

// Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI

+ (id)nu_errorArticleContentTypeUnsupported:(id)arg1;
+ (id)nu_errorArticleDownloadFailed:(id)arg1 underlyingError:(id)arg2;
+ (id)nu_errorArticleMissingContentURL:(id)arg1;
+ (id)nu_errorArticleMissingHeadline:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI

- (bool)ic_shouldRetryCloudKitError;

// Image: /System/Library/PrivateFrameworks/OSAnalytics.framework/OSAnalytics

- (id)augmentWithPrefix:(id)arg1;

// Image: /System/Library/PrivateFrameworks/OctagonTrust.framework/OctagonTrust

+ (id)errorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3;
+ (id)errorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3 underlying:(id)arg4;

// Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport

+ (id)tsu_errorWithCode:(long long)arg1 userInfo:(id)arg2;
+ (id)tsu_errorWithDomain:(id)arg1 code:(long long)arg2 alertTitle:(id)arg3 alertMessage:(id)arg4;
+ (id)tsu_errorWithDomain:(id)arg1 code:(long long)arg2 alertTitle:(id)arg3 alertMessage:(id)arg4 userInfo:(id)arg5;
+ (id)tsu_errorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3 recoverySuggestion:(id)arg4;
+ (id)tsu_errorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3 underlyingError:(id)arg4;
+ (id)tsu_errorWithError:(id)arg1 alertTitle:(id)arg2 alertMessage:(id)arg3 additionalUserInfo:(id)arg4;
+ (id)tsu_errorWithWarning:(id)arg1;
+ (id)tsu_fileReadCorruptedFileErrorWithUserInfo:(id)arg1;
+ (id)tsu_fileReadPOSIXErrorWithNumber:(int)arg1 userInfo:(id)arg2;
+ (id)tsu_fileReadUnknownErrorWithUserInfo:(id)arg1;
+ (id)tsu_fileWritePOSIXErrorWithNumber:(int)arg1 userInfo:(id)arg2;
+ (id)tsu_fileWriteUnknownErrorWithUserInfo:(id)arg1;
+ (id)tsu_userInfoWithErrorType:(long long)arg1 userInfo:(id)arg2;

- (id)tsu_errorPreservingAlertTitle;
- (id)tsu_errorPreservingCancel;
- (bool)tsu_isCancelError;
- (bool)tsu_isCorruptedError;
- (bool)tsu_isErrorPassingTest:(id /* block */)arg1;
- (bool)tsu_isNoSuchFileError;
- (bool)tsu_isOutOfSpaceError;
- (bool)tsu_isReadError;
- (bool)tsu_isWriteError;
- (id)tsu_localizedAlertMessage;
- (id)tsu_localizedAlertTitle;

// Image: /System/Library/PrivateFrameworks/PairedSync.framework/PairedSync

- (id)psy_safeDescription;

// Image: /System/Library/PrivateFrameworks/PaperBoardUI.framework/PaperBoardUI

- (bool)pbui_isFileNotFoundError;

// Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore

+ (id)pkSharingError:(long long)arg1;
+ (id)pkSharingError:(long long)arg1 debugDescription:(id)arg2;

- (id)pk_paymentErrorWithLocalizedDescription;

// Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI

- (bool)pk_isLAErrorUserCancel;

// Image: /System/Library/PrivateFrameworks/PerformanceTrace.framework/PerformanceTrace

+ (id)error:(long long)arg1 description:(id)arg2;
+ (id)error:(long long)arg1 description:(id)arg2 underlyingError:(id)arg3;

// Image: /System/Library/PrivateFrameworks/PersonaKit.framework/PersonaKit

+ (id)pr_errorWithCode:(long long)arg1;

- (bool)pr_isInPersonaDomain;
- (bool)pr_isNetworkAvailabilityError;

// Image: /System/Library/PrivateFrameworks/PhoneNumberResolver.framework/PhoneNumberResolver

+ (id)_PNRAssetQueryErrorWithUserInfo:(id)arg1;
+ (id)_PNRAssetUnavailableErrorWithUserInfo:(id)arg1;
+ (id)_PNRBadMagicErrorWithUserInfo:(id)arg1;
+ (id)_PNRNotFoundErrorWithUserInfo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis

+ (id)errorForPhotoVisionCancelledOperation;
+ (id)errorForPhotoVisionErrorCode:(long long)arg1 localizedDescription:(id)arg2;
+ (id)errorForPhotoVisionErrorCode:(long long)arg1 localizedDescription:(id)arg2 underlyingError:(id)arg3;
+ (id)errorForPhotoVisionErrorCode:(long long)arg1 userInfo:(id)arg2;
+ (id)errorForPhotoVisionInvalidNilParameterNamed:(id)arg1;
+ (id)errorForPhotoVisionInvalidParameterNamed:(id)arg1 integerValue:(long long)arg2;
+ (id)errorForPhotoVisionInvalidParameterNamed:(id)arg1 realValue:(double)arg2;
+ (id)errorForPhotoVisionInvalidParameterNamed:(id)arg1 value:(id)arg2;
+ (id)errorForPhotoVisionInvalidParameterWithLocalizedDescription:(id)arg1;
+ (id)errorForPhotoVisionStorageErrorWithLocalizedDescription:(id)arg1;
+ (id)errorForPhotoVisionStorageErrorWithLocalizedDescription:(id)arg1 underlyingError:(id)arg2;
+ (id)errorForPhotoVisionStorageErrorWithUserInfo:(id)arg1;
+ (id)errorForPhotoVisionUnexpectedCondition:(id)arg1;
+ (id)errorForPhotoVisionUnimplementedFunction;
+ (id)errorForPhotoVisionVisionKitErrorWithLocalizedDescription:(id)arg1 underlyingError:(id)arg2;
+ (id)errorForPhotoVisionVisionKitErrorWithUserInfo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices

+ (id)pl_analysisErrorForInvalidParameterValue:(id)arg1 named:(id)arg2;
+ (id)pl_analysisErrorWithCode:(long long)arg1;
+ (id)pl_analysisErrorWithCode:(long long)arg1 localizedDescription:(id)arg2;
+ (id)pl_analysisErrorWithCode:(long long)arg1 localizedDescription:(id)arg2 userInfo:(id)arg3;
+ (id)pl_analysisErrorWithCode:(long long)arg1 userInfo:(id)arg2;

// Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph

+ (id)errorWithDescription:(id)arg1;
+ (id)errorWithDomain:(id)arg1 code:(long long)arg2 localizedDescription:(id)arg3;
+ (id)errorWithDomain:(id)arg1 code:(long long)arg2 localizedDescription:(id)arg3 userInfo:(id)arg4;

// Image: /System/Library/PrivateFrameworks/PhotosIntelligence.framework/PhotosIntelligence

+ (id)_pn_genericErrorWithUnderlyingError:(id)arg1 localizedDescription:(id)arg2;
+ (id)pn_errorWithCode:(long long)arg1 localizedDescription:(id)arg2;
+ (id)pn_genericErrorWithLocalizedDescription:(id)arg1;
+ (id)pn_genericErrorWithMultipleUnderlyingErrors:(id)arg1 localizedDescription:(id)arg2;
+ (id)pn_genericErrorWithUnderlyingError:(id)arg1 localizedDescription:(id)arg2;

// Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore

+ (id)_px_errorWithDomain:(id)arg1 code:(long long)arg2 underlyingError:(id)arg3 localizedDescription:(id)arg4 debugDescription:(id)arg5;
+ (id)px_audioSessionErrorWithCode:(long long)arg1;
+ (id)px_audioSessionErrorWithCode:(long long)arg1 underlyingError:(id)arg2;
+ (id)px_audioSessionErrorWithCode:(long long)arg1 userInfo:(id)arg2;
+ (id)px_errorWithDomain:(id)arg1 code:(long long)arg2 debugDescription:(id)arg3;
+ (id)px_errorWithDomain:(id)arg1 code:(long long)arg2 underlyingError:(id)arg3 debugDescription:(id)arg4;
+ (id)px_errorWithDomain:(id)arg1 code:(long long)arg2 underlyingError:(id)arg3 localizedDescription:(id)arg4;
+ (id)px_genericErrorWithDebugDescription:(id)arg1;
+ (id)px_genericErrorWithUnderlyingError:(id)arg1 debugDescription:(id)arg2;

- (id)px_errorWithRecoveryOptions:(id)arg1;
- (bool)px_isDomain:(id)arg1 code:(long long)arg2;

// Image: /System/Library/PrivateFrameworks/PodcastsFoundation.framework/PodcastsFoundation

- (void)_NSCoreDataError:(id)arg1 andThrow:(id)arg2;
- (void)_NSEntityMigrationPolicyError:(id)arg1 andThrow:(id)arg2;
- (void)_NSExternalRecordImportError:(id)arg1 andThrow:(id)arg2;
- (void)_NSInferredMappingModelError:(id)arg1 andThrow:(id)arg2;
- (void)_NSManagedObjectConstraintMergeError:(id)arg1 andThrow:(id)arg2;
- (void)_NSManagedObjectConstraintValidationError:(id)arg1 andThrow:(id)arg2;
- (void)_NSManagedObjectContextLockingError:(id)arg1 andThrow:(id)arg2;
- (void)_NSManagedObjectExternalRelationshipError:(id)arg1 andThrow:(id)arg2;
- (void)_NSManagedObjectMergeError:(id)arg1 andThrow:(id)arg2;
- (void)_NSManagedObjectReferentialIntegrityError:(id)arg1 andThrow:(id)arg2;
- (void)_NSManagedObjectValidationError:(id)arg1 andThrow:(id)arg2;
- (void)_NSMigrationCancelledError:(id)arg1 andThrow:(id)arg2;
- (void)_NSMigrationConstraintViolationError:(id)arg1 andThrow:(id)arg2;
- (void)_NSMigrationError:(id)arg1 andThrow:(id)arg2;
- (void)_NSMigrationManagerDestinationStoreError:(id)arg1 andThrow:(id)arg2;
- (void)_NSMigrationManagerSourceStoreError:(id)arg1 andThrow:(id)arg2;
- (void)_NSMigrationMissingMappingModelError:(id)arg1 andThrow:(id)arg2;
- (void)_NSMigrationMissingSourceModelError:(id)arg1 andThrow:(id)arg2;
- (void)_NSPersistentHistoryTokenExpiredError:(id)arg1 andThrow:(id)arg2;
- (void)_NSPersistentStoreCoordinatorLockingError:(id)arg1 andThrow:(id)arg2;
- (void)_NSPersistentStoreIncompatibleSchemaError:(id)arg1 andThrow:(id)arg2;
- (void)_NSPersistentStoreIncompatibleVersionHashError:(id)arg1 andThrow:(id)arg2;
- (void)_NSPersistentStoreIncompleteSaveError:(id)arg1 andThrow:(id)arg2;
- (void)_NSPersistentStoreInvalidTypeError:(id)arg1 andThrow:(id)arg2;
- (void)_NSPersistentStoreOpenError:(id)arg1 andThrow:(id)arg2;
- (void)_NSPersistentStoreOperationError:(id)arg1 andThrow:(id)arg2;
- (void)_NSPersistentStoreSaveConflictsError:(id)arg1 andThrow:(id)arg2;
- (void)_NSPersistentStoreSaveError:(id)arg1 andThrow:(id)arg2;
- (void)_NSPersistentStoreTimeoutError:(id)arg1 andThrow:(id)arg2;
- (void)_NSPersistentStoreTypeMismatchError:(id)arg1 andThrow:(id)arg2;
- (void)_NSPersistentStoreUnsupportedRequestTypeError:(id)arg1 andThrow:(id)arg2;
- (void)_NSSQLiteError:(id)arg1 andThrow:(id)arg2;
- (void)_NSValidationDateTooLateError:(id)arg1 andThrow:(id)arg2;
- (void)_NSValidationDateTooSoonError:(id)arg1 andThrow:(id)arg2;
- (void)_NSValidationInvalidDateError:(id)arg1 andThrow:(id)arg2;
- (void)_NSValidationInvalidURIError:(id)arg1 andThrow:(id)arg2;
- (void)_NSValidationMissingMandatoryPropertyError:(id)arg1 andThrow:(id)arg2;
- (void)_NSValidationMultipleErrorsError:(id)arg1 andThrow:(id)arg2;
- (void)_NSValidationNumberTooLargeError:(id)arg1 andThrow:(id)arg2;
- (void)_NSValidationNumberTooSmallError:(id)arg1 andThrow:(id)arg2;
- (void)_NSValidationRelationshipDeniedDeleteError:(id)arg1 andThrow:(id)arg2;
- (void)_NSValidationRelationshipExceedsMaximumCountError:(id)arg1 andThrow:(id)arg2;
- (void)_NSValidationRelationshipLacksMinimumCountError:(id)arg1 andThrow:(id)arg2;
- (void)_NSValidationStringPatternMatchingError:(id)arg1 andThrow:(id)arg2;
- (void)_NSValidationStringTooLongError:(id)arg1 andThrow:(id)arg2;
- (void)_NSValidationStringTooShortError:(id)arg1 andThrow:(id)arg2;
- (void)collectErrorsAndThrow:(id)arg1;
- (void)createErrorStackTraceForErrorCodes:(id)arg1 andThrow:(id)arg2;
- (id)im_jsonSerializableValue;
- (void)logAndThrow:(bool)arg1;
- (void)logAndThrow:(bool)arg1 printStackTrace:(bool)arg2;
- (id)metricsAdditionalData;
- (id)metricsContentIdentifier;
- (void)recordMetrics;

// Image: /System/Library/PrivateFrameworks/PosterBoard.framework/PosterBoard

+ (id)pbf_dataStoreErrorWithCode:(long long)arg1 userInfo:(id)arg2;
+ (id)pbf_descriptorStoreCoordinatorErrorWithCode:(long long)arg1 userInfo:(id)arg2;
+ (id)pbf_extensionStoreCoordinatorErrorWithCode:(long long)arg1 userInfo:(id)arg2;
+ (id)pbf_generalErrorWithCode:(long long)arg1 userInfo:(id)arg2;
+ (id)pbf_sqliteDatabaseErrorWithCode:(int)arg1 errorMessage:(id)arg2;

- (bool)pbf_isGeneralCancelledError;

// Image: /System/Library/PrivateFrameworks/PosterBoardServices.framework/PosterBoardServices

+ (id)prs_errorWithCode:(long long)arg1;
+ (id)prs_errorWithCode:(long long)arg1 underlyingError:(id)arg2 userInfo:(id)arg3;
+ (id)prs_errorWithCode:(long long)arg1 userInfo:(id)arg2;

// Image: /System/Library/PrivateFrameworks/PosterKit.framework/PosterKit

+ (id)pr_errorWithCode:(long long)arg1;
+ (id)pr_errorWithCode:(long long)arg1 underlyingError:(id)arg2 userInfo:(id)arg3;
+ (id)pr_errorWithCode:(long long)arg1 userInfo:(id)arg2;

// Image: /System/Library/PrivateFrameworks/PreviewsFoundation.framework/PreviewsFoundation

+ (id)uv_errorWithDescription:(id)arg1;
+ (id)uv_errorWithFormat:(id)arg1;
+ (id)uv_errorWithUserInfo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/PrivateFederatedLearning.framework/PrivateFederatedLearning

- (id)describe;

// Image: /System/Library/PrivateFrameworks/ProfileValidatedAppIdentity.framework/ProfileValidatedAppIdentity

+ (id)pvai_errorWithCode:(long long)arg1;
+ (id)pvai_errorWithCode:(long long)arg1 userInfo:(id)arg2;
+ (id)pvai_wrappedError:(long long)arg1 error:(id)arg2;

// Image: /System/Library/PrivateFrameworks/PromotedContentPrediction.framework/PromotedContentPrediction

+ (id)errorForFeatureFormatNotSupported:(id)arg1;
+ (id)errorForFeatureNotBinded:(id)arg1;
+ (id)errorForFeatureNotFound:(id)arg1;
+ (id)errorForFeatureShapeMismatch:(id)arg1;

// Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit

+ (id)_defaultDescriptionForREMChangeErrorCode:(long long)arg1;
+ (id)errorWithREMChangeErrorCode:(long long)arg1;
+ (id)errorWithREMChangeErrorCode:(long long)arg1 debugDescription:(id)arg2;
+ (id)errorWithREMChangeErrorCode:(long long)arg1 description:(id)arg2 underlyingError:(id)arg3;
+ (id)errorWithREMChangeErrorCode:(long long)arg1 underlyingError:(id)arg2;

// Image: /System/Library/PrivateFrameworks/RemoteConfiguration.framework/RemoteConfiguration

+ (id)rc_endpointErrorWithUnderlyingEndpointErrors:(id)arg1;
+ (id)rc_errorWithCode:(long long)arg1 description:(id)arg2;
+ (id)rc_errorWithCode:(long long)arg1 description:(id)arg2 additionalUserInfo:(id)arg3;
+ (id)rc_missingConfigErrorWithUnderlyingError:(id)arg1;
+ (id)rc_notAvailableError;
+ (id)rc_notCachedError;
+ (id)rc_offlineErrorWithReason:(long long)arg1;
+ (id)rc_parsingError;
+ (id)rc_unknownBackgroundNetworkOperationError;

- (bool)rc_isCancellationError;
- (bool)rc_isNetworkUnavailableError;
- (bool)rc_isOfflineError;
- (bool)rc_isOfflineErrorOfflineReason:(long long*)arg1;
- (bool)rc_isOperationThrottledError;
- (bool)rc_isServiceUnavailableError;
- (bool)rc_shouldRetry;

// Image: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices

+ (id)rbs_errorClientNotAuthorized;
+ (id)rbs_errorClientNotEntitled:(id)arg1 permanent:(bool)arg2;

- (bool)rbs_isPermanentFailure;

// Image: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore

+ (void)_safari_getPrivacyPreservingUserInfoProvidersUsingBlock:(id /* block */)arg1;
+ (id)safari_errorWithDomain:(id)arg1 code:(long long)arg2 privacyPreservingDescription:(id)arg3;
+ (id /* block */)safari_privacyPreservingUserInfoProviderForDomain:(id)arg1;
+ (void)safari_setPrivacyPreservingUserInfoProviderForDomain:(id)arg1 provider:(id /* block */)arg2;
+ (void)safari_setUpCloudKitPrivacyPreservingUserInfoProvider;

- (void)_safari_enumerateCloudKitErrorsWithBlock:(id /* block */)arg1;
- (bool)_safari_isOrContainsCloudKitErrorOfCodes:(id)arg1 checkInternalErrorCode:(bool)arg2;
- (bool)safari_containsCloudKitMissingZoneErrorForRecordZoneID:(id)arg1;
- (id)safari_errorByAddingCloudKitPrivacyPreservingUserInfoForItemID:(id)arg1;
- (id)safari_errorByAddingRequestUUIDInPrivacyPreservingUserInfo;
- (bool)safari_errorOrAnyPartialErrorHasCloudKitInternalErrorCode:(long long)arg1;
- (bool)safari_hasOrContainsErrorWithCloudKitErrorCode:(long long)arg1;
- (id)safari_initWithDomain:(id)arg1 code:(long long)arg2 privacyPreservingDescription:(id)arg3;
- (bool)safari_isCloudKitBatchTooLargeError;
- (bool)safari_isCloudKitMissingZoneError;
- (bool)safari_isCloudKitNonExistentRecordError;
- (bool)safari_isInCloudKitErrorDomain;
- (bool)safari_isOrContainsClientSideNetworkError;
- (bool)safari_isOrContainsCloudKitMissingZoneError;
- (bool)safari_isOrContainsNetworkUnavailableError;
- (bool)safari_isSQLiteCorruptionError;
- (bool)safari_isSQLiteError;
- (bool)safari_isUnrecoverableCloudKitError;
- (bool)safari_matchesErrorDomain:(id)arg1 andCode:(long long)arg2;
- (bool)safari_matchesErrorDomainsAndCodes:(id)arg1;
- (id)safari_privacyPreservingDescription;
- (id)safari_privacyPreservingError;

// Image: /System/Library/PrivateFrameworks/SafariSafeBrowsing.framework/SafariSafeBrowsing

- (id)ssb_privacyPreservingDescription;

// Image: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI

- (id)_errorMessageForFailureReason:(id)arg1 failingURLString:(id)arg2 providerName:(id)arg3 networkName:(id)arg4 isUsingEthernetNetwork:(bool)arg5;
- (id)computeLocalNetworkContentFilteringErrorTitle;
- (void)fetchLocalNetworkContentFilteringErrorMessageForFailingURLString:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (bool)safari_isInWebKitLegacyErrorDomain;
- (bool)safari_isLocalNetworkContentFilteringError;
- (bool)safari_isPrivacyProxyError;
- (bool)safari_isPrivacyProxyFailClosedError;
- (bool)safari_isRecoverableByPageFormatMenu;

// Image: /System/Library/PrivateFrameworks/ShazamCore.framework/ShazamCore

- (bool)sh_isCoreCompressionError;
- (bool)sh_isCoreDaemonExit;
- (bool)sh_isCoreFileParsingError;
- (bool)sh_isCoreMatchAttemptCancelledError;
- (bool)sh_isCoreMatchAttemptRejectedError;
- (bool)sh_isCoreMediaItemMissingRequiredProperties;
- (bool)sh_isCoreMissingEntitlementsError;
- (bool)sh_isShazamCoreError;

// Image: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport

+ (id)errorWithCode:(unsigned long long)arg1 description:(id)arg2;

// Image: /System/Library/PrivateFrameworks/Silex.framework/Silex

+ (id)unknownError;
+ (id)unreachableNetworkError;

// Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo

+ (long long)errorCodeForUnderlyingErrorDomain:(id)arg1;
+ (id)videoErrorWithErrorCode:(long long)arg1;
+ (id)videoErrorWithUnderlyingError:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore

- (bool)siriCore_isNetworkDownError;

// Image: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks

+ (id)st_startWorkoutErrorWithCode:(long long)arg1;

// Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI

- (bool)isSiriUISnippetPluginError;

// Image: /System/Library/PrivateFrameworks/Sleep.framework/Sleep

+ (id)hksp_validationErrorWithReason:(unsigned long long)arg1;

- (bool)hksp_isHealthDatabaseInaccessibleError;
- (bool)hksp_shouldRetryMessage;

// Image: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon

+ (id)hdsp_insufficientAsleepDataError;

- (bool)hdsp_isInsufficientAsleepDataError;

// Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation

+ (id)errorWithDescription:(id)arg1;
+ (id)errorWithDomain:(id)arg1 code:(long long)arg2 localizedDescription:(id)arg3;
+ (id)errorWithDomain:(id)arg1 code:(long long)arg2 localizedDescription:(id)arg3 userInfo:(id)arg4;

// Image: /System/Library/PrivateFrameworks/SoftwareUpdateCoreSupport.framework/SoftwareUpdateCoreSupport

+ (id)_buildCheckedErrorForDomain:(id)arg1 withCode:(long long)arg2 safeUnderlying:(id)arg3 description:(id)arg4;
+ (long long)_checkedDepthCount:(id)arg1;
+ (bool)_checkedIsSafeUserInfo:(id)arg1;
+ (id)buildAndLogCheckedSUCoreError:(long long)arg1 underlying:(id)arg2 description:(id)arg3;
+ (id)buildCheckedError:(id)arg1;
+ (id)buildCheckedSUCoreError:(long long)arg1 underlying:(id)arg2 description:(id)arg3;

- (long long)_checkedIndicationsMatching:(long long)arg1;
- (bool)_checkedIsSafe:(bool)arg1;
- (id)_checkedStackErrorAtDepth:(long long)arg1;
- (id)_deepestWithLayer;
- (long long)_errorInStackLayer;
- (id)_errorInStackOfLayer:(long long)arg1;
- (long long)checkedCode;
- (long long)checkedDepthCount;
- (id)checkedDescription;
- (id)checkedDomain;
- (id)checkedForDepthIndex:(long long)arg1;
- (long long)checkedIndications;
- (id)checkedIndicationsDescription;
- (long long)checkedIndicationsMatchingMask:(long long)arg1;
- (id)checkedIndicationsSummary;
- (long long)checkedLayer;
- (id)checkedNameForCode;
- (id)checkedOfLayer:(long long)arg1;
- (id)checkedSummary;
- (unsigned long long)checkedSystemPartitionSize;
- (id)checkedUserInfo;
- (bool)shouldFallbackToCustomerScan;

// Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks

- (bool)sck_hasUnderlyingErrorCode:(long long)arg1;

// Image: /System/Library/PrivateFrameworks/StocksCore.framework/StocksCore

- (bool)sc_hasUnderlyingErrorCode:(long long)arg1;

// Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices

- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;

// Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading

+ (id)errorWithTSKWarning:(id)arg1;
+ (id)tsp_errorWithCode:(long long)arg1;
+ (id)tsp_errorWithCode:(long long)arg1 underlyingError:(id)arg2;
+ (id)tsp_recoverableErrorWithCode:(long long)arg1;
+ (id)tsp_recoverableErrorWithError:(id)arg1;

- (bool)tsp_isRecoverable;

// Image: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility

+ (id)tsuErrorWithCode:(long long)arg1;
+ (id)tsu_IOErrorWithCode:(long long)arg1;
+ (id)tsu_IOReadErrorWithErrno:(int)arg1;
+ (id)tsu_IOWriteErrorWithErrno:(int)arg1;
+ (id)tsu_errorWithDomain:(id)arg1 code:(long long)arg2 alertTitle:(id)arg3 alertMessage:(id)arg4;
+ (id)tsu_errorWithDomain:(id)arg1 code:(long long)arg2 alertTitle:(id)arg3 alertMessage:(id)arg4 underlyingError:(id)arg5;
+ (id)tsu_errorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3 recoverySuggestion:(id)arg4;

- (bool)tsu_isCancelError;
- (bool)tsu_isOutOfSpaceError;
- (id)tsu_localizedAlertMessage;
- (id)tsu_localizedAlertTitle;

// Image: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary

+ (id)tl_errorWithDomain:(id)arg1 description:(id)arg2;

- (id)tl_nonRedundantDescription;

// Image: /System/Library/PrivateFrameworks/Translation.framework/Translation

+ (id)lt_errorWithCode:(long long)arg1 description:(id)arg2 userInfo:(id)arg3;
+ (id)lt_invalidRequestErrorWithDescription:(id)arg1;
+ (id)lt_offlineNotImplementedError;
+ (id)lt_onlineNotImplementedError;
+ (id)lt_speechLimitExceeded;
+ (id)lt_speechTranslationOngoing;
+ (id)lt_translationTimeout;

// Image: /System/Library/PrivateFrameworks/TranslationDaemon.framework/TranslationDaemon

+ (id)lt_bundle;
+ (id)lt_incompatibleForcedRoutes;
+ (id)lt_internalErrorWithCode:(long long)arg1 description:(id)arg2 userInfo:(id)arg3;
+ (id)lt_internalTTSCreationError;
+ (id)lt_lidModelLoadError;
+ (id)lt_offlineTTSErrorWithError:(id)arg1;
+ (id)lt_unsupporedLocalePairError:(id)arg1;
+ (id)ltd_errorWithCode:(long long)arg1 description:(id)arg2 userInfo:(id)arg3;

// Image: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer

+ (id)triCloudKitErrorWithMessage:(id)arg1;
+ (id)triCloudKitErrorWithMessage:(id)arg1 code:(long long)arg2;

// Image: /System/Library/PrivateFrameworks/TrustedPeers.framework/TrustedPeers

+ (id)errorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3;
+ (id)errorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3 underlying:(id)arg4;

// Image: /System/Library/PrivateFrameworks/VisionCore.framework/VisionCore

+ (id)VisionCoreErrorForCVReturnCode:(int)arg1 localizedDescription:(id)arg2;
+ (id)VisionCoreErrorForCorruptedResourceWithLocalizedDescription:(id)arg1;
+ (id)VisionCoreErrorForE5RTErrorCode:(int)arg1 localizedDescription:(id)arg2;
+ (id)VisionCoreErrorForE5RTLastErrorMessageAndCode:(int)arg1;
+ (id)VisionCoreErrorForEspressoErrorInfo:(struct { int x1; int x2; char *x3; })arg1 localizedDescription:(id)arg2;
+ (id)VisionCoreErrorForEspressoReturnStatus:(int)arg1 localizedDescription:(id)arg2;
+ (id)VisionCoreErrorForFailedEspressoPlan:(void*)arg1 localizedDescription:(id)arg2;
+ (id)VisionCoreErrorForFailedOperationWithLocalizedDescription:(id)arg1;
+ (id)VisionCoreErrorForInternalErrorWithLocalizedDescription:(id)arg1;
+ (id)VisionCoreErrorForInvalidArgumentWithLocalizedDescription:(id)arg1;
+ (id)VisionCoreErrorForInvalidOperationWithLocalizedDescription:(id)arg1;
+ (id)VisionCoreErrorForKernelReturnCode:(int)arg1 localizedDescription:(id)arg2;
+ (id)VisionCoreErrorForMemoryAllocationFailure;
+ (id)VisionCoreErrorForMemoryAllocationFailureOfElementCount:(unsigned long long)arg1 size:(unsigned long long)arg2;
+ (id)VisionCoreErrorForMemoryAllocationFailureOfSize:(unsigned long long)arg1;
+ (id)VisionCoreErrorForMemoryAllocationFailureWithLocalizedDescription:(id)arg1;
+ (id)VisionCoreErrorForUnavailableResourceWithLocalizedDescription:(id)arg1;
+ (id)VisionCoreErrorForUnknownProcessingDescriptorIdentifier:(id)arg1;
+ (id)VisionCoreErrorForUnsupportedE5RTIOPortType:(unsigned long long)arg1;
+ (id)VisionCoreErrorWithCode:(long long)arg1 localizedDescription:(id)arg2;
+ (id)VisionCoreErrorWithCode:(long long)arg1 localizedDescription:(id)arg2 underlyingError:(id)arg3;
+ (id)VisionCoreErrorWithCode:(long long)arg1 userInfo:(id)arg2;
+ (id)VisionCoreErrorWithDomain:(id)arg1 code:(long long)arg2 userInfo:(id)arg3;
+ (id)_VisionCoreErrorForMemoryAllocationFailureWithLocalizedDescription:(id)arg1;
+ (id)_VisionCoreEspressoErrorWithLocalizedDescription:(id)arg1;
+ (void)logInternalError:(id)arg1;

// Image: /System/Library/PrivateFrameworks/VisualVoicemail.framework/IMAP.framework/IMAP

+ (id)errorWithDomain:(id)arg1 code:(long long)arg2 localizedDescription:(id)arg3;
+ (id)errorWithDomain:(id)arg1 code:(long long)arg2 localizedDescription:(id)arg3 techDetails:(id)arg4;
+ (id)errorWithDomain:(id)arg1 code:(long long)arg2 localizedDescription:(id)arg3 title:(id)arg4 userInfo:(id)arg5;
+ (id)errorWithException:(id)arg1;
+ (void)vf_setDecoder:(id /* block */)arg1 forDomain:(id)arg2;
+ (id)vm_cancelledError;
+ (id)vm_connectionInterruptedError;
+ (id)vm_notSupportedError;
+ (id)vm_temporarilyUnavailableError;
+ (id)vm_timeoutError;

- (bool)mf_isSMIMEError;
- (bool)mf_isUserCancelledError;
- (id)mf_shortDescription;
- (bool)mf_shouldBeReportedToUser;
- (bool)mf_shouldFailDownload;
- (id)setLocalizedDescription:(id)arg1;
- (id)setShortDescription:(id)arg1;
- (id)useGenericDescription:(id)arg1;
- (id)vf_publicDescription;
- (bool)vm_isCancelledError;
- (bool)vm_isConnectionInterruptedError;
- (bool)vm_isNotSupportedError;
- (bool)vm_isTemporarilyUnavailableError;
- (bool)vm_isTimeoutError;
- (bool)vm_match:(id)arg1 code:(long long)arg2;
- (id)vm_underlyingError;

// Image: /System/Library/PrivateFrameworks/VisualVoicemail.framework/VisualVoicemail

+ (id)errorWithDomain:(id)arg1 code:(int)arg2 localizedDescription:(id)arg3;
+ (id)errorWithStreamDomain:(long long)arg1 code:(int)arg2 localizedDescription:(id)arg3;

- (bool)isConnectivityError;
- (bool)isEqualToError:(id)arg1;
- (bool)isExpiredPasswordError;
- (bool)isInvalidSubscriberError;
- (bool)isNewPasswordError;
- (bool)isPasswordMismatchError;
- (bool)isSecurityError;
- (bool)isServerError;
- (bool)isStreamDomain:(long long)arg1 error:(int)arg2;
- (bool)shouldPresentErrorForTaskType:(long long)arg1;

// Image: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient

+ (id)_vc_voiceShortcutErrorWithCode:(long long)arg1 extraUserInfo:(id)arg2 reason:(id)arg3;
+ (id)vc_partialPersistenceErrorWithPartialErrors:(id)arg1;
+ (id)vc_persistenceErrorWithUnderlyingError:(id)arg1;
+ (id)vc_voiceShortcutErrorWithCode:(long long)arg1 extraUserInfo:(id)arg2 reason:(id)arg3;
+ (id)vc_voiceShortcutErrorWithCode:(long long)arg1 reason:(id)arg2;
+ (id)vc_voiceShortcutErrorWithCode:(long long)arg1 underlyingError:(id)arg2;
+ (id)vc_voiceShortcutErrorWithCode:(long long)arg1 underlyingError:(id)arg2 reason:(id)arg3;
+ (id)wfSiriExecutionRequiresShortcutsJrError;

- (bool)vc_isFileAlreadyExists;
- (bool)vc_isFileNotFound;
- (bool)wf_isRequiresShortcutsJrError;

// Image: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation

+ (id)wf_errorWithCode:(unsigned long long)arg1;
+ (id)wf_errorWithCode:(unsigned long long)arg1 encapsulatedError:(id)arg2 userInfo:(id)arg3;
+ (id)wf_errorWithCode:(unsigned long long)arg1 userInfo:(id)arg2;

// Image: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks

+ (id)wb_databaseOpenError;
+ (id)wb_featureDisabledError;
+ (id)wb_lockError;

- (id)wb_privacyPreservingDescription;

// Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy

+ (void)_registerWebKitErrors;
+ (id)_webKitErrorWithCode:(int)arg1 failingURL:(id)arg2;
+ (id)_webKitErrorWithDomain:(id)arg1 code:(int)arg2 URL:(id)arg3;
+ (void)_webkit_addErrorsWithCodesAndDescriptions:(id)arg1 inDomain:(id)arg2;
+ (id)_webkit_errorWithDomain:(id)arg1 code:(int)arg2 URL:(id)arg3;

- (id)_initWithPluginErrorCode:(int)arg1 contentURL:(id)arg2 pluginPageURL:(id)arg3 pluginName:(id)arg4 MIMEType:(id)arg5;
- (id)_webkit_initWithDomain:(id)arg1 code:(int)arg2 URL:(id)arg3;

// Image: /System/Library/PrivateFrameworks/WebSheet.framework/WebSheet

- (id)failingURL;

// Image: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore

+ (id)_wl_encodableArrayFromArray:(id)arg1;
+ (id)_wl_encodableDictionaryFromDictionary:(id)arg1;
+ (id)_wl_encodableObjectFromObject:(id)arg1;
+ (id)_wl_encodableSetFromSet:(id)arg1;
+ (bool)_wl_objectIsKindOfNonCollectionPlistClass:(id)arg1;
+ (id)wl_encodableErrorSupportedClasses;

- (bool)wk_representsTransientConnectivityIssueForAttempt:(unsigned long long)arg1;
- (id)wl_encodableError;

// Image: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit

+ (id)associationErrorWithCode:(int)arg1 isPrivateMACFailureThresholdMet:(bool)arg2;
+ (id)associationErrorWithCode:(int)arg1 requiresPassword:(bool)arg2 signalStrength:(long long)arg3;
+ (id)associationErrorWithCode:(int)arg1 requiresPassword:(bool)arg2 signalStrength:(long long)arg3 isPrivateMACFailureThresholdMet:(bool)arg4;
+ (id)associationErrorWithCode:(int)arg1 requiresPassword:(bool)arg2 signalStrength:(long long)arg3 userInfo:(id)arg4;
+ (id)associationErrorWithReason:(long long)arg1;
+ (id)associationErrorWithReason:(long long)arg1 userInfo:(id)arg2;
+ (id)scanErrorWithCode:(long long)arg1;
+ (id)scanErrorWithReason:(long long)arg1;

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

+ (id)errorWithInterchangeErrorDictionary:(id)arg1;
+ (id)mtl_modelErrorWithException:(id)arg1;
+ (id)sharingMixedMDMContentErrorWithActionName:(id)arg1;
+ (id)wfUnsupportedEnvironmentError;
+ (id)wf_unsupportedActionErrorWithType:(id)arg1 platformIdiom:(long long)arg2;
+ (id)wf_unsupportedParameterErrorWithParameterName:(id)arg1 errorType:(id)arg2 platformIdiom:(long long)arg3;

- (id)interchangeErrorDictionary;
- (bool)wf_isUnsupportedEnvironmentError;
- (bool)wf_isUnsupportedOnPlatformError;
- (id)wf_localizedErrorStringWithActionName:(id)arg1;

// Image: /System/Library/PrivateFrameworks/XCTTargetBootstrap.framework/XCTTargetBootstrap

+ (id)_xct_error:(long long)arg1 description:(id)arg2;
+ (id)_xct_error:(long long)arg1 description:(id)arg2 userInfo:(id)arg3;

// Image: /System/Library/PrivateFrameworks/ZhuGeSupport.framework/ZhuGeSupport

+ (id)descriptionFromZhuGeErrorCode:(unsigned long long)arg1;
+ (id)errorWithZhuGeErrorCode:(unsigned long long)arg1 underlyingError:(id)arg2;

- (id)ZhuGeDescription;
- (id)_ZhuGeDescriptionWithLayer:(unsigned long long)arg1;

// Image: /System/Library/PrivateFrameworks/iCloudDriveCore.framework/iCloudDriveCore

+ (id)brc_daemonAccessDisabledError;
+ (id)brc_errorWithDomain:(id)arg1 code:(long long)arg2 underlyingError:(id)arg3;
+ (void)initialize;

- (id)_brc_cloudKitInternalWithErrorCode:(long long)arg1;
- (id)_brc_cloudKitPluginErrorPayload;
- (bool)_brc_isCloudKitErrorCode:(long long)arg1;
- (bool)_brc_isCloudKitInternalErrorCode:(long long)arg1;
- (bool)_brc_isCloudKitInternalErrorSafeToSyncUpWithoutSyncDown;
- (bool)_brc_isCloudKitPluginErrorCode:(long long)arg1;
- (bool)_brc_isCloudKitZoneNotFoundError;
- (bool)_brc_isCloudKitZoneUserDeletedError;
- (id)br_cloudKitErrorForIdentifier:(id)arg1;
- (double)br_suggestedRetryTimeInterval;
- (bool)brc_checkErrorsFromCloudKit:(id /* block */)arg1;
- (id)brc_cloudKitErrorForRecordID:(id)arg1;
- (id)brc_cloudKitErrorForSubscriptionID:(id)arg1;
- (id)brc_cloudKitErrorForZone:(id)arg1;
- (id)brc_cloudKitErrorMessage;
- (unsigned long long)brc_containerResetErrorForSharedZone:(bool)arg1 resetReason:(id*)arg2;
- (bool)brc_containsCloudKitErrorCode:(long long)arg1;
- (bool)brc_containsCloudKitInternalErrorCode:(long long)arg1;
- (bool)brc_isCloudKitAccountTemporarilyUnavailable;
- (bool)brc_isCloudKitAssetFileModified;
- (bool)brc_isCloudKitAtomicFailure;
- (bool)brc_isCloudKitCancellationError;
- (bool)brc_isCloudKitErrorChainedToNewParent:(id*)arg1;
- (bool)brc_isCloudKitErrorImplyingZoneNeedsCreation;
- (bool)brc_isCloudKitErrorNeedsPCSPrep;
- (bool)brc_isCloudKitErrorRemappedToNewRecordName:(id*)arg1;
- (bool)brc_isCloudKitErrorRequiringAssetRecheck;
- (bool)brc_isCloudKitErrorRequiringAssetRescan;
- (bool)brc_isCloudKitErrorRequiringAssetReupload;
- (bool)brc_isCloudKitErrorRequiringSkipThrottling;
- (bool)brc_isCloudKitErrorSafeToSyncUpWithoutSyncDown;
- (bool)brc_isCloudKitErrorUnsupportedOSForItemAndGetMinimumSupported:(id*)arg1;
- (bool)brc_isCloudKitErrorUnsupportedOSForZoneAndGetMinimumSupported:(id*)arg1;
- (bool)brc_isCloudKitErrorZoneMigrated;
- (bool)brc_isCloudKitErrorZoneUndergoingMigration;
- (bool)brc_isCloudKitOutOfQuota;
- (bool)brc_isCloudKitPCSChainingError;
- (bool)brc_isCloudKitPCSDecryptionFailure;
- (bool)brc_isCloudKitUnknownItemError;
- (bool)brc_isDenylistError;
- (bool)brc_isEverRetriable;
- (bool)brc_isExpectedErrorForTelemetry;
- (bool)brc_isIgnorableListDirectoryError;
- (bool)brc_isIndividualItemBlacklistError;
- (bool)brc_isOutOfSpaceError;
- (bool)brc_isReferenceValidationError;
- (bool)brc_isResetError;
- (bool)brc_isRetriable;
- (bool)brc_isRetriableForPCSChaining;
- (bool)brc_isStaleRecordUpdateError;
- (bool)brc_isUserInitiatedRetriable;
- (bool)brc_isXPCConnectionError;
- (bool)brc_shouldRetryBubbleLater;
- (bool)brc_shouldRetryLater;
- (id)brc_strippedError;
- (int)brc_syncOperationErrorKind;
- (id)brc_telemetryReportableErrorWithRecordName:(id*)arg1;
- (id)brc_wrappedError;
- (id)description;

// Image: /System/Library/PrivateFrameworks/iCloudQuotaUI.framework/iCloudQuotaUI

- (bool)icq_isPSD2StepUpError;

// Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud

+ (id)ic_cloudClientErrorWithCode:(long long)arg1 userInfo:(id)arg2;
+ (id)ic_cloudClientLibraryUploadErrorWithCode:(long long)arg1 userInfo:(id)arg2;

// Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore

- (id)errorBySettingFatalError:(bool)arg1;
- (bool)isEqual:(id)arg1 compareUserInfo:(bool)arg2;
- (bool)isFatalError;

// Image: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSApplication.framework/TSApplication

+ (id)tsa_errorWithCode:(long long)arg1;

- (bool)tsa_isCollaborationError;

// Image: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSPersistence.framework/TSPersistence

+ (id)tsp_dataCorruptionErrorWithError:(id)arg1 reason:(id)arg2 data:(id)arg3 dataProperties:(struct DataProperties { int x1; id x2; unsigned long long x3; id x4; unsigned int x5; })arg4 actualDataDigest:(id)arg5 isLikelyOSCorruption:(bool)arg6 isLikelyZeroBytesCorruption:(bool)arg7;
+ (id)tsp_ensureCorruptedDocumentErrorWithError:(id)arg1;
+ (id)tsp_ensureReadErrorWithError:(id)arg1;
+ (id)tsp_ensureSaveErrorWithError:(id)arg1;
+ (id)tsp_errorWithCode:(long long)arg1;
+ (id)tsp_errorWithCode:(long long)arg1 userInfo:(id)arg2;
+ (id)tsp_errorWithCode:(long long)arg1 userInfo:(id)arg2 isRecoverable:(bool)arg3;
+ (id)tsp_errorWithError:(id)arg1 hints:(id)arg2;
+ (id)tsp_readCorruptZipOfPackageErrorWithUserInfo:(id)arg1;
+ (id)tsp_readCorruptedDocumentErrorWithUserInfo:(id)arg1;
+ (id)tsp_readPOSIXErrorWithNumber:(int)arg1 userInfo:(id)arg2;
+ (id)tsp_recoverableErrorWithCode:(long long)arg1;
+ (id)tsp_recoverableErrorWithError:(id)arg1;
+ (id)tsp_saveDocumentErrorWithUserInfo:(id)arg1;
+ (id)tsp_storageSpaceErrorWithUserInfo:(id)arg1;
+ (id)tsp_unknownReadErrorWithUserInfo:(id)arg1;
+ (id)tsp_unknownWriteErrorWithUserInfo:(id)arg1;
+ (id)tsp_unsupportedVersionErrorWithUserInfo:(id)arg1;
+ (id)tsp_userInfoWithUserInfo:(id)arg1 additionalUserInfo:(id)arg2;
+ (id)tsp_writePOSIXErrorWithNumber:(int)arg1 userInfo:(id)arg2;

- (id)tsp_actualDataDigest;
- (id)tsp_dataCreationTime;
- (id)tsp_dataCreationVersion;
- (long long)tsp_dataIdentifier;
- (unsigned long long)tsp_dataLength;
- (id)tsp_dataType;
- (id)tsp_dataValidationReason;
- (id)tsp_expectedDataDigest;
- (bool)tsp_expectedDataDigestMatch;
- (id)tsp_hints;
- (id)tsp_hintsDescription;
- (bool)tsp_isCorruptZipOfPackageError;
- (bool)tsp_isCorruptedError;
- (bool)tsp_isDataCorruptionError;
- (bool)tsp_isDataDigestMismatchError;
- (bool)tsp_isDocumentTooNewError;
- (bool)tsp_isLikelyOSCorruption;
- (bool)tsp_isLikelyZeroBytesCorruption;
- (bool)tsp_isPasswordInputError;
- (bool)tsp_isReadError;
- (bool)tsp_isRecoverable;
- (bool)tsp_isTSPError;
- (bool)tsp_isUnsupportedVersionError;
- (bool)tsp_isWriteError;

// Image: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSUtility.framework/TSUtility

+ (id)tsu_errorWithCode:(long long)arg1 userInfo:(id)arg2;
+ (id)tsu_errorWithDomain:(id)arg1 code:(long long)arg2 alertTitle:(id)arg3 alertMessage:(id)arg4;
+ (id)tsu_errorWithDomain:(id)arg1 code:(long long)arg2 alertTitle:(id)arg3 alertMessage:(id)arg4 userInfo:(id)arg5;
+ (id)tsu_errorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3 recoverySuggestion:(id)arg4;
+ (id)tsu_errorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3 underlyingError:(id)arg4;
+ (id)tsu_errorWithError:(id)arg1 alertTitle:(id)arg2 alertMessage:(id)arg3 additionalUserInfo:(id)arg4;
+ (id)tsu_errorWithWarning:(id)arg1;
+ (id)tsu_fileReadCorruptedFileErrorWithUserInfo:(id)arg1;
+ (id)tsu_fileReadPOSIXErrorWithNumber:(int)arg1 userInfo:(id)arg2;
+ (id)tsu_fileReadUnknownErrorWithUserInfo:(id)arg1;
+ (id)tsu_fileWritePOSIXErrorWithNumber:(int)arg1 userInfo:(id)arg2;
+ (id)tsu_fileWriteUnknownErrorWithUserInfo:(id)arg1;
+ (id)tsu_userInfoWithErrorType:(long long)arg1 userInfo:(id)arg2;

- (void)tsu_enumerateErrorUsingBlock:(id /* block */)arg1;
- (id)tsu_errorPreservingAlertTitle;
- (id)tsu_errorPreservingCancel;
- (bool)tsu_isCancelError;
- (bool)tsu_isCorruptedError;
- (bool)tsu_isErrorPassingTest:(id /* block */)arg1;
- (bool)tsu_isFeatureUnsupportedError;
- (bool)tsu_isFileExistsError;
- (bool)tsu_isNoPermissionError;
- (bool)tsu_isNoSuchFileError;
- (bool)tsu_isOutOfSpaceError;
- (bool)tsu_isReadError;
- (bool)tsu_isWriteError;
- (id)tsu_localizedAlertMessage;
- (id)tsu_localizedAlertTitle;
- (id)tsu_zipArchiveErrorDescription;
- (id)tsu_zipArchiveErrorEntryName;

// Image: /usr/lib/libauthinstall.dylib

- (bool)isFileExistsError;
- (bool)isFileExistsError;

// Image: /usr/lib/libprequelite.dylib

+ (id)errorForDB:(struct sqlite3 { }*)arg1;
+ (id)errorForDB:(struct sqlite3 { }*)arg1 SQL:(id)arg2;
+ (id)errorForDB:(struct sqlite3 { }*)arg1 stmt:(struct sqlite3_stmt { }*)arg2;
+ (id)errorWithSqliteCode:(int)arg1 andMessage:(id)arg2;
+ (id)newFromSqliteStatement:(struct sqlite3_stmt { }*)arg1 atIndex:(int)arg2;
+ (id)newFromSqliteValue:(struct sqlite3_value { }*)arg1;

- (long long)extendedSqliteCode;
- (bool)isSqliteErrorCode:(long long)arg1;
- (void)sqliteBind:(struct sqlite3_stmt { }*)arg1 index:(int)arg2;
- (id)sqliteStatement;

@end
