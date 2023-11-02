
@protocol SBCoverSheetSpotlightPresenterDelegate <NSObject>

@required

- (void)spotlightPresenter:(void *)arg1 dismissDismissableModalViewController:(void *)arg2 animated:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 8: SBCoverSheetSpotlightPresenter *, CSCoverSheetViewControllerBase *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)spotlightPresenter:(void *)arg1 presentDismissableModalViewController:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 7: SBCoverSheetSpotlightPresenter *, CSCoverSheetViewControllerBase *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)spotlightPresenterAddContentView:(SBCoverSheetSpotlightPresenter *)arg1;
- (bool)spotlightPresenterAllowsPullToSearch:(SBCoverSheetSpotlightPresenter *)arg1;
- (void)spotlightPresenterRemoveContentView:(SBCoverSheetSpotlightPresenter *)arg1;

@end
