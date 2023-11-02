
@protocol STAskForTimeInterface <NSObject>

@required

- (void)approveExceptionForRequest:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: STAskForTimeRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)fetchLastResponseForRequestedResourceIdentifier:(void *)arg1 usageType:(void *)arg2 withCompletionHandler:(void *)arg3; // needs 3 arg types, found 10: NSString *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, NSNumber *, NSError *, void*
- (void)handleAnswer:(void *)arg1 requestIdentifier:(void *)arg2 timeApproved:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 8: long long, NSUUID *, NSNumber *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)sendAskForTimeRequest:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: STAskForTimeRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
