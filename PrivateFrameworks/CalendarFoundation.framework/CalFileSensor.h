
@interface CalFileSensor : NSObject {
    id /* block */  _eventBlock;
    NSString * _path;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_source> * _source;
    bool  _started;
}

@property (nonatomic, readonly, copy) id /* block */ eventBlock;
@property (nonatomic, readonly, retain) NSString *path;
@property (nonatomic, readonly) bool started;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id /* block */)eventBlock;
- (id)init;
- (id)initWithPath:(id)arg1 eventBlock:(id /* block */)arg2;
- (id)path;
- (void)start;
- (bool)started;
- (void)stop;

@end