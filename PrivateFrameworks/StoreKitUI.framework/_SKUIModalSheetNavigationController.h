
@interface _SKUIModalSheetNavigationController : UINavigationController {
    long long  _forcedUserInterfaceStyle;
}

@property (nonatomic) long long forcedUserInterfaceStyle;

- (long long)forcedUserInterfaceStyle;
- (long long)preferredUserInterfaceStyle;
- (void)setForcedUserInterfaceStyle:(long long)arg1;
- (struct CGSize { double x1; double x2; })sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize { double x1; double x2; })arg2;

@end
