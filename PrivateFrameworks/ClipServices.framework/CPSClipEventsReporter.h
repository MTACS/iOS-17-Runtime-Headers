
@interface CPSClipEventsReporter : NSObject {
    NSObject<OS_dispatch_queue> * _logQueue;
    BMSource * _source;
}

+ (id)reporter;

- (void).cxx_destruct;
- (id)init;
- (void)logClipLaunchEventForSession:(id)arg1;

@end
