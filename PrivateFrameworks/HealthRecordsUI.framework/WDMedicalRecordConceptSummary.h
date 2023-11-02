
@interface WDMedicalRecordConceptSummary : NSObject <WDMedicalRecordSummarizable> {
    NSArray * _allDisplayItems;
    NSMutableOrderedSet * _allRecords;
    HKConceptStore * _conceptStore;
    <WDMedicalRecordSummaryDelegate> * _delegate;
    bool  _dirty;
    HKHealthRecordsStore * _healthRecordsStore;
    NSObject<OS_dispatch_queue> * _resourceQueue;
    NSObject<OS_dispatch_queue> * _summaryQueue;
}

@property (nonatomic, retain) NSArray *allDisplayItems;
@property (nonatomic, retain) NSMutableOrderedSet *allRecords;
@property (nonatomic, retain) HKConceptStore *conceptStore;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WDMedicalRecordSummaryDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool dirty;
@property (nonatomic, readonly, copy) NSArray *displayItems;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HKHealthRecordsStore *healthRecordsStore;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *resourceQueue;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *summaryQueue;
@property (nonatomic, readonly, copy) NSString *summarySortString;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_displayItemsForGenericMedicalRecord:(id)arg1 completion:(id /* block */)arg2;
- (void)_displayItemsForObservation:(id)arg1 completion:(id /* block */)arg2;
- (void)_displayItemsForRecord:(id)arg1 completion:(id /* block */)arg2;
- (void)_rqueue_recomputeIfNeeded;
- (void)_rqueue_setNeedsCompute;
- (void)_updatePlacementForDisplayItems:(id)arg1 ofRecord:(id)arg2;
- (void)addMedicalRecord:(id)arg1;
- (id)allDisplayItems;
- (id)allRecords;
- (id)conceptStore;
- (id)delegate;
- (bool)dirty;
- (id)displayItems;
- (id)healthRecordsStore;
- (id)initWithProfile:(id)arg1 delegate:(id)arg2;
- (void)recomputeIfNeeded;
- (id)resourceQueue;
- (void)setAllDisplayItems:(id)arg1;
- (void)setAllRecords:(id)arg1;
- (void)setConceptStore:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDirty:(bool)arg1;
- (void)setHealthRecordsStore:(id)arg1;
- (void)setNeedsRecompute;
- (void)setResourceQueue:(id)arg1;
- (void)setSummaryQueue:(id)arg1;
- (void)showTruncatedRecords;
- (id)summaryQueue;
- (id)summarySortString;

@end
