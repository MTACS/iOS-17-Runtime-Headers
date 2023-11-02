
@protocol AMSUIEngagementTaskHostInterface <NSObject>

@required

- (void)engagementTaskDidFinishWithResult:(void *)arg1 error:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 7: AMSEngagementResult *, NSError *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)preferredContentSizeDidChange:(struct CGSize { double x1; double x2; })arg1;

@end
