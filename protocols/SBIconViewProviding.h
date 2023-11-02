
@protocol SBIconViewProviding

@required

- (void)configureIconView:(SBIconView *)arg1 forIcon:(SBIcon *)arg2;
- (SBIconView *)dequeueReusableIconViewOfClass:(Class)arg1;
- (bool)isIconViewRecycled:(SBIconView *)arg1;
- (void)recycleIconView:(SBIconView *)arg1;

@end
