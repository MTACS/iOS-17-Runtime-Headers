
@protocol _UIScenePresenterOwnerDelegate <NSObject>

@required

- (void)owner:(_UIScenePresenterOwner *)arg1 willPrioritizePresenter:(_UIScenePresenter *)arg2 deactivatePresenter:(_UIScenePresenter *)arg3;
- (void)ownerDidInvalidateLastPresenter:(_UIScenePresenterOwner *)arg1;

@end
