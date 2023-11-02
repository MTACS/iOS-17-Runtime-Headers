
@interface _UIColorPickerColorQueueContainer : NSObject {
    UIColor * _color;
    NSString * _colorSpace;
    bool  _isVolatile;
}

@property (nonatomic, retain) UIColor *color;
@property (nonatomic, retain) NSString *colorSpace;
@property (nonatomic) bool isVolatile;

- (void).cxx_destruct;
- (id)color;
- (id)colorSpace;
- (bool)isVolatile;
- (void)setColor:(id)arg1;
- (void)setColorSpace:(id)arg1;
- (void)setIsVolatile:(bool)arg1;

@end
