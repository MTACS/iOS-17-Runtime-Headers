
@interface BMPruner : NSObject {
    BMStoreConfig * _storeConfig;
    BMStoreStream * _storeStream;
}

@property (nonatomic, readonly) BMStoreConfig *storeConfig;
@property (nonatomic, readonly) BMStoreStream *storeStream;

+ (id)new;

- (void).cxx_destruct;
- (void)deleteEventsPassingTest:(id /* block */)arg1;
- (bool)deleteStoreEvent:(id)arg1;
- (void)deleteWithPolicy:(id)arg1 eventsPassingTest:(id /* block */)arg2;
- (id)init;
- (id)initWithStoreStream:(id)arg1 config:(id)arg2;
- (void)pruneStream;
- (id)storeConfig;
- (id)storeStream;

@end
