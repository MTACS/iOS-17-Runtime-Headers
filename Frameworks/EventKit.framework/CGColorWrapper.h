
@interface CGColorWrapper : NSObject {
    struct CGColor { } * _color;
}

@property (nonatomic, readonly) struct CGColor { }*color;

- (struct CGColor { }*)color;
- (void)dealloc;
- (id)initWithCGColor:(struct CGColor { }*)arg1;

@end
