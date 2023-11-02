
@interface NSMutableURLRequest : NSURLRequest

@property (copy) NSData *HTTPBody;
@property (retain) NSInputStream *HTTPBodyStream;
@property (copy) NSString *HTTPMethod;
@property bool HTTPShouldHandleCookies;
@property bool HTTPShouldUsePipelining;
@property (copy) NSURL *URL;
@property (copy) NSDictionary *allHTTPHeaderFields;
@property bool allowsCellularAccess;
@property bool allowsConstrainedNetworkAccess;
@property bool allowsExpensiveNetworkAccess;
@property bool assumesHTTP3Capable;
@property unsigned long long attribution;
@property unsigned long long cachePolicy;
@property (copy) NSURL *mainDocumentURL;
@property unsigned long long networkServiceType;
@property bool requiresDNSSECValidation;
@property double timeoutInterval;

// Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork

- (bool)_explicitlySetAllowsCellularAccess;
- (bool)_explicitlySetAllowsConstrainedNetworkAccess;
- (bool)_explicitlySetAllowsExpensiveNetworkAccess;
- (bool)_explicitlySetCachePolicy;
- (bool)_explicitlySetNetworkServiceType;
- (bool)_explicitlySetPreventsIdleSystemSleep;
- (bool)_explicitlySetProxySettings;
- (bool)_explicitlySetSSLProperties;
- (bool)_explicitlySetShouldHandleCookies;
- (bool)_explicitlySetTimeoutInterval;
- (void)_removeAllProtocolProperties;
- (void)_setAllowPrivateAccessTokensForThirdParty:(bool)arg1;
- (void)_setBlockTrackers:(bool)arg1;
- (void)_setFailInsecureLoadWithHTTPSDNSRecord:(bool)arg1;
- (void)_setIgnoreHSTS:(bool)arg1;
- (void)_setKnownTracker:(bool)arg1;
- (void)_setNeedsNetworkTrackingPrevention:(bool)arg1;
- (void)_setNonAppInitiated:(bool)arg1;
- (void)_setPayloadTransmissionTimeout:(double)arg1;
- (void)_setPreventHSTSStorage:(bool)arg1;
- (void)_setPrivacyProxyFailClosed:(bool)arg1;
- (void)_setPrivacyProxyFailClosedForUnreachableHosts:(bool)arg1;
- (void)_setPrivacyProxyFailClosedForUnreachableNonMainHosts:(bool)arg1;
- (void)_setProhibitPrivacyProxy:(bool)arg1;
- (void)_setRequiresShortConnectionTimeout:(bool)arg1;
- (void)_setStartTimeoutDate:(id)arg1;
- (void)_setTimeWindowDelay:(double)arg1;
- (void)_setTimeWindowDuration:(double)arg1;
- (void)_setUseEnhancedPrivacyMode:(bool)arg1;
- (void)_setWebSearchContent:(bool)arg1;
- (void)addValue:(id)arg1 forHTTPHeaderField:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)requestPriority;
- (void)setAllHTTPHeaderFields:(id)arg1;
- (void)setAllowsCellularAccess:(bool)arg1;
- (void)setAllowsConstrainedNetworkAccess:(bool)arg1;
- (void)setAllowsExpensiveNetworkAccess:(bool)arg1;
- (void)setAssumesHTTP3Capable:(bool)arg1;
- (void)setAttribution:(unsigned long long)arg1;
- (void)setBoundInterfaceIdentifier:(id)arg1;
- (void)setCachePolicy:(unsigned long long)arg1;
- (void)setContentDispositionEncodingFallbackArray:(id)arg1;
- (void)setExpectedWorkload:(unsigned long long)arg1;
- (void)setHTTPBody:(id)arg1;
- (void)setHTTPBodyStream:(id)arg1;
- (void)setHTTPContentType:(id)arg1;
- (void)setHTTPExtraCookies:(id)arg1;
- (void)setHTTPMethod:(id)arg1;
- (void)setHTTPReferrer:(id)arg1;
- (void)setHTTPShouldHandleCookies:(bool)arg1;
- (void)setHTTPShouldUsePipelining:(bool)arg1;
- (void)setHTTPUserAgent:(id)arg1;
- (void)setMainDocumentURL:(id)arg1;
- (void)setNetworkServiceType:(unsigned long long)arg1;
- (void)setRequestPriority:(unsigned long long)arg1;
- (void)setRequiresDNSSECValidation:(bool)arg1;
- (void)setTimeoutInterval:(double)arg1;
- (void)setURL:(id)arg1;
- (void)setValue:(id)arg1 forHTTPHeaderField:(id)arg2;
- (void)set_trackerContext:(id)arg1;

// Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension

- (void)bindToHotspotHelperCommand:(id)arg1;

// Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit

- (void)wfo_setAuthorizationWithCredential:(id)arg1;
- (void)wfo_setAuthorizationWithUsername:(id)arg1 password:(id)arg2;
- (void)wfo_setBodyWithQueryItems:(id)arg1;

// Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount

- (void)aa_addAltDSIDAndRepairStateWithAccount:(id)arg1;
- (void)aa_addAppProvidedContext:(id)arg1;
- (bool)aa_addAuthTokenOrBasicAuthHeaderWithAccount:(id)arg1 preferUsingPassword:(bool)arg2;
- (void)aa_addBasicAuthPasswordWithAccount:(id)arg1;
- (void)aa_addBasicAuthorizationHeaderWithAccount:(id)arg1 authToken:(id)arg2;
- (void)aa_addBasicAuthorizationHeaderWithAccount:(id)arg1 preferUsingPassword:(bool)arg2;
- (void)aa_addClientInfoHeaders;
- (void)aa_addContentTypeHeaders:(id)arg1;
- (void)aa_addDeviceIDHeader;
- (void)aa_addDeviceInternalDevHeaderIfEnabled;
- (void)aa_addDeviceProvisioningInfoHeadersWithAccount:(id)arg1;
- (void)aa_addDeviceProvisioningInfoHeadersWithDSID:(id)arg1;
- (void)aa_addDeviceProvisioningInfoHeadersWithDSID:(id)arg1 sendEmptyValues:(bool)arg2;
- (bool)aa_addDeviceProvisioningInfoHeadersWithDSIDFromReponse:(id)arg1;
- (bool)aa_addGrandSlamAuthorizationHeaderWithAccount:(id)arg1 grandslamToken:(id)arg2;
- (bool)aa_addGrandslamAuthorizationHeaderWithAltDSID:(id)arg1 grandslamToken:(id)arg2;
- (bool)aa_addGrandslamAuthorizationheaderWithAltDSID:(id)arg1 heartbeatToken:(id)arg2;
- (void)aa_addLocationSharingAllowedHeader;
- (void)aa_addLoggedInAppleIDHeaderWithAccount:(id)arg1;
- (void)aa_addMultiUserDeviceHeaderIfEnabled;
- (void)aa_addProxiedAuthHeaderWithAccount:(id)arg1;
- (void)aa_addSpyglassModeHeaderWithMask:(unsigned long long)arg1;
- (void)aa_addTokenAuthHeaderWithAccount:(id)arg1;
- (void)aa_setBodyWithParameters:(id)arg1;
- (void)aa_setJSONBodyWithParameters:(id)arg1;
- (id)aa_setXMLBodyWithParameters:(id)arg1;
- (void)aa_setXMLBodyWithParameters:(id)arg1 signingSession:(id)arg2;
- (void)aa_signBodyData:(id)arg1 withSigningSession:(id)arg2;

// Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices

