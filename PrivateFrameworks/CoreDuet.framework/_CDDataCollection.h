
@interface _CDDataCollection : NSObject {
    NSObject<OS_xpc_object> * _activity;
    NSDate * _collectionDate;
    NSString * _dataDirectory;
    unsigned long long  _daysPerBatch;
    bool  _deleteSessionOnCleanup;
    _CDEventStreamsRegister * _eventStreamsRegister;
    unsigned long long  _maxBatches;
    double  _samplingRate;
    bool  _selectedForDataCollection;
    _CDDataCollectionSession * _session;
    NSString * _sessionPath;
    <_DKKnowledgeQuerying> * _storage;
    id /* block */  _submissionBlock;
}

@property (nonatomic, readonly) NSObject<OS_xpc_object> *activity;
@property (nonatomic, readonly) <_DKKnowledgeQuerying> *storage;
@property (nonatomic, copy) id /* block */ submissionBlock;

- (void).cxx_destruct;
- (id)activity;
- (void)execute;
- (id)initWithStorage:(id)arg1 activity:(id)arg2;
- (id)initWithStorage:(id)arg1 activity:(id)arg2 sessionPath:(id)arg3 dataDirectory:(id)arg4 collectionDate:(id)arg5 samplingRate:(double)arg6 daysPerBatch:(unsigned long long)arg7 eventStreams:(id)arg8 maxBatches:(unsigned long long)arg9;
- (void)setSubmissionBlock:(id /* block */)arg1;
- (id)storage;
- (id /* block */)submissionBlock;

@end
