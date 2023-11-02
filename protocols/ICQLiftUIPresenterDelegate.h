
@protocol ICQLiftUIPresenterDelegate <NSObject>

@required

- (void)liftUIPresenterDidCancel:(ICQLiftUIPresenter *)arg1;
- (void)liftUIPresenterDidComplete:(ICQLiftUIPresenter *)arg1;

@optional

- (void)liftUIPresenter:(ICQLiftUIPresenter *)arg1 didLoadWithSuccess:(bool)arg2 error:(NSError *)arg3;
- (void)liftUIPresenter:(void *)arg1 performAction:(void *)arg2 parameters:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: ICQLiftUIPresenter *, long long, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)liftUIPresenterDidCancel:(ICQLiftUIPresenter *)arg1 userInfo:(NSDictionary *)arg2;
- (void)liftUIPresenterDidComplete:(ICQLiftUIPresenter *)arg1 userInfo:(NSDictionary *)arg2;

@end