- (void)_addAbsintheHeadersFromPromise:(id)arg1;
- (void)_ams_addCookies:(id)arg1;
- (void)_ams_replaceCookies:(id)arg1;
- (id)_ams_separateCookies:(id)arg1;
- (void)_syncAddHeadersFromPromise:(id)arg1 error:(id*)arg2;
- (void)ams_addABPayloadHeaderForTreatmentNamespace:(id)arg1;
- (void)ams_addAbsintheHeaderRemotelyWithBuyParams:(id)arg1 bag:(id)arg2 signingService:(id)arg3;
- (void)ams_addAbsintheHeadersWithBuyParams:(id)arg1 bag:(id)arg2;
- (void)ams_addAcceptLanguageHeader;
- (void)ams_addAnisetteHeadersForAccount:(id)arg1 type:(long long)arg2 bag:(id)arg3;
- (void)ams_addAuthKitHeaders;
- (void)ams_addAuthorizationHeaderForAccount:(id)arg1;
- (void)ams_addBiometricsHeadersForAccount:(id)arg1 options:(id)arg2;
- (void)ams_addCacheBusterParameterWithPreservedQueryEncoding:(bool)arg1;
- (void)ams_addCachePolicyHeader;
- (void)ams_addClientIdentifierHeaderForClient:(id)arg1;
- (void)ams_addClientVersionsForClient:(id)arg1;
- (void)ams_addConnectionTypeHeader;
- (void)ams_addContentLengthHeaderForData:(id)arg1;
- (void)ams_addContentTypeHeaderForEncoding:(long long)arg1;
- (id)ams_addCookiesAsynchronouslyForAccount:(id)arg1 clientInfo:(id)arg2 bag:(id)arg3 cleanupGlobalCookies:(bool)arg4;
- (void)ams_addCookiesForAccount:(id)arg1 clientInfo:(id)arg2 bag:(id)arg3;
- (void)ams_addCookiesForAccount:(id)arg1 clientInfo:(id)arg2 bag:(id)arg3 cleanupGlobalCookies:(bool)arg4;
- (void)ams_addForwardedForHeader;
- (void)ams_addGSTokenForAccount:(id)arg1 identifier:(id)arg2;
- (void)ams_addGUIDParameterUsingBag:(id)arg1 preservingQueryEncoding:(bool)arg2;
- (void)ams_addHeaders:(id)arg1;
- (void)ams_addIdentifierHeadersForAccount:(id)arg1;
- (void)ams_addIssuingProcessHeader;
- (void)ams_addMescalHeaderWithType:(long long)arg1 bag:(id)arg2 logKey:(id)arg3;
- (void)ams_addPrimaryiCloudIdentifierHeader;
- (void)ams_addRequestTimestampHeader;
- (void)ams_addRequestingProcessWithClient:(id)arg1;
- (void)ams_addSilentEnrollmentHeadersForAccount:(id)arg1;
- (void)ams_addStoreFrontHeaderForAccount:(id)arg1 client:(id)arg2 withBag:(id)arg3;
- (void)ams_addTimezoneOffsetHeader;
- (void)ams_addUserAgentHeaderFromClient:(id)arg1;
- (void)ams_addXGroupDSIDsWithPrimaryAccount:(id)arg1 andGroupAccounts:(id)arg2;
- (void)ams_addXTokenHeaderWithAccount:(id)arg1;
- (void)ams_removeAnisetteHeaders;
- (void)ams_setBodyParameters:(id)arg1 encoding:(long long)arg2 compressBody:(bool)arg3 error:(id*)arg4;

// Image: /System/Library/PrivateFrameworks/AskPermission.framework/AskPermission

- (void)ap_setNullableValue:(id)arg1 forHTTPHeaderField:(id)arg2;

// Image: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit

+ (id)ak_anisetteHeadersWithCompanionData:(id)arg1;
+ (id)ak_anisetteHeadersWithData:(id)arg1;
+ (id)ak_clientInfoHeader;
+ (id)ak_clientTimeHeader;
+ (id)ak_deviceUDIDHeader;
+ (id)ak_localeHeader;
+ (id)ak_proxiedAnisetteHeadersWithData:(id)arg1;
+ (id)ak_proxiedClientInfoHeadersWithDevice:(id)arg1;
+ (id)ak_proxiedHeadersForDevice:(id)arg1 anisetteData:(id)arg2;
+ (id)ak_timeZoneHeader;

