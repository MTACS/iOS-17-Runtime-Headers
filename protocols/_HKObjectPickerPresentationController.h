
@protocol _HKObjectPickerPresentationController <NSObject>

@required

- (void)cancelPresentation;
- (void)presentWithSession:(void *)arg1 authorizationViewControllerPresenter:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: HKObjectAuthorizationPromptSession *, id, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end
