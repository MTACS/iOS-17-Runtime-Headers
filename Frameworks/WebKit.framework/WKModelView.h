
@interface WKModelView : WKCompositingView <WKNativelyInteractible> {
    struct String { 
        struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { 
            struct StringImpl {} *m_ptr; 
        } m_impl; 
    }  _filePath;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _lastBounds;
    struct ProcessQualified<WTF::ObjectIdentifierGeneric<WebCore::PlatformLayerIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits>> { 
        struct ObjectIdentifierGeneric<WebCore::PlatformLayerIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits> { 
            unsigned long long m_identifier; 
        } m_object; 
        struct ObjectIdentifierGeneric<WebCore::ProcessIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits> { 
            unsigned long long m_identifier; 
        } m_processIdentifier; 
    }  _layerID;
    struct RetainPtr<WKModelInteractionGestureRecognizer> { 
        void *m_ptr; 
    }  _modelInteractionGestureRecognizer;
    struct WeakPtr<WebKit::WebPageProxy, WTF::DefaultWeakPtrImpl> { 
        struct RefPtr<WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>, WTF::DefaultRefDerefTraits<WTF::DefaultWeakPtrImpl>> { 
            struct DefaultWeakPtrImpl {} *m_ptr; 
        } m_impl; 
    }  _page;
    struct RetainPtr<ASVInlinePreview> { 
        void *m_ptr; 
    }  _preview;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) ASVInlinePreview *preview;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)createFileForModel:(void*)arg1;
- (void)createPreview;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithModel:(void*)arg1 layerID:(struct ProcessQualified<WTF::ObjectIdentifierGeneric<WebCore::PlatformLayerIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits>> { struct ObjectIdentifierGeneric<WebCore::PlatformLayerIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits> { unsigned long long x_1_1_1; } x1; struct ObjectIdentifierGeneric<WebCore::ProcessIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits> { unsigned long long x_2_1_1; } x2; })arg2 page:(void*)arg3;
- (void)layoutSubviews;
- (id)preview;
- (void)updateBounds;

@end
