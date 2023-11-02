
@interface _CDInteractionDataCollectionTask : NSObject {
    NSObject<OS_xpc_object> * _activity;
    NSDate * _collectionDate;
    unsigned long long  _daysPerBatch;
    bool  _deleteSessionOnCleanup;
    _CDInteractionStore * _interactionStore;
    unsigned long long  _maxBatches;
    double  _samplingRate;
    bool  _selectedForDataCollection;
    _CDInteractionDataCollectionSession * _session;
    NSString * _sessionPath;
}

@property (nonatomic, readonly) NSObject<OS_xpc_object> *activity;
@property (nonatomic, readonly, copy) NSDate *collectionDate;
@property (nonatomic, readonly) unsigned long long daysPerBatch;
@property (nonatomic) bool deleteSessionOnCleanup;
@property (nonatomic, retain) _CDInteractionStore *interactionStore;
@property (nonatomic, readonly) unsigned long long maxBatches;
@property (nonatomic, readonly) double samplingRate;
@property (nonatomic) bool selectedForDataCollection;
@property (nonatomic, retain) _CDInteractionDataCollectionSession *session;
@property (nonatomic, readonly, copy) NSString *sessionPath;

- (void).cxx_destruct;
- (void)_execute;
- (id)activity;
- (void)cleanup;
- (id)collectionDate;
- (unsigned long long)daysPerBatch;
- (bool)deleteSessionOnCleanup;
- (void)execute;
- (id)initWithStore:(id)arg1 activity:(id)arg2;
- (id)initWithStore:(id)arg1 activity:(id)arg2 sessionPath:(id)arg3 collectionDate:(id)arg4 samplingRate:(double)arg5 maxBatches:(unsigned long long)arg6 daysPerBatch:(unsigned long long)arg7;
- (id)interactionStore;
- (unsigned long long)maxBatches;
- (double)samplingRate;
- (bool)selectedForDataCollection;
- (id)session;
- (id)sessionPath;
- (void)setDeleteSessionOnCleanup:(bool)arg1;
- (void)setInteractionStore:(id)arg1;
- (void)setSelectedForDataCollection:(bool)arg1;
- (void)setSession:(id)arg1;

@end
