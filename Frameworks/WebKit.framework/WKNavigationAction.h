
@interface WKNavigationAction : NSObject <WKObject> {
    struct ObjectStorage<API::NavigationAction> { 
        struct type { 
            unsigned char __lx[1168]; 
        } data; 
    }  _navigationAction;
}

@property (readonly) struct Object { int (**x1)(); void *x2; }*_apiObject;
@property (nonatomic, readonly) bool _canHandleRequest;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } _clickLocationInRootViewCoordinates;
@property (nonatomic, readonly) bool _hasOpener;
@property (nonatomic, readonly) _WKHitTestResult *_hitTestResult;
@property (nonatomic, readonly) bool _isRedirect;
@property (nonatomic, readonly) WKNavigation *_mainFrameNavigation;
@property (nonatomic, readonly) NSURL *_originalURL;
@property (setter=_sf_setAllowsExternalRedirectWithoutPrompting:, nonatomic) bool _sf_allowsExternalRedirectWithoutPrompting;
@property (nonatomic, readonly) bool _sf_shouldAskAboutInsecureFormSubmission;
@property (nonatomic, readonly) bool _sf_shouldPerformDownload;
@property (nonatomic, readonly) bool _shouldOpenAppLinks;
@property (nonatomic, readonly) bool _shouldOpenExternalSchemes;
@property (nonatomic, readonly) bool _shouldOpenExternalURLs;
@property (nonatomic, readonly) bool _shouldPerformDownload;
@property (nonatomic, readonly) long long _syntheticClickType;
@property (getter=_isUserInitiated, nonatomic, readonly) bool _userInitiated;
@property (nonatomic, readonly) _WKUserInitiatedAction *_userInitiatedAction;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long modifierFlags;
@property (nonatomic, readonly) long long navigationType;
@property (nonatomic, readonly, copy) NSURLRequest *request;
@property (nonatomic, readonly) bool safari_isEligibleToSpawnNewTabFromPinnedTab;
@property (nonatomic, readonly) bool safari_isNewWindowNavigationActionSpecifiedByAnchorTargetAttribute;
@property (nonatomic, readonly) bool shouldPerformDownload;
@property (nonatomic, readonly, copy) WKFrameInfo *sourceFrame;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) WKFrameInfo *targetFrame;

// Image: /System/Library/Frameworks/WebKit.framework/WebKit

- (struct Object { int (**x1)(); void *x2; }*)_apiObject;
- (bool)_canHandleRequest;
- (struct CGPoint { double x1; double x2; })_clickLocationInRootViewCoordinates;
- (bool)_hasOpener;
- (id)_hitTestResult;
- (bool)_isRedirect;
- (bool)_isUserInitiated;
- (id)_mainFrameNavigation;
- (id)_originalURL;
- (bool)_shouldOpenAppLinks;
- (bool)_shouldOpenExternalSchemes;
- (bool)_shouldOpenExternalURLs;
- (bool)_shouldPerformDownload;
- (void)_storeSKAdNetworkAttribution;
- (long long)_syntheticClickType;
- (id)_userInitiatedAction;
- (void)dealloc;
- (id)description;
- (long long)modifierFlags;
- (long long)navigationType;
- (id)request;
- (bool)shouldPerformDownload;
- (id)sourceFrame;
- (id)targetFrame;

// Image: /System/Library/Frameworks/SafariServices.framework/SafariServices

- (bool)_sf_allowsExternalRedirectWithoutPrompting;
- (void)_sf_setAllowsExternalRedirectWithoutPrompting:(bool)arg1;
- (bool)_sf_shouldAskAboutInsecureFormSubmission;
- (bool)_sf_shouldPerformDownload;

// Image: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI

- (bool)safari_isEligibleForContinuedTranslationWithPolicy:(long long)arg1;
- (bool)safari_isEligibleToSpawnNewTabFromPinnedTab;
- (bool)safari_isNewWindowNavigationActionSpecifiedByAnchorTargetAttribute;
- (bool)safari_shouldDonateWithPolicy:(long long)arg1;

@end
