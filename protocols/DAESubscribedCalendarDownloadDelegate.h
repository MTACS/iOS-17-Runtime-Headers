
@protocol DAESubscribedCalendarDownloadDelegate <NSObject>

@required

- (void)subscribedCalendarDidFinishLoading:(DAESubscribedCalendarSummary *)arg1;
- (void)subscribedCalendarFailedWithError:(NSError *)arg1;
- (void)subscribedCalendarProgressedTo:(long long)arg1 totalBytes:(long long)arg2;
- (void)subscribedCalendarRequiresPassword:(void *)arg1 withContinuation:(void *)arg2; // needs 2 arg types, found 8: NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSString *, void*

@end
