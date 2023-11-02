
@interface DACheckSubscribedCalendarIsJunkContext : NSObject {
    id /* block */  _completionBlock;
    long long  _junkStatus;
    NSObject<OS_dispatch_queue> * _queue;
    NSString * _urlString;
}

@property (nonatomic, readonly, copy) id /* block */ completionBlock;
@property (nonatomic) long long junkStatus;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) NSString *urlString;

- (void).cxx_destruct;
- (id /* block */)completionBlock;
- (void)finishedWithError:(id)arg1;
- (id)initWithURLString:(id)arg1 completionBlock:(id /* block */)arg2;
- (long long)junkStatus;
- (id)queue;
- (void)setJunkStatus:(long long)arg1;
- (void)setQueue:(id)arg1;
- (id)urlString;

@end
