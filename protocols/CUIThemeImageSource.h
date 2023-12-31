
@protocol CUIThemeImageSource <NSObject>

@required

- (bool)hasValueSlices;
- (CUIImage *)imageForState:(long long)arg1;
- (CUIImage *)imageForState:(long long)arg1 withValue:(long long)arg2;
- (struct CGSize { double x1; double x2; })imageSize;

@end
