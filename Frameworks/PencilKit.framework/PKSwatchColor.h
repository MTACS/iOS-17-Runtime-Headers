
@interface PKSwatchColor : NSObject {
    UIColor * _color;
    NSString * _identifier;
}

@property (nonatomic, readonly) UIColor *color;
@property (nonatomic, readonly, copy) NSString *identifier;

+ (id)swatchColor:(id)arg1 identifier:(id)arg2;

- (void).cxx_destruct;
- (id)color;
- (id)identifier;
- (id)initWithColor:(id)arg1 identifier:(id)arg2;

@end
