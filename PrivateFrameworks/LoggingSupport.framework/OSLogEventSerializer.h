
@interface OSLogEventSerializer : NSObject {
    id /* block */  _argumentRedactionBlock;
    NSMutableArray * _curBatchDictionaries;
    unsigned long long  _curBatchSize;
    unsigned long long  _maxLogEventBatchSize;
    _OSLogEventSerializationMetadata * _metadata;
    unsigned long long  _serializedEventCount;
    OSLogEventStream * _stream;
}

@property (nonatomic, copy) id /* block */ argumentRedactionBlock;
@property (nonatomic, readonly) NSMutableArray *curBatchDictionaries;
@property (nonatomic) unsigned long long curBatchSize;
@property (nonatomic, copy) NSPredicate *filterPredicate;
@property (nonatomic) unsigned long long flags;
@property (nonatomic) unsigned long long maxLogEventBatchSize;
@property (nonatomic, readonly) _OSLogEventSerializationMetadata *metadata;
@property (nonatomic, readonly) unsigned long long serializedEventCount;
@property (nonatomic, readonly) OSLogEventSource *source;
@property (nonatomic, readonly) OSLogEventStream *stream;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *target;

- (void).cxx_destruct;
- (id)_arrayForDecomposedMessage:(id)arg1 indicesToRedact:(id)arg2;
- (void)_completeBatch:(id /* block */)arg1;
- (id)_dictForArg:(id)arg1 shouldRedactValue:(bool)arg2;
- (id)_dictForDecomposedMessage:(id)arg1 index:(unsigned long long)arg2 shouldRedact:(bool)arg3;
- (id)_dictForDecomposedMessage:(id)arg1 indicesToRedact:(id)arg2;
- (id)_dictForPlaceholder:(id)arg1;
- (id)_dictionaryForProxy:(id)arg1;
- (bool)_isBatchCompleted;
- (void)_serializeEvent:(id)arg1;
- (id /* block */)argumentRedactionBlock;
- (id)curBatchDictionaries;
- (unsigned long long)curBatchSize;
- (id)filterPredicate;
- (unsigned long long)flags;
- (id)initWithSource:(id)arg1 dataProcessingBlock:(id /* block */)arg2 completionBlock:(id /* block */)arg3;
- (void)invalidate;
- (unsigned long long)maxLogEventBatchSize;
- (id)metadata;
- (void)serializeFromDate:(id)arg1;
- (void)serializeFromDate:(id)arg1 toDate:(id)arg2;
- (void)serializeFromLastBoot;
- (void)serializeFromPosition:(id)arg1;
- (unsigned long long)serializedEventCount;
- (void)setArgumentRedactionBlock:(id /* block */)arg1;
- (void)setCurBatchSize:(unsigned long long)arg1;
- (void)setFilterPredicate:(id)arg1;
- (void)setFlags:(unsigned long long)arg1;
- (void)setMaxLogEventBatchSize:(unsigned long long)arg1;
- (void)setTarget:(id)arg1;
- (id)source;
- (id)stream;
- (id)target;

@end
