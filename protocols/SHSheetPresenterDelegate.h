
@protocol SHSheetPresenterDelegate <NSObject>

@required

- (void)mainPresenter:(id <SHSheetPresenter>)arg1 didCompleteActivity:(UIActivity *)arg2 withSuccess:(bool)arg3 returnedItems:(NSArray *)arg4 error:(NSError *)arg5;
- (void)mainPresenter:(id <SHSheetPresenter>)arg1 willCompleteActivity:(UIActivity *)arg2 withSuccess:(bool)arg3;
- (void)mainPresenterIsReadyToInteract:(id <SHSheetPresenter>)arg1;

@end
