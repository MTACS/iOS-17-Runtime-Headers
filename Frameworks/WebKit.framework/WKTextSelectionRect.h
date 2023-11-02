
@interface WKTextSelectionRect : UITextSelectionRect {
    double  _scaleFactor;
    struct SelectionGeometry { 
        struct FloatQuad { 
            struct FloatPoint { 
                float m_x; 
                float m_y; 
            } m_p1; 
            struct FloatPoint { 
                float m_x; 
                float m_y; 
            } m_p2; 
            struct FloatPoint { 
                float m_x; 
                float m_y; 
            } m_p3; 
            struct FloatPoint { 
                float m_x; 
                float m_y; 
            } m_p4; 
        } m_quad; 
        bool m_behavior; 
        bool m_direction; 
        int m_minX; 
        int m_maxX; 
        int m_maxY; 
        int m_lineNumber; 
        bool m_isLineBreak; 
        bool m_isFirstOnLine; 
        bool m_isLastOnLine; 
        bool m_containsStart; 
        bool m_containsEnd; 
        bool m_isHorizontal; 
        bool m_isInFixedPosition; 
        bool m_isRubyText; 
        int m_pageNumber; 
        struct optional<WebCore::IntRect> { 
            union { 
                BOOL __null_state_; 
                struct IntRect { 
                    struct IntPoint { 
                        int m_x; 
                        int m_y; 
                    } m_location; 
                    struct IntSize { 
                        int m_width; 
                        int m_height; 
                    } m_size; 
                } __val_; 
            } ; 
            bool __engaged_; 
        } m_cachedEnclosingRect; 
    }  _selectionGeometry;
}

- (id).cxx_construct;
- (id)_customHandleInfo;
- (id)_path;
- (bool)containsEnd;
- (bool)containsStart;
- (id)initWithCGRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithSelectionGeometry:(const void*)arg1 scaleFactor:(double)arg2;
- (bool)isVertical;
- (id)range;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rect;
- (long long)writingDirection;

@end
