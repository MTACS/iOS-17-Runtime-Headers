
@interface WKBackForwardListItem : NSObject <WBSTranslationContextSnapshotStoring, WKObject> {
    struct ObjectStorage<WebKit::WebBackForwardListItem> { 
        struct type { 
            unsigned char __lx[376]; 
        } data; 
    }  _item;
}

@property (readonly, copy) NSURL *URL;
@property (readonly) struct Object { int (**x1)(); void *x2; }*_apiObject;
@property (readonly) void*_item;
@property (setter=_safari_setTranslationContextSnapshot:, nonatomic, retain) WBSTranslationContextSnapshot *_safari_translationContextSnapshot;
@property (setter=_sf_setExplicitSuggestedFilename:, nonatomic, retain) NSString *_sf_explicitSuggestedFilename;
@property (setter=_sf_setQuickLookDocument:, nonatomic, retain) SFQuickLookDocument *_sf_quickLookDocument;
@property (setter=_sf_setSecurityInfo:, nonatomic, retain) _SFSecurityInfo *_sf_securityInfo;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSURL *initialURL;
@property (setter=safari_setHighlight:, nonatomic, retain) SLHighlight *safari_highlight;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *title;

// Image: /System/Library/Frameworks/WebKit.framework/WebKit

- (id)URL;
- (struct Object { int (**x1)(); void *x2; }*)_apiObject;
- (struct CGImage { }*)_copySnapshotForTesting;
- (void*)_item;
- (struct CGPoint { double x1; double x2; })_scrollPosition;
- (bool)_wasCreatedByJSWithoutUserInteraction;
- (void)dealloc;
- (id)initialURL;
- (id)title;

// Image: /System/Library/Frameworks/SafariServices.framework/SafariServices

- (id)_sf_explicitSuggestedFilename;
- (id)_sf_quickLookDocument;
- (id)_sf_securityInfo;
- (void)_sf_setExplicitSuggestedFilename:(id)arg1;
- (void)_sf_setQuickLookDocument:(id)arg1;
- (void)_sf_setSecurityInfo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI

- (void)_safari_setTranslationContextSnapshot:(id)arg1;
- (id)_safari_translationContextSnapshot;
- (id)safari_highlight;
- (void)safari_setHighlight:(id)arg1;

@end
