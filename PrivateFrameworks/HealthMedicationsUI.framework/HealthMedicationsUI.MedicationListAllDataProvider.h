
@interface HealthMedicationsUI.MedicationListAllDataProvider : WDSampleListDataProvider {
    void medication;
    void predicate;
}

@property (nonatomic, retain) NSPredicate *defaultQueryPredicate;

- (void).cxx_destruct;
- (id)defaultQueryPredicate;
- (id)detailSectionForSample:(id)arg1;
- (id)init;
- (id)initWithDisplayType:(id)arg1 profile:(id)arg2;
- (id)sampleTypes;
- (void)setDefaultQueryPredicate:(id)arg1;
- (id)textForObject:(id)arg1;
- (id)viewControllerForItemAtIndexPath:(id)arg1;

@end
