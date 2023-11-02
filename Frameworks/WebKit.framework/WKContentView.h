
@interface WKContentView : WKApplicationStateTrackingView <UIContextMenuInteractionDelegate, UIDragInteractionDelegate, UIDropInteractionDelegate, UIGestureRecognizerDelegate, UIPreviewItemDelegate, UITextAutoscrolling, UITextInputMultiDocument, UITextInputPrivate, UITextSearching, UIWKInteractionViewProtocol, UIWebFormAccessoryDelegate, UIWebTouchEventsGestureRecognizerDelegate, WKActionSheetAssistantDelegate, WKContactPickerDelegate, WKDeferringGestureRecognizerDelegate, WKFileUploadPanelDelegate, WKKeyboardScrollViewAnimatorDelegate, WKShareSheetDelegate, WKTouchActionGestureRecognizerDelegate, _UITextInputTranslationSupport, _WKWebViewPrintProvider> {
    struct RetainPtr<WKActionSheetAssistant> { 
        void *m_ptr; 
    }  _actionSheetAssistant;
    struct BlockPtr<void ()>="m_block"@? {}  _actionToPerformAfterReceivingEditDragSnapshot;
    struct Vector<WTF::BlockPtr<void ()>, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc>="m_buffer"^v"m_capacity"I"m_size"I {}  _actionsToPerformAfterEditorStateUpdate;
    struct Vector<WTF::BlockPtr<void (WebKit::ProceedWithTextSelectionInImage)>, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc>="m_buffer"^v"m_capacity"I"m_size"I {}  _actionsToPerformAfterPendingImageAnalysis;
    unsigned long long  _activeTextInteractionCount;
    struct RetainPtr<NSDictionary> { 
        void *m_ptr; 
    }  _additionalContextForStrongPasswordAssistance;
    struct RetainPtr<WKAirPlayRoutePicker> { 
        void *m_ptr; 
    }  _airPlayRoutePicker;
    bool  _autocorrectionContextNeedsUpdate;
    struct WKAutoCorrectionData { 
        struct RetainPtr<UIFont> { 
            void *m_ptr; 
        } font; 
        struct CGRect { 
            struct CGPoint { 
                double x; 
                double y; 
            } origin; 
            struct CGSize { 
                double width; 
                double height; 
            } size; 
        } textFirstRect; 
        struct CGRect { 
            struct CGPoint { 
                double x; 
                double y; 
            } origin; 
            struct CGSize { 
                double width; 
                double height; 
            } size; 
        } textLastRect; 
    }  _autocorrectionData;
    bool  _becomingFirstResponder;
    struct RetainPtr<WKBrowsingContextController> { 
        void *m_ptr; 
    }  _browsingContextController;
    struct RetainPtr<WKTextRange> { 
        void *m_ptr; 
    }  _cachedSelectedTextRange;
    bool  _candidateViewNeedsUpdate;
    unsigned int  _commitPotentialTapPointerId;
    struct RetainPtr<WKContactPicker> { 
        void *m_ptr; 
    }  _contactPicker;
    bool  _contextMenuActionProviderDelegateNeedsOverride;
    struct RetainPtr<WKContextMenuElementInfo> { 
        void *m_ptr; 
    }  _contextMenuElementInfo;
    bool  _contextMenuHasRequestedLegacyData;
    struct RetainPtr<WKTargetedPreviewContainer> { 
        void *m_ptr; 
    }  _contextMenuHintContainerView;
    struct RetainPtr<UIContextMenuInteraction> { 
        void *m_ptr; 
    }  _contextMenuInteraction;
    struct RetainPtr<UITargetedPreview> { 
        void *m_ptr; 
    }  _contextMenuInteractionTargetedPreview;
    bool  _contextMenuIsUsingAlternateURLForImage;
    struct RetainPtr<UIMenu> { 
        void *m_ptr; 
    }  _contextMenuLegacyMenu;
    struct RetainPtr<UIViewController> { 
        void *m_ptr; 
    }  _contextMenuLegacyPreviewController;
    bool  _contextMenuWasTriggeredByImageAnalysisTimeout;
    struct WeakObjCPtr<WKDataListSuggestionsControl> { 
        id m_weakReference; 
    }  _dataListSuggestionsControl;
    struct RetainPtr<NSArray<UITextSuggestion *>> { 
        void *m_ptr; 
    }  _dataListTextSuggestions;
    struct RetainPtr<UIView<WKFormControl>> { 
        void *m_ptr; 
    }  _dataListTextSuggestionsInputView;
    struct optional<std::pair<WebKit::InteractionInformationRequest, WTF::BlockPtr<void (UIPointerRegion *)>>>=""(?="__null_state_"c"__val_"{pair<WebKit::InteractionInformationRequest, WTF::BlockPtr<void (UIPointerRegion *)>>="first"{InteractionInformationRequest="point"{IntPoint="m_x"i"m_y"i {}  _deferredPointerInteractionRequest;
    bool  _didAccessoryTabInitiateFocus;
    struct optional<WebCore::DOMPasteAccessCategory> { 
        union { 
            BOOL __null_state_; 
            unsigned char __val_; 
        } ; 
        bool __engaged_; 
    }  _domPasteRequestCategory;
    struct CompletionHandler<void (WebCore::DOMPasteAccessResponse)>="m_function"{Function<void (WebCore::DOMPasteAccessResponse)>="m_callableWrapper"{unique_ptr<WTF::Detail::CallableWrapperBase<void, WebCore::DOMPasteAccessResponse>, std::default_delete<WTF::Detail::CallableWrapperBase<void, WebCore::DOMPasteAccessResponse>>>="__ptr_"{__compressed_pair<WTF::Detail::CallableWrapperBase<void, WebCore::DOMPasteAccessResponse> *, std::default_delete<WTF::Detail::CallableWrapperBase<void, WebCore::DOMPasteAccessResponse>>>="__value_"^v {}  _domPasteRequestHandler;
    struct RetainPtr<WKSyntheticTapGestureRecognizer> { 
        void *m_ptr; 
    }  _doubleTapGestureRecognizer;
    struct RetainPtr<UITapGestureRecognizer> { 
        void *m_ptr; 
    }  _doubleTapGestureRecognizerForDoubleClick;
    struct DragDropInteractionState { 
        struct CGPoint { 
            double x; 
            double y; 
        } m_lastGlobalPosition; 
        struct CGPoint { 
            double x; 
            double y; 
        } m_adjustedPositionForDragEnd; 
        bool m_didBeginDragging; 
        bool m_isPerformingDrop; 
        struct RetainPtr<id<UIDragSession>> { 
            void *m_ptr; 
        } m_dragSession; 
        struct RetainPtr<id<UIDropSession>> { 
            void *m_ptr; 
        } m_dropSession; 
        struct BlockPtr<void ()>="m_block"@? {} m_dragStartCompletionBlock; 
        struct BlockPtr<void ()>="m_block"@? {} m_dragCancelSetDownBlock; 
        struct BlockPtr<void (NSArray<UIDragItem *> *)>="m_block"@? {} m_addDragItemCompletionBlock; 
        struct optional<WebKit::DragSourceState> { 
            union { 
                BOOL __null_state_; 
                struct DragSourceState { 
                    struct OptionSet<WebCore::DragSourceAction> { 
                        unsigned char m_storage; 
                    } action; 
                    struct CGPoint { 
                        double x; 
                        double y; 
                    } adjustedOrigin; 
                    struct CGRect { 
                        struct CGPoint { 
                            double x; 
                            double y; 
                        } origin; 
                        struct CGSize { 
                            double width; 
                            double height; 
                        } size; 
                    } dragPreviewFrameInRootViewCoordinates; 
                    struct RetainPtr<UIImage> { 
                        void *m_ptr; 
                    } image; 
                    struct optional<WebCore::TextIndicatorData> { 
                        union { 
                            BOOL __null_state_; 
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
                            } __val_; 
                        } ; 
                        bool __engaged_; 
                    } indicatorData; 
                    struct optional<WebCore::Path> { 
                        union { 
                            BOOL __null_state_; 
                            struct Path { 
                                struct variant<std::monostate, WebCore::PathSegment, WTF::UniqueRef<WebCore::PathImpl>> { 
                                    struct __impl<std::monostate, WebCore::PathSegment, WTF::UniqueRef<WebCore::PathImpl>> { 
                                        union __union<std::__variant_detail::_Trait::_Available, 0UL, std::monostate, WebCore::PathSegment, WTF::UniqueRef<WebCore::PathImpl>> { 
                                            BOOL __dummy; 
                                            struct __alt<0UL, std::monostate> { 
                                                struct monostate { } __value; 
                                            } __head; 
                                            union __union<std::__variant_detail::_Trait::_Available, 1UL, WebCore::PathSegment, WTF::UniqueRef<WebCore::PathImpl>> { 
                                                BOOL __dummy; 
                                                struct __alt<1UL, WebCore::PathSegment> { 
                                                    struct PathSegment { 
                                                        struct variant<WebCore::PathMoveTo, WebCore::PathLineTo, WebCore::PathQuadCurveTo, WebCore::PathBezierCurveTo, WebCore::PathArcTo, WebCore::PathArc, WebCore::PathEllipse, WebCore::PathEllipseInRect, WebCore::PathRect, WebCore::PathRoundedRect, WebCore::PathDataLine, WebCore::PathDataQuadCurve, WebCore::PathDataBezierCurve, WebCore::PathDataArc, WebCore::PathCloseSubpath> { 
                                                            struct __impl<WebCore::PathMoveTo, WebCore::PathLineTo, WebCore::PathQuadCurveTo, WebCore::PathBezierCurveTo, WebCore::PathArcTo, WebCore::PathArc, WebCore::PathEllipse, WebCore::PathEllipseInRect, WebCore::PathRect, WebCore::PathRoundedRect, WebCore::PathDataLine, WebCore::PathDataQuadCurve, WebCore::PathDataBezierCurve, WebCore::PathDataArc, WebCore::PathCloseSubpath> { 
                                                                union __union<std::__variant_detail::_Trait::_TriviallyAvailable, 0UL, WebCore::PathMoveTo, WebCore::PathLineTo, WebCore::PathQuadCurveTo, WebCore::PathBezierCurveTo, WebCore::PathArcTo, WebCore::PathArc, WebCore::PathEllipse, WebCore::PathEllipseInRect, WebCore::PathRect, WebCore::PathRoundedRect, WebCore::PathDataLine, WebCore::PathDataQuadCurve, WebCore::PathDataBezierCurve, WebCore::PathDataArc, WebCore::PathCloseSubpath> { 
                                                                    BOOL __dummy; 
                                                                    struct __alt<0UL, WebCore::PathMoveTo> { 
                                                                        struct PathMoveTo { 
                                                                            struct FloatPoint { 
                                                                                float m_x; 
                                                                                float m_y; 
                                                                            } point; 
                                                                        } __value; 
                                                                    } __head; 
                                                                    union __union<std::__variant_detail::_Trait::_TriviallyAvailable, 1UL, WebCore::PathLineTo, WebCore::PathQuadCurveTo, WebCore::PathBezierCurveTo, WebCore::PathArcTo, WebCore::PathArc, WebCore::PathEllipse, WebCore::PathEllipseInRect, WebCore::PathRect, WebCore::PathRoundedRect, WebCore::PathDataLine, WebCore::PathDataQuadCurve, WebCore::PathDataBezierCurve, WebCore::PathDataArc, WebCore::PathCloseSubpath> { 
                                                                        BOOL __dummy; 
                                                                        struct __alt<1UL, WebCore::PathLineTo> { 
                                                                            struct PathLineTo { 
                                                                                struct FloatPoint { 
                                                                                    float m_x; 
                                                                                    float m_y; 
                                                                                } point; 
                                                                            } __value; 
                                                                        } __head; 
                                                                        union __union<std::__variant_detail::_Trait::_TriviallyAvailable, 2UL, WebCore::PathQuadCurveTo, WebCore::PathBezierCurveTo, WebCore::PathArcTo, WebCore::PathArc, WebCore::PathEllipse, WebCore::PathEllipseInRect, WebCore::PathRect, WebCore::PathRoundedRect, WebCore::PathDataLine, WebCore::PathDataQuadCurve, WebCore::PathDataBezierCurve, WebCore::PathDataArc, WebCore::PathCloseSubpath> { 
                                                                            BOOL __dummy; 
                                                                            struct __alt<2UL, WebCore::PathQuadCurveTo> { 
                                                                                struct PathQuadCurveTo { 
                                                                                    struct FloatPoint { 
                                                                                        float m_x; 
                                                                                        float m_y; 
                                                                                    } controlPoint; 
                                                                                    struct FloatPoint { 
                                                                                        float m_x; 
                                                                                        float m_y; 
                                                                                    } endPoint; 
                                                                                } __value; 
                                                                            } __head; 
                                                                            union __union<std::__variant_detail::_Trait::_TriviallyAvailable, 3UL, WebCore::PathBezierCurveTo, WebCore::PathArcTo, WebCore::PathArc, WebCore::PathEllipse, WebCore::PathEllipseInRect, WebCore::PathRect, WebCore::PathRoundedRect, WebCore::PathDataLine, WebCore::PathDataQuadCurve, WebCore::PathDataBezierCurve, WebCore::PathDataArc, WebCore::PathCloseSubpath> { 
                                                                                BOOL __dummy; 
                                                                                struct __alt<3UL, WebCore::PathBezierCurveTo> { 
                                                                                    struct PathBezierCurveTo { 
                                                                                        struct FloatPoint { 
                                                                                            float m_x; 
                                                                                            float m_y; 
                                                                                        } controlPoint1; 
                                                                                        struct FloatPoint { 
                                                                                            float m_x; 
                                                                                            float m_y; 
                                                                                        } controlPoint2; 
                                                                                        struct FloatPoint { 
                                                                                            float m_x; 
                                                                                            float m_y; 
                                                                                        } endPoint; 
                                                                                    } __value; 
                                                                                } __head; 
                                                                                union __union<std::__variant_detail::_Trait::_TriviallyAvailable, 4UL, WebCore::PathArcTo, WebCore::PathArc, WebCore::PathEllipse, WebCore::PathEllipseInRect, WebCore::PathRect, WebCore::PathRoundedRect, WebCore::PathDataLine, WebCore::PathDataQuadCurve, WebCore::PathDataBezierCurve, WebCore::PathDataArc, WebCore::PathCloseSubpath> { 
                                                                                    BOOL __dummy; 
                                                                                    struct __alt<4UL, WebCore::PathArcTo> { 
                                                                                        struct PathArcTo { 
                                                                                            struct FloatPoint { 
                                                                                                float m_x; 
                                                                                                float m_y; 
                                                                                            } controlPoint1; 
                                                                                            struct FloatPoint { 
                                                                                                float m_x; 
                                                                                                float m_y; 
                                                                                            } controlPoint2; 
                                                                                            float radius; 
                                                                                        } __value; 
                                                                                    } __head; 
                                                                                    union __union<std::__variant_detail::_Trait::_TriviallyAvailable, 5UL, WebCore::PathArc, WebCore::PathEllipse, WebCore::PathEllipseInRect, WebCore::PathRect, WebCore::PathRoundedRect, WebCore::PathDataLine, WebCore::PathDataQuadCurve, WebCore::PathDataBezierCurve, WebCore::PathDataArc, WebCore::PathCloseSubpath> { 
                                                                                        BOOL __dummy; 
                                                                                        struct __alt<5UL, WebCore::PathArc> { 
                                                                                            struct PathArc { 
                                                                                                struct FloatPoint { 
                                                                                                    float m_x; 
                                                                                                    float m_y; 
                                                                                                } center; 
                                                                                                float radius; 
                                                                                                float startAngle; 
                                                                                                float endAngle; 
                                                                                                bool direction; 
                                                                                            } __value; 
                                                                                        } __head; 
                                                                                        union __union<std::__variant_detail::_Trait::_TriviallyAvailable, 6UL, WebCore::PathEllipse, WebCore::PathEllipseInRect, WebCore::PathRect, WebCore::PathRoundedRect, WebCore::PathDataLine, WebCore::PathDataQuadCurve, WebCore::PathDataBezierCurve, WebCore::PathDataArc, WebCore::PathCloseSubpath> { 
                                                                                            BOOL __dummy; 
                                                                                            struct __alt<6UL, WebCore::PathEllipse> { 
                                                                                                struct PathEllipse { 
                                                                                                    struct FloatPoint { 
                                                                                                        float m_x; 
                                                                                                        float m_y; 
                                                                                                    } center; 
                                                                                                    float radiusX; 
                                                                                                    float radiusY; 
                                                                                                    float rotation; 
                                                                                                    float startAngle; 
                                                                                                    float endAngle; 
                                                                                                    bool direction; 
                                                                                                } __value; 
                                                                                            } __head; 
                                                                                            union __union<std::__variant_detail::_Trait::_TriviallyAvailable, 7UL, WebCore::PathEllipseInRect, WebCore::PathRect, WebCore::PathRoundedRect, WebCore::PathDataLine, WebCore::PathDataQuadCurve, WebCore::PathDataBezierCurve, WebCore::PathDataArc, WebCore::PathCloseSubpath> { 
                                                                                                BOOL __dummy; 
                                                                                                struct __alt<7UL, WebCore::PathEllipseInRect> { 
                                                                                                    struct PathEllipseInRect { 
                                                                                                        struct FloatRect { 
                                                                                                            struct FloatPoint { 
                                                                                                                float m_x; 
                                                                                                                float m_y; 
                                                                                                            } m_location; 
                                                                                                            struct FloatSize { 
                                                                                                                float m_width; 
                                                                                                                float m_height; 
                                                                                                            } m_size; 
                                                                                                        } rect; 
                                                                                                    } __value; 
                                                                                                } __head; 
                                                                                                union __union<std::__variant_detail::_Trait::_TriviallyAvailable, 8UL, WebCore::PathRect, WebCore::PathRoundedRect, WebCore::PathDataLine, WebCore::PathDataQuadCurve, WebCore::PathDataBezierCurve, WebCore::PathDataArc, WebCore::PathCloseSubpath> { 
                                                                                                    BOOL __dummy; 
                                                                                                    struct __alt<8UL, WebCore::PathRect> { 
                                                                                                        struct PathRect { 
                                                                                                            struct FloatRect { 
                                                                                                                struct FloatPoint { 
                                                                                                                    float m_x; 
                                                                                                                    float m_y; 
                                                                                                                } m_location; 
                                                                                                                struct FloatSize { 
                                                                                                                    float m_width; 
                                                                                                                    float m_height; 
                                                                                                                } m_size; 
                                                                                                            } rect; 
                                                                                                        } __value; 
                                                                                                    } __head; 
                                                                                                    union __union<std::__variant_detail::_Trait::_TriviallyAvailable, 9UL, WebCore::PathRoundedRect, WebCore::PathDataLine, WebCore::PathDataQuadCurve, WebCore::PathDataBezierCurve, WebCore::PathDataArc, WebCore::PathCloseSubpath> { 
                                                                                                        BOOL __dummy; 
                                                                                                        struct __alt<9UL, WebCore::PathRoundedRect> { 
                                                                                                            struct PathRoundedRect { 
                                                                                                                struct FloatRoundedRect { 
                                                                                                                    struct FloatRect { 
                                                                                                                        struct FloatPoint { 
                                                                                                                            float m_x; 
                                                                                                                            float m_y; 
                                                                                                                        } m_location; 
                                                                                                                        struct FloatSize { 
                                                                                                                            float m_width; 
                                                                                                                            float m_height; 
                                                                                                                        } m_size; 
                                                                                                                    } m_rect; 
                                                                                                                    struct Radii { 
                                                                                                                        struct FloatSize { 
                                                                                                                            float m_width; 
                                                                                                                            float m_height; 
                                                                                                                        } m_topLeft; 
                                                                                                                        struct FloatSize { 
                                                                                                                            float m_width; 
                                                                                                                            float m_height; 
                                                                                                                        } m_topRight; 
                                                                                                                        struct FloatSize { 
                                                                                                                            float m_width; 
                                                                                                                            float m_height; 
                                                                                                                        } m_bottomLeft; 
                                                                                                                        struct FloatSize { 
                                                                                                                            float m_width; 
                                                                                                                            float m_height; 
                                                                                                                        } m_bottomRight; 
                                                                                                                    } m_radii; 
                                                                                                                } roundedRect; 
                                                                                                                unsigned char strategy; 
                                                                                                            } __value; 
                                                                                                        } __head; 
                                                                                                        union __union<std::__variant_detail::_Trait::_TriviallyAvailable, 10UL, WebCore::PathDataLine, WebCore::PathDataQuadCurve, WebCore::PathDataBezierCurve, WebCore::PathDataArc, WebCore::PathCloseSubpath> { 
                                                                                                            BOOL __dummy; 
                                                                                                            struct __alt<10UL, WebCore::PathDataLine> { 
                                                                                                                struct PathDataLine { 
                                                                                                                    struct FloatPoint { 
                                                                                                                        float m_x; 
                                                                                                                        float m_y; 
                                                                                                                    } start; 
                                                                                                                    struct FloatPoint { 
                                                                                                                        float m_x; 
                                                                                                                        float m_y; 
                                                                                                                    } end; 
                                                                                                                } __value; 
                                                                                                            } __head; 
                                                                                                            union __union<std::__variant_detail::_Trait::_TriviallyAvailable, 11UL, WebCore::PathDataQuadCurve, WebCore::PathDataBezierCurve, WebCore::PathDataArc, WebCore::PathCloseSubpath> { 
                                                                                                                BOOL __dummy; 
                                                                                                                struct __alt<11UL, WebCore::PathDataQuadCurve> { 
                                                                                                                    struct PathDataQuadCurve { 
                                                                                                                        struct FloatPoint { 
                                                                                                                            float m_x; 
                                                                                                                            float m_y; 
                                                                                                                        } start; 
                                                                                                                        struct FloatPoint { 
                                                                                                                            float m_x; 
                                                                                                                            float m_y; 
                                                                                                                        } controlPoint; 
                                                                                                                        struct FloatPoint { 
                                                                                                                            float m_x; 
                                                                                                                            float m_y; 
                                                                                                                        } endPoint; 
                                                                                                                    } __value; 
                                                                                                                } __head; 
                                                                                                                union __union<std::__variant_detail::_Trait::_TriviallyAvailable, 12UL, WebCore::PathDataBezierCurve, WebCore::PathDataArc, WebCore::PathCloseSubpath> { 
                                                                                                                    BOOL __dummy; 
                                                                                                                    struct __alt<12UL, WebCore::PathDataBezierCurve> { 
                                                                                                                        struct PathDataBezierCurve { 
                                                                                                                            struct FloatPoint { 
                                                                                                                                float m_x; 
                                                                                                                                float m_y; 
                                                                                                                            } start; 
                                                                                                                            struct FloatPoint { 
                                                                                                                                float m_x; 
                                                                                                                                float m_y; 
                                                                                                                            } controlPoint1; 
                                                                                                                            struct FloatPoint { 
                                                                                                                                float m_x; 
                                                                                                                                float m_y; 
                                                                                                                            } controlPoint2; 
                                                                                                                            struct FloatPoint { 
                                                                                                                                float m_x; 
                                                                                                                                float m_y; 
                                                                                                                            } endPoint; 
                                                                                                                        } __value; 
                                                                                                                    } __head; 
                                                                                                                    union __union<std::__variant_detail::_Trait::_TriviallyAvailable, 13UL, WebCore::PathDataArc, WebCore::PathCloseSubpath> { 
                                                                                                                        BOOL __dummy; 
                                                                                                                        struct __alt<13UL, WebCore::PathDataArc> { 
                                                                                                                            struct PathDataArc { 
                                                                                                                                struct FloatPoint { 
                                                                                                                                    float m_x; 
                                                                                                                                    float m_y; 
                                                                                                                                } start; 
                                                                                                                                struct FloatPoint { 
                                                                                                                                    float m_x; 
                                                                                                                                    float m_y; 
                                                                                                                                } controlPoint1; 
                                                                                                                                struct FloatPoint { 
                                                                                                                                    float m_x; 
                                                                                                                                    float m_y; 
                                                                                                                                } controlPoint2; 
                                                                                                                                float radius; 
                                                                                                                            } __value; 
                                                                                                                        } __head; 
                                                                                                                        union __union<std::__variant_detail::_Trait::_TriviallyAvailable, 14UL, WebCore::PathCloseSubpath> { 
                                                                                                                            BOOL __dummy; 
                                                                                                                            struct __alt<14UL, WebCore::PathCloseSubpath> { 
                                                                                                                                struct PathCloseSubpath { } __value; 
                                                                                                                            } __head; 
                                                                                                                            union __union<std::__variant_detail::_Trait::_TriviallyAvailable, 15UL> { } __tail; 
                                                                                                                        } __tail; 
                                                                                                                    } __tail; 
                                                                                                                } __tail; 
                                                                                                            } __tail; 
                                                                                                        } __tail; 
                                                                                                    } __tail; 
                                                                                                } __tail; 
                                                                                            } __tail; 
                                                                                        } __tail; 
                                                                                    } __tail; 
                                                                                } __tail; 
                                                                            } __tail; 
                                                                        } __tail; 
                                                                    } __tail; 
                                                                } __data; 
                                                                unsigned int __index; 
                                                            } __impl_; 
                                                        } m_data; 
                                                    } __value; 
                                                } __head; 
                                                union __union<std::__variant_detail::_Trait::_Available, 2UL, WTF::UniqueRef<WebCore::PathImpl>> { 
                                                    BOOL __dummy; 
                                                    struct __alt<2UL, WTF::UniqueRef<WebCore::PathImpl>> { 
                                                        struct UniqueRef<WebCore::PathImpl> { 
                                                            struct unique_ptr<WebCore::PathImpl, std::default_delete<WebCore::PathImpl>> { 
                                                                struct __compressed_pair<WebCore::PathImpl *, std::default_delete<WebCore::PathImpl>> { 
                                                                    struct PathImpl {} *__value_; 
                                                                } __ptr_; 
                                                            } m_ref; 
                                                        } __value; 
                                                    } __head; 
                                                    union __union<std::__variant_detail::_Trait::_Available, 3UL> { } __tail; 
                                                } __tail; 
                                            } __tail; 
                                        } __data; 
                                        unsigned int __index; 
                                    } __impl_; 
                                } m_data; 
                            } __val_; 
                        } ; 
                        bool __engaged_; 
                    } visiblePath; 
                    struct String { 
                        struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { 
                            struct StringImpl {} *m_ptr; 
                        } m_impl; 
                    } linkTitle; 
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
                    } linkURL; 
                    bool possiblyNeedsDragPreviewUpdate; 
                    bool containsSelection; 
                    long long itemIdentifier; 
                } __val_; 
            } ; 
            bool __engaged_; 
        } m_stagedDragSource; 
        struct Vector<WebKit::DragSourceState, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> { 
            struct DragSourceState {} *m_buffer; 
            unsigned int m_capacity; 
            unsigned int m_size; 
        } m_activeDragSources; 
        struct Vector<WebKit::ItemAndPreviewProvider, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> { 
            struct ItemAndPreviewProvider {} *m_buffer; 
            unsigned int m_capacity; 
            unsigned int m_size; 
        } m_delayedItemPreviewProviders; 
        struct Vector<WebKit::ItemAndPreview, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> { 
            struct ItemAndPreview {} *m_buffer; 
            unsigned int m_capacity; 
            unsigned int m_size; 
        } m_defaultDropPreviews; 
    }  _dragDropInteractionState;
    struct RetainPtr<UIDragInteraction> { 
        void *m_ptr; 
    }  _dragInteraction;
    struct RetainPtr<WKTargetedPreviewContainer> { 
        void *m_ptr; 
    }  _dragPreviewContainerView;
    long long  _dropAnimationCount;
    struct RetainPtr<UIDropInteraction> { 
        void *m_ptr; 
    }  _dropInteraction;
    struct RetainPtr<WKTargetedPreviewContainer> { 
        void *m_ptr; 
    }  _dropPreviewContainerView;
    struct RetainPtr<_UITextDragCaretView> { 
        void *m_ptr; 
    }  _editDropCaretView;
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
    }  _elementPendingImageAnalysis;
    struct optional<WTF::HashSet<WTF::RetainPtr<WKDeferringGestureRecognizer>>> { 
        union { 
            BOOL __null_state_; 
            struct HashSet<WTF::RetainPtr<WKDeferringGestureRecognizer>, WTF::DefaultHash<WTF::RetainPtr<WKDeferringGestureRecognizer>>, WTF::HashTraits<WTF::RetainPtr<WKDeferringGestureRecognizer>>, WTF::HashTableTraits> { 
                struct HashTable<WTF::RetainPtr<WKDeferringGestureRecognizer>, WTF::RetainPtr<WKDeferringGestureRecognizer>, WTF::IdentityExtractor, WTF::DefaultHash<WTF::RetainPtr<WKDeferringGestureRecognizer>>, WTF::HashTraits<WTF::RetainPtr<WKDeferringGestureRecognizer>>, WTF::HashTraits<WTF::RetainPtr<WKDeferringGestureRecognizer>>> { 
                    union { 
                        void *m_table; 
                        unsigned int *m_tableForLLDB; 
                    } ; 
                } m_impl; 
            } __val_; 
        } ; 
        bool __engaged_; 
    }  _failedTouchStartDeferringGestures;
    struct RetainPtr<WKFileUploadPanel> { 
        void *m_ptr; 
    }  _fileUploadPanel;
    struct RetainPtr<UIView> { 
        void *m_ptr; 
    }  _fixedClippingView;
    bool  _focusRequiresStrongPasswordAssistance;
    struct Vector<bool, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> { 
        bool *m_buffer; 
        unsigned int m_capacity; 
        unsigned int m_size; 
    }  _focusStateStack;
    struct FocusedElementInformation { 
        struct IntRect { 
            struct IntPoint { 
                int m_x; 
                int m_y; 
            } m_location; 
            struct IntSize { 
                int m_width; 
                int m_height; 
            } m_size; 
        } interactionRect; 
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
        } elementContext; 
        struct IntPoint { 
            int m_x; 
            int m_y; 
        } lastInteractionLocation; 
        double minimumScaleFactor; 
        double maximumScaleFactor; 
        double maximumScaleFactorIgnoringAlwaysScalable; 
        double nodeFontSize; 
        bool hasNextNode; 
        struct IntRect { 
            struct IntPoint { 
                int m_x; 
                int m_y; 
            } m_location; 
            struct IntSize { 
                int m_width; 
                int m_height; 
            } m_size; 
        } nextNodeRect; 
        bool hasPreviousNode; 
        struct IntRect { 
            struct IntPoint { 
                int m_x; 
                int m_y; 
            } m_location; 
            struct IntSize { 
                int m_width; 
                int m_height; 
            } m_size; 
        } previousNodeRect; 
        bool isAutocorrect; 
        bool isRTL; 
        bool isMultiSelect; 
        bool isReadOnly; 
        bool allowsUserScaling; 
        bool allowsUserScalingIgnoringAlwaysScalable; 
        bool insideFixedPosition; 
        unsigned char autocapitalizeType; 
        int elementType; 
        unsigned char inputMode; 
        unsigned char enterKeyHint; 
        struct String { 
            struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { 
                struct StringImpl {} *m_ptr; 
            } m_impl; 
        } formAction; 
        struct Vector<WebKit::OptionItem, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> { 
            struct OptionItem {} *m_buffer; 
            unsigned int m_capacity; 
            unsigned int m_size; 
        } selectOptions; 
        int selectedIndex; 
        struct String { 
            struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { 
                struct StringImpl {} *m_ptr; 
            } m_impl; 
        } value; 
        double valueAsNumber; 
        struct String { 
            struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { 
                struct StringImpl {} *m_ptr; 
            } m_impl; 
        } title; 
        bool acceptsAutofilledLoginCredentials; 
        bool isAutofillableUsernameField; 
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
        } representingPageURL; 
        int autofillFieldName; 
        int nonAutofillCredentialType; 
        struct String { 
            struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { 
                struct StringImpl {} *m_ptr; 
            } m_impl; 
        } placeholder; 
        struct String { 
            struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { 
                struct StringImpl {} *m_ptr; 
            } m_impl; 
        } label; 
        struct String { 
            struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { 
                struct StringImpl {} *m_ptr; 
            } m_impl; 
        } ariaLabel; 
        bool hasSuggestions; 
        bool isFocusingWithDataListDropdown; 
        struct Color { 
            unsigned long long m_colorAndFlags; 
        } colorValue; 
        struct Vector<WebCore::Color, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> { 
            struct Color {} *m_buffer; 
            unsigned int m_capacity; 
            unsigned int m_size; 
        } suggestedColors; 
        bool shouldSynthesizeKeyEventsForEditing; 
        bool isSpellCheckingEnabled; 
        bool shouldAvoidResizingWhenInputViewBoundsChange; 
        bool shouldAvoidScrollingWhenFocusedContentIsVisible; 
        bool shouldUseLegacySelectPopoverDismissalBehaviorInDataActivation; 
        bool isFocusingWithValidationMessage; 
        bool preventScroll; 
        struct MonotonicObjectIdentifier<WebKit::FocusedElementInformationIdentifierType> { 
            unsigned long long m_identifier; 
        } identifier; 
        unsigned long long containerScrollingNodeID; 
        struct ProcessQualified<WTF::ObjectIdentifierGeneric<WebCore::FrameIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits>> { 
            struct ObjectIdentifierGeneric<WebCore::FrameIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits> { 
                unsigned long long m_identifier; 
            } m_object; 
            struct ObjectIdentifierGeneric<WebCore::ProcessIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits> { 
                unsigned long long m_identifier; 
            } m_processIdentifier; 
        } frameID; 
    }  _focusedElementInformation;
    struct RetainPtr<UIWebFormAccessory> { 
        void *m_ptr; 
    }  _formAccessoryView;
    struct RetainPtr<WKFormInputSession> { 
        void *m_ptr; 
    }  _formInputSession;
    struct FrameInfoData { 
        bool isMainFrame; 
        bool frameType; 
        struct ResourceRequest { 
            struct RequestData { 
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
                } m_url; 
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
                } m_firstPartyForCookies; 
                double m_timeoutInterval; 
                struct String { 
                    struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { 
                        struct StringImpl {} *m_ptr; 
                    } m_impl; 
                } m_httpMethod; 
                struct HTTPHeaderMap { 
                    struct Vector<WebCore::HTTPHeaderMap::CommonHeader, 0UL, WTF::CrashOnOverflow, 6UL, WTF::FastMalloc> { 
                        struct CommonHeader {} *m_buffer; 
                        unsigned int m_capacity; 
                        unsigned int m_size; 
                    } m_commonHeaders; 
                    struct Vector<WebCore::HTTPHeaderMap::UncommonHeader, 0UL, WTF::CrashOnOverflow, 0UL, WTF::FastMalloc> { 
                        struct UncommonHeader {} *m_buffer; 
                        unsigned int m_capacity; 
                        unsigned int m_size; 
                    } m_uncommonHeaders; 
                } m_httpHeaderFields; 
                struct Vector<WTF::String, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> { 
                    struct String {} *m_buffer; 
                    unsigned int m_capacity; 
                    unsigned int m_size; 
                } m_responseContentDispositionEncodingFallbackArray; 
                unsigned char m_cachePolicy; 
                unsigned char m_sameSiteDisposition; 
                unsigned char m_priority; 
                unsigned char m_requester; 
                unsigned int m_isTopSite : 1; 
                unsigned int m_allowCookies : 1; 
                unsigned int m_isAppInitiated : 1; 
                unsigned int m_privacyProxyFailClosedForUnreachableNonMainHosts : 1; 
                unsigned int m_useAdvancedPrivacyProtections : 1; 
            } m_requestData; 
            struct String { 
                struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { 
                    struct StringImpl {} *m_ptr; 
                } m_impl; 
            } m_initiatorIdentifier; 
            struct String { 
                struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { 
                    struct StringImpl {} *m_ptr; 
                } m_impl; 
            } m_cachePartition; 
            struct RefPtr<WebCore::FormData, WTF::RawPtrTraits<WebCore::FormData>, WTF::DefaultRefDerefTraits<WebCore::FormData>> { 
                struct FormData {} *m_ptr; 
            } m_httpBody; 
            struct optional<int> { 
                union { 
                    BOOL __null_state_; 
                    int __val_; 
                } ; 
                bool __engaged_; 
            } m_inspectorInitiatorNodeIdentifier; 
            unsigned int m_resourceRequestUpdated : 1; 
            unsigned int m_platformRequestUpdated : 1; 
            unsigned int m_resourceRequestBodyUpdated : 1; 
            unsigned int m_platformRequestBodyUpdated : 1; 
            unsigned int m_hiddenFromInspector : 1; 
            struct RetainPtr<NSURLRequest> { 
                void *m_ptr; 
            } m_nsRequest; 
        } request; 
        struct SecurityOriginData { 
            struct variant<WebCore::SecurityOriginData::Tuple, WebCore::ProcessQualified<WTF::ObjectIdentifierGeneric<WebCore::OpaqueOriginIdentifierType, WTF::ObjectIdentifierThreadSafeAccessTraits>>> { 
                struct __impl<WebCore::SecurityOriginData::Tuple, WebCore::ProcessQualified<WTF::ObjectIdentifierGeneric<WebCore::OpaqueOriginIdentifierType, WTF::ObjectIdentifierThreadSafeAccessTraits>>> { 
                    union __union<std::__variant_detail::_Trait::_Available, 0UL, WebCore::SecurityOriginData::Tuple, WebCore::ProcessQualified<WTF::ObjectIdentifierGeneric<WebCore::OpaqueOriginIdentifierType, WTF::ObjectIdentifierThreadSafeAccessTraits>>> { 
                        BOOL __dummy; 
                        struct __alt<0UL, WebCore::SecurityOriginData::Tuple> { 
                            struct Tuple { 
                                struct String { 
                                    struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { 
                                        struct StringImpl {} *m_ptr; 
                                    } m_impl; 
                                } protocol; 
                                struct String { 
                                    struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { 
                                        struct StringImpl {} *m_ptr; 
                                    } m_impl; 
                                } host; 
                                struct optional<unsigned short> { 
                                    union { 
                                        BOOL __null_state_; 
                                        unsigned short __val_; 
                                    } ; 
                                    bool __engaged_; 
                                } port; 
                            } __value; 
                        } __head; 
                        union __union<std::__variant_detail::_Trait::_Available, 1UL, WebCore::ProcessQualified<WTF::ObjectIdentifierGeneric<WebCore::OpaqueOriginIdentifierType, WTF::ObjectIdentifierThreadSafeAccessTraits>>> { 
                            BOOL __dummy; 
                            struct __alt<1UL, WebCore::ProcessQualified<WTF::ObjectIdentifierGeneric<WebCore::OpaqueOriginIdentifierType, WTF::ObjectIdentifierThreadSafeAccessTraits>>> { 
                                struct ProcessQualified<WTF::ObjectIdentifierGeneric<WebCore::OpaqueOriginIdentifierType, WTF::ObjectIdentifierThreadSafeAccessTraits>> { 
                                    struct ObjectIdentifierGeneric<WebCore::OpaqueOriginIdentifierType, WTF::ObjectIdentifierThreadSafeAccessTraits> { 
                                        unsigned long long m_identifier; 
                                    } m_object; 
                                    struct ObjectIdentifierGeneric<WebCore::ProcessIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits> { 
                                        unsigned long long m_identifier; 
                                    } m_processIdentifier; 
                                } __value; 
                            } __head; 
                            union __union<std::__variant_detail::_Trait::_Available, 2UL> { } __tail; 
                        } __tail; 
                    } __data; 
                    unsigned int __index; 
                } __impl_; 
            } m_data; 
        } securityOrigin; 
        struct String { 
            struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { 
                struct StringImpl {} *m_ptr; 
            } m_impl; 
        } frameName; 
        struct optional<WebCore::ProcessQualified<WTF::ObjectIdentifierGeneric<WebCore::FrameIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits>>> { 
            union { 
                BOOL __null_state_; 
                struct ProcessQualified<WTF::ObjectIdentifierGeneric<WebCore::FrameIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits>> { 
                    struct ObjectIdentifierGeneric<WebCore::FrameIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits> { 
                        unsigned long long m_identifier; 
                    } m_object; 
                    struct ObjectIdentifierGeneric<WebCore::ProcessIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits> { 
                        unsigned long long m_identifier; 
                    } m_processIdentifier; 
                } __val_; 
            } ; 
            bool __engaged_; 
        } frameID; 
        struct optional<WebCore::ProcessQualified<WTF::ObjectIdentifierGeneric<WebCore::FrameIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits>>> { 
            union { 
                BOOL __null_state_; 
                struct ProcessQualified<WTF::ObjectIdentifierGeneric<WebCore::FrameIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits>> { 
                    struct ObjectIdentifierGeneric<WebCore::FrameIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits> { 
                        unsigned long long m_identifier; 
                    } m_object; 
                    struct ObjectIdentifierGeneric<WebCore::ProcessIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits> { 
                        unsigned long long m_identifier; 
                    } m_processIdentifier; 
                } __val_; 
            } ; 
            bool __engaged_; 
        } parentFrameID; 
        int processID; 
    }  _frameInfoForFileUploadPanel;
    unsigned int  _fullscreenVideoImageAnalysisRequestIdentifier;
    struct unique_ptr<WebKit::GestureRecognizerConsistencyEnforcer, std::default_delete<WebKit::GestureRecognizerConsistencyEnforcer>> { 
        struct __compressed_pair<WebKit::GestureRecognizerConsistencyEnforcer *, std::default_delete<WebKit::GestureRecognizerConsistencyEnforcer>> { 
            struct GestureRecognizerConsistencyEnforcer {} *__value_; 
        } __ptr_; 
    }  _gestureRecognizerConsistencyEnforcer;
    bool  _hasOutstandingPointerInteractionRequest;
    bool  _hasSetUpInteractions;
    bool  _hasTapHighlightForPotentialTap;
    bool  _hasValidPositionInformation;
    struct RetainPtr<WKHighlightLongPressGestureRecognizer> { 
        void *m_ptr; 
    }  _highlightLongPressGestureRecognizer;
    struct RetainPtr<_UIHighlightView> { 
        void *m_ptr; 
    }  _highlightView;
    struct HistoricalVelocityData { 
        unsigned int m_historySize; 
        unsigned int m_latestDataIndex; 
        struct MonotonicTime { 
            double m_value; 
        } m_lastAppendTimestamp; 
        struct Data { 
            struct MonotonicTime { 
                double m_value; 
            } timestamp; 
            struct FloatPoint { 
                float m_x; 
                float m_y; 
            } position; 
            double scale; 
        } m_positionHistory[3]; 
    }  _historicalKinematicData;
    unsigned long long  _ignoreSelectionCommandFadeCount;
    struct RetainPtr<NSMutableSet<UIButton *>> { 
        void *m_ptr; 
    }  _imageAnalysisActionButtons;
    struct optional<WebKit::ImageAnalysisContextMenuActionData> { 
        union { 
            BOOL __null_state_; 
            struct ImageAnalysisContextMenuActionData { 
                bool hasSelectableText; 
                bool hasVisualSearchResults; 
                struct RetainPtr<CGImage *> { 
                    void *m_ptr; 
                } copySubjectResult; 
                struct RetainPtr<UIMenu> { 
                    void *m_ptr; 
                } machineReadableCodeMenu; 
            } __val_; 
        } ; 
        bool __engaged_; 
    }  _imageAnalysisContextMenuActionData;
    struct RetainPtr<WKDeferringGestureRecognizer> { 
        void *m_ptr; 
    }  _imageAnalysisDeferringGestureRecognizer;
    struct RetainPtr<WKImageAnalysisGestureRecognizer> { 
        void *m_ptr; 
    }  _imageAnalysisGestureRecognizer;
    struct RetainPtr<VKCImageAnalysisInteraction> { 
        void *m_ptr; 
    }  _imageAnalysisInteraction;
    struct FloatRect { 
        struct FloatPoint { 
            float m_x; 
            float m_y; 
        } m_location; 
        struct FloatSize { 
            float m_width; 
            float m_height; 
        } m_size; 
    }  _imageAnalysisInteractionBounds;
    struct RetainPtr<UILongPressGestureRecognizer> { 
        void *m_ptr; 
    }  _imageAnalysisTimeoutGestureRecognizer;
    struct RetainPtr<VKCImageAnalyzer> { 
        void *m_ptr; 
    }  _imageAnalyzer;
    struct WeakObjCPtr<id<UITextInputDelegate>> { 
        id m_weakReference; 
    }  _inputDelegate;
    struct RetainPtr<NSObject<WKFormPeripheral>> { 
        void *m_ptr; 
    }  _inputPeripheral;
    struct OptionSet<WebKit::InputViewUpdateDeferralSource> { 
        unsigned char m_storage; 
    }  _inputViewUpdateDeferralSources;
    struct RetainPtr<WKInspectorHighlightView> { 
        void *m_ptr; 
    }  _inspectorHighlightView;
    struct RetainPtr<WKInspectorIndicationView> { 
        void *m_ptr; 
    }  _inspectorIndicationView;
    bool  _inspectorNodeSearchEnabled;
    struct RetainPtr<WKInspectorNodeSearchGestureRecognizer> { 
        void *m_ptr; 
    }  _inspectorNodeSearchGestureRecognizer;
    struct RetainPtr<UIView> { 
        void *m_ptr; 
    }  _interactionViewsContainerView;
    bool  _isAnimatingDragCancel;
    bool  _isBlurringFocusedElement;
    bool  _isChangingFocus;
    bool  _isChangingFocusUsingAccessoryTab;
    bool  _isDisplayingContextMenuWithAnimation;
    bool  _isDoubleTapPending;
    bool  _isEditable;
    bool  _isExpectingFastSingleTapCommit;
    bool  _isFocusingElementWithKeyboard;
    bool  _isHidingKeyboard;
    bool  _isPreparingEditMenu;
    bool  _isProceedingWithTextSelectionInImage;
    bool  _isRelinquishingFirstResponderToFocusedElement;
    bool  _isTapHighlightFading;
    bool  _isTapHighlightIDValid;
    bool  _isUnsuppressingSoftwareKeyboardUsingLastAutocorrectionContext;
    bool  _isWaitingOnPositionInformation;
    struct BlockPtr<void (WebEvent *, bool)>="m_block"@? {}  _keyWebEventHandler;
    bool  _keyboardDidRequestDismissal;
    struct RetainPtr<WKKeyboardScrollViewAnimator> { 
        void *m_ptr; 
    }  _keyboardScrollingAnimator;
    struct WebAutocorrectionContext { 
        struct String { 
            struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { 
                struct StringImpl {} *m_ptr; 
            } m_impl; 
        } contextBefore; 
        struct String { 
            struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { 
                struct StringImpl {} *m_ptr; 
            } m_impl; 
        } markedText; 
        struct String { 
            struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { 
                struct StringImpl {} *m_ptr; 
            } m_impl; 
        } selectedText; 
        struct String { 
            struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { 
                struct StringImpl {} *m_ptr; 
            } m_impl; 
        } contextAfter; 
        struct EditingRange { 
            unsigned long long location; 
            unsigned long long length; 
        } markedTextRange; 
    }  _lastAutocorrectionContext;
    struct optional<int> { 
        union { 
            BOOL __null_state_; 
            int __val_; 
        } ; 
        bool __engaged_; 
    }  _lastInsertedCharacterToOverrideCharacterBeforeSelection;
    struct CGPoint { 
        double x; 
        double y; 
    }  _lastInteractionLocation;
    struct optional<WebKit::InteractionInformationRequest> { 
        union { 
            BOOL __null_state_; 
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
            } __val_; 
        } ; 
        bool __engaged_; 
    }  _lastOutstandingPositionInformationRequest;
    struct WKSelectionDrawingInfo { 
        int type; 
        struct IntRect { 
            struct IntPoint { 
                int m_x; 
                int m_y; 
            } m_location; 
            struct IntSize { 
                int m_width; 
                int m_height; 
            } m_size; 
        } caretRect; 
        struct Color { 
            unsigned long long m_colorAndFlags; 
        } caretColor; 
        struct Vector<WebCore::SelectionGeometry, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> { 
            struct SelectionGeometry {} *m_buffer; 
            unsigned int m_capacity; 
            unsigned int m_size; 
        } selectionGeometries; 
        struct IntRect { 
            struct IntPoint { 
                int m_x; 
                int m_y; 
            } m_location; 
            struct IntSize { 
                int m_width; 
                int m_height; 
            } m_size; 
        } selectionClipRect; 
    }  _lastSelectionDrawingInfo;
    struct ObjectIdentifierGeneric<WebKit::TapIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits> { 
        unsigned long long m_identifier; 
    }  _latestTapID;
    struct MonotonicObjectIdentifier<WebKit::TransactionIDType> { 
        unsigned long long m_identifier; 
    }  _layerTreeTransactionIdAtLastInteractionStart;
    bool  _longPressCanClick;
    struct RetainPtr<UILongPressGestureRecognizer> { 
        void *m_ptr; 
    }  _longPressGestureRecognizer;
    struct RetainPtr<NSString> { 
        void *m_ptr; 
    }  _markedText;
    unsigned char  _mouseEventPolicy;
    struct RetainPtr<WKMouseGestureRecognizer> { 
        void *m_ptr; 
    }  _mouseGestureRecognizer;
    bool  _needsDeferredEndScrollingSelectionUpdate;
    struct RetainPtr<UITapGestureRecognizer> { 
        void *m_ptr; 
    }  _nonBlockingDoubleTapGestureRecognizer;
    struct RefPtr<WebKit::WebPageProxy, WTF::RawPtrTraits<WebKit::WebPageProxy>, WTF::DefaultRefDerefTraits<WebKit::WebPageProxy>> { 
        struct WebPageProxy {} *m_ptr; 
    }  _page;
    struct unique_ptr<WebKit::PageClientImpl, std::default_delete<WebKit::PageClientImpl>> { 
        struct __compressed_pair<WebKit::PageClientImpl *, std::default_delete<WebKit::PageClientImpl>> { 
            struct PageClientImpl {} *__value_; 
        } __ptr_; 
    }  _pageClient;
    struct RetainPtr<WKMouseGestureRecognizer> { 
        void *m_ptr; 
    }  _pencilHoverGestureRecognizer;
    struct BlockPtr<void (UIWKAutocorrectionContext *)>="m_block"@? {}  _pendingAutocorrectionContextHandler;
    struct RetainPtr<NSMutableSet> { 
        void *m_ptr; 
    }  _pendingBackgroundPrintFormatters;
    struct Lock { 
        struct Atomic<unsigned char> { 
            struct atomic<unsigned char> { 
                struct __cxx_atomic_impl<unsigned char, std::__cxx_atomic_base_impl<unsigned char>> { 
                    _Atomic unsigned char __a_value; 
                } __a_; 
            } value; 
        } m_byte; 
    }  _pendingBackgroundPrintFormattersLock;
    struct optional<WTF::ObjectIdentifierGeneric<WebKit::ImageAnalysisRequestIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits>> { 
        union { 
            BOOL __null_state_; 
            struct ObjectIdentifierGeneric<WebKit::ImageAnalysisRequestIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits> { 
                unsigned long long m_identifier; 
            } __val_; 
        } ; 
        bool __engaged_; 
    }  _pendingImageAnalysisRequestIdentifier;
    struct Vector<std::optional<std::pair<WebKit::InteractionInformationRequest, WTF::BlockPtr<void (WebKit::InteractionInformationAtPosition)>>>, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc>="m_buffer"^v"m_capacity"I"m_size"I {}  _pendingPositionInformationHandlers;
    struct CompletionHandler<void ()>="m_function"{Function<void ()>="m_callableWrapper"{unique_ptr<WTF::Detail::CallableWrapperBase<void>, std::default_delete<WTF::Detail::CallableWrapperBase<void>>>="__ptr_"{__compressed_pair<WTF::Detail::CallableWrapperBase<void> *, std::default_delete<WTF::Detail::CallableWrapperBase<void>>>="__value_"^v {}  _pendingRunModalJavaScriptDialogCallback;
    struct RetainPtr<UIPointerInteraction> { 
        void *m_ptr; 
    }  _pointerInteraction;
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
    unsigned long long  _positionInformationCallbackDepth;
    bool  _potentialTapInProgress;
    bool  _preventsPanningInXAxis;
    bool  _preventsPanningInYAxis;
    struct RetainPtr<UIGestureRecognizer> { 
        void *m_ptr; 
    }  _previewGestureRecognizer;
    struct RetainPtr<UIPreviewItemController> { 
        void *m_ptr; 
    }  _previewItemController;
    struct RetainPtr<UIGestureRecognizer> { 
        void *m_ptr; 
    }  _previewSecondaryGestureRecognizer;
    struct ObjectIdentifierGeneric<IPC::AsyncReplyIDType, WTF::ObjectIdentifierThreadSafeAccessTraits> { 
        unsigned long long m_identifier; 
    }  _printRenderingCallbackID;
    long long  _printRenderingCallbackType;
    struct RetainPtr<WKQuirkyNSUndoManager> { 
        void *m_ptr; 
    }  _quirkyUndoManager;
    struct optional<WebKit::RemoveBackgroundData> { 
        union { 
            BOOL __null_state_; 
            struct RemoveBackgroundData { 
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
                } element; 
                struct RetainPtr<CGImage *> { 
                    void *m_ptr; 
                } image; 
                struct String { 
                    struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { 
                        struct StringImpl {} *m_ptr; 
                    } m_impl; 
                } preferredMIMEType; 
            } __val_; 
        } ; 
        bool __engaged_; 
    }  _removeBackgroundData;
    bool  _resigningFirstResponder;
    struct RefPtr<WebKit::RevealFocusedElementDeferrer, WTF::RawPtrTraits<WebKit::RevealFocusedElementDeferrer>, WTF::DefaultRefDerefTraits<WebKit::RevealFocusedElementDeferrer>> { 
        struct RevealFocusedElementDeferrer {} *m_ptr; 
    }  _revealFocusedElementDeferrer;
    struct RetainPtr<UIView> { 
        void *m_ptr; 
    }  _rootContentView;
    struct RetainPtr<UIIndirectScribbleInteraction> { 
        void *m_ptr; 
    }  _scribbleInteraction;
    struct WeakObjCPtr<UIScrollView> { 
        id m_weakReference; 
    }  _scrollViewForTargetedPreview;
    struct CGPoint { 
        double x; 
        double y; 
    }  _scrollViewForTargetedPreviewInitialOffset;
    bool  _seenHardwareKeyDownInNonEditableElement;
    unsigned int  _selectionChangeNestingLevel;
    bool  _selectionNeedsUpdate;
    struct RetainPtr<WKShareSheet> { 
        void *m_ptr; 
    }  _shareSheet;
    bool  _shouldRestoreCalloutBarAfterDrop;
    bool  _shouldRestoreSelection;
    bool  _showDebugTapHighlightsForFastClicking;
    bool  _showLinkPreviews;
    bool  _showingTextStyleOptions;
    struct RetainPtr<WKSyntheticTapGestureRecognizer> { 
        void *m_ptr; 
    }  _singleTapGestureRecognizer;
    bool  _sizeChangedSinceLastVisibleContentRectUpdate;
    struct unique_ptr<WebKit::SmartMagnificationController, std::default_delete<WebKit::SmartMagnificationController>> { 
        struct __compressed_pair<WebKit::SmartMagnificationController *, std::default_delete<WebKit::SmartMagnificationController>> { 
            struct SmartMagnificationController {} *__value_; 
        } __ptr_; 
    }  _smartMagnificationController;
    long long  _suppressNonEditableSingleTapTextInteractionCount;
    struct OptionSet<WebKit::SuppressSelectionAssistantReason> { 
        unsigned char m_storage; 
    }  _suppressSelectionAssistantReasons;
    struct TapHighlightInformation { 
        bool nodeHasBuiltInClickHandling; 
        struct Color { 
            unsigned long long m_colorAndFlags; 
        } color; 
        struct Vector<WebCore::FloatQuad, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> { 
            struct FloatQuad {} *m_buffer; 
            unsigned int m_capacity; 
            unsigned int m_size; 
        } quads; 
        struct IntSize { 
            int m_width; 
            int m_height; 
        } topLeftRadius; 
        struct IntSize { 
            int m_width; 
            int m_height; 
        } topRightRadius; 
        struct IntSize { 
            int m_width; 
            int m_height; 
        } bottomLeftRadius; 
        struct IntSize { 
            int m_width; 
            int m_height; 
        } bottomRightRadius; 
    }  _tapHighlightInformation;
    struct Vector<WTF::RetainPtr<NSURL>, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> { 
        void *m_buffer; 
        unsigned int m_capacity; 
        unsigned int m_size; 
    }  _temporaryURLsToDeleteWhenDeallocated;
    struct RefPtr<WebCore::TextIndicator, WTF::RawPtrTraits<WebCore::TextIndicator>, WTF::DefaultRefDerefTraits<WebCore::TextIndicator>> { 
        struct TextIndicator {} *m_ptr; 
    }  _textIndicator;
    struct RetainPtr<WebTextIndicatorLayer> { 
        void *m_ptr; 
    }  _textIndicatorLayer;
    struct RetainPtr<UIWKTextInteractionAssistant> { 
        void *m_ptr; 
    }  _textInteractionAssistant;
    bool  _textInteractionDidChangeFocusedElement;
    struct RetainPtr<UISwipeGestureRecognizer> { 
        void *m_ptr; 
    }  _touchActionDownSwipeGestureRecognizer;
    struct RetainPtr<WKTouchActionGestureRecognizer> { 
        void *m_ptr; 
    }  _touchActionGestureRecognizer;
    struct RetainPtr<UISwipeGestureRecognizer> { 
        void *m_ptr; 
    }  _touchActionLeftSwipeGestureRecognizer;
    struct RetainPtr<UISwipeGestureRecognizer> { 
        void *m_ptr; 
    }  _touchActionRightSwipeGestureRecognizer;
    struct RetainPtr<UISwipeGestureRecognizer> { 
        void *m_ptr; 
    }  _touchActionUpSwipeGestureRecognizer;
    struct RetainPtr<WKDeferringGestureRecognizer> { 
        void *m_ptr; 
    }  _touchEndDeferringGestureRecognizerForDelayedResettableGestures;
    struct RetainPtr<WKDeferringGestureRecognizer> { 
        void *m_ptr; 
    }  _touchEndDeferringGestureRecognizerForImmediatelyResettableGestures;
    struct RetainPtr<WKDeferringGestureRecognizer> { 
        void *m_ptr; 
    }  _touchEndDeferringGestureRecognizerForSyntheticTapGestures;
    struct RetainPtr<UIWebTouchEventsGestureRecognizer> { 
        void *m_ptr; 
    }  _touchEventGestureRecognizer;
    bool  _touchEventsCanPreventNativeGestures;
    struct RetainPtr<WKDeferringGestureRecognizer> { 
        void *m_ptr; 
    }  _touchMoveDeferringGestureRecognizer;
    struct RetainPtr<WKDeferringGestureRecognizer> { 
        void *m_ptr; 
    }  _touchStartDeferringGestureRecognizerForDelayedResettableGestures;
    struct RetainPtr<WKDeferringGestureRecognizer> { 
        void *m_ptr; 
    }  _touchStartDeferringGestureRecognizerForImmediatelyResettableGestures;
    struct RetainPtr<WKDeferringGestureRecognizer> { 
        void *m_ptr; 
    }  _touchStartDeferringGestureRecognizerForSyntheticTapGestures;
    struct RetainPtr<UITextInputTraits> { 
        void *m_ptr; 
    }  _traits;
    bool  _treatAsContentEditableUntilNextEditorStateUpdate;
    struct RetainPtr<UITapGestureRecognizer> { 
        void *m_ptr; 
    }  _twoFingerDoubleTapGestureRecognizer;
    struct RetainPtr<UITapGestureRecognizer> { 
        void *m_ptr; 
    }  _twoFingerSingleTapGestureRecognizer;
    struct RetainPtr<NSUndoManager> { 
        void *m_ptr; 
    }  _undoManager;
    struct RetainPtr<UIView> { 
        void *m_ptr; 
    }  _unselectedContentSnapshot;
    bool  _unsuppressSoftwareKeyboardAfterNextAutocorrectionContextUpdate;
    bool  _useCompactMenuForContextMenuInteraction;
    bool  _useContextMenuInteractionDismissalPreview;
    bool  _usingGestureForSelection;
    struct RetainPtr<_UILayerHostView> { 
        void *m_ptr; 
    }  _visibilityPropagationViewForGPUProcess;
    struct RetainPtr<_UINonHostingVisibilityPropagationView> { 
        void *m_ptr; 
    }  _visibilityPropagationViewForWebProcess;
    struct RetainPtr<UIView> { 
        void *m_ptr; 
    }  _visibleContentViewSnapshot;
    struct RetainPtr<QLPreviewController> { 
        void *m_ptr; 
    }  _visualSearchPreviewController;
    struct RetainPtr<UIImage> { 
        void *m_ptr; 
    }  _visualSearchPreviewImage;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _visualSearchPreviewImageBounds;
    struct RetainPtr<NSURL> { 
        void *m_ptr; 
    }  _visualSearchPreviewImageURL;
    struct RetainPtr<NSString> { 
        void *m_ptr; 
    }  _visualSearchPreviewTitle;
    bool  _waitingForDynamicImageAnalysisContextMenuActions;
    bool  _waitingForEditDragSnapshot;
    bool  _waitingForKeyboardAppearanceAnimationToStart;
    struct WeakObjCPtr<WKWebView> { 
        id m_weakReference; 
    }  _webView;
}

@property (nonatomic, copy) NSIndexSet *PINEntrySeparatorIndexes;
@property (nonatomic, readonly) RTIInputSystemSourceSession *_rtiSourceSession;
@property (nonatomic, readonly) bool _shouldAvoidResizingWhenInputViewBoundsChange;
@property (nonatomic, readonly) bool _shouldAvoidScrollingWhenFocusedContentIsVisible;
@property (nonatomic, readonly) bool _shouldAvoidSecurityHeuristicScoreUpdates;
@property (nonatomic, readonly) bool _shouldUseContextMenus;
@property (nonatomic, readonly) bool _shouldUseContextMenusForFormControls;
@property (nonatomic, readonly) bool _shouldUseLegacySelectPopoverDismissalBehavior;
@property (nonatomic) bool _systemCursorAccessoriesDisabled;
@property (nonatomic) long long _textInputSource;
@property (nonatomic, readonly) bool _wk_printFormatterRequiresMainThread;
@property (nonatomic) bool acceptsDictationSearchResults;
@property (nonatomic) bool acceptsEmoji;
@property (nonatomic) bool acceptsFloatingKeyboard;
@property (nonatomic) bool acceptsInitialEmojiKeyboard;
@property (nonatomic) bool acceptsPayloads;
@property (nonatomic) bool acceptsSplitKeyboard;
@property (getter=isAnimatingDragCancel, nonatomic, readonly) bool animatingDragCancel;
@property (nonatomic) long long autocapitalizationType;
@property (nonatomic, copy) NSString *autocorrectionContext;
@property (nonatomic, readonly) const void*autocorrectionData;
@property (nonatomic) long long autocorrectionType;
@property (nonatomic, readonly) UITextPosition *beginningOfDocument;
@property (nonatomic, readonly) WKBrowsingContextController *browsingContextController;
@property (nonatomic) bool contentsIsSingleValue;
@property (nonatomic, readonly) UIContextMenuInteraction *contextMenuInteraction;
@property (nonatomic, readonly) long long cursorBehavior;
@property (nonatomic, retain) NSArray *dataListTextSuggestions;
@property (nonatomic, retain) UIView<WKFormControl> *dataListTextSuggestionsInputView;
@property (nonatomic, readonly) WKDateTimeInputControl *dateTimeInputControl;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) bool deferBecomingResponder;
@property (nonatomic, readonly) NSArray *deferringGestures;
@property (readonly, copy) NSString *description;
@property (getter=isDevicePasscodeEntry, nonatomic) bool devicePasscodeEntry;
@property (nonatomic) bool disableHandwritingKeyboard;
@property (nonatomic) bool disableInputBars;
@property (nonatomic) bool disablePrediction;
@property (nonatomic) bool displaySecureEditsUsingPlainText;
@property (nonatomic) bool displaySecureTextUsingPlainText;
@property (nonatomic) int emptyContentReturnKeyType;
@property (nonatomic) bool enablesReturnKeyAutomatically;
@property (nonatomic) bool enablesReturnKeyOnNonWhiteSpaceContent;
@property (nonatomic, readonly) UITextPosition *endOfDocument;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } floatingKeyboardEdgeInsets;
@property (nonatomic, readonly) const void*focusedElementInformation;
@property (nonatomic) bool forceDefaultDictationInfo;
@property (nonatomic) long long forceDictationKeyboardType;
@property (nonatomic) bool forceDisableDictation;
@property (nonatomic) bool forceEnableDictation;
@property (nonatomic) bool forceFloatingKeyboard;
@property (nonatomic) bool forceSpellingDictation;
@property (nonatomic, readonly) UIWebFormAccessory *formAccessoryView;
@property (nonatomic, readonly) NSString *formInputLabel;
@property (nonatomic, readonly) void*gestureRecognizerConsistencyEnforcer;
@property (nonatomic) bool hasDefaultContents;
@property (nonatomic, readonly) bool hasText;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hidePrediction;
@property (nonatomic, readonly) UIGestureRecognizer *imageAnalysisGestureRecognizer;
@property (getter=isImageBacked, nonatomic, readonly) bool imageBacked;
@property (nonatomic) long long inlineCompletionType;
@property (nonatomic) long long inlinePredictionType;
@property (nonatomic, readonly) UIView *inputAccessoryViewForWebView;
@property (nonatomic, readonly) UITextInputAssistantItem *inputAssistantItemForWebView;
@property (nonatomic, retain) UIInputContextHistory *inputContextHistory;
@property (nonatomic) <UITextInputDelegate> *inputDelegate;
@property (nonatomic, readonly) UIView *inputViewForWebView;
@property (nonatomic, readonly) id insertDictationResultPlaceholder;
@property (nonatomic, retain) UIColor *insertionPointColor;
@property (nonatomic) unsigned long long insertionPointWidth;
@property (nonatomic, readonly) UITextInteractionAssistant *interactionAssistant;
@property (nonatomic, readonly) long long interfaceOrientation;
@property (nonatomic) bool isCarPlayIdiom;
@property (nonatomic, readonly) bool isEditable;
@property (nonatomic, readonly) bool isFocusingElement;
@property (nonatomic, readonly) bool isShowingDataListSuggestions;
@property (nonatomic) bool isSingleLineDocument;
@property (nonatomic, readonly) bool isTextRecognitionInFullscreenVideoEnabled;
@property (nonatomic) long long keyboardAppearance;
@property (nonatomic) long long keyboardType;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } lastInteractionLocation;
@property (nonatomic) bool learnsCorrections;
@property (nonatomic) bool loadKeyboardsForSiriLanguage;
@property (nonatomic, readonly) UITextRange *markedTextRange;
@property (nonatomic, copy) NSDictionary *markedTextStyle;
@property (nonatomic, readonly) void*page;
@property (nonatomic, copy) UITextInputPasswordRules *passwordRules;
@property (nonatomic, readonly) const void*positionInformation;
@property (nonatomic) bool preferOnlineDictation;
@property (nonatomic) long long preferredKeyboardStyle;
@property (nonatomic, readonly) bool preventsPanningInXAxis;
@property (nonatomic, readonly) bool preventsPanningInYAxis;
@property (nonatomic, copy) NSString *recentInputIdentifier;
@property (getter=isResigningFirstResponder, nonatomic, readonly) bool resigningFirstResponder;
@property (nonatomic, copy) NSString *responseContext;
@property (nonatomic) bool returnKeyGoesToNextResponder;
@property (nonatomic) long long returnKeyType;
@property (getter=isSecureTextEntry, nonatomic) bool secureTextEntry;
@property (nonatomic, readonly) WKFormSelectControl *selectControl;
@property (nonatomic, readonly) NSString *selectFormPopoverTitle;
@property (copy) UITextRange *selectedTextRange;
@property (readonly) <NSObject><NSCopying> *selectedTextSearchDocument;
@property (nonatomic) long long selectionAffinity;
@property (nonatomic, retain) UIColor *selectionBarColor;
@property (nonatomic, retain) UIColor *selectionBorderColor;
@property (nonatomic) double selectionBorderWidth;
@property (nonatomic) double selectionCornerRadius;
@property (nonatomic, retain) UIImage *selectionDragDotImage;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } selectionEdgeInsets;
@property (nonatomic) long long selectionGranularity;
@property (nonatomic, retain) UIColor *selectionHighlightColor;
@property (nonatomic) int shortcutConversionType;
@property (nonatomic, readonly) bool shouldHideSelectionWhenScrolling;
@property (nonatomic, readonly) bool shouldIgnoreKeyboardWillHideNotification;
@property (nonatomic) bool showDictationButton;
@property (getter=isShowingInspectorIndication, nonatomic) bool showingInspectorIndication;
@property (nonatomic, readonly) UITapGestureRecognizer *singleTapGestureRecognizer;
@property (nonatomic) bool sizeChangedSinceLastVisibleContentRectUpdate;
@property (nonatomic) long long smartDashesType;
@property (nonatomic) long long smartInsertDeleteType;
@property (nonatomic) long long smartQuotesType;
@property (nonatomic) long long spellCheckingType;
@property (readonly) Class superclass;
@property (nonatomic, retain) _UISupplementalLexicon *supplementalLexicon;
@property (nonatomic, retain) UIImage *supplementalLexiconAmbiguousItemIcon;
@property (nonatomic, readonly) bool supportsImagePaste;
@property (nonatomic, readonly) bool supportsTextReplacement;
@property (nonatomic, readonly) bool supportsTextReplacementForWebView;
@property (nonatomic) bool suppressReturnKeyStyling;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } tapHighlightViewRect;
@property (nonatomic, copy) NSString *textContentType;
@property (nonatomic, readonly) NSString *textContentTypeForTesting;
@property (nonatomic, readonly) <UITextInputSuggestionDelegate> *textInputSuggestionDelegate;
@property (nonatomic, readonly) UITextInputTraits *textInputTraitsForWebView;
@property (nonatomic, readonly) UIView *textInputView;
@property (nonatomic, readonly) UIWKTextInteractionAssistant *textInteractionAssistant;
@property (nonatomic) int textLoupeVisibility;
@property (nonatomic, readonly) UITextRange *textRangeForServicesInteraction;
@property (nonatomic) long long textScriptType;
@property (nonatomic) int textSelectionBehavior;
@property (nonatomic) id textSuggestionDelegate;
@property (nonatomic) struct __CFCharacterSet { }*textTrimmingSet;
@property (nonatomic, readonly) <UITextInputTokenizer> *tokenizer;
@property (nonatomic, readonly) UIWebTouchEventsGestureRecognizer *touchEventGestureRecognizer;
@property (nonatomic, retain) UIColor *underlineColorForSpelling;
@property (nonatomic, retain) UIColor *underlineColorForTextAlternatives;
@property (nonatomic, readonly) NSUndoManager *undoManagerForWebView;
@property (nonatomic) bool useAutomaticEndpointing;
@property (nonatomic) bool useInterfaceLanguageForLocalization;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } validTextRange;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_accessibilityClearSelection;
- (void)_accessibilityRegisterUIProcessTokens;
- (void)_accessibilityRetrieveRectsAtSelectionOffset:(long long)arg1 withText:(id)arg2;
- (void)_accessibilityRetrieveRectsAtSelectionOffset:(long long)arg1 withText:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_accessibilityRetrieveRectsEnclosingSelectionOffset:(long long)arg1 withGranularity:(long long)arg2;
- (void)_accessibilityStoreSelection;
- (SEL)_actionForLongPress;
- (SEL)_actionForLongPressFromPositionInformation:(const void*)arg1;
- (void)_actionSheetAssistant:(id)arg1 performAction:(unsigned char)arg2 onElements:(void*)arg3;
- (void)_addDefaultGestureRecognizers;
- (void)_addShortcut:(id)arg1;
- (void)_addShortcutForWebView:(id)arg1;
- (void)_alignCenter:(id)arg1;
- (void)_alignCenterForWebView:(id)arg1;
- (void)_alignJustified:(id)arg1;
- (void)_alignJustifiedForWebView:(id)arg1;
- (void)_alignLeft:(id)arg1;
- (void)_alignLeftForWebView:(id)arg1;
- (void)_alignRight:(id)arg1;
- (void)_alignRightForWebView:(id)arg1;
- (bool)_allowAnimatedUpdateSelectionRectViews;
- (bool)_allowAnimationControls;
- (struct OptionSet<WebCore::DragSourceAction> { unsigned char x1; })_allowedDragSourceActions;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_applicationWillResignActive:(id)arg1;
- (void)_attemptSyntheticClickAtLocation:(struct CGPoint { double x1; double x2; })arg1 modifierFlags:(long long)arg2;
- (struct RetainPtr<_WKPrintFormattingAttributes> { void *x1; })_attributesForPrintFormatter:(id)arg1;
- (id)_autofillContext;
- (void)_becomeFirstResponderWithSelectionMovingForward:(bool)arg1 completionHandler:(id /* block */)arg2;
- (void)_cancelImageAnalysis;
- (void)_cancelInteraction;
- (void)_cancelLongPressGestureRecognizer;
- (void)_cancelPendingAutocorrectionContextHandler;
- (void)_cancelPendingKeyEventHandler;
- (void)_cancelPreviousResetInputViewDeferralRequest;
- (void)_cancelTouchEventGestureRecognizer;
- (id)_cascadeInteractionTintColor;
- (void)_changeListType:(id)arg1;
- (void)_changeListTypeForWebView:(id)arg1;
- (unsigned int)_characterInRelationToCaretSelection:(int)arg1;
- (void)_commitPotentialTapFailed;
- (id)_commonInitializationWithProcessPool:(void*)arg1 configuration:(void*)arg2;
- (void)_completeImageAnalysisRequestForContextMenu:(struct CGImage { }*)arg1 requestIdentifier:(struct ObjectIdentifierGeneric<WebKit::ImageAnalysisRequestIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits> { unsigned long long x1; })arg2 hasTextResults:(bool)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_computeUnobscuredContentRectRespectingInputViewBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inputViewBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)_configureMouseGestureRecognizer;
- (double)_contentZoomScale;
- (id)_contentsOfUserInterfaceItem:(id)arg1;
- (void)_contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(struct CGPoint { double x1; double x2; })arg2 completion:(id /* block */)arg3;
- (id)_contextMenuInteraction:(id)arg1 overrideSuggestedActionsForConfiguration:(id)arg2;
- (id)_contextMenuInteraction:(id)arg1 styleForMenuWithConfiguration:(id)arg2;
- (void)_createAndConfigureDoubleTapGestureRecognizer;
- (void)_createAndConfigureHighlightLongPressGestureRecognizer;
- (void)_createAndConfigureLongPressGestureRecognizer;
- (struct unique_ptr<WebKit::DrawingAreaProxy, std::default_delete<WebKit::DrawingAreaProxy>> { struct __compressed_pair<WebKit::DrawingAreaProxy *, std::default_delete<WebKit::DrawingAreaProxy>> { struct DrawingAreaProxy {} *x_1_1_1; } x1; })_createDrawingAreaProxy;
- (void)_createImage:(id)arg1 printFormatter:(id)arg2;
- (void)_createPDF:(id)arg1 printFormatter:(id)arg2;
- (struct RetainPtr<WKTargetedPreviewContainer> { void *x1; })_createPreviewContainerWithLayerName:(id)arg1;
- (id)_createTargetedContextMenuHintPreviewForFocusedElement;
- (id)_createTargetedContextMenuHintPreviewIfPossible;
- (bool)_currentPositionInformationIsApproximatelyValidForRequest:(const struct InteractionInformationRequest { struct IntPoint { int x_1_1_1; int x_1_1_2; } x1; bool x2; bool x3; bool x4; bool x5; bool x6; bool x7; bool x8; bool x9; }*)arg1 radiusForApproximation:(int)arg2;
- (bool)_currentPositionInformationIsValidForRequest:(const struct InteractionInformationRequest { struct IntPoint { int x_1_1_1; int x_1_1_2; } x1; bool x2; bool x3; bool x4; bool x5; bool x6; bool x7; bool x8; bool x9; }*)arg1;
- (id)_dataDetectionResults;
- (id)_dataForPreviewItemController:(id)arg1 atPosition:(struct CGPoint { double x1; double x2; })arg2 type:(long long*)arg3;
- (unsigned char)_dataOwnerForPasteboard:(bool)arg1;
- (void)_decreaseListLevel:(id)arg1;
- (void)_decreaseListLevelForWebView:(id)arg1;
- (void)_define:(id)arg1;
- (void)_defineForWebView:(id)arg1;
- (void)_deleteByWord;
- (void)_deleteForwardAndNotify:(bool)arg1;
- (void)_deleteForwardByWord;
- (void)_deleteToEndOfLine;
- (void)_deleteToEndOfParagraph;
- (void)_deleteToStartOfLine;
- (void)_deliverDelayedDropPreviewIfPossible:(struct optional<WebCore::TextIndicatorData> { union { BOOL x_1_1_1; struct TextIndicatorData { struct FloatRect { struct FloatPoint { float x_1_4_1; float x_1_4_2; } x_1_3_1; struct FloatSize { float x_2_4_1; float x_2_4_2; } x_1_3_2; } x_2_2_1; struct FloatRect { struct FloatPoint { float x_1_4_1; float x_1_4_2; } x_2_3_1; struct FloatSize { float x_2_4_1; float x_2_4_2; } x_2_3_2; } x_2_2_2; struct FloatRect { struct FloatPoint { float x_1_4_1; float x_1_4_2; } x_3_3_1; struct FloatSize { float x_2_4_1; float x_2_4_2; } x_3_3_2; } x_2_2_3; struct Vector<WebCore::FloatRect, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> { struct FloatRect {} *x_4_3_1; unsigned int x_4_3_2; unsigned int x_4_3_3; } x_2_2_4; float x_2_2_5; struct RefPtr<WebCore::Image, WTF::RawPtrTraits<WebCore::Image>, WTF::DefaultRefDerefTraits<WebCore::Image>> { struct Image {} *x_6_3_1; } x_2_2_6; struct RefPtr<WebCore::Image, WTF::RawPtrTraits<WebCore::Image>, WTF::DefaultRefDerefTraits<WebCore::Image>> { struct Image {} *x_7_3_1; } x_2_2_7; struct RefPtr<WebCore::Image, WTF::RawPtrTraits<WebCore::Image>, WTF::DefaultRefDerefTraits<WebCore::Image>> { struct Image {} *x_8_3_1; } x_2_2_8; } x_1_1_2; } x1; })arg1;
- (void)_didChangeDragCaretRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 currentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)_didChangeDragInteractionPolicy;
- (void)_didChangeLinkPreviewAvailability;
- (void)_didChangeWebViewEditability;
- (void)_didCommitLayerTree:(const void*)arg1;
- (void)_didCommitLoadForMainFrame;
- (void)_didCompleteSyntheticClick;
- (void)_didEndScrollingOrZooming;
- (void)_didEnterFullscreen;
- (void)_didExitFullscreen;
- (void)_didExitStableState;
- (void)_didFinishTextInteractionInTextInputContext:(id)arg1;
- (void)_didGetTapHighlightForRequest:(struct ObjectIdentifierGeneric<WebKit::TapIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits> { unsigned long long x1; })arg1 color:(const struct Color { unsigned long long x1; }*)arg2 quads:(const void*)arg3 topLeftRadius:(const struct IntSize { int x1; int x2; }*)arg4 topRightRadius:(const struct IntSize { int x1; int x2; }*)arg5 bottomLeftRadius:(const struct IntSize { int x1; int x2; }*)arg6 bottomRightRadius:(const struct IntSize { int x1; int x2; }*)arg7 nodeHasBuiltInClickHandling:(bool)arg8;
- (void)_didHandleAdditionalDragItemsRequest:(bool)arg1;
- (void)_didHandleDragStartRequest:(bool)arg1;
- (void)_didHandleKeyEvent:(id)arg1 eventWasHandled:(bool)arg2;
- (void)_didHandleTapAsHover;
- (void)_didHideMenu:(id)arg1;
- (void)_didNotHandleTapAsClick:(const struct IntPoint { int x1; int x2; }*)arg1;
- (void)_didPerformAction:(SEL)arg1 sender:(id)arg2;
- (void)_didPerformDragOperation:(bool)arg1;
- (void)_didReceiveEditDragSnapshot:(struct optional<WebCore::TextIndicatorData> { union { BOOL x_1_1_1; struct TextIndicatorData { struct FloatRect { struct FloatPoint { float x_1_4_1; float x_1_4_2; } x_1_3_1; struct FloatSize { float x_2_4_1; float x_2_4_2; } x_1_3_2; } x_2_2_1; struct FloatRect { struct FloatPoint { float x_1_4_1; float x_1_4_2; } x_2_3_1; struct FloatSize { float x_2_4_1; float x_2_4_2; } x_2_3_2; } x_2_2_2; struct FloatRect { struct FloatPoint { float x_1_4_1; float x_1_4_2; } x_3_3_1; struct FloatSize { float x_2_4_1; float x_2_4_2; } x_3_3_2; } x_2_2_3; struct Vector<WebCore::FloatRect, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> { struct FloatRect {} *x_4_3_1; unsigned int x_4_3_2; unsigned int x_4_3_3; } x_2_2_4; float x_2_2_5; struct RefPtr<WebCore::Image, WTF::RawPtrTraits<WebCore::Image>, WTF::DefaultRefDerefTraits<WebCore::Image>> { struct Image {} *x_6_3_1; } x_2_2_6; struct RefPtr<WebCore::Image, WTF::RawPtrTraits<WebCore::Image>, WTF::DefaultRefDerefTraits<WebCore::Image>> { struct Image {} *x_7_3_1; } x_2_2_7; struct RefPtr<WebCore::Image, WTF::RawPtrTraits<WebCore::Image>, WTF::DefaultRefDerefTraits<WebCore::Image>> { struct Image {} *x_8_3_1; } x_2_2_8; } x_1_1_2; } x1; })arg1;
- (void)_didRelaunchProcess;
- (void)_didScroll;
- (void)_didStartProvisionalLoadForMainFrame;
- (void)_didUpdateEditorState;
- (void)_didUpdateInputMode:(unsigned char)arg1;
- (bool)_disableAutomaticKeyboardUI;
- (void)_disableDoubleTapGesturesDuringTapIfNecessary:(struct ObjectIdentifierGeneric<WebKit::TapIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits> { unsigned long long x1; })arg1;
- (void)_disableInspectorNodeSearch;
- (void)_dismissContactPickerWithContacts:(id)arg1;
- (void)_doAfterPendingImageAnalysis:(id /* block */)arg1;
- (void)_doAfterReceivingEditDragSnapshotForTesting:(id /* block */)arg1;
- (void)_doneDeferringTouchEnd:(bool)arg1;
- (void)_doneDeferringTouchMove:(bool)arg1;
- (void)_doneDeferringTouchStart:(bool)arg1;
- (void)_doubleTapDidFail:(id)arg1;
- (void)_doubleTapRecognized:(id)arg1;
- (void)_doubleTapRecognizedForDoubleClick:(id)arg1;
- (unsigned long long)_dragDestinationActionForDropSession:(id)arg1;
- (long long)_dragInteraction:(id)arg1 dataOwnerForSession:(id)arg2;
- (bool)_dragInteraction:(id)arg1 item:(id)arg2 shouldDelaySetDownAnimationWithCompletion:(id /* block */)arg3;
- (void)_dragInteraction:(id)arg1 itemsForAddingToSession:(id)arg2 withTouchAtPoint:(struct CGPoint { double x1; double x2; })arg3 completion:(id /* block */)arg4;
- (void)_dragInteraction:(id)arg1 prepareForSession:(id)arg2 completion:(id /* block */)arg3;
- (bool)_dragInteraction:(id)arg1 shouldDelayCompetingGestureRecognizer:(id)arg2;
- (long long)_dropInteraction:(id)arg1 dataOwnerForSession:(id)arg2;
- (void)_dropInteraction:(id)arg1 delayedPreviewProviderForDroppingItem:(id)arg2 previewProvider:(id /* block */)arg3;
- (void)_elementDidBlur;
- (void)_elementDidFocus:(const void*)arg1 userIsInteracting:(bool)arg2 blurPreviousNode:(bool)arg3 activityStateChanges:(struct OptionSet<WebCore::ActivityState> { unsigned short x1; })arg4 userObject:(id)arg5;
- (bool)_elementForTextInputContextIsFocused:(id)arg1;
- (bool)_elementTypeRequiresAccessoryView:(int)arg1;
- (void)_enableInspectorNodeSearch;
- (void)_endEditing;
- (void)_endImageAnalysisGestureDeferral:(bool)arg1;
- (void)_endPotentialTapAndEnableDoubleTapGesturesIfNecessary;
- (void)_fadeTapHighlightViewIfNeeded;
- (void)_findSelected:(id)arg1;
- (void)_findSelectedForWebView:(id)arg1;
- (void)_finishInteraction;
- (void)_focusTextInputContext:(id)arg1 placeCaretAt:(struct CGPoint { double x1; double x2; })arg2 completionHandler:(id /* block */)arg3;
- (bool)_formControlRefreshEnabled;
- (id)_formInputSession;
- (struct optional<WebCore::ProcessQualified<WTF::ObjectIdentifierGeneric<WebCore::FrameIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits>>> { union { BOOL x_1_1_1; struct ProcessQualified<WTF::ObjectIdentifierGeneric<WebCore::FrameIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits>> { struct ObjectIdentifierGeneric<WebCore::FrameIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits> { unsigned long long x_1_3_1; } x_2_2_1; struct ObjectIdentifierGeneric<WebCore::ProcessIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits> { unsigned long long x_2_3_1; } x_2_2_2; } x_1_1_2; } x1; bool x2; })_frameIdentifierForPrintFormatter:(id)arg1;
- (bool)_gestureRecognizerCanBePreventedByTouchEvents:(id)arg1;
- (void)_gpuProcessDidCreateContextForVisibilityPropagation;
- (void)_gpuProcessDidExit;
- (void)_handleAutocorrectionContext:(const void*)arg1;
- (bool)_handleDOMPasteRequestWithResult:(unsigned char)arg1;
- (bool)_handleDropByInsertingImagePlaceholders:(id)arg1 session:(id)arg2;
- (void)_handleKeyUIEvent:(id)arg1;
- (void)_handleSmartMagnificationInformationForPotentialTap:(struct ObjectIdentifierGeneric<WebKit::TapIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits> { unsigned long long x1; })arg1 renderRect:(const struct FloatRect { struct FloatPoint { float x_1_1_1; float x_1_1_2; } x1; struct FloatSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg2 fitEntireRect:(bool)arg3 viewportMinimumScale:(double)arg4 viewportMaximumScale:(double)arg5 nodeIsRootLevel:(bool)arg6;
- (bool)_handleTapOverInteractiveControl:(struct CGPoint { double x1; double x2; })arg1;
- (void)_handleTouchActionsForTouchEvent:(const void*)arg1;
- (void)_hardwareKeyboardAvailabilityChanged;
- (bool)_hasEnclosingScrollView:(id)arg1 matchingCriteria:(void*)arg2;
- (bool)_hasFocusedElement;
- (bool)_hasValidOutstandingPositionInformationRequest:(const struct InteractionInformationRequest { struct IntPoint { int x_1_1_1; int x_1_1_2; } x1; bool x2; bool x3; bool x4; bool x5; bool x6; bool x7; bool x8; bool x9; }*)arg1;
- (void)_hideInspectorHighlight;
- (void)_hideKeyboard;
- (void)_highlightLongPressRecognized:(id)arg1;
- (void)_increaseListLevel:(id)arg1;
- (void)_increaseListLevelForWebView:(id)arg1;
- (void)_indent:(id)arg1;
- (void)_indentForWebView:(id)arg1;
- (double)_initialScaleFactor;
- (void)_insertNestedOrderedList:(id)arg1;
- (void)_insertNestedOrderedListForWebView:(id)arg1;
- (void)_insertNestedUnorderedList:(id)arg1;
- (void)_insertNestedUnorderedListForWebView:(id)arg1;
- (void)_insertOrderedList:(id)arg1;
- (void)_insertOrderedListForWebView:(id)arg1;
- (void)_insertUnorderedList:(id)arg1;
- (void)_insertUnorderedListForWebView:(id)arg1;
- (void)_inspectorNodeSearchRecognized:(id)arg1;
- (bool)_interactionShouldBeginFromPreviewItemController:(id)arg1 forPosition:(struct CGPoint { double x1; double x2; })arg2;
- (void)_interactionStartedFromPreviewItemController:(id)arg1;
- (void)_interactionStoppedFromPreviewItemController:(id)arg1;
- (bool)_interpretKeyEvent:(id)arg1 isCharEvent:(bool)arg2;
- (void)_invalidateCurrentPositionInformation;
- (void)_invokeAllActionsToPerformAfterPendingImageAnalysis:(bool)arg1;
- (void)_invokeAndRemovePendingHandlersValidForCurrentPositionInformation;
- (void)_invokePendingAutocorrectionContextHandler:(id)arg1;
- (bool)_isInterruptingDecelerationForScrollViewOrAncestor:(id)arg1;
- (bool)_isPanningScrollViewOrAncestor:(id)arg1;
- (bool)_isTextInputContextFocused:(id)arg1;
- (bool)_isTouchEndDeferringGesture:(id)arg1;
- (bool)_isTouchStartDeferringGesture:(id)arg1;
- (id)_itemsForBeginningOrAddingToSessionWithRegistrationLists:(id)arg1 stagedDragSource:(const void*)arg2;
- (void)_keyboardDidRequestDismissal:(id)arg1;
- (void)_keyboardDidShow;
- (void)_keyboardWillShow;
- (void)_layerTreeCommitComplete;
- (void)_longPressRecognized:(id)arg1;
- (void)_lookup:(id)arg1;
- (void)_lookupForWebView:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_markedTextNSRange;
- (bool)_mayDisableDoubleTapGesturesDuringSingleTap;
- (id)_moveDown:(bool)arg1 withHistory:(id)arg2;
- (id)_moveLeft:(bool)arg1 withHistory:(id)arg2;
- (id)_moveRight:(bool)arg1 withHistory:(id)arg2;
- (id)_moveToEndOfDocument:(bool)arg1 withHistory:(id)arg2;
- (id)_moveToEndOfLine:(bool)arg1 withHistory:(id)arg2;
- (id)_moveToEndOfParagraph:(bool)arg1 withHistory:(id)arg2;
- (id)_moveToEndOfWord:(bool)arg1 withHistory:(id)arg2;
- (id)_moveToStartOfDocument:(bool)arg1 withHistory:(id)arg2;
- (id)_moveToStartOfLine:(bool)arg1 withHistory:(id)arg2;
- (id)_moveToStartOfParagraph:(bool)arg1 withHistory:(id)arg2;
- (id)_moveToStartOfWord:(bool)arg1 withHistory:(id)arg2;
- (id)_moveUp:(bool)arg1 withHistory:(id)arg2;
- (void)_nextAccessoryTab:(id)arg1;
- (void)_nextAccessoryTabForWebView:(id)arg1;
- (void)_nonBlockingDoubleTapRecognized:(id)arg1;
- (void)_outdent:(id)arg1;
- (void)_outdentForWebView:(id)arg1;
- (struct OpaqueWKPage { }*)_pageRef;
- (void)_pasteAndMatchStyle:(id)arg1;
- (void)_pasteAndMatchStyleForWebView:(id)arg1;
- (void)_pasteAsQuotation:(id)arg1;
- (void)_pasteAsQuotationForWebView:(id)arg1;
- (bool)_pointIsInsideSelectionRect:(struct CGPoint { double x1; double x2; })arg1 outBoundingRect:(struct FloatRect { struct FloatPoint { float x_1_1_1; float x_1_1_2; } x1; struct FloatSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg2;
- (void)_pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3 completion:(id /* block */)arg4;
- (void)_positionInformationDidChange:(const void*)arg1;
- (void)_prepareToDragPromisedAttachment:(const void*)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_presentationRectForPreviewItemController:(id)arg1;
- (id)_presentationRectsForPreviewItemController:(id)arg1;
- (id)_presentationSnapshotForPreviewItemController:(id)arg1;
- (id)_presentedViewControllerForPreviewItemController:(id)arg1;
- (void)_preserveFocusWithToken:(id)arg1 destructively:(bool)arg2;
- (void)_previewItemController:(id)arg1 commitPreview:(id)arg2;
- (void)_previewItemController:(id)arg1 didDismissPreview:(id)arg2 committing:(bool)arg3;
- (void)_previewItemControllerDidCancelPreview:(id)arg1;
- (void)_previousAccessoryTab:(id)arg1;
- (void)_previousAccessoryTabForWebView:(id)arg1;
- (void)_processDidExit;
- (void)_processWillSwap;
- (void)_promptForReplace:(id)arg1;
- (void)_promptForReplaceForWebView:(id)arg1;
- (void)_registerPreview;
- (void)_removeContainerForContextMenuHintPreviews;
- (void)_removeContainerForDragPreviews;
- (void)_removeContainerForDropPreviews;
- (void)_removeContextMenuHintContainerIfPossible;
- (void)_removeDefaultGestureRecognizers;
- (void)_removeTemporaryDirectoriesWhenDeallocated:(void*)arg1;
- (void)_removeTemporaryFilesIfNecessary;
- (void)_removeVisibilityPropagationViewForGPUProcess;
- (void)_removeVisibilityPropagationViewForWebProcess;
- (void)_requestDOMPasteAccessForCategory:(unsigned char)arg1 elementRect:(const struct IntRect { struct IntPoint { int x_1_1_1; int x_1_1_2; } x1; struct IntSize { int x_2_1_1; int x_2_1_2; } x2; }*)arg2 originIdentifier:(const void*)arg3 completionHandler:(void*)arg4;
- (void)_requestEvasionRectsAboveSelectionIfNeeded:(void*)arg1;
- (void)_requestTextInputContextsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 completionHandler:(id /* block */)arg2;
- (bool)_requiresKeyboardResetOnReload;
- (bool)_requiresKeyboardWhenFirstResponder;
- (void)_resetIsDoubleTapPending;
- (void)_resetPanningPreventionFlags;
- (void)_resetPrintingState;
- (void)_restoreCalloutBarIfNeeded;
- (bool)_restoreFocusWithToken:(id)arg1;
- (struct FloatRect { struct FloatPoint { float x_1_1_1; float x_1_1_2; } x1; struct FloatSize { float x_2_1_1; float x_2_1_2; } x2; })_scaledCaretRectForSelectionEnd:(struct FloatRect { struct FloatPoint { float x_1_1_1; float x_1_1_2; } x1; struct FloatSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct FloatRect { struct FloatPoint { float x_1_1_1; float x_1_1_2; } x1; struct FloatSize { float x_2_1_1; float x_2_1_2; } x2; })_scaledCaretRectForSelectionStart:(struct FloatRect { struct FloatPoint { float x_1_1_1; float x_1_1_2; } x1; struct FloatSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_scheduleResetInputViewDeferralAfterBecomingFirstResponder;
- (void)_screenCapturedDidChange:(id)arg1;
- (bool)_scrollToRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withOrigin:(struct CGPoint { double x1; double x2; })arg2 minimumScrollDistance:(double)arg3;
- (id)_scroller;
- (void)_scrollingNodeScrollingDidEnd:(unsigned long long)arg1;
- (void)_scrollingNodeScrollingWillBegin:(unsigned long long)arg1;
- (void)_selectDataListOption:(long long)arg1;
- (void)_selectPositionAtPoint:(struct CGPoint { double x1; double x2; })arg1 stayingWithinFocusedElement:(bool)arg2 completionHandler:(id /* block */)arg3;
- (bool)_selectionAtDocumentStart;
- (void)_selectionChanged;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_selectionClipRect;
- (void)_setAcceleratedCompositingRootView:(id)arg1;
- (void)_setAccessibilityWebProcessToken:(id)arg1;
- (void)_setDataListSuggestionsControl:(id)arg1;
- (void)_setDoubleTapGesturesEnabled:(bool)arg1;
- (void)_setFontForWebView:(id)arg1 sender:(id)arg2;
- (void)_setFontSizeForWebView:(double)arg1 sender:(id)arg2;
- (void)_setMarkedText:(id)arg1 underlines:(const void*)arg2 highlights:(const void*)arg3 selectedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4;
- (void)_setMouseEventPolicy:(unsigned char)arg1;
- (void)_setTextColorForWebView:(id)arg1 sender:(id)arg2;
- (void)_setUpImageAnalysis;
- (void)_setupVisibilityPropagationViewForGPUProcess;
- (void)_setupVisibilityPropagationViewForWebProcess;
- (void)_share:(id)arg1;
- (void)_shareForWebView:(id)arg1;
- (bool)_shouldAvoidResizingWhenInputViewBoundsChange;
- (bool)_shouldAvoidScrollingWhenFocusedContentIsVisible;
- (bool)_shouldAvoidSecurityHeuristicScoreUpdates;
- (bool)_shouldShowAutomaticKeyboardUIIgnoringInputMode;
- (bool)_shouldShowKeyboardForElement:(const void*)arg1;
- (bool)_shouldShowKeyboardForElementIgnoringInputMode:(const void*)arg1;
- (bool)_shouldSimulateKeyboardInputOnTextInsertion;
- (bool)_shouldSuppressSelectionCommands;
- (bool)_shouldToggleSelectionCommandsAfterTapAt:(struct CGPoint { double x1; double x2; })arg1;
- (bool)_shouldUseContextMenus;
- (bool)_shouldUseContextMenusForFormControls;
- (bool)_shouldUseLegacySelectPopoverDismissalBehavior;
- (void)_showAttachmentSheet;
- (void)_showContactPicker:(const void*)arg1 completionHandler:(void*)arg2;
- (void)_showDataDetectorsUI;
- (void)_showDataDetectorsUIForPositionInformation:(const void*)arg1;
- (void)_showDictionary:(id)arg1;
- (void)_showImageSheet;
- (void)_showInspectorHighlight:(const void*)arg1;
- (void)_showKeyboard;
- (void)_showLinkSheet;
- (void)_showMediaControlsContextMenu:(struct FloatRect { struct FloatPoint { float x_1_1_1; float x_1_1_2; } x1; struct FloatSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg1 items:(void*)arg2 completionHandler:(void*)arg3;
- (void)_showPlaybackTargetPicker:(bool)arg1 fromRect:(const struct IntRect { struct IntPoint { int x_1_1_1; int x_1_1_2; } x1; struct IntSize { int x_2_1_1; int x_2_1_2; } x2; }*)arg2 routeSharingPolicy:(unsigned char)arg3 routingContextUID:(id)arg4;
- (void)_showRunOpenPanel:(struct OpenPanelParameters { }*)arg1 frameInfo:(const void*)arg2 resultListener:(struct WebOpenPanelResultListenerProxy { }*)arg3;
- (void)_showShareSheet:(const void*)arg1 inRect:(struct optional<WebCore::FloatRect> { union { BOOL x_1_1_1; struct FloatRect { struct FloatPoint { float x_1_3_1; float x_1_3_2; } x_2_2_1; struct FloatSize { float x_2_3_1; float x_2_3_2; } x_2_2_2; } x_1_1_2; } x1; bool x2; })arg2 completionHandler:(void*)arg3;
- (void)_showTapHighlight;
- (void)_showTextStyleOptions:(id)arg1;
- (void)_showTextStyleOptionsForWebView:(id)arg1;
- (void)_simulateElementAction:(long long)arg1 atLocation:(struct CGPoint { double x1; double x2; })arg2;
- (void)_simulateLongPressActionAtLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)_simulateSelectionStart;
- (void)_simulateTextEntered:(id)arg1;
- (void)_singleTapDidReset:(id)arg1;
- (void)_singleTapIdentified:(id)arg1;
- (void)_singleTapRecognized:(id)arg1;
- (void)_startDrag:(struct RetainPtr<CGImage *> { void *x1; })arg1 item:(const void*)arg2;
- (void)_startSuppressingSelectionAssistantForReason:(unsigned char)arg1;
- (void)_stopSuppressingSelectionAssistantForReason:(unsigned char)arg1;
- (struct Color { unsigned long long x1; })_tapHighlightColorForFastClick:(bool)arg1;
- (double)_targetContentZoomScaleForRect:(const struct FloatRect { struct FloatPoint { float x_1_1_1; float x_1_1_2; } x1; struct FloatSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg1 currentScale:(double)arg2 fitEntireRect:(bool)arg3 minimumScale:(double)arg4 maximumScale:(double)arg5;
- (void)_targetedPreviewContainerDidRemoveLastSubview:(id)arg1;
- (void)_tearDownImageAnalysis;
- (id)_textInputContextByScribbleIdentifier:(id)arg1;
- (void)_toggleStrikeThrough:(id)arg1;
- (void)_toggleStrikeThroughForWebView:(id)arg1;
- (id)_touchEndDeferringGestures;
- (bool)_touchEventsMustRequireGestureRecognizerToFail:(id)arg1;
- (id)_touchStartDeferringGestures;
- (void)_translate:(id)arg1;
- (void)_translateForWebView:(id)arg1;
- (void)_transliterateChinese:(id)arg1;
- (void)_transliterateChineseForWebView:(id)arg1;
- (void)_transpose;
- (void)_twoFingerDoubleTapRecognized:(id)arg1;
- (void)_twoFingerSingleTapGestureRecognized:(id)arg1;
- (void)_unregisterPreview;
- (void)_updateAccessory;
- (void)_updateChangedSelection;
- (void)_updateChangedSelection:(bool)arg1;
- (void)_updateForScreen:(id)arg1;
- (void)_updateFrameOfContainerForContextMenuHintPreviewsIfNeeded;
- (void)_updateInitialWritingDirectionIfNecessary;
- (void)_updateInputContextAfterBlurringAndRefocusingElement;
- (void)_updateInteractionTintColor:(id)arg1;
- (void)_updateLongPressAndHighlightLongPressGestures;
- (void)_updateRemoteAccessibilityRegistration:(bool)arg1;
- (void)_updateSelectionAssistantSuppressionState;
- (void)_updateTapHighlight;
- (void)_updateTargetedPreviewScrollViewUsingContainerScrollingNodeID:(unsigned long long)arg1;
- (void)_updateTextInputTraits:(id)arg1;
- (void)_waitForDrawToImageCallbackForPrintFormatterIfNeeded:(id)arg1;
- (void)_waitForDrawToPDFCallbackForPrintFormatterIfNeeded:(id)arg1;
- (void)_webProcessDidCreateContextForVisibilityPropagation;
- (void)_webTouchEvent:(const void*)arg1 preventsNativeGestures:(bool)arg2;
- (void)_webTouchEventsRecognized:(id)arg1;
- (void)_webViewDestroyed;
- (void)_wheelChangedWithEvent:(id)arg1;
- (void)_willBeginTextInteractionInTextInputContext:(id)arg1;
- (void)_willHideMenu:(id)arg1;
- (void)_willPerformAction:(SEL)arg1 sender:(id)arg2;
- (void)_willReceiveEditDragSnapshot;
- (void)_willStartScrollingOrZooming;
- (void)_windowDidMoveToScreenNotification:(id)arg1;
- (unsigned long long)_wk_pageCountForPrintFormatter:(id)arg1;
- (bool)_wk_printFormatterRequiresMainThread;
- (void)_wk_requestDocumentForPrintFormatter:(id)arg1;
- (void)_wk_requestImageForPrintFormatter:(id)arg1;
- (void)_writePromisedAttachmentToPasteboard:(void*)arg1;
- (void)_zoomOutWithOrigin:(struct CGPoint { double x1; double x2; })arg1;
- (void)_zoomToFocusRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 selectionRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 fontSize:(float)arg3 minimumScale:(double)arg4 maximumScale:(double)arg5 allowScaling:(bool)arg6 forceScroll:(bool)arg7;
- (void)_zoomToInitialScaleWithOrigin:(struct CGPoint { double x1; double x2; })arg1;
- (bool)_zoomToRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withOrigin:(struct CGPoint { double x1; double x2; })arg2 fitEntireRect:(bool)arg3 minimumScale:(double)arg4 maximumScale:(double)arg5 minimumScrollDistance:(double)arg6;
- (void)_zoomToRevealFocusedElement;
- (void)accessibilityRetrieveSpeakSelectionContent;
- (void)accessoryAutoFill;
- (void)accessoryClear;
- (void)accessoryDone;
- (void)accessoryOpen;
- (void)accessoryTab:(bool)arg1;
- (void)actionSheetAssistant:(id)arg1 copySubject:(id)arg2 sourceMIMEType:(id)arg3;
- (struct RetainPtr<NSArray> { void *x1; })actionSheetAssistant:(id)arg1 decideActionsForElement:(id)arg2 defaultActions:(struct RetainPtr<NSArray> { void *x1; })arg3;
- (void)actionSheetAssistant:(id)arg1 getAlternateURLForImage:(id)arg2 completion:(id /* block */)arg3;
- (void)actionSheetAssistant:(id)arg1 lookUpImage:(id)arg2 imageURL:(id)arg3 title:(id)arg4 imageBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5;
- (void)actionSheetAssistant:(id)arg1 openElementAtLocation:(struct CGPoint { double x1; double x2; })arg2;
- (void)actionSheetAssistant:(id)arg1 performAction:(unsigned char)arg2;
- (void)actionSheetAssistant:(id)arg1 shareElementWithImage:(id)arg2 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)actionSheetAssistant:(id)arg1 shareElementWithURL:(id)arg2 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (bool)actionSheetAssistant:(id)arg1 shouldIncludeAppLinkActionsForElement:(id)arg2;
- (bool)actionSheetAssistant:(id)arg1 shouldIncludeLookUpImageActionForElement:(id)arg2;
- (bool)actionSheetAssistant:(id)arg1 shouldIncludeShowTextActionForElement:(id)arg2;
- (bool)actionSheetAssistant:(id)arg1 showCustomSheetForElement:(id)arg2;
- (void)actionSheetAssistant:(id)arg1 showTextForImage:(id)arg2 imageURL:(id)arg3 title:(id)arg4 imageBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5;
- (void)actionSheetAssistant:(id)arg1 willStartInteractionWithElement:(id)arg2;
- (void)actionSheetAssistantDidDismissContextMenu:(id)arg1;
- (void)actionSheetAssistantDidShowContextMenu:(id)arg1;
- (void)actionSheetAssistantDidStopInteraction:(id)arg1;
- (bool)actionSheetAssistantShouldIncludeCopySubjectAction:(id)arg1;
- (struct optional<unsigned int> { union { BOOL x_1_1_1; unsigned int x_1_1_2; } x1; bool x2; })activeTouchIdentifierForGestureRecognizer:(id)arg1;
- (void)addTextAlternatives:(id)arg1;
- (void)adjustSelectionWithDelta:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 completionHandler:(id /* block */)arg2;
- (void)alignCenterForWebView:(id)arg1;
- (void)alignJustifiedForWebView:(id)arg1;
- (void)alignLeftForWebView:(id)arg1;
- (void)alignRightForWebView:(id)arg1;
- (id)alternativesForSelectedText;
- (id)appHighlightMenu;
- (void)applyAutocorrection:(id)arg1 toString:(id)arg2 isCandidate:(bool)arg3 withCompletionHandler:(id /* block */)arg4;
- (void)applyAutocorrection:(id)arg1 toString:(id)arg2 shouldUnderline:(bool)arg3 withCompletionHandler:(id /* block */)arg4;
- (void)applyAutocorrection:(id)arg1 toString:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)assignLegacyDataForContextMenuInteraction;
- (const void*)autocorrectionData;
- (id)automaticallySelectedOverlay;
- (long long)baseWritingDirectionForPosition:(id)arg1 inDirection:(long long)arg2;
- (bool)becomeFirstResponder;
- (bool)becomeFirstResponderForWebView;
- (void)beginSelectionChange;
- (void)beginSelectionInDirection:(long long)arg1 completionHandler:(id /* block */)arg2;
- (void)beginTextRecognitionForFullscreenVideo:(void*)arg1 playerViewController:(id)arg2;
- (void)beginTextRecognitionForVideoInElementFullscreen:(void*)arg1 bounds:(struct FloatRect { struct FloatPoint { float x_1_1_1; float x_1_1_2; } x1; struct FloatSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (id)beginningOfDocument;
- (id)browsingContextController;
- (void)buildMenuForWebViewWithBuilder:(id)arg1;
- (bool)canBecomeFirstResponder;
- (bool)canBecomeFirstResponderForWebView;
- (bool)canBecomeFocused;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (bool)canPerformActionForWebView:(SEL)arg1 withSender:(id)arg2;
- (bool)canShowNonEmptySelectionView;
- (void)cancelActiveTextInteractionGestures;
- (void)cancelAutoscroll;
- (void)cancelPointersForGestureRecognizer:(id)arg1;
- (void)cancelTextRecognitionForFullscreenVideo:(id)arg1;
- (void)cancelTextRecognitionForVideoInElementFullscreen;
- (void)captureTextFromCamera:(id)arg1;
- (void)captureTextFromCameraForWebView:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })caretRectForPosition:(id)arg1;
- (void)changeSelectionWithGestureAt:(struct CGPoint { double x1; double x2; })arg1 withGesture:(long long)arg2 withState:(long long)arg3;
- (void)changeSelectionWithGestureAt:(struct CGPoint { double x1; double x2; })arg1 withGesture:(long long)arg2 withState:(long long)arg3 withFlags:(long long)arg4;
- (void)changeSelectionWithTouchAt:(struct CGPoint { double x1; double x2; })arg1 withSelectionTouch:(long long)arg2 baseIsStart:(bool)arg3 withFlags:(long long)arg4;
- (void)changeSelectionWithTouchesFrom:(struct CGPoint { double x1; double x2; })arg1 to:(struct CGPoint { double x1; double x2; })arg2 withGesture:(long long)arg3 withState:(long long)arg4;
- (unsigned short)characterBeforeCaretSelection;
- (id)characterRangeAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)characterRangeByExtendingPosition:(id)arg1 inDirection:(long long)arg2;
- (void)cleanUpDragSourceSessionState;
- (void)cleanUpInteraction;
- (void)cleanUpInteractionPreviewContainers;
- (void)cleanUpScribbleInteraction;
- (void)clearAllDecoratedFoundText;
- (void)clearSelection;
- (void)clearTextIndicator:(unsigned char)arg1;
- (id)closestPositionToPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)closestPositionToPoint:(struct CGPoint { double x1; double x2; })arg1 withinRange:(id)arg2;
- (long long)compareFoundRange:(id)arg1 toRange:(id)arg2 inDocument:(id)arg3;
- (long long)comparePosition:(id)arg1 toPosition:(id)arg2;
- (void)computeClientAndGlobalPointsForDropSession:(id)arg1 outClientPoint:(struct CGPoint { double x1; double x2; }*)arg2 outGlobalPoint:(struct CGPoint { double x1; double x2; }*)arg3;
- (void)contactPickerDidDismiss:(id)arg1;
- (void)contactPickerDidPresent:(id)arg1;
- (id)containerForContextMenuHintPreviews;
- (id)containerForDragPreviews;
- (id)containerForDropPreviews;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentsRectForImageAnalysisInteraction:(id)arg1;
- (id)contextMenuInteraction;
- (id)contextMenuInteraction:(id)arg1 configuration:(id)arg2 dismissalPreviewForItemWithIdentifier:(id)arg3;
- (id)contextMenuInteraction:(id)arg1 configuration:(id)arg2 highlightPreviewForItemWithIdentifier:(id)arg3;
- (id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(struct CGPoint { double x1; double x2; })arg2;
- (void)contextMenuInteraction:(id)arg1 willDisplayMenuForConfiguration:(id)arg2 animator:(id)arg3;
- (void)contextMenuInteraction:(id)arg1 willEndForConfiguration:(id)arg2 animator:(id)arg3;
- (void)contextMenuInteraction:(id)arg1 willPerformPreviewActionForMenuWithConfiguration:(id)arg2 animator:(id)arg3;
- (void)continueContextMenuInteraction:(id /* block */)arg1;
- (void)continueContextMenuInteractionWithDataDetectors:(id /* block */)arg1;
- (void)copy:(id)arg1;
- (void)copyForWebView:(id)arg1;
- (struct CGImage { }*)copySubjectResultForImageContextMenu;
- (struct RetainPtr<VKCImageAnalyzerRequest> { void *x1; })createImageAnalyzerRequest:(unsigned long long)arg1 image:(struct CGImage { }*)arg2;
- (struct RetainPtr<VKCImageAnalyzerRequest> { void *x1; })createImageAnalyzerRequest:(unsigned long long)arg1 image:(struct CGImage { }*)arg2 imageURL:(id)arg3;
- (id)createTargetedContextMenuHintForActionSheetAssistant:(id)arg1;
- (id)currentDragOrDropSession;
- (void)cut:(id)arg1;
- (void)cutForWebView:(id)arg1;
- (id)dataDetectionContextForActionSheetAssistant:(id)arg1 positionInformation:(const void*)arg2;
- (id)dataDetectionContextForPositionInformation:(const void*)arg1;
- (id)dataListTextSuggestions;
- (id)dataListTextSuggestionsInputView;
- (id)dateTimeInputControl;
- (void)dealloc;
- (void)decorateFoundTextRange:(id)arg1 inDocument:(id)arg2 usingStyle:(long long)arg3;
- (void)decreaseSize:(id)arg1;
- (void)decreaseSizeForWebView:(id)arg1;
- (void)deferringGestureRecognizer:(id)arg1 didEndTouchesWithEvent:(id)arg2;
- (void)deferringGestureRecognizer:(id)arg1 didTransitionToState:(long long)arg2;
- (bool)deferringGestureRecognizer:(id)arg1 shouldDeferOtherGestureRecognizer:(id)arg2;
- (bool)deferringGestureRecognizer:(id)arg1 willBeginTouchesWithEvent:(id)arg2;
- (id)deferringGestures;
- (void)deleteBackward;
- (void)didBeginTextSearchOperation;
- (void)didEndTextSearchOperation;
- (void)didFinishScrolling;
- (void)didInsertFinalDictationResult;
- (void)didInterruptScrolling;
- (void)didMoveToWindow;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (void)didUpdateVisibleRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 unobscuredRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 contentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg3 unobscuredRectInScrollViewCoordinates:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 obscuredInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg5 unobscuredSafeAreaInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg6 inputViewBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg7 scale:(double)arg8 minimumScale:(double)arg9 viewStability:(struct OptionSet<WebKit::ViewStabilityFlag> { unsigned char x1; })arg10 enclosedInScrollableAncestorView:(bool)arg11 sendEvenIfUnchanged:(bool)arg12;
- (void)didZoomToScale:(double)arg1;
- (void)dismissFilePicker;
- (void)doAfterComputingImageAnalysisResultsForBackgroundRemoval:(void*)arg1;
- (void)doAfterEditorStateUpdateAfterFocusingElement:(id /* block */)arg1;
- (void)doAfterPositionInformationUpdate:(id /* block */)arg1 forRequest:(struct InteractionInformationRequest { struct IntPoint { int x_1_1_1; int x_1_1_2; } x1; bool x2; bool x3; bool x4; bool x5; bool x6; bool x7; bool x8; bool x9; })arg2;
- (struct DragData { struct IntPoint { int x_1_1_1; int x_1_1_2; } x1; struct IntPoint { int x_2_1_1; int x_2_1_2; } x2; void *x3; struct OptionSet<WebCore::DragOperation> { unsigned char x_4_1_1; } x4; struct OptionSet<WebCore::DragApplicationFlags> { unsigned char x_5_1_1; } x5; struct Vector<WTF::String, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> { struct String {} *x_6_1_1; unsigned int x_6_1_2; unsigned int x_6_1_3; } x6; struct OptionSet<WebCore::DragDestinationAction> { unsigned char x_7_1_1; } x7; struct optional<WTF::ObjectIdentifierGeneric<WebCore::PageIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits>> { union { BOOL x_1_2_1; struct ObjectIdentifierGeneric<WebCore::PageIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits> { unsigned long long x_2_3_1; } x_1_2_2; } x_8_1_1; bool x_8_1_2; } x8; struct String { struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { struct StringImpl {} *x_1_2_1; } x_9_1_1; } x9; bool x10; })dragDataForDropSession:(id)arg1 dragDestinationAction:(unsigned long long)arg2;
- (void)dragInteraction:(id)arg1 item:(id)arg2 willAnimateCancelWithAnimator:(id)arg3;
- (id)dragInteraction:(id)arg1 itemsForBeginningSession:(id)arg2;
- (id)dragInteraction:(id)arg1 previewForCancellingItem:(id)arg2 withDefault:(id)arg3;
- (id)dragInteraction:(id)arg1 previewForLiftingItem:(id)arg2 session:(id)arg3;
- (void)dragInteraction:(id)arg1 session:(id)arg2 didEndWithOperation:(unsigned long long)arg3;
- (void)dragInteraction:(id)arg1 sessionDidTransferItems:(id)arg2;
- (void)dragInteraction:(id)arg1 sessionWillBegin:(id)arg2;
- (void)dragInteraction:(id)arg1 willAnimateLiftWithAnimator:(id)arg2 session:(id)arg3;
- (double)dragLiftDelay;
- (bool)dropInteraction:(id)arg1 canHandleSession:(id)arg2;
- (void)dropInteraction:(id)arg1 concludeDrop:(id)arg2;
- (void)dropInteraction:(id)arg1 item:(id)arg2 willAnimateDropWithAnimator:(id)arg3;
- (void)dropInteraction:(id)arg1 performDrop:(id)arg2;
- (id)dropInteraction:(id)arg1 previewForDroppingItem:(id)arg2 withDefault:(id)arg3;
- (void)dropInteraction:(id)arg1 sessionDidEnd:(id)arg2;
- (void)dropInteraction:(id)arg1 sessionDidEnter:(id)arg2;
- (void)dropInteraction:(id)arg1 sessionDidExit:(id)arg2;
- (id)dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2;
- (void)endEditingAndUpdateFocusAppearanceWithReason:(long long)arg1;
- (id)endOfDocument;
- (void)endSelectionChange;
- (bool)ensurePositionInformationIsUpToDate:(struct InteractionInformationRequest { struct IntPoint { int x_1_1_1; int x_1_1_2; } x1; bool x2; bool x3; bool x4; bool x5; bool x6; bool x7; bool x8; bool x9; })arg1;
- (void)executeEditCommandWithCallback:(id)arg1;
- (id)filePickerAcceptedTypeIdentifiers;
- (bool)fileUploadPanelDestinationIsManaged:(id)arg1;
- (void)fileUploadPanelDidDismiss:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })firstRectForRange:(id)arg1;
- (const void*)focusedElementInformation;
- (void*)focusedSelectElementOptions;
- (id)fontForCaretSelection;
- (id)formAccessoryView;
- (id)formInputLabel;
- (void)generateSyntheticEditingCommand:(unsigned char)arg1;
- (bool)gestureRecognizer:(id)arg1 canBePreventedByGestureRecognizer:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 canPreventGestureRecognizer:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 isInterruptingMomentumScrollingWithEvent:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldIgnoreWebTouchWithEvent:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldReceivePress:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (void*)gestureRecognizerConsistencyEnforcer;
- (bool)gestureRecognizerMayDoubleTapToZoomWebView:(id)arg1;
- (bool)gestureRecognizerMayPanWebView:(id)arg1;
- (bool)gestureRecognizerMayPinchToZoomWebView:(id)arg1;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)handleKeyWebEvent:(id)arg1;
- (void)handleKeyWebEvent:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (bool)hasContent;
- (bool)hasHiddenContentEditable;
- (bool)hasMarkedText;
- (bool)hasPendingImageAnalysisRequest;
- (bool)hasSelectablePositionAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (bool)hasSelectableTextForImageContextMenu;
- (bool)hasSelection;
- (bool)hasText;
- (bool)hasVisualSearchResultsForImageContextMenu;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)imageAnalysisGestureDidBegin:(id)arg1;
- (void)imageAnalysisGestureDidFail:(id)arg1;
- (void)imageAnalysisGestureDidTimeOut:(id)arg1;
- (id)imageAnalysisGestureRecognizer;
- (bool)imageAnalysisInteraction:(id)arg1 shouldBeginAtPoint:(struct CGPoint { double x1; double x2; })arg2 forAnalysisType:(unsigned long long)arg3;
- (id)imageAnalyzer;
- (void)increaseSize:(id)arg1;
- (void)increaseSizeForWebView:(id)arg1;
- (void)indentForWebView:(id)arg1;
- (void)indirectScribbleInteraction:(id)arg1 didFinishWritingInElement:(id)arg2;
- (void)indirectScribbleInteraction:(id)arg1 focusElementIfNeeded:(id)arg2 referencePoint:(struct CGPoint { double x1; double x2; })arg3 completion:(id /* block */)arg4;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })indirectScribbleInteraction:(id)arg1 frameForElement:(id)arg2;
- (bool)indirectScribbleInteraction:(id)arg1 isElementFocused:(id)arg2;
- (void)indirectScribbleInteraction:(id)arg1 requestElementsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 completion:(id /* block */)arg3;
- (void)indirectScribbleInteraction:(id)arg1 willBeginWritingInElement:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 processPool:(struct NakedRef<WebKit::WebProcessPool> { struct WebProcessPool {} *x1; })arg2 configuration:(void*)arg3 webView:(id)arg4;
- (id)inputAccessoryView;
- (id)inputAccessoryViewForWebView;
- (id)inputAssistantItem;
- (id)inputAssistantItemForWebView;
- (id)inputDelegate;
- (id)inputLabelText;
- (id)inputView;
- (id)inputViewForWebView;
- (void)insertNestedOrderedListForWebView:(id)arg1;
- (void)insertNestedUnorderedListForWebView:(id)arg1;
- (void)insertOrderedListForWebView:(id)arg1;
- (void)insertText:(id)arg1;
- (void)insertText:(id)arg1 alternatives:(id)arg2 style:(long long)arg3;
- (void)insertTextPlaceholderWithSize:(struct CGSize { double x1; double x2; })arg1 completionHandler:(id /* block */)arg2;
- (void)insertTextSuggestion:(id)arg1;
- (void)insertUnorderedListForWebView:(id)arg1;
- (id)insertionPointColor;
- (void)installImageAnalysisInteraction:(id)arg1;
- (id)interactionAssistant;
- (long long)interfaceOrientation;
- (double)inverseScale;
- (bool)isAnimatingDragCancel;
- (bool)isAnyTouchOverActiveArea:(id)arg1;
- (bool)isEditable;
- (bool)isFocusingElement;
- (bool)isImageBacked;
- (bool)isPosition:(id)arg1 atBoundary:(long long)arg2 inDirection:(long long)arg3;
- (bool)isPosition:(id)arg1 withinTextUnit:(long long)arg2 inDirection:(long long)arg3;
- (bool)isReplaceAllowed;
- (bool)isResigningFirstResponder;
- (bool)isScrollableForKeyboardScrollViewAnimator:(id)arg1;
- (bool)isShowingDataListSuggestions;
- (bool)isShowingInspectorIndication;
- (bool)isTextRecognitionInFullscreenVideoEnabled;
- (double)keyboardScrollViewAnimator:(id)arg1 distanceForIncrement:(unsigned char)arg2 inDirection:(unsigned char)arg3;
- (void)keyboardScrollViewAnimatorDidFinishScrolling:(id)arg1;
- (void)keyboardScrollViewAnimatorWillScroll:(id)arg1;
- (struct CGPoint { double x1; double x2; })lastInteractionLocation;
- (id)machineReadableCodeSubMenuForImageContextMenu;
- (void)makeTextWritingDirectionLeftToRight:(id)arg1;
- (void)makeTextWritingDirectionLeftToRightForWebView:(id)arg1;
- (void)makeTextWritingDirectionNatural:(id)arg1;
- (void)makeTextWritingDirectionNaturalForWebView:(id)arg1;
- (void)makeTextWritingDirectionRightToLeft:(id)arg1;
- (void)makeTextWritingDirectionRightToLeftForWebView:(id)arg1;
- (id)markedText;
- (id)markedTextRange;
- (id)markedTextStyle;
- (id)menuWithInlineAction:(id)arg1 image:(id)arg2 identifier:(id)arg3 handler:(void*)arg4;
- (id)metadataDictionariesForDictationResults;
- (void)modifierFlagsDidChangeFrom:(long long)arg1 to:(long long)arg2;
- (void)mouseGestureRecognizerChanged:(id)arg1;
- (void)moveBackward:(unsigned int)arg1;
- (void)moveByOffset:(long long)arg1;
- (void)moveForward:(unsigned int)arg1;
- (void)moveSelectionAtBoundary:(long long)arg1 inDirection:(long long)arg2 completionHandler:(id /* block */)arg3;
- (struct ObjectIdentifierGeneric<WebKit::TapIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits> { unsigned long long x1; })nextTapIdentifier;
- (long long)numberOfPreviewItemsInPreviewController:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (long long)offsetFromPosition:(id)arg1 toPosition:(id)arg2;
- (long long)offsetFromPosition:(id)arg1 toPosition:(id)arg2 inDocument:(id)arg3;
- (void)outdentForWebView:(id)arg1;
- (void*)page;
- (void)paste:(id)arg1;
- (void)pasteAndMatchStyle:(id)arg1;
- (void)pasteAndMatchStyleForWebView:(id)arg1;
- (void)pasteForWebView:(id)arg1;
- (void)pasteWithCompletionHandler:(id /* block */)arg1;
- (void)performTextSearchWithQueryString:(id)arg1 usingOptions:(id)arg2 resultAggregator:(id)arg3;
- (id)placeholderForDynamicallyInsertedImageAnalysisActions;
- (bool)pointIsNearMarkedText:(struct CGPoint { double x1; double x2; })arg1;
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;
- (id)pointerRegionForPositionInformation:(void*)arg1 point:(struct CGPoint { double x1; double x2; })arg2;
- (id)positionFromPosition:(id)arg1 inDirection:(long long)arg2 offset:(long long)arg3;
- (id)positionFromPosition:(id)arg1 offset:(long long)arg2;
- (id)positionFromPosition:(id)arg1 toBoundary:(long long)arg2 inDirection:(long long)arg3;
- (const void*)positionInformation;
- (struct optional<WebKit::InteractionInformationAtPosition> { union { BOOL x_1_1_1; struct InteractionInformationAtPosition { struct InteractionInformationRequest { struct IntPoint { int x_1_4_1; int x_1_4_2; } x_1_3_1; bool x_1_3_2; bool x_1_3_3; bool x_1_3_4; bool x_1_3_5; bool x_1_3_6; bool x_1_3_7; bool x_1_3_8; bool x_1_3_9; } x_2_2_1; bool x_2_2_2; struct optional<bool> { union { BOOL x_1_4_1; bool x_1_4_2; } x_3_3_1; bool x_3_3_2; } x_2_2_3; unsigned char x_2_2_4; bool x_2_2_5; bool x_2_2_6; bool x_2_2_7; bool x_2_2_8; bool x_2_2_9; bool x_2_2_10; bool x_2_2_11; bool x_2_2_12; bool x_2_2_13; bool x_2_2_14; bool x_2_2_15; bool x_2_2_16; bool x_2_2_17; unsigned long long x_2_2_18; bool x_2_2_19; bool x_2_2_20; bool x_2_2_21; bool x_2_2_22; bool x_2_2_23; bool x_2_2_24; struct FloatPoint { float x_25_3_1; float x_25_3_2; } x_2_2_25; struct URL { struct String { struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { struct StringImpl {} *x_1_5_1; } x_1_4_1; } x_26_3_1; unsigned int x_26_3_2 : 1; unsigned int x_26_3_3 : 1; unsigned int x_26_3_4 : 1; unsigned int x_26_3_5 : 3; unsigned int x_26_3_6 : 26; unsigned int x_26_3_7; unsigned int x_26_3_8; unsigned int x_26_3_9; unsigned int x_26_3_10; unsigned int x_26_3_11; unsigned int x_26_3_12; unsigned int x_26_3_13; } x_2_2_26; } x_1_1_2; } x1; })positionInformationForActionSheetAssistant:(id)arg1;
- (bool)positionInformationHasImageOverlayDataDetector;
- (id)positionWithinRange:(id)arg1 farthestInDirection:(long long)arg2;
- (void)prepareSelectionForContextMenuWithLocationInView:(struct CGPoint { double x1; double x2; })arg1 completionHandler:(id /* block */)arg2;
- (void)presentContextMenu:(id)arg1 atLocation:(struct CGPoint { double x1; double x2; })arg2;
- (void)presentVisualSearchPreviewControllerForImage:(id)arg1 imageURL:(id)arg2 title:(id)arg3 imageBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 appearanceActions:(unsigned long long)arg5;
- (bool)preventsPanningInXAxis;
- (bool)preventsPanningInYAxis;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })previewController:(id)arg1 frameForPreviewItem:(id)arg2 inSourceView:(id*)arg3;
- (id)previewController:(id)arg1 previewItemAtIndex:(long long)arg2;
- (id)previewController:(id)arg1 transitionImageForPreviewItem:(id)arg2 contentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg3;
- (void)previewControllerDidDismiss:(id)arg1;
- (id)provideDataForItem:(id)arg1;
- (id)rangeEnclosingPosition:(id)arg1 withGranularity:(long long)arg2 inDirection:(long long)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectContainingCaretSelection;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectForNSRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (struct FloatRect { struct FloatPoint { float x_1_1_1; float x_1_1_2; } x1; struct FloatSize { float x_2_1_1; float x_2_1_2; } x2; })rectToRevealWhenZoomingToFocusedElement;
- (void)reloadContextViewForPresentedListViewController;
- (id)removeBackgroundMenu;
- (void)removeContextMenuViewIfPossibleForActionSheetAssistant:(id)arg1;
- (void)removeEmojiAlternatives;
- (void)removeTextPlaceholder:(id)arg1 willInsertText:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)replace:(id)arg1;
- (void)replaceDictatedText:(id)arg1 withText:(id)arg2;
- (void)replaceForWebView:(id)arg1;
- (void)replaceFoundTextInRange:(id)arg1 inDocument:(id)arg2 withText:(id)arg3;
- (void)replaceRange:(id)arg1 withText:(id)arg2;
- (void)replaceRangeWithTextWithoutClosingTyping:(id)arg1 replacementText:(id)arg2;
- (void)replaceText:(id)arg1 withText:(id)arg2;
- (void)requestAsynchronousPositionInformationUpdate:(struct InteractionInformationRequest { struct IntPoint { int x_1_1_1; int x_1_1_2; } x1; bool x2; bool x3; bool x4; bool x5; bool x6; bool x7; bool x8; bool x9; })arg1;
- (void)requestAutocorrectionContextWithCompletionHandler:(id /* block */)arg1;
- (void)requestAutocorrectionRectsForString:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)requestDictationContext:(id /* block */)arg1;
- (void)requestDocumentContext:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)requestPreferredArrowDirectionForEditMenuWithCompletionHandler:(id /* block */)arg1;
- (void)requestRVItemInSelectedRangeWithCompletionHandler:(id /* block */)arg1;
- (void)requestRectForFoundTextRange:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)requestRectsToEvadeForSelectionCommandsWithCompletionHandler:(id /* block */)arg1;
- (void)requestTextRecognition:(id)arg1 imageData:(void*)arg2 sourceLanguageIdentifier:(id)arg3 targetLanguageIdentifier:(id)arg4 completionHandler:(void*)arg5;
- (bool)requiresAccessoryView;
- (bool)requiresKeyEvents;
- (bool)resignFirstResponder;
- (bool)resignFirstResponderForWebView;
- (id)rootContentView;
- (void)runModalJavaScriptDialog:(void*)arg1;
- (void)scrollRangeToVisible:(id)arg1 inDocument:(id)arg2;
- (void)scrollSelectionToVisible:(bool)arg1;
- (void)scrollViewWillStartPanOrPinchGesture;
- (void)select:(id)arg1;
- (void)selectAll;
- (void)selectAll:(id)arg1;
- (void)selectAllForWebView:(id)arg1;
- (id)selectControl;
- (void)selectForWebView:(id)arg1;
- (bool)selectFormAccessoryHasCheckedItemAtRow:(long long)arg1;
- (void)selectFormAccessoryPickerRow:(long long)arg1;
- (id)selectFormPopoverTitle;
- (void)selectPositionAtBoundary:(long long)arg1 inDirection:(long long)arg2 fromPoint:(struct CGPoint { double x1; double x2; })arg3 completionHandler:(id /* block */)arg4;
- (void)selectPositionAtPoint:(struct CGPoint { double x1; double x2; })arg1 completionHandler:(id /* block */)arg2;
- (void)selectPositionAtPoint:(struct CGPoint { double x1; double x2; })arg1 withContextRequest:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)selectTextWithGranularity:(long long)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2 completionHandler:(id /* block */)arg3;
- (void)selectWordBackward;
- (void)selectWordForReplacement;
- (id)selectedDOMRange;
- (id)selectedText;
- (id)selectedTextForActionSheetAssistant:(id)arg1;
- (id)selectedTextRange;
- (id)selectionBarColor;
- (long long)selectionGranularity;
- (id)selectionHighlightColor;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })selectionRange;
- (id)selectionRectsForRange:(id)arg1;
- (void)setAttributedMarkedText:(id)arg1 selectedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setBaseWritingDirection:(long long)arg1 forRange:(id)arg2;
- (void)setBottomBufferHeight:(double)arg1;
- (void)setContinuousSpellCheckingEnabled:(bool)arg1;
- (void)setDataListTextSuggestions:(id)arg1;
- (void)setDataListTextSuggestionsInputView:(id)arg1;
- (void)setInputDelegate:(id)arg1;
- (bool)setIsEditable:(bool)arg1;
- (void)setMarkedText:(id)arg1;
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setMarkedTextStyle:(id)arg1;
- (void)setSelectedColorForColorPicker:(id)arg1;
- (void)setSelectedDOMRange:(id)arg1 affinityDownstream:(bool)arg2;
- (void)setSelectedTextRange:(id)arg1;
- (void)setShowingInspectorIndication:(bool)arg1;
- (void)setSizeChangedSinceLastVisibleContentRectUpdate:(bool)arg1;
- (void)setTextIndicatorAnimationProgress:(float)arg1;
- (void)setTimePickerValueToHour:(long long)arg1 minute:(long long)arg2;
- (void)setUpDragAndDropInteractions;
- (void)setUpInteraction;
- (void)setUpMouseGestureRecognizer;
- (void)setUpPointerInteraction;
- (void)setUpScribbleInteraction;
- (void)setUpTextIndicator:(struct Ref<WebCore::TextIndicator, WTF::RawPtrTraits<WebCore::TextIndicator>> { struct TextIndicator {} *x1; })arg1;
- (void)setUpTextSelectionAssistant;
- (void)shareSheet:(id)arg1 willShowActivityItems:(id)arg2;
- (void)shareSheetDidDismiss:(id)arg1;
- (bool)shouldAllowAppHighlightCreation;
- (bool)shouldAllowHidingSelectionCommands;
- (bool)shouldDeferGestureDueToImageAnalysis:(id)arg1;
- (bool)shouldHideSelectionWhenScrolling;
- (bool)shouldIgnoreKeyboardWillHideNotification;
- (bool)shouldShowAutomaticKeyboardUI;
- (bool)shouldSuppressUpdateCandidateView;
- (bool)shouldSynthesizeKeyEvents;
- (bool)shouldUseMouseGestureRecognizer;
- (id)singleTapGestureRecognizer;
- (bool)sizeChangedSinceLastVisibleContentRectUpdate;
- (void)startAutoscroll:(struct CGPoint { double x1; double x2; })arg1;
- (void)startDeferringInputViewUpdates:(struct OptionSet<WebKit::InputViewUpdateDeferralSource> { unsigned char x1; })arg1;
- (void)startFadeOut;
- (void)startRelinquishingFirstResponderToFocusedElement;
- (void)stopDeferringInputViewUpdates:(struct OptionSet<WebKit::InputViewUpdateDeferralSource> { unsigned char x1; })arg1;
- (void)stopDeferringInputViewUpdatesForAllSources;
- (void)stopRelinquishingFirstResponderToFocusedElement;
- (id)supportedPasteboardTypesForCurrentSelection;
- (bool)supportsImagePaste;
- (bool)supportsTextReplacement;
- (bool)supportsTextReplacementForWebView;
- (bool)supportsTextSelectionWithCharacterGranularity;
- (void)takeTraitsFrom:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })tapHighlightViewRect;
- (id)targetForAction:(SEL)arg1 withSender:(id)arg2;
- (id)targetForActionForWebView:(SEL)arg1 withSender:(id)arg2;
- (void)teardownDragAndDropInteractions;
- (void)teardownTextIndicatorLayer;
- (id)textColorForCaretSelection;
- (id)textContentTypeForTesting;
- (id)textEffectsWindow;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })textFirstRect;
- (id)textInRange:(id)arg1;
- (id)textInputTraits;
- (id)textInputTraitsForWebView;
- (id)textInteractionAssistant;
- (id)textInteractionAssistantContextMenuInteraction;
- (bool)textInteractionGesture:(long long)arg1 shouldBeginAtPoint:(struct CGPoint { double x1; double x2; })arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })textLastRect;
- (id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2;
- (id)textStylingAtPosition:(id)arg1 inDirection:(long long)arg2;
- (double)timePickerValueHour;
- (double)timePickerValueMinute;
- (void)tintColorDidChange;
- (void)toggleBoldface:(id)arg1;
- (void)toggleBoldfaceForWebView:(id)arg1;
- (void)toggleItalics:(id)arg1;
- (void)toggleItalicsForWebView:(id)arg1;
- (void)toggleStrikeThroughForWebView:(id)arg1;
- (void)toggleUnderline:(id)arg1;
- (void)toggleUnderlineForWebView:(id)arg1;
- (id)tokenizer;
- (id)touchActionActiveTouches;
- (id)touchEventGestureRecognizer;
- (id)undoManagerForWebView;
- (void)uninstallImageAnalysisInteraction;
- (void)unmarkText;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })unobscuredContentRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })unoccludedWindowBoundsForActionSheetAssistant:(id)arg1;
- (id)unscaledView;
- (void)unsuppressSoftwareKeyboardUsingLastAutocorrectionContextIfNeeded;
- (void)updateCurrentFocusedElementInformation:(void*)arg1;
- (void)updateFixedClippingView:(struct FloatRect { struct FloatPoint { float x_1_1_1; float x_1_1_2; } x1; struct FloatSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)updateFocusedElementFocusedWithDataListDropdown:(bool)arg1;
- (void)updateFocusedElementSelectedIndex:(unsigned int)arg1 allowsMultipleSelection:(bool)arg2;
- (void)updateFocusedElementValue:(id)arg1;
- (void)updateFocusedElementValueAsColor:(id)arg1;
- (void)updateImageAnalysisForContextMenuPresentation:(id)arg1;
- (void)updatePositionInformationForActionSheetAssistant:(id)arg1;
- (void)updateSelectionWithExtentPoint:(struct CGPoint { double x1; double x2; })arg1 completionHandler:(id /* block */)arg2;
- (void)updateSelectionWithExtentPoint:(struct CGPoint { double x1; double x2; })arg1 withBoundary:(long long)arg2 completionHandler:(id /* block */)arg3;
- (void)updateSoftwareKeyboardSuppressionStateFromWebView;
- (void)updateTextSuggestionsForInputDelegate;
- (void)useSelectionForFind:(id)arg1;
- (void)useSelectionForFindForWebView:(id)arg1;
- (bool)validateImageAnalysisRequestIdentifier:(struct ObjectIdentifierGeneric<WebKit::ImageAnalysisRequestIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits> { unsigned long long x1; })arg1;
- (id)webSelectionRects;
- (id)webSelectionRectsForSelectionGeometries:(const void*)arg1;
- (id)webView;
- (id)webViewUIDelegate;
- (void)willDismissEditMenuWithAnimator:(id)arg1;
- (void)willFinishIgnoringCalloutBarFadeAfterPerformingAction;
- (void)willInsertFinalDictationResult;
- (void)willMoveToWindow:(id)arg1;
- (void)willPresentEditMenuWithAnimator:(id)arg1;
- (void)willStartZoomOrScroll;
- (id)wordContainingCaretSelection;
- (id)wordRangeContainingCaretSelection;

@end
