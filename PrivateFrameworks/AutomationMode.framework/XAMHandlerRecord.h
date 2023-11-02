
@interface XAMHandlerRecord : NSObject {
    id /* block */  _block;
    NSObject<OS_dispatch_queue> * _queue;
}

- (void).cxx_destruct;

@end
