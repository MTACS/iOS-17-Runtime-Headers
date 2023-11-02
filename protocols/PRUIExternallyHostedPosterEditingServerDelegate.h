
@protocol PRUIExternallyHostedPosterEditingServerDelegate <NSObject>

@required

- (bool)beginExternalPosterEditingSessionWithEditingRequest:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 6: <PRUIExternallyHostedPosterEditingRequest> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)sendRequestDismissalActionWithEditingRequest:(id <PRUIExternallyHostedPosterEditingRequest>)arg1;

@end
