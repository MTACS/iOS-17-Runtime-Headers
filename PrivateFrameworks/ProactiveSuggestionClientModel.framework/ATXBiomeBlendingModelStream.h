
@interface ATXBiomeBlendingModelStream : NSObject {
    _PASLock * _lock;
    BMStoreConfig * _storeConfig;
}

- (void).cxx_destruct;
- (id)_innerStreamForConsumerSubType:(unsigned char)arg1;
- (id)_innerStreamForStreamId:(id)arg1;
- (id)_streamIdForConsumerSubType:(unsigned char)arg1;
- (id)_validBlendingStreamConsumerSubTypes;
- (id)deprecatedPublisherFromStartTime:(double)arg1;
- (void)donateBlendingModelUICacheUpdate:(id)arg1;
- (id)init;
- (id)initWithStoreConfig:(id)arg1;
- (id)publisherFromStartTime:(double)arg1;
- (id)publisherFromStartTime:(double)arg1 consumerSubType:(unsigned char)arg2;
- (id)streamIdentifiers;

@end
