
@interface _SFKeyboardGeometry : NSObject {
    struct CGSize { 
        double width; 
        double height; 
    }  _sizeWithBar;
    struct CGSize { 
        double width; 
        double height; 
    }  _sizeWithoutBar;
}

@property (nonatomic, readonly) struct CGSize { double x1; double x2; } sizeWithBar;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } sizeWithoutBar;

+ (id)_keyboardGeometryForCurrentDeviceWithInterfaceOrientation:(long long)arg1;
+ (id)keyboardGeometryForInterfaceOrientation:(long long)arg1;

- (id)_initWithFallbackSizeForOrientation:(long long)arg1;
- (id)_initWithSizeWithoutBar:(struct CGSize { double x1; double x2; })arg1 sizeWithBar:(struct CGSize { double x1; double x2; })arg2;
- (struct CGSize { double x1; double x2; })sizeWithBar;
- (struct CGSize { double x1; double x2; })sizeWithoutBar;

@end
