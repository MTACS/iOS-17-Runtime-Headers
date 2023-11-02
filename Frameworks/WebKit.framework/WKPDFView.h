
@interface WKPDFView : WKApplicationStateTrackingView <PDFHostViewControllerDelegate, UITextSearching, WKActionSheetAssistantDelegate, WKShareSheetDelegate, WKWebViewContentProvider, _WKWebViewPrintProvider> {
    struct RetainPtr<WKActionSheetAssistant> { 
        void *m_ptr; 
    }  _actionSheetAssistant;
    struct RetainPtr<NSData> { 
        void *m_ptr; 
    }  _data;
    struct RetainPtr<CGPDFDocument *> { 
        void *m_ptr; 
    }  _documentForPrinting;
    struct BlockPtr<void ()>="m_block"@? {}  _findCompletion;
    struct RetainPtr<NSString> { 
        void *m_ptr; 
    }  _findString;
    unsigned long long  _findStringCount;
    unsigned long long  _findStringMaxCount;
    struct RetainPtr<UIView> { 
        void *m_ptr; 
    }  _fixedOverlayView;
    struct optional<unsigned long> { 
        union { 
            BOOL __null_state_; 
            unsigned long long __val_; 
        } ; 
        bool __engaged_; 
    }  _focusedSearchResultIndex;
    long long  _focusedSearchResultPendingOffset;
    struct RetainPtr<PDFHostViewController> { 
        void *m_ptr; 
    }  _hostViewController;
    bool  _isShowingPasswordView;
    struct RetainPtr<WKKeyboardScrollViewAnimator> { 
        void *m_ptr; 
    }  _keyboardScrollingAnimator;
    struct CGSize { 
        double width; 
        double height; 
    }  _overlaidAccessoryViewsInset;
    struct RetainPtr<UIView> { 
        void *m_ptr; 
    }  _pageNumberIndicator;
    struct CString { 
        struct RefPtr<WTF::CStringBuffer, WTF::RawPtrTraits<WTF::CStringBuffer>, WTF::DefaultRefDerefTraits<WTF::CStringBuffer>> { 
            struct CStringBuffer {} *m_ptr; 
        } m_buffer; 
    }  _passwordForPrinting;
    struct InteractionInformationAtPosition { 
        struct InteractionInformationRequest { 
            struct IntPoint { 
                int m_x; 
                int m_y; 
            } point; 
            bool includeSnapshot; 
            bool includeLinkIndicator; 
            bool includeCaretContext; 
            bool includeHasDoubleClickHandler; 
            bool includeImageData; 
            bool gatherAnimations; 
            bool linkIndicatorShouldHaveLegacyMargins; 
            bool disallowUserAgentShadowContent; 
        } request; 
        bool canBeValid; 
        struct optional<bool> { 
            union { 
                BOOL __null_state_; 
                bool __val_; 
            } ; 
            bool __engaged_; 
        } nodeAtPositionHasDoubleClickHandler; 
        unsigned char selectability; 
        bool isSelected; 
        bool prefersDraggingOverTextSelection; 
        bool isNearMarkedText; 
        bool touchCalloutEnabled; 
        bool isLink; 
        bool isImage; 
        bool isAttachment; 
        bool isAnimatedImage; 
        bool isAnimating; 
        bool canShowAnimationControls; 
        bool isPausedVideo; 
        bool isElement; 
        bool isContentEditable; 
        unsigned long long containerScrollingNodeID; 
        bool isDataDetectorLink; 
        bool preventTextInteraction; 
        bool elementContainsImageOverlay; 
        bool shouldNotUseIBeamInEditableContent; 
        bool isImageOverlayText; 
        bool isVerticalWritingMode; 
        struct FloatPoint { 
            float m_x; 
            float m_y; 
        } adjustedPointForNodeRespondingToClickEvents; 
        struct URL { 
            struct String { 
                struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { 
                    struct StringImpl {} *m_ptr; 
                } m_impl; 
            } m_string; 
            unsigned int m_isValid : 1; 
            unsigned int m_protocolIsInHTTPFamily : 1; 
            unsigned int m_cannotBeABaseURL : 1; 
            unsigned int m_portLength : 3; 
            unsigned int m_schemeEnd : 26; 
            unsigned int m_userStart; 
            unsigned int m_userEnd; 
            unsigned int m_passwordEnd; 
            unsigned int m_hostEnd; 
            unsigned int m_pathAfterLastSlash; 
            unsigned int m_pathEnd; 
            unsigned int m_queryEnd; 
        } url; 
        struct URL { 
            struct String { 
                struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { 
                    struct StringImpl {} *m_ptr; 
                } m_impl; 
            } m_string; 
            unsigned int m_isValid : 1; 
            unsigned int m_protocolIsInHTTPFamily : 1; 
            unsigned int m_cannotBeABaseURL : 1; 
            unsigned int m_portLength : 3; 
            unsigned int m_schemeEnd : 26; 
            unsigned int m_userStart; 
            unsigned int m_userEnd; 
            unsigned int m_passwordEnd; 
            unsigned int m_hostEnd; 
            unsigned int m_pathAfterLastSlash; 
            unsigned int m_pathEnd; 
            unsigned int m_queryEnd; 
        } imageURL; 
        struct String { 
            struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { 
                struct StringImpl {} *m_ptr; 
            } m_impl; 
        } imageMIMEType; 
        struct String { 
            struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { 
                struct StringImpl {} *m_ptr; 
            } m_impl; 
        } title; 
        struct String { 
            struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { 
                struct StringImpl {} *m_ptr; 
            } m_impl; 
        } idAttribute; 
        struct IntRect { 
            struct IntPoint { 
                int m_x; 
                int m_y; 
            } m_location; 
            struct IntSize { 
                int m_width; 
                int m_height; 
            } m_size; 
        } bounds; 
        struct RefPtr<WebKit::ShareableBitmap, WTF::RawPtrTraits<WebKit::ShareableBitmap>, WTF::DefaultRefDerefTraits<WebKit::ShareableBitmap>> { 
            struct ShareableBitmap {} *m_ptr; 
        } image; 
        struct String { 
            struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { 
                struct StringImpl {} *m_ptr; 
            } m_impl; 
        } textBefore; 
        struct String { 
            struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { 
                struct StringImpl {} *m_ptr; 
            } m_impl; 
        } textAfter; 
        float caretLength; 
        struct FloatRect { 
            struct FloatPoint { 
                float m_x; 
                float m_y; 
            } m_location; 
            struct FloatSize { 
                float m_width; 
                float m_height; 
            } m_size; 
        } lineCaretExtent; 
        struct optional<WebCore::Cursor> { 
            union { 
                BOOL __null_state_; 
                struct Cursor { 
                    int m_type; 
                    struct RefPtr<WebCore::Image, WTF::RawPtrTraits<WebCore::Image>, WTF::DefaultRefDerefTraits<WebCore::Image>> { 
                        struct Image {} *m_ptr; 
                    } m_image; 
                    struct IntPoint { 
                        int m_x; 
                        int m_y; 
                    } m_hotSpot; 
                    void *m_platformCursor; 
                } __val_; 
            } ; 
            bool __engaged_; 
        } cursor; 
        struct TextIndicatorData { 
            struct FloatRect { 
                struct FloatPoint { 
                    float m_x; 
                    float m_y; 
                } m_location; 
                struct FloatSize { 
                    float m_width; 
                    float m_height; 
                } m_size; 
            } selectionRectInRootViewCoordinates; 
            struct FloatRect { 
                struct FloatPoint { 
                    float m_x; 
                    float m_y; 
                } m_location; 
                struct FloatSize { 
                    float m_width; 
                    float m_height; 
                } m_size; 
            } textBoundingRectInRootViewCoordinates; 
            struct FloatRect { 
                struct FloatPoint { 
                    float m_x; 
                    float m_y; 
                } m_location; 
                struct FloatSize { 
                    float m_width; 
                    float m_height; 
                } m_size; 
            } contentImageWithoutSelectionRectInRootViewCoordinates; 
            struct Vector<WebCore::FloatRect, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> { 
                struct FloatRect {} *m_buffer; 
                unsigned int m_capacity; 
                unsigned int m_size; 
            } textRectsInBoundingRectCoordinates; 
            float contentImageScaleFactor; 
            struct RefPtr<WebCore::Image, WTF::RawPtrTraits<WebCore::Image>, WTF::DefaultRefDerefTraits<WebCore::Image>> { 
                struct Image {} *m_ptr; 
            } contentImageWithHighlight; 
            struct RefPtr<WebCore::Image, WTF::RawPtrTraits<WebCore::Image>, WTF::DefaultRefDerefTraits<WebCore::Image>> { 
                struct Image {} *m_ptr; 
            } contentImageWithoutSelection; 
            struct RefPtr<WebCore::Image, WTF::RawPtrTraits<WebCore::Image>, WTF::DefaultRefDerefTraits<WebCore::Image>> { 
                struct Image {} *m_ptr; 
            } contentImage; 
            struct Color { 
                unsigned long long m_colorAndFlags; 
            } estimatedBackgroundColor; 
            unsigned char presentationTransition; 
            struct OptionSet<WebCore::TextIndicatorOption> { 
                unsigned short m_storage; 
            } options; 
        } linkIndicator; 
        struct String { 
            struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { 
                struct StringImpl {} *m_ptr; 
            } m_impl; 
        } dataDetectorIdentifier; 
        struct RetainPtr<NSArray> { 
            void *m_ptr; 
        } dataDetectorResults; 
        struct IntRect { 
            struct IntPoint { 
                int m_x; 
                int m_y; 
            } m_location; 
            struct IntSize { 
                int m_width; 
                int m_height; 
            } m_size; 
        } dataDetectorBounds; 
        struct optional<WebCore::ElementContext> { 
            union { 
                BOOL __null_state_; 
                struct ElementContext { 
                    struct FloatRect { 
                        struct FloatPoint { 
                            float m_x; 
                            float m_y; 
                        } m_location; 
                        struct FloatSize { 
                            float m_width; 
                            float m_height; 
                        } m_size; 
                    } boundingRect; 
                    struct ObjectIdentifierGeneric<WebCore::PageIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits> { 
                        unsigned long long m_identifier; 
                    } webPageIdentifier; 
                    struct ProcessQualified<WTF::UUID> { 
                        struct UUID { 
                            /* Warning: Unrecognized filer type: 'T' using 'void*' */ void*m_data; 
                        } m_object; 
                        struct ObjectIdentifierGeneric<WebCore::ProcessIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits> { 
                            unsigned long long m_identifier; 
                        } m_processIdentifier; 
                    } documentIdentifier; 
                    struct ObjectIdentifierGeneric<WebCore::ElementIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits> { 
                        unsigned long long m_identifier; 
                    } elementIdentifier; 
                } __val_; 
            } ; 
            bool __engaged_; 
        } elementContext; 
        struct optional<WebCore::ElementContext> { 
            union { 
                BOOL __null_state_; 
                struct ElementContext { 
                    struct FloatRect { 
                        struct FloatPoint { 
                            float m_x; 
                            float m_y; 
                        } m_location; 
                        struct FloatSize { 
                            float m_width; 
                            float m_height; 
                        } m_size; 
                    } boundingRect; 
                    struct ObjectIdentifierGeneric<WebCore::PageIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits> { 
                        unsigned long long m_identifier; 
                    } webPageIdentifier; 
                    struct ProcessQualified<WTF::UUID> { 
                        struct UUID { 
                            void*m_data; 
                        } m_object; 
                        struct ObjectIdentifierGeneric<WebCore::ProcessIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits> { 
                            unsigned long long m_identifier; 
                        } m_processIdentifier; 
                    } documentIdentifier; 
                    struct ObjectIdentifierGeneric<WebCore::ElementIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits> { 
                        unsigned long long m_identifier; 
                    } elementIdentifier; 
                } __val_; 
            } ; 
            bool __engaged_; 
        } hostImageOrVideoElementContext; 
        struct Vector<WebCore::ElementAnimationContext, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> { 
            struct ElementAnimationContext {} *m_buffer; 
            unsigned int m_capacity; 
            unsigned int m_size; 
        } animationsAtPoint; 
    }  _positionInformation;
    struct RetainPtr<id<UITextSearchAggregator>> { 
        void *m_ptr; 
    }  _searchAggregator;
    struct RetainPtr<NSString> { 
        void *m_ptr; 
    }  _searchString;
    struct RetainPtr<WKShareSheet> { 
        void *m_ptr; 
    }  _shareSheet;
    struct RetainPtr<NSString> { 
        void *m_ptr; 
    }  _suggestedFilename;
    struct WeakObjCPtr<WKWebView> { 
        id m_weakReference; 
    }  _webView;
}

