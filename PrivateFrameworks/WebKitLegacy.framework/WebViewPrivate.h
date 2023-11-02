
@interface WebViewPrivate : NSObject {
    id  UIDelegate;
    struct RetainPtr<id> { 
        void *m_ptr; 
    }  UIDelegateForwarder;
    id  UIKitDelegate;
    struct RetainPtr<id> { 
        void *m_ptr; 
    }  UIKitDelegateForwarder;
    id  WebMailDelegate;
    <WebCaretChangeListener> * _caretChangeListener;
    struct RetainPtr<NSMutableSet> { 
        void *m_ptr; 
    }  _caretChangeListeners;
    bool  _didPerformFirstNavigation;
    struct RetainPtr<WebFixedPositionContent> { 
        void *m_ptr; 
    }  _fixedPositionContent;
    <WebGeolocationProvider> * _geolocationProvider;
    int  _keyboardUIMode;
    bool  _keyboardUIModeAccessed;
    <WebNotificationProvider> * _notificationProvider;
    bool  allowsMessaging;
    bool  allowsUndo;
    struct RetainPtr<NSString> { 
        void *m_ptr; 
    }  applicationNameForUserAgent;
    struct RetainPtr<CGColor *> { 
        void *m_ptr; 
    }  backgroundColor;
    bool  becomingFirstResponder;
    bool  becomingFirstResponderFromOutside;
    bool  closed;
    bool  closing;
    struct RetainPtr<WebNodeHighlight> { 
        void *m_ptr; 
    }  currentNodeHighlight;
    float  customDeviceScaleFactor;
    struct RetainPtr<WebUITextIndicatorData> { 
        void *m_ptr; 
    }  dataOperationTextIndicator;
    unsigned long long  deviceOrientation;
    int  didDrawTiles;
    id  downloadDelegate;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  dragPreviewFrameInRootViewCoordinates;
    unsigned long long  dragSourceAction;
    struct RetainPtr<NSString> { 
        void *m_ptr; 
    }  draggedLinkTitle;
    struct RetainPtr<NSURL> { 
        void *m_ptr; 
    }  draggedLinkURL;
    bool  drawsBackground;
    id  editingDelegate;
    struct RetainPtr<id> { 
        void *m_ptr; 
    }  editingDelegateForwarder;
    struct CGSize { 
        double width; 
        double height; 
    }  fixedLayoutSize;
    <WebFormDelegate> * formDelegate;
    struct RetainPtr<id> { 
        void *m_ptr; 
    }  formDelegateForwarder;
    struct RefPtr<WebCore::ValidationBubble, WTF::RawPtrTraits<WebCore::ValidationBubble>, WTF::DefaultRefDerefTraits<WebCore::ValidationBubble>> { 
        struct ValidationBubble {} *m_ptr; 
    }  formValidationBubble;
    id  frameLoadDelegate;
    struct RetainPtr<id> { 
        void *m_ptr; 
    }  frameLoadDelegateForwarder;
    struct WebFrameLoadDelegateImplementationCache { 
        int (*didCreateJavaScriptContextForFrameFunc)(); 
        int (*didClearWindowObjectForFrameFunc)(); 
        int (*didClearWindowObjectForFrameInScriptWorldFunc)(); 
        int (*didClearInspectorWindowObjectForFrameFunc)(); 
        int (*windowScriptObjectAvailableFunc)(); 
        int (*didHandleOnloadEventsForFrameFunc)(); 
        int (*didReceiveServerRedirectForProvisionalLoadForFrameFunc)(); 
        int (*didCancelClientRedirectForFrameFunc)(); 
        int (*willPerformClientRedirectToURLDelayFireDateForFrameFunc)(); 
        int (*didChangeLocationWithinPageForFrameFunc)(); 
        int (*didPushStateWithinPageForFrameFunc)(); 
        int (*didReplaceStateWithinPageForFrameFunc)(); 
        int (*didPopStateWithinPageForFrameFunc)(); 
        int (*willCloseFrameFunc)(); 
        int (*didStartProvisionalLoadForFrameFunc)(); 
        int (*didReceiveTitleForFrameFunc)(); 
        int (*didCommitLoadForFrameFunc)(); 
        int (*didFailProvisionalLoadWithErrorForFrameFunc)(); 
        int (*didFailLoadWithErrorForFrameFunc)(); 
        int (*didFinishLoadForFrameFunc)(); 
        int (*didFirstLayoutInFrameFunc)(); 
        int (*didFirstVisuallyNonEmptyLayoutInFrameFunc)(); 
        int (*didLayoutFunc)(); 
        int (*didReceiveIconForFrameFunc)(); 
        int (*didFinishDocumentLoadForFrameFunc)(); 
        int (*didDisplayInsecureContentFunc)(); 
        int (*didRunInsecureContentFunc)(); 
        int (*didDetectXSSFunc)(); 
        int (*didRemoveFrameFromHierarchyFunc)(); 
        int (*webThreadDidLayoutFunc)(); 
    }  frameLoadDelegateImplementations;
    struct RetainPtr<WebVideoFullscreenController> { 
        void *m_ptr; 
    }  fullscreenController;
    struct Vector<WTF::RetainPtr<WebVideoFullscreenController>, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> { 
        void *m_buffer; 
        unsigned int m_capacity; 
        unsigned int m_size; 
    }  fullscreenControllersExiting;
    struct RefPtr<WebViewGroup, WTF::RawPtrTraits<WebViewGroup>, WTF::DefaultRefDerefTraits<WebViewGroup>> { 
        struct WebViewGroup {} *m_ptr; 
    }  group;
    bool  hasSpellCheckerDocumentTag;
    id  historyDelegate;
    struct WebHistoryDelegateImplementationCache { 
        int (*navigatedFunc)(); 
        int (*clientRedirectFunc)(); 
        int (*serverRedirectFunc)(); 
        int (*deprecatedSetTitleFunc)(); 
        int (*setTitleFunc)(); 
        int (*populateVisitedLinksFunc)(); 
    }  historyDelegateImplementations;
    struct RetainPtr<WAKWindow> { 
        void *m_ptr; 
    }  hostWindow;
    struct HashMap<unsigned long, WTF::RetainPtr<id>, WTF::DefaultHash<unsigned long>, WTF::HashTraits<unsigned long>, WTF::HashTraits<WTF::RetainPtr<id>>, WTF::HashTableTraits> { 
        struct HashTable<unsigned long, WTF::KeyValuePair<unsigned long, WTF::RetainPtr<id>>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<unsigned long, WTF::RetainPtr<id>>>, WTF::DefaultHash<unsigned long>, WTF::HashMap<unsigned long, WTF::RetainPtr<id>>::KeyValuePairTraits, WTF::HashTraits<unsigned long>> { 
            union { 
                void *m_table; 
                unsigned int *m_tableForLLDB; 
            } ; 
        } m_impl; 
    }  identifierMap;
    struct RetainPtr<WebIndicateLayer> { 
        void *m_ptr; 
    }  indicateLayer;
    struct RetainPtr<WebInspector> { 
        void *m_ptr; 
    }  inspector;
    bool  interactiveFormValidationEnabled;
    bool  isStopping;
    struct CGSize { 
        double width; 
        double height; 
    }  lastLayoutSize;
    struct unique_ptr<WebCore::AlternativeTextUIController, std::default_delete<WebCore::AlternativeTextUIController>> { 
        struct __compressed_pair<WebCore::AlternativeTextUIController *, std::default_delete<WebCore::AlternativeTextUIController>> { 
            struct AlternativeTextUIController {} *__value_; 
        } __ptr_; 
    }  m_alternativeTextUIController;
    <WebDeviceOrientationProvider> * m_deviceOrientationProvider;
    bool  mainFrameDocumentReady;
    bool  mainViewIsScrollingOrZooming;
    struct RetainPtr<NSString> { 
        void *m_ptr; 
    }  mediaStyle;
    bool  needsOneShotDrawingSynchronization;
    struct RetainPtr<WebFullScreenController> { 
        void *m_ptr; 
    }  newFullscreenController;
    struct Page { } * page;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  pendingFixedPositionLayoutRect;
    struct Lock { 
        struct Atomic<unsigned char> { 
            struct atomic<unsigned char> { 
                struct __cxx_atomic_impl<unsigned char, std::__cxx_atomic_base_impl<unsigned char>> { 
                    _Atomic unsigned char __a_value; 
                } __a_; 
            } value; 
        } m_byte; 
    }  pendingFixedPositionLayoutRectMutex;
    id  policyDelegate;
    struct RetainPtr<id> { 
        void *m_ptr; 
    }  policyDelegateForwarder;
    bool  postsAcceleratedCompositingNotifications;
    struct RetainPtr<WebPreferences> { 
        void *m_ptr; 
    }  preferences;
    int  programmaticFocusCount;
    struct unique_ptr<WebViewRenderingUpdateScheduler, std::default_delete<WebViewRenderingUpdateScheduler>> { 
        struct __compressed_pair<WebViewRenderingUpdateScheduler *, std::default_delete<WebViewRenderingUpdateScheduler>> { 
            struct WebViewRenderingUpdateScheduler {} *__value_; 
        } __ptr_; 
    }  renderingUpdateScheduler;
    struct WebResourceDelegateImplementationCache { 
        int (*didReceiveAuthenticationChallengeFunc)(); 
        int (*canAuthenticateAgainstProtectionSpaceFunc)(); 
        int (*connectionPropertiesFunc)(); 
        int (*webThreadDidFinishLoadingFromDataSourceFunc)(); 
        int (*webThreadDidFailLoadingWithErrorFromDataSourceFunc)(); 
        int (*webThreadIdentifierForRequestFunc)(); 
        int (*webThreadDidLoadResourceFromMemoryCacheFunc)(); 
        int (*webThreadWillSendRequestFunc)(); 
        int (*webThreadDidReceiveResponseFunc)(); 
        int (*webThreadDidReceiveContentLengthFunc)(); 
        int (*webThreadWillCacheResponseFunc)(); 
        int (*identifierForRequestFunc)(); 
        int (*willSendRequestFunc)(); 
        int (*didReceiveResponseFunc)(); 
        int (*didReceiveContentLengthFunc)(); 
        int (*didFinishLoadingFromDataSourceFunc)(); 
        int (*didFailLoadingWithErrorFromDataSourceFunc)(); 
        int (*didLoadResourceFromMemoryCacheFunc)(); 
        int (*willCacheResponseFunc)(); 
        int (*plugInFailedWithErrorFunc)(); 
        int (*shouldUseCredentialStorageFunc)(); 
        int (*shouldPaintBrokenImageForURLFunc)(); 
    }  resourceLoadDelegateImplementations;
    id  resourceProgressDelegate;
    struct RetainPtr<id> { 
        void *m_ptr; 
    }  resourceProgressDelegateForwarder;
    id  scriptDebugDelegate;
    struct WebScriptDebugDelegateImplementationCache { 
        bool didParseSourceExpectsBaseLineNumber; 
        bool exceptionWasRaisedExpectsHasHandlerFlag; 
        int (*didParseSourceFunc)(); 
        int (*failedToParseSourceFunc)(); 
        int (*exceptionWasRaisedFunc)(); 
    }  scriptDebugDelegateImplementations;
    bool  shouldCloseWithWindow;
    bool  shouldMaintainInactiveSelection;
    bool  shouldUpdateWhileOffscreen;
    struct RetainPtr<NSData> { 
        void *m_ptr; 
    }  sourceApplicationAuditData;
    long long  spellCheckerDocumentTag;
    bool  tabKeyCyclesThroughElementsChanged;
    struct RetainPtr<WebUITextIndicatorData> { 
        void *m_ptr; 
    }  textIndicatorData;
    struct String { 
        struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { 
            struct StringImpl {} *m_ptr; 
        } m_impl; 
    }  userAgent;
    bool  userAgentOverridden;
    NSURL * userStyleSheetLocation;
    bool  usesPageCache;
    int  validationMessageTimerMagnification;
    float  zoomMultiplier;
    bool  zoomsTextOnly;
}

+ (void)initialize;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end
