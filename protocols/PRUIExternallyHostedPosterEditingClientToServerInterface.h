
@protocol PRUIExternallyHostedPosterEditingClientToServerInterface <NSObject>

@required

- (oneway void)beginEditingWithEntryPointWrapper:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: PRUIExternallyHostedPosterEntryPointWrapper *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (oneway void)sendRequestDismissalActionWithEntryPointWrapper:(PRUIExternallyHostedPosterEntryPointWrapper *)arg1;

@end
