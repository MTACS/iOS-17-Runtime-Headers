
@interface WDMedicalRecordDaySummary : NSObject <WDMedicalRecordSummaryDelegate> {
    NSMutableDictionary * _categoriesBySourceAlphaOrdered;
    NSMutableDictionary * _categoriesBySourceByType;
    <WDMedicalRecordDaySummaryDelegate> * _delegate;
    NSMutableSet * _inProgressCatogorySummaries;
    HRProfile * _profile;
    NSObject<OS_dispatch_queue> * _resourceQueue;
    long long  _style;
}

@property (nonatomic, retain) NSMutableDictionary *categoriesBySourceAlphaOrdered;
@property (nonatomic, retain) NSMutableDictionary *categoriesBySourceByType;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WDMedicalRecordDaySummaryDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableSet *inProgressCatogorySummaries;
@property (nonatomic, readonly) long long numberOfDisplayItems;
@property (nonatomic, retain) HRProfile *profile;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *resourceQueue;
@property (nonatomic) long long style;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_alphaSortedCategories:(id)arg1;
- (id)_alphaSortedKeysForCategories:(id)arg1;
- (void)addMedicalRecord:(id)arg1;
- (id)categoriesBySourceAlphaOrdered;
- (id)categoriesBySourceByType;
- (id)delegate;
- (id)displayItemAtIndex:(long long)arg1;
- (id)inProgressCatogorySummaries;
- (id)initWithProfile:(id)arg1 style:(long long)arg2 delegate:(id)arg3;
- (long long)numberOfDisplayItems;
- (id)profile;
- (void)recomputeIfNeeded;
- (id)resourceQueue;
- (void)setCategoriesBySourceAlphaOrdered:(id)arg1;
- (void)setCategoriesBySourceByType:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setInProgressCatogorySummaries:(id)arg1;
- (void)setProfile:(id)arg1;
- (void)setResourceQueue:(id)arg1;
- (void)setStyle:(long long)arg1;
- (long long)style;
- (void)summaryDidFinishRecompute:(id)arg1;

@end
