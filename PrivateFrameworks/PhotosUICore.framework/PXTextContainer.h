
@interface PXTextContainer : NSTextContainer {
    long long  _preferredOrientation;
}

@property (nonatomic, readonly) long long preferredOrientation;

- (id)initWithCoder:(id)arg1;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1 layoutOrientation:(long long)arg2;
- (long long)layoutOrientation;
- (long long)preferredOrientation;

@end
