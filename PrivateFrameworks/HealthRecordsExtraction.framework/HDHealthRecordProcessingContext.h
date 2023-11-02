
@interface HDHealthRecordProcessingContext : NSObject {
    NSMutableDictionary * _clinicalItemsByType;
    NSMutableDictionary * _clinicalRecordsByMedicalRecord;
    HDHealthRecordRuleset * _extractionRuleset;
    NSMutableDictionary * _medicalRecordsByOriginalResource;
    NSMutableArray * _mutableResources;
    NSMutableDictionary * _parentResourcesByResource;
}

@property (nonatomic, retain) NSMutableDictionary *clinicalItemsByType;
@property (nonatomic, retain) NSMutableDictionary *clinicalRecordsByMedicalRecord;
@property (nonatomic, readonly) HDHealthRecordRuleset *extractionRuleset;
@property (nonatomic, retain) NSMutableDictionary *medicalRecordsByOriginalResource;
@property (nonatomic, retain) NSMutableArray *mutableResources;
@property (nonatomic, retain) NSMutableDictionary *parentResourcesByResource;
@property (nonatomic, readonly, copy) NSArray *resources;

- (void).cxx_destruct;
- (id)clinicalItemsByType;
- (id)clinicalRecordsByMedicalRecord;
- (id)createExtractionResultWithError:(id*)arg1;
- (bool)didProcessClinicalRecord:(id)arg1 forMedicalRecord:(id)arg2 error:(id*)arg3;
- (bool)didProcessMedicalRecord:(id)arg1 forResource:(id)arg2 error:(id*)arg3;
- (id)extractedClinicalItemsForClinicalType:(long long)arg1;
- (id)extractionRuleset;
- (bool)foundResource:(id)arg1 parentResource:(id)arg2 error:(id*)arg3;
- (id)initWithRuleset:(id)arg1 resources:(id)arg2;
- (id)medicalRecordsByOriginalResource;
- (id)mutableResources;
- (id)parentResourcesByResource;
- (id)resources;
- (void)setClinicalItemsByType:(id)arg1;
- (void)setClinicalRecordsByMedicalRecord:(id)arg1;
- (void)setExtractedClinicalItems:(id)arg1 forClinicalType:(long long)arg2;
- (void)setMedicalRecordsByOriginalResource:(id)arg1;
- (void)setMutableResources:(id)arg1;
- (void)setParentResourcesByResource:(id)arg1;

@end
