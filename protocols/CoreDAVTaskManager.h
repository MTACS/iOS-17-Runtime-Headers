
@protocol CoreDAVTaskManager <NSObject>

@required

- (void)coreDAVTaskDidFinish:(CoreDAVTask *)arg1;
- (void)coreDAVTaskEndModal:(CoreDAVTask *)arg1;
- (void)coreDAVTaskRequestModal:(CoreDAVTask *)arg1;
- (void)setWorkRunLoop:(NSRunLoop *)arg1;
- (void)shutdown;
- (void)submitIndependentCoreDAVTask:(CoreDAVTask *)arg1;
- (void)submitQueuedCoreDAVTask:(CoreDAVTask *)arg1;
- (NSRunLoop *)workRunLoop;

@end
