
@interface CUIColor : NSObject <NSCopying> {
    struct CGColor { } * _cgColor;
}

@property (nonatomic, readonly) struct CGColor { }*CGColor;

+ (id)colorWithCGColor:(struct CGColor { }*)arg1;
+ (id)colorWithCIColor:(id)arg1;

- (struct CGColor { }*)CGColor;
- (id)colorUsingCGColorSpace:(struct CGColorSpace { }*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)initWithCGColor:(struct CGColor { }*)arg1;
- (id)initWithCIColor:(id)arg1;

@end
