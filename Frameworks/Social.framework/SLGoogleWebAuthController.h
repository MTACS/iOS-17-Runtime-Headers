
@interface SLGoogleWebAuthController : UIViewController {
    id /* block */  _completion;
}

@property (nonatomic, copy) id /* block */ completion;

- (void).cxx_destruct;
- (id /* block */)completion;
- (id)initWithAccount:(id)arg1 accountStore:(id)arg2 presentationBlock:(id /* block */)arg3;
- (id)initWithAccountDescription:(id)arg1 presentationBlock:(id /* block */)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithYouTubeUsername:(id)arg1 accountDescription:(id)arg2 presentationBlock:(id /* block */)arg3;
- (void)setCompletion:(id /* block */)arg1;

@end
