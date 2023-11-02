
@interface WKActionSheetAssistant : NSObject <DDDetectionControllerInteractionDelegate, UIContextMenuInteractionDelegate, WKActionSheetDelegate> {
    struct RetainPtr<UIContextMenuInteraction> { 
        void *m_ptr; 
    }  _dataDetectorContextMenuInteraction;
    struct WeakObjCPtr<id<WKActionSheetAssistantDelegate>> { 
        id m_weakReference; 
    }  _delegate;
    struct RetainPtr<_WKActivatedElementInfo> { 
        void *m_ptr; 
    }  _elementInfo;
    bool  _hasPendingActionSheet;
    struct RetainPtr<WKActionSheet> { 
        void *m_ptr; 
    }  _interactionSheet;
    bool  _isPresentingDDUserInterface;
    struct RetainPtr<UIMenu> { 
        void *m_ptr; 
    }  _mediaControlsContextMenu;
    struct CompletionHandler<void (unsigned long long)>="m_function"{Function<void (unsigned long long)>="m_callableWrapper"{unique_ptr<WTF::Detail::CallableWrapperBase<void, unsigned long long>, std::default_delete<WTF::Detail::CallableWrapperBase<void, unsigned long long>>>="__ptr_"{__compressed_pair<WTF::Detail::CallableWrapperBase<void, unsigned long long> *, std::default_delete<WTF::Detail::CallableWrapperBase<void, unsigned long long>>>="__value_"^v {}  _mediaControlsContextMenuCallback;
    struct RetainPtr<UIContextMenuInteraction> { 
        void *m_ptr; 
    }  _mediaControlsContextMenuInteraction;
    struct FloatRect { 
        struct FloatPoint { 
            float m_x; 
            float m_y; 
        } m_location; 
        struct FloatSize { 
            float m_width; 
            float m_height; 
        } m_size; 
    }  _mediaControlsContextMenuTargetFrame;
    bool  _needsLinkIndicator;
    struct optional<WebKit::InteractionInformationAtPosition> { 
        union { 
            BOOL __null_state_; 
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
            } __val_; 
        } ; 
        bool __engaged_; 
    }  _positionInformation;
    struct WeakObjCPtr<UIView> { 
        id m_weakReference; 
    }  _view;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WKActionSheetAssistantDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool needsLinkIndicator;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_appendAnimationAction:(id)arg1 elementInfo:(id)arg2;
- (bool)_appendAppLinkOpenActionsForURL:(id)arg1 actions:(id)arg2 elementInfo:(id)arg3;
- (void)_appendOpenActionsForURL:(id)arg1 actions:(id)arg2 elementInfo:(id)arg3;
- (id)_contentsOfContextMenuItem:(id)arg1;
- (id)_contextMenuInteraction:(id)arg1 overrideSuggestedActionsForConfiguration:(id)arg2;
- (id)_contextMenuInteraction:(id)arg1 styleForMenuWithConfiguration:(id)arg2;
- (void)_createSheetWithElementActions:(id)arg1 defaultTitle:(id)arg2 showLinkTitle:(bool)arg3;
- (id)_elementActionForDDAction:(id)arg1;
- (id)_ensureDataDetectorContextMenuInteraction;
- (id)_ensureMediaControlsContextMenuInteraction;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_presentationRectForSheetGivenPoint:(struct CGPoint { double x1; double x2; })arg1 inHostView:(id)arg2;
- (long long)_presentationStyleForPositionInfo:(const void*)arg1 elementInfo:(id)arg2;
- (void)_removeDataDetectorContextMenuInteraction;
- (void)_removeMediaControlsContextMenuInteraction;
- (id)_uiMenuElementsForMediaControlContextMenuItems:(void*)arg1;
- (void)cleanupSheet;
- (id)contextMenuInteraction:(id)arg1 configuration:(id)arg2 highlightPreviewForItemWithIdentifier:(id)arg3;
- (id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(struct CGPoint { double x1; double x2; })arg2;
- (void)contextMenuInteraction:(id)arg1 willDisplayMenuForConfiguration:(id)arg2 animator:(id)arg3;
- (void)contextMenuInteraction:(id)arg1 willEndForConfiguration:(id)arg2 animator:(id)arg3;
- (struct optional<WebKit::InteractionInformationAtPosition> { union { BOOL x_1_1_1; struct InteractionInformationAtPosition { struct InteractionInformationRequest { struct IntPoint { int x_1_4_1; int x_1_4_2; } x_1_3_1; bool x_1_3_2; bool x_1_3_3; bool x_1_3_4; bool x_1_3_5; bool x_1_3_6; bool x_1_3_7; bool x_1_3_8; bool x_1_3_9; } x_2_2_1; bool x_2_2_2; struct optional<bool> { union { BOOL x_1_4_1; bool x_1_4_2; } x_3_3_1; bool x_3_3_2; } x_2_2_3; unsigned char x_2_2_4; bool x_2_2_5; bool x_2_2_6; bool x_2_2_7; bool x_2_2_8; bool x_2_2_9; bool x_2_2_10; bool x_2_2_11; bool x_2_2_12; bool x_2_2_13; bool x_2_2_14; bool x_2_2_15; bool x_2_2_16; bool x_2_2_17; unsigned long long x_2_2_18; bool x_2_2_19; bool x_2_2_20; bool x_2_2_21; bool x_2_2_22; bool x_2_2_23; bool x_2_2_24; struct FloatPoint { float x_25_3_1; float x_25_3_2; } x_2_2_25; struct URL { struct String { struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { struct StringImpl {} *x_1_5_1; } x_1_4_1; } x_26_3_1; unsigned int x_26_3_2 : 1; unsigned int x_26_3_3 : 1; unsigned int x_26_3_4 : 1; unsigned int x_26_3_5 : 3; unsigned int x_26_3_6 : 26; unsigned int x_26_3_7; unsigned int x_26_3_8; unsigned int x_26_3_9; unsigned int x_26_3_10; unsigned int x_26_3_11; unsigned int x_26_3_12; unsigned int x_26_3_13; } x_2_2_26; } x_1_1_2; } x1; })currentPositionInformation;
- (id)currentlyAvailableActionTitles;
- (id)currentlyAvailableMediaControlsContextMenuItems;
- (void)dealloc;
- (struct RetainPtr<NSArray<_WKElementAction *>> { void *x1; })defaultActionsForImageSheet:(id)arg1;
- (struct RetainPtr<NSArray<_WKElementAction *>> { void *x1; })defaultActionsForLinkSheet:(id)arg1;
- (id)delegate;
- (void)handleElementActionWithType:(long long)arg1 element:(id)arg2 needsInteraction:(bool)arg3;
- (bool)hasContextMenuInteraction;
- (id)hostViewForSheet;
- (id)initWithView:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })initialPresentationRectInHostViewForSheet;
- (void)interactionDidStartWithPositionInformation:(const void*)arg1;
- (bool)isShowingSheet;
- (bool)needsLinkIndicator;
- (bool)presentSheet;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })presentationRectForElementUsingClosestIndicatedRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })presentationRectForIndicatedElement;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })presentationRectInHostViewForSheet;
- (void)setDelegate:(id)arg1;
- (void)setNeedsLinkIndicator:(bool)arg1;
- (void)showDataDetectorsUIForPositionInformation:(const void*)arg1;
- (void)showImageSheet;
- (void)showLinkSheet;
- (void)showMediaControlsContextMenu:(struct FloatRect { struct FloatPoint { float x_1_1_1; float x_1_1_2; } x1; struct FloatSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg1 items:(void*)arg2 completionHandler:(void*)arg3;
- (id)suggestedActionsForContextMenuWithPositionInformation:(const void*)arg1;
- (id)superviewForSheet;
- (bool)synchronouslyRetrievePositionInformation;
- (void)updatePositionInformation;
- (void)updateSheetPosition;

@end
