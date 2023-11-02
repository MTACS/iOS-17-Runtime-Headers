
@interface TTKKey : NSObject {
    UIKBTree * _key;
    short  _keyCode;
    ACTKeyboardLayoutUtils * _layoutUtils;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frame;
@property (nonatomic, readonly) short keyCode;
@property (nonatomic, readonly, copy) NSString *string;

- (void).cxx_destruct;
- (struct CGPoint { double x1; double x2; })center;
- (id)description;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (id)initWithUIKBTree:(id)arg1 layoutUtils:(id)arg2;
- (short)keyCode;
- (id)string;

@end
