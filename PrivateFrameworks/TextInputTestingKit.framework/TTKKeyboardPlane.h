
@interface TTKKeyboardPlane : NSObject {
    UIKBTree * _keyplane;
    ACTKeyboardLayoutUtils * _layoutUtils;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frame;

- (void).cxx_destruct;
- (id)findKey:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (id)initWithUIKBTree:(id)arg1 layoutUtils:(id)arg2;
- (id)initWithUIKBTree:(id)arg1 locale:(id)arg2;
- (id)jsonFrameArrayForWord:(id)arg1;

@end
