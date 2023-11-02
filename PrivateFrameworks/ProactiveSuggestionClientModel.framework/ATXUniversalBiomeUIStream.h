
@interface ATXUniversalBiomeUIStream : NSObject {
    _PASLock * _lock;
    BMStoreConfig * _storeConfig;
}

- (void).cxx_destruct;
- (id)_innerStreamForConsumerSubType:(unsigned char)arg1;
- (id)_innerStreamForStreamId:(id)arg1;
- (id)_streamIdForConsumerSubType:(unsigned char)arg1;
- (id)_validUIStreamConsumerSubTypes;
- (id)deprecatedGenericEventPublisherFromStartTime:(double)arg1;
- (void)donateGenericUIEvent:(id)arg1;
- (id)genericEventPublisherFromStartTime:(double)arg1;
- (id)genericEventPublisherFromStartTime:(double)arg1 consumerSubType:(unsigned char)arg2;
- (id)init;
- (id)initWithStoreConfig:(id)arg1;
- (id)streamIdentifiers;

@end
