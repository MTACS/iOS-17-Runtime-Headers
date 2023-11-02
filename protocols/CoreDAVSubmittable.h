
@protocol CoreDAVSubmittable <NSObject>

@required

- (<CoreDAVAccountInfoProvider> *)accountInfoProvider;
- (id /* block */)completionBlock:(void *)arg1; // needs 1 arg types, found 4: id /* block */, void*, id, SEL
- (NSError *)error;
- (void)finishEarlyWithError:(NSError *)arg1;
- (void)setAccountInfoProvider:(id <CoreDAVAccountInfoProvider>)arg1;
- (void)setCompletionBlock:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)setTaskManager:(id <CoreDAVTaskManager>)arg1;
- (void)setTimeoutInterval:(double)arg1;
- (void)submitWithTaskManager:(id <CoreDAVTaskManager>)arg1;
- (<CoreDAVTaskManager> *)taskManager;
- (double)timeoutInterval;

@end
