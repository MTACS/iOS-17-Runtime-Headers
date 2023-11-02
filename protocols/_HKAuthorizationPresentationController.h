
@protocol _HKAuthorizationPresentationController <NSObject>

@required

- (void)cancelPresentation;
- (void)presentWithPresentationRequests:(void *)arg1 authorizationRequestRecord:(void *)arg2 authorizationViewControllerPresenter:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: NSArray *, HKAuthorizationRequestRecord *, id, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end
