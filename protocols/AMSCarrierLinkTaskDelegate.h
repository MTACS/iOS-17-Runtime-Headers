
@protocol AMSCarrierLinkTaskDelegate <AMSRequestPresentationDelegate>

@required

- (void)handleEngagementRequest:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: AMSEngagementRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, AMSEngagementResult *, NSError *, void*

@end
