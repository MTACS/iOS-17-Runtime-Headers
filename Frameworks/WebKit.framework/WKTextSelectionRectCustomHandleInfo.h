
@interface WKTextSelectionRectCustomHandleInfo : UITextSelectionRectCustomHandleInfo {
    bool  _isHorizontal;
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
    }  _quad;
}

- (id).cxx_construct;
- (struct CGPoint { double x1; double x2; })bottomLeft;
- (struct CGPoint { double x1; double x2; })bottomRight;
- (id)initWithFloatQuad:(const struct FloatQuad { struct FloatPoint { float x_1_1_1; float x_1_1_2; } x1; struct FloatPoint { float x_2_1_1; float x_2_1_2; } x2; struct FloatPoint { float x_3_1_1; float x_3_1_2; } x3; struct FloatPoint { float x_4_1_1; float x_4_1_2; } x4; }*)arg1 isHorizontal:(bool)arg2;
- (struct CGPoint { double x1; double x2; })topLeft;
- (struct CGPoint { double x1; double x2; })topRight;

@end
