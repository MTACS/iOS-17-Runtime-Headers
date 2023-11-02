
@interface IPXPCEventStateUpdateStream : NSObject <IPStateUpdateStream> {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSObject<OS_dispatch_queue> * _queue;
    IPXPCEventStateUpdateStreamSink * _sink;
    IPXPCEventStateUpdateStreamSource * _source;
    NSString * _streamName;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithStreamName:(id)arg1 queue:(id)arg2;
- (id)sink;
- (id)source;

@end