- (void)_setAuthorizationHeaderWithToken:(id)arg1 altDSID:(id)arg2 key:(id)arg3;
- (void)ak_addAbsintheHeaderWithValue:(id)arg1;
- (void)ak_addAcceptedSLAHeaderWithVersion:(unsigned long long)arg1;
- (void)ak_addAnisetteHeaders;
- (void)ak_addAppProvidedContext:(id)arg1;
- (void)ak_addAppleIDHeaderWithValue:(id)arg1;
- (void)ak_addAppleIDUserModeHeaderWithValue:(unsigned long long)arg1;
- (void)ak_addAuthorizationHeaderWithCustodianRecoveryToken:(id)arg1 forAltDSID:(id)arg2;
- (void)ak_addAuthorizationHeaderWithHeartbeatToken:(id)arg1 forAltDSID:(id)arg2;
- (void)ak_addAuthorizationHeaderWithIdentityToken:(id)arg1 forAltDSID:(id)arg2;
- (void)ak_addAuthorizationHeaderWithServiceToken:(id)arg1 forAltDSID:(id)arg2;
- (void)ak_addCDPStatusHeaderForDSID:(id)arg1;
- (void)ak_addCFUHeader:(id)arg1;
- (void)ak_addCKRequestHeader;
- (void)ak_addCircleStatusHeader;
- (void)ak_addCircleStatusHeaderForCircleStatus:(bool)arg1;
- (void)ak_addClientApp:(id)arg1;
- (void)ak_addClientBundleIDHeader:(id)arg1;
- (void)ak_addClientInfoHeader;
- (void)ak_addClientTimeHeader;
- (void)ak_addCompanionClientInfoHeader:(id)arg1;
- (void)ak_addContextHeaderForServiceType:(long long)arg1;
- (void)ak_addContinutationKeyHeader:(id)arg1;
- (void)ak_addContinutationKeyPresenceHeader:(id)arg1;
- (void)ak_addCountryHeader;
- (void)ak_addCustodianSyncActionHeader;
- (void)ak_addDataCenterHeaderWithIdentifier:(id)arg1;
- (void)ak_addDeviceConfigurationModeHeader;
- (void)ak_addDeviceConfigurationModeHeaderForAuthContext:(id)arg1;
- (void)ak_addDeviceMLBHeader;
- (void)ak_addDeviceModeHeader;
- (void)ak_addDeviceModel;
- (void)ak_addDeviceROMHeader;
- (void)ak_addDeviceSerialNumberHeader;
- (void)ak_addDeviceUDIDHeader;
- (void)ak_addEphemeralAuthHeader;
- (void)ak_addExecutionModeHeader:(bool)arg1;
- (void)ak_addExperimentModeHeader;
- (void)ak_addFeatureMaskHeader;
- (void)ak_addFidoRecoveryTokenHeader:(id)arg1;
- (void)ak_addGuardianAuthorizationHeaderWithHeartbeatToken:(id)arg1 forAltDSID:(id)arg2;
- (void)ak_addGuardianAuthorizationHeaderWithIdentityToken:(id)arg1 forAltDSID:(id)arg2;
- (void)ak_addGuardianAuthorizationHeaderWithIdentityToken:(id)arg1 heartbeatToken:(id)arg2 serviceToken:(id)arg3 forAltDSID:(id)arg4;
- (void)ak_addGuardianAuthorizationHeaderWithServiceToken:(id)arg1 forAltDSID:(id)arg2;
- (void)ak_addHeaderForDeviceManagementState:(id)arg1;
- (void)ak_addHeaderForMDMOrganizationToken:(id)arg1;
- (void)ak_addHeaderForSecurityCode:(unsigned long long)arg1;
- (void)ak_addHeaderForSourceAltDSID:(id)arg1;
- (void)ak_addICSCIntentHeader;
- (void)ak_addICSCRecoveryHeaderWithIdentityToken:(id)arg1 forAltDSID:(id)arg2;
- (void)ak_addInternalBuildHeader;
- (void)ak_addJSONRequestHeader;
- (void)ak_addLocalUserHasAppleIDLoginHeader;
- (void)ak_addLocalUserUUIDHashHeader;
- (void)ak_addLocaleHeader;
- (void)ak_addLoggedInServicesHeaderForServices:(id)arg1;
- (void)ak_addOTStatusHeaderForAltDSID:(id)arg1;
- (void)ak_addOfferSecurityUpgrade:(bool)arg1;
- (void)ak_addPRKRequestHeader;
- (void)ak_addPasscodeAuthHeader;
- (void)ak_addPasswordResetKeyHeader:(id)arg1;
- (void)ak_addPhoneInformationHeaderWithValue:(id)arg1;
- (void)ak_addPhoneNumberCertificateHeaderWithValue:(id)arg1;
- (void)ak_addPhoneNumberHeader;
- (void)ak_addPrivateEmailAppBundleIdHeader:(id)arg1;
- (void)ak_addPrivateEmailAppNameHeader:(id)arg1;
- (void)ak_addPrivateEmailDomainHeader:(id)arg1;
- (void)ak_addPrivateEmailOriginHeader:(id)arg1;
- (void)ak_addProvisioningUDIDHeader;
- (void)ak_addProxiedAnisetteHeaders:(id)arg1;
- (void)ak_addProxiedAttestationHeaders:(id)arg1;
- (void)ak_addProxiedAuthorizationHeaderWithIdentityToken:(id)arg1 forAltDSID:(id)arg2;
- (void)ak_addProxiedBundleIDHeader:(id)arg1;
- (void)ak_addProxiedClientInfoHeader:(id)arg1;
- (void)ak_addProxiedDeviceCountryHeader:(id)arg1;
- (void)ak_addProxiedDeviceICSCIntentHeader;
- (void)ak_addProxiedDevicePRKRequestHeader;
- (void)ak_addProxiedDeviceSerialNumberHeader:(id)arg1;
- (void)ak_addProxiedDeviceUDIDHeader:(id)arg1;
- (void)ak_addProxyApp:(id)arg1;
- (void)ak_addReAuthenticationHeader;
- (void)ak_addRecoveryHeaderWithIdentityToken:(id)arg1 forAltDSID:(id)arg2;
- (void)ak_addRequestContextHeader:(id)arg1;
- (void)ak_addRequestUUIDHeader:(id)arg1;
- (void)ak_addSKUCountryHeader;
- (void)ak_addSeedBuildHeader;
- (void)ak_addShortLivedTokenHeaderWithIdentityToken:(id)arg1 forAltDSID:(id)arg2;
- (void)ak_addShowWarranty;
- (void)ak_addTelemetryDeviceSessionID:(id)arg1;
- (void)ak_addTelemetryFlowID:(id)arg1;
- (void)ak_addTimeZoneHeaders;
- (void)ak_addURLSwitchingHeaderWithURLKey:(id)arg1 altDSID:(id)arg2;
- (void)ak_addWalrusDeviceRegionHeader;
- (void)ak_addWalrusStatusHeader;
- (void)ak_setBodyWithParameters:(id)arg1;
- (void)ak_setJSONBodyWithParameters:(id)arg1;
- (id)ak_valueForEncodedHeaderWithKey:(id)arg1;

