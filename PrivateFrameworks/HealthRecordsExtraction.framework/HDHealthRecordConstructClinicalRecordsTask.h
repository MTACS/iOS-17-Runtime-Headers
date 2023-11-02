
@interface HDHealthRecordConstructClinicalRecordsTask : NSObject <HDHealthRecordPipelineTask> {
    HDHealthRecordProcessingContext * _processingContext;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_applyReferenceRulesToClinicalItem:(id)arg1 ruleset:(id)arg2 error:(id*)arg3;
- (id)_clinicalRecordWithClinicalItem:(id)arg1 resourceObject:(id)arg2 error:(id*)arg3;
- (bool)_isEligibleClinicalItem:(id)arg1 error:(id*)arg2;
- (id)init;
- (id)initWithProcessingContext:(id)arg1;
- (bool)processWithError:(id*)arg1;

@end
