
@interface TSPDataRepReadChannel : NSObject <TSUStreamReadChannel> {
    <SFUInputStream> * _inputStream;
    NSObject<OS_dispatch_queue> * _readQueue;
    SFUDataRepresentation * _representation;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)close;
- (void)dealloc;
- (id)initWithRepresentation:(id)arg1;
- (void)readWithQueue:(id)arg1 handler:(id /* block */)arg2;

@end