// Image: /System/Library/PrivateFrameworks/BrookDataCollection.framework/BrookDataCollection

- (id)AWSCanonicalizedResourceWithBucket:(id)arg1 FileName:(id)arg2;
- (id)AWSStringToSignWithHTTPVerb:(id)arg1 contentMD5:(id)arg2 contentType:(id)arg3 date:(id)arg4 canonicalizedResource:(id)arg5;
- (id)_formatHTTPDate:(id)arg1;
- (id)_secureRandomOfLength:(unsigned long long)arg1;
- (id)s3_decryptAESWithCiphertext:(id)arg1 key:(id)arg2 iv:(id)arg3;
- (bool)s3_encryptAESWithPlaintext:(id)arg1 ciphertext:(id*)arg2 key:(id*)arg3 iv:(id*)arg4;
- (id)s3_encryptPlaintext:(id)arg1;
- (void)s3_setS3HeadersWithContent:(id)arg1 accessConfig:(id)arg2;

// Image: /System/Library/PrivateFrameworks/CaptiveNetwork.framework/CaptiveNetwork

- (void)bindToCommand:(struct __CNPluginCommand { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __CFDictionary {} *x2; unsigned int x3; }*)arg1;

// Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit

- (void)wf_setBodyWithQueryItems:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal

- (void)cdp_addAuthHeaderWithContext:(id)arg1;
- (void)cdp_addClientInfoHeader;

