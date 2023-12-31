
@interface UIKeyboardDockItem : NSObject {
    UIKeyboardDockItemButton * _button;
    NSString * _identifier;
    UIImage * _image;
    NSString * _imageName;
    UILongPressGestureRecognizer * _longPressGestureRecognizer;
    UIPanGestureRecognizer * _panGestureRecognizer;
    struct CGPoint { 
        double x; 
        double y; 
    }  _touchDownPoint;
}

@property (nonatomic) bool active;
@property (nonatomic, retain) UIKeyboardDockItemButton *button;
@property (nonatomic) bool enabled;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, retain) NSString *imageName;
@property (nonatomic, retain) UILongPressGestureRecognizer *longPressGestureRecognizer;
@property (nonatomic, retain) UIPanGestureRecognizer *panGestureRecognizer;
@property (nonatomic) struct CGPoint { double x1; double x2; } touchDownPoint;
@property (nonatomic, readonly) UIKeyboardDockItemButton *view;

+ (id)_darkStyleGlyphColor;
+ (id)_standardGlyphColor;

- (void).cxx_destruct;
- (bool)active;
- (id)button;
- (bool)enabled;
- (id)identifier;
- (id)image;
- (id)imageName;
- (id)imageWithRenderConfig:(id)arg1;
- (id)initWithImageName:(id)arg1 identifier:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)longPressGestureRecognizer;
- (id)panGestureRecognizer;
- (void)setActive:(bool)arg1;
- (void)setButton:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setImageName:(id)arg1;
- (void)setLongPressGestureRecognizer:(id)arg1;
- (void)setPanGestureRecognizer:(id)arg1;
- (void)setTouchDownPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })touchDownPoint;
- (id)view;

@end
