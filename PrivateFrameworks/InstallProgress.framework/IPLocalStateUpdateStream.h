
@interface IPLocalStateUpdateStream : NSObject <IPStateUpdateStream> {
    NSObject<OS_dispatch_queue> * _asyncDeliveryQueue;
    IPLocalStateUpdateStreamSink * _sink;
    IPLocalStateUpdateStreamSource * _source;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithSourceDeliveryQueue:(id)arg1;
- (id)sink;
- (void)sink:(id)arg1 sendMessage:(id)arg2;
- (id)source;

@end