// Image: /System/Library/PrivateFrameworks/FamilyCircle.framework/FamilyCircle

- (void)fam_addiTunesHeadersWithAccount:(id)arg1;

// Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation

+ (int)hashForPlayerID:(id)arg1;

- (void)setDeviceUniqueID;
- (void)setGameDescriptor:(id)arg1;
- (void)setInternal:(bool)arg1;
- (void)setLocale:(id)arg1;
- (void)setLocale:(id)arg1 isOverridingUsersPreferredLanguage:(bool)arg2;
- (void)setPlayerID:(id)arg1 hash:(int)arg2 authToken:(id)arg3;
- (void)setPushToken:(id)arg1;
- (void)setRestrictions:(id)arg1;
- (void)setSAPSignature:(id)arg1;
- (void)setSAPversion:(id)arg1;
- (void)setStoreMode:(id)arg1;

// Image: /System/Library/PrivateFrameworks/MediaGroupsDaemon.framework/MediaGroupsDaemon

- (void)rq_setProtocolVersion:(unsigned long long)arg1;
- (void)rq_setTimeout:(unsigned long long)arg1;

// Image: /System/Library/PrivateFrameworks/NewDeviceOutreachUI.framework/NewDeviceOutreachUI

- (bool)_addGSHeadersForAccount:(id)arg1 withStore:(id)arg2 forceReprovisioning:(bool)arg3 avoidUI:(bool)arg4;
- (id)_userAgent;
- (id)_userAgentWithBundleID:(id)arg1;
- (void)addBAAAuthenticationHeadersWithBody:(id)arg1;
- (void)addBAAAuthenticationHeadersWithSerialNumber:(id)arg1;
- (id)bodyDescription;
- (id)headerDescription;
- (void)ndo_addOASHeadersWithOfferID:(id)arg1 serialNumber:(id)arg2;
- (void)ndo_setCoverageRequestBodyWithSerialNumber:(id)arg1 displayedEvents:(id)arg2;
- (bool)ndo_signWithAccountHeaders:(bool)arg1 avoidUI:(bool)arg2;
- (bool)ndo_signWithAccountHeaders:(bool)arg1 avoidUI:(bool)arg2 withBundleID:(id)arg3;

// Image: /System/Library/PrivateFrameworks/PodcastsFoundation.framework/PodcastsFoundation

- (void)setNonAppInitiated:(bool)arg1;

// Image: /System/Library/PrivateFrameworks/PromotedContentProxy.framework/PromotedContentProxy

- (void)removeRecursiveRequestFlag;
- (void)setAdIdentifier:(id)arg1;
- (void)setMaximumRequestCount:(id)arg1;
- (void)setRecursiveRequestFlag;
- (void)setRequestType:(long long)arg1;

// Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy

- (void)_web_setHTTPContentType:(id)arg1;
- (void)_web_setHTTPReferrer:(id)arg1;
- (void)_web_setHTTPUserAgent:(id)arg1;

// Image: /System/Library/PrivateFrameworks/iCloudNotification.framework/iCloudNotification

- (void)ind_addQuotaHeadersForAccount:(id)arg1;
- (void)ind_addUserAgentString;

// Image: /System/Library/PrivateFrameworks/iCloudQuota.framework/iCloudQuota

- (void)icq_addHeadersForUpgradeWithCompletion:(id /* block */)arg1;
- (id)icq_sanitizedHeadersForDynamicUI;

// Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud

- (void)ic_appendHTTPCookieWithName:(id)arg1 value:(id)arg2;
- (void)ic_appendHTTPCookies:(id)arg1;

@end
