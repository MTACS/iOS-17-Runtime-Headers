
@interface TRINotificationCallback : NSObject <TRINotificationToken> {
    id /* block */  _handler;
    unsigned long long  _id;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ handler;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long id;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id /* block */)handler;
- (unsigned long long)id;
- (id)init;
- (id)queue;
- (void)setHandler:(id /* block */)arg1;
- (void)setQueue:(id)arg1;

@end
