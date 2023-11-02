
@interface _CDCloudFamilyDataCollectionTask : NSObject {
    NSObject<OS_xpc_object> * _activity;
    unsigned long long  _airPlayVideoEventCount;
    NSDate * _collectionDate;
    CNContactStore * _contactStore;
    NSString * _dataDirectory;
    unsigned long long  _daysPerBatch;
    bool  _deleteSessionOnCleanup;
    _PASLazyResult * _eventDictState;
    _CDInteractionStore * _interactionStore;
    unsigned long long  _maxBatches;
    HKMedicalIDStore * _medicalIDStore;
    double  _samplingRate;
    bool  _selectedForDataCollection;
    _CDCloudFamilyDataCollectionSession * _session;
    NSString * _sessionPath;
    id /* block */  _submissionBlock;
    NSMutableDictionary * _videoBundleIDLookup;
}

@property (nonatomic, readonly) NSObject<OS_xpc_object> *activity;
@property (nonatomic, copy) id /* block */ submissionBlock;

- (void).cxx_destruct;
- (id)activity;
- (void)execute;
- (id)initWithActivity:(id)arg1;
- (void)setSubmissionBlock:(id /* block */)arg1;
- (id /* block */)submissionBlock;

@end
