
@protocol SAUILayoutHosting <NSObject>

@required

- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })edgeOutsetsForSize:(struct CGSize { double x1; double x2; })arg1;
- (void)menuPresentationRequestDidChangeForLayoutSpecifier:(id <SAUILayoutSpecifying>)arg1;
- (void)preferredEdgeOutsetsDidInvalidateForLayoutSpecifier:(id <SAUILayoutSpecifying>)arg1;
- (void)preferredLayoutModeDidInvalidateForLayoutSpecifier:(id <SAUILayoutSpecifying>)arg1;

@optional

- (void)preferredPromotionDidInvalidateForLayoutSpecifier:(id <SAUILayoutSpecifying>)arg1;

@end
