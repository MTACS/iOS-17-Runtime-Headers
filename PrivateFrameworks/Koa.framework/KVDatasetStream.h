
@interface KVDatasetStream : NSObject {
    unsigned long long  _bufferSize;
    unsigned short  _errorCode;
    unsigned long long  _flushThreshold;
    NSMutableArray * _itemBuffers;
    long long  _itemType;
    NSString * _name;
    unsigned long long  _priorVersion;
    NSObject<KVDonateService> * _service;
}

@property (nonatomic, readonly) unsigned short errorCode;
@property (nonatomic, readonly) unsigned long long priorVersion;

+ (id)streamWithName:(id)arg1 itemType:(long long)arg2 service:(id)arg3 payload:(unsigned long long)arg4;

- (void).cxx_destruct;
- (bool)_flushItemsWithError:(id*)arg1;
- (bool)addItem:(id)arg1 error:(id*)arg2;
- (void)cancel;
- (void)dealloc;
- (id)description;
- (unsigned short)errorCode;
- (void)finish:(id /* block */)arg1;
- (void)finishWithOptions:(id /* block */)arg1;
- (id)init;
- (id)initWithName:(id)arg1 itemType:(long long)arg2 service:(id)arg3 payload:(unsigned long long)arg4 flushThreshold:(unsigned long long)arg5;
- (unsigned long long)priorVersion;
- (bool)removeItemId:(id)arg1 error:(id*)arg2;

@end
