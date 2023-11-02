
@interface TLKUtilities : NSObject

+ (double)appIconCornerRadiusRatio;
+ (bool)deviceSupportsRotation;
+ (void)dispatchAsync:(id /* block */)arg1;
+ (void)dispatchAsyncIfNecessary:(id /* block */)arg1;
+ (void)dispatchMainIfNecessary:(id /* block */)arg1;
+ (void)executeBlock:(id /* block */)arg1 async:(bool)arg2;
+ (bool)isHiddenView:(id)arg1;
+ (bool)isIpad;
+ (bool)isLargePhone;
+ (bool)isMacOS;
+ (bool)isPhone;
+ (bool)isSiri;
+ (double)onePixelForCurrentScreenResolution;
+ (void)performAnimatableChanges:(id /* block */)arg1;
+ (void)performAnimatableChanges:(id /* block */)arg1 animated:(bool)arg2;
+ (void)performAnimatableChanges:(id /* block */)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
+ (void)performWithoutAnimations:(id /* block */)arg1;
+ (bool)recursivelyCheckIfSubviewTapped:(id)arg1 forTappedView:(id)arg2;
+ (double)standardRoundedCornerRadiusRatio;
+ (double)standardTableCellContentInset;
+ (id)testImageWithSize:(struct CGSize { double x1; double x2; })arg1;
+ (id)testImageWithSize:(struct CGSize { double x1; double x2; })arg1 color:(id)arg2;
+ (id)testImageWithSize:(struct CGSize { double x1; double x2; })arg1 text:(id)arg2;
+ (id)testImageWithSize:(struct CGSize { double x1; double x2; })arg1 text:(id)arg2 color:(id)arg3;

@end
