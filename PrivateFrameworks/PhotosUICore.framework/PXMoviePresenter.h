
@interface PXMoviePresenter : NSObject {
    UIViewController * _presentingViewController;
}

@property (nonatomic, readonly) UIViewController *presentingViewController;

+ (id)moviePresenterWithPresentingViewController:(id)arg1;

- (void).cxx_destruct;
- (id)init;
- (id)initWithPresentingViewController:(id)arg1;
- (bool)presentMovieViewControllerForAssetCollection:(id)arg1 keyAsset:(id)arg2 preferredTransitionType:(long long)arg3;
- (bool)presentMovieViewControllerForAssetCollection:(id)arg1 keyAsset:(id)arg2 referencePersons:(id)arg3 preferredTransitionType:(long long)arg4;
- (id)presentingViewController;

@end