@property (nonatomic, readonly) bool _wk_printFormatterRequiresMainThread;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) UITextRange *selectedTextRange;
@property (readonly) <NSObject><NSCopying> *selectedTextSearchDocument;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsTextReplacement;
@property (nonatomic, readonly) UIView *web_contentView;
@property (nonatomic, readonly) NSData *web_dataRepresentation;
@property (nonatomic, readonly) bool web_isBackground;
@property (nonatomic, readonly) NSString *web_suggestedFilename;

+ (bool)web_requiresCustomSnapshotting;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_URLWithPageIndex:(long long)arg1;
- (bool)_computeFocusedSearchResultIndexWithOptions:(unsigned long long)arg1 didWrapAround:(bool*)arg2;
- (id)_contentView;
- (struct CGPDFDocument { }*)_ensureDocumentForPrinting;
- (void)_findString:(id)arg1 withOptions:(unsigned long long)arg2 maxCount:(unsigned long long)arg3 completion:(id /* block */)arg4;
- (void)_focusOnSearchResultWithOptions:(unsigned long long)arg1;
- (void)_goToURL:(id)arg1 atLocation:(struct CGPoint { double x1; double x2; })arg2;
- (void)_movePageNumberIndicatorToPoint:(struct CGPoint { double x1; double x2; })arg1 animated:(bool)arg2;
- (struct CGPoint { double x1; double x2; })_offsetForPageNumberIndicator;
- (void)_resetFind;
- (void)_scrollToURLFragment:(id)arg1;
- (void)_showActionSheetForURL:(id)arg1 atLocation:(struct CGPoint { double x1; double x2; })arg2 withAnnotationRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)_updateLayoutAnimated:(bool)arg1;
- (unsigned long long)_wk_pageCountForPrintFormatter:(id)arg1;
- (bool)_wk_printFormatterRequiresMainThread;
- (void)_wk_requestDocumentForPrintFormatter:(id)arg1;
- (struct RetainPtr<NSArray> { void *x1; })actionSheetAssistant:(id)arg1 decideActionsForElement:(id)arg2 defaultActions:(struct RetainPtr<NSArray> { void *x1; })arg3;
- (void)actionSheetAssistant:(id)arg1 openElementAtLocation:(struct CGPoint { double x1; double x2; })arg2;
- (void)actionSheetAssistant:(id)arg1 performAction:(unsigned char)arg2;
- (void)actionSheetAssistant:(id)arg1 shareElementWithURL:(id)arg2 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (bool)actionSheetAssistant:(id)arg1 shouldIncludeAppLinkActionsForElement:(id)arg2;
- (void)clearAllDecoratedFoundText;
- (long long)compareFoundRange:(id)arg1 toRange:(id)arg2 inDocument:(id)arg3;
- (id)dataDetectionContextForActionSheetAssistant:(id)arg1 positionInformation:(const void*)arg2;
- (void)dealloc;
- (void)decorateFoundTextRange:(id)arg1 inDocument:(id)arg2 usingStyle:(long long)arg3;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)pdfHostViewController:(id)arg1 didLongPressPageIndex:(long long)arg2 atLocation:(struct CGPoint { double x1; double x2; })arg3 withAnnotationRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
- (void)pdfHostViewController:(id)arg1 didLongPressURL:(id)arg2 atLocation:(struct CGPoint { double x1; double x2; })arg3 withAnnotationRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
- (void)pdfHostViewController:(id)arg1 documentDidUnlockWithPassword:(id)arg2;
- (void)pdfHostViewController:(id)arg1 findStringUpdate:(unsigned long long)arg2 done:(bool)arg3;
- (void)pdfHostViewController:(id)arg1 goToPageIndex:(long long)arg2 withViewFrustum:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)pdfHostViewController:(id)arg1 goToURL:(id)arg2;
- (void)pdfHostViewController:(id)arg1 updatePageCount:(long long)arg2;
- (void)pdfHostViewControllerDocumentDidRequestPassword:(id)arg1;
- (void)pdfHostViewControllerExtensionProcessDidCrash:(id)arg1;
- (void)performTextSearchWithQueryString:(id)arg1 usingOptions:(id)arg2 resultAggregator:(id)arg3;
- (struct optional<WebKit::InteractionInformationAtPosition> { union { BOOL x_1_1_1; struct InteractionInformationAtPosition { struct InteractionInformationRequest { struct IntPoint { int x_1_4_1; int x_1_4_2; } x_1_3_1; bool x_1_3_2; bool x_1_3_3; bool x_1_3_4; bool x_1_3_5; bool x_1_3_6; bool x_1_3_7; bool x_1_3_8; bool x_1_3_9; } x_2_2_1; bool x_2_2_2; struct optional<bool> { union { BOOL x_1_4_1; bool x_1_4_2; } x_3_3_1; bool x_3_3_2; } x_2_2_3; unsigned char x_2_2_4; bool x_2_2_5; bool x_2_2_6; bool x_2_2_7; bool x_2_2_8; bool x_2_2_9; bool x_2_2_10; bool x_2_2_11; bool x_2_2_12; bool x_2_2_13; bool x_2_2_14; bool x_2_2_15; bool x_2_2_16; bool x_2_2_17; unsigned long long x_2_2_18; bool x_2_2_19; bool x_2_2_20; bool x_2_2_21; bool x_2_2_22; bool x_2_2_23; bool x_2_2_24; struct FloatPoint { float x_25_3_1; float x_25_3_2; } x_2_2_25; struct URL { struct String { struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { struct StringImpl {} *x_1_5_1; } x_1_4_1; } x_26_3_1; unsigned int x_26_3_2 : 1; unsigned int x_26_3_3 : 1; unsigned int x_26_3_4 : 1; unsigned int x_26_3_5 : 3; unsigned int x_26_3_6 : 26; unsigned int x_26_3_7; unsigned int x_26_3_8; unsigned int x_26_3_9; unsigned int x_26_3_10; unsigned int x_26_3_11; unsigned int x_26_3_12; unsigned int x_26_3_13; } x_2_2_26; } x_1_1_2; } x1; })positionInformationForActionSheetAssistant:(id)arg1;
- (void)scrollRangeToVisible:(id)arg1 inDocument:(id)arg2;
- (id)selectedTextRange;
- (void)shareSheetDidDismiss:(id)arg1;
- (bool)supportsTextReplacement;
- (void)updateBackgroundColor;
- (void)web_beginAnimatedResizeWithUpdates:(id /* block */)arg1;
- (void)web_computedContentInsetDidChange;
- (id)web_contentView;
- (void)web_countStringMatches:(id)arg1 options:(unsigned long long)arg2 maxCount:(unsigned long long)arg3;
- (id)web_dataRepresentation;
- (void)web_didSameDocumentNavigation:(unsigned int)arg1;
- (void)web_findString:(id)arg1 options:(unsigned long long)arg2 maxCount:(unsigned long long)arg3;
- (bool)web_handleKeyEvent:(id)arg1;
- (void)web_hideFindUI;
- (id)web_initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 webView:(id)arg2 mimeType:(id)arg3;
- (bool)web_isBackground;
- (void)web_scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (void)web_scrollViewDidScroll:(id)arg1;
- (void)web_scrollViewDidZoom:(id)arg1;
- (void)web_scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (void)web_setContentProviderData:(id)arg1 suggestedFilename:(id)arg2;
- (void)web_setFixedOverlayView:(id)arg1;
- (void)web_setMinimumSize:(struct CGSize { double x1; double x2; })arg1;
- (void)web_setOverlaidAccessoryViewsInset:(struct CGSize { double x1; double x2; })arg1;
- (void)web_snapshotRectInContentViewCoordinates:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 snapshotWidth:(double)arg2 completionHandler:(id /* block */)arg3;
- (id)web_suggestedFilename;

@end
