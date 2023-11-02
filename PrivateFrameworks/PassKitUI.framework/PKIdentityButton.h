
@interface PKIdentityButton : UIControl {
    double  _cornerRadius;
}

@property (nonatomic) double cornerRadius;

+ (id)buttonWithLabel:(long long)arg1 style:(long long)arg2;
+ (Class)layerClass;

- (double)cornerRadius;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithLabel:(long long)arg1 style:(long long)arg2;
- (void)setCornerRadius:(double)arg1;

@end
