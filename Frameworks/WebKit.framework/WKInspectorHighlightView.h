
@interface WKInspectorHighlightView : UIView {
    struct optional<WebCore::InspectorOverlayHighlight> { 
        union { 
            BOOL __null_state_; 
            struct InspectorOverlayHighlight { 
                struct Color { 
                    unsigned long long m_colorAndFlags; 
                } contentColor; 
                struct Color { 
                    unsigned long long m_colorAndFlags; 
                } contentOutlineColor; 
                struct Color { 
                    unsigned long long m_colorAndFlags; 
                } paddingColor; 
                struct Color { 
                    unsigned long long m_colorAndFlags; 
                } borderColor; 
                struct Color { 
                    unsigned long long m_colorAndFlags; 
                } marginColor; 
                int type; 
                struct Vector<WebCore::FloatQuad, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> { 
                    struct FloatQuad {} *m_buffer; 
                    unsigned int m_capacity; 
                    unsigned int m_size; 
                } quads; 
                struct Vector<WebCore::InspectorOverlayHighlight::GridHighlightOverlay, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> { 
                    struct GridHighlightOverlay {} *m_buffer; 
                    unsigned int m_capacity; 
                    unsigned int m_size; 
                } gridHighlightOverlays; 
                struct Vector<WebCore::InspectorOverlayHighlight::FlexHighlightOverlay, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> { 
                    struct FlexHighlightOverlay {} *m_buffer; 
                    unsigned int m_capacity; 
                    unsigned int m_size; 
                } flexHighlightOverlays; 
                bool usePageCoordinates; 
            } __val_; 
        } ; 
        bool __engaged_; 
    }  _highlight;
    struct RetainPtr<NSMutableArray<CAShapeLayer *>> { 
        void *m_ptr; 
    }  _layers;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_createLayers:(unsigned long long)arg1;
- (void)_layoutForNodeHighlight:(const void*)arg1 offset:(unsigned int)arg2;
- (void)_layoutForNodeListHighlight:(const void*)arg1;
- (void)_layoutForRectsHighlight:(const void*)arg1;
- (void)_removeAllLayers;
- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)update:(const void*)arg1 scale:(double)arg2 frame:(const struct FloatRect { struct FloatPoint { float x_1_1_1; float x_1_1_2; } x1; struct FloatSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg3;

@end
