
@interface WBSSystemNoteTakingController : NSObject <SYLinkContextClientDelegate> {
    NSCache * _cachedCanonicalURLStringForWebPageURLString;
    <WBSSystemNoteTakingControllerDelegate> * _delegate;
    bool  _isNotesPIPVisible;
    SYLinkContextClient * _linkContextClient;
    SYNotesActivationObserver * _notesActivationObserver;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WBSSystemNoteTakingControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isNotesPIPVisible;
@property (readonly) Class superclass;
@property (getter=_isSystemNoteTakingEnabledForSafari, nonatomic, readonly) bool systemNoteTakingEnabledForSafari;

- (void).cxx_destruct;
- (void)_insertLinkContextInfo:(id)arg1 userActivity:(id)arg2;
- (void)_insertLinkContextPreview:(id)arg1 userActivity:(id)arg2;
- (bool)_isSystemNoteTakingEnabled;
- (bool)_isSystemNoteTakingEnabledForSafari;
- (void)_setUpNotesVisibilityObserver;
- (void)_updateNotesPIPVisibility:(bool)arg1;
- (void)applyHighlightInUserActivity:(id)arg1 webView:(id)arg2;
- (void)cacheCanonicalURL:(id)arg1 forWebPageURL:(id)arg2;
- (id)delegate;
- (void)fetchHighlightsForUserActivity:(id)arg1 privateBrowsing:(bool)arg2 completion:(id /* block */)arg3;
- (id)init;
- (void)insertCanonicalURLIfAvailableForUserActivity:(id)arg1;
- (bool)isNoteTakingSupportedWithPrivateBrowsing:(bool)arg1;
- (bool)isNotesPIPVisible;
- (void)saveHighlightsData:(id)arg1 selectedText:(id)arg2 selectedImage:(id)arg3 newGroup:(bool)arg4 originatedInApp:(bool)arg5 webView:(id)arg6 userActivity:(id)arg7;
- (void)setDelegate:(id)arg1;
- (id)userActivityForNoteTaking:(id)arg1;
- (void)userWillAddLinkWithActivity:(id)arg1 completion:(id /* block */)arg2;

@end
