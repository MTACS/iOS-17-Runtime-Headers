
@protocol PXPeopleFlowController <PXPeopleFlowDelegate>

@required

- (bool)hasNextViewController;
- (bool)hasPreviousViewController;
- (UIViewController<PXPeopleFlowViewController> *)nextViewController;
- (UIViewController<PXPeopleFlowViewController> *)previousViewController;

@optional

- (UIBarButtonItem *)leftBarButton;
- (bool)wantsCancelButton;

@end
