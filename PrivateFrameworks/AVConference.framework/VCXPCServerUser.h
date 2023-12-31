
@interface VCXPCServerUser : NSObject {
    int  _eventLogLevel;
    id /* block */  block;
    NSObject<OS_dispatch_queue> * queue;
}

@property (nonatomic, copy) id /* block */ block;
@property (nonatomic) int eventLogLevel;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

- (id /* block */)block;
- (void)dealloc;
- (int)eventLogLevel;
- (id)init;
- (id)queue;
- (void)setBlock:(id /* block */)arg1;
- (void)setEventLogLevel:(int)arg1;
- (void)setQueue:(id)arg1;

@end
