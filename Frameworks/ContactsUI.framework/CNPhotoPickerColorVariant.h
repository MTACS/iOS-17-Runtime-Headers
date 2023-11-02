
@interface CNPhotoPickerColorVariant : NSObject {
    UIColor * _color;
    NSString * _colorName;
}

@property (nonatomic, readonly) UIColor *color;
@property (nonatomic, readonly) NSString *colorName;

- (void).cxx_destruct;
- (id)color;
- (id)colorName;
- (id)initWithColor:(id)arg1 named:(id)arg2;
- (bool)isEqual:(id)arg1;

@end
