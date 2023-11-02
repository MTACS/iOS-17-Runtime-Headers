
@protocol AMSEngagementObserver <NSObject>

@required

- (void)engagement:(AMSEngagement *)arg1 didUpdateRequest:(AMSDialogRequest *)arg2 placement:(NSString *)arg3 serviceType:(NSString *)arg4;
- (void)engagement:(void *)arg1 handleDialogRequest:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: AMSEngagement *, AMSDialogRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, AMSDialogResult *, NSError *, void*
- (void)engagement:(void *)arg1 handleEngagementRequest:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: AMSEngagement *, AMSEngagementRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, AMSEngagementResult *, NSError *, void*

@optional

- (void)engagement:(void *)arg1 didUpdateEngagementRequest:(void *)arg2 placement:(void *)arg3 serviceType:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 11: AMSEngagement *, AMSEngagementRequest *, NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, AMSEngagementResult *, NSError *, void*

@end
