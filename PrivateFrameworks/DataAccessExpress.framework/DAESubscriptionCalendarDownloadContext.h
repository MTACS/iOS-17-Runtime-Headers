
@interface DAESubscriptionCalendarDownloadContext : NSObject {
    <DAESubscribedCalendarDownloadDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, retain) <DAESubscribedCalendarDownloadDelegate> *delegate;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (void)asyncCallOutToDelegate:(id /* block */)arg1;
- (void)callOutToDelegate:(id /* block */)arg1;
- (id)delegate;
- (id)queue;
- (void)setDelegate:(id)arg1;
- (void)setQueue:(id)arg1;

@end
