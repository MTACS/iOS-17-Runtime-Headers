
@interface MLE5ExecutionStreamPool : NSObject {
    NSMutableSet * _allStreams;
    unsigned long long  _modelSignpostId;
    NSMutableSet * _pool;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

@property (nonatomic, readonly) NSMutableSet *allStreams;
@property (readonly) unsigned long long modelSignpostId;
@property (readonly) NSMutableSet *pool;
@property (readonly) NSObject<OS_dispatch_queue> *serialQueue;

- (void).cxx_destruct;
- (void)_emitMappingTracepointForStream:(id)arg1;
- (id)allStreams;
- (void)enableInstrumentsTracing;
- (id)initWithModelSignpostId:(unsigned long long)arg1;
- (unsigned long long)modelSignpostId;
- (id)pool;
- (void)putBack:(id)arg1;
- (id)serialQueue;
- (id)takeOut;

@end
