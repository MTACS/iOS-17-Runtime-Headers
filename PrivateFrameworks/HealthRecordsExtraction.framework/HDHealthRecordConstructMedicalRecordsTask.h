
@interface HDHealthRecordConstructMedicalRecordsTask : NSObject <HDHealthRecordPipelineTask> {
    HDHealthRecordProcessingContext * _processingContext;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)_extractKeyPathsWithClinicalItem:(id)arg1 ruleset:(id)arg2;
+ (bool)_unresolvableReferencesPresentInClinicalItem:(id)arg1;
+ (bool)_unsupportedModifierExtensionsPresentInClinicalItem:(id)arg1;

- (void).cxx_destruct;
- (bool)_collectMedicalRecordPropertiesWithError:(out id*)arg1;
- (id)_medicalRecordWithClinicalItem:(id)arg1 clinicalType:(long long)arg2 ruleset:(id)arg3 error:(out id*)arg4;
- (id)_unknownMedicalRecordWithClinicalItem:(id)arg1 ruleset:(id)arg2 error:(out id*)arg3;
- (id)initWithProcessingContext:(id)arg1;
- (bool)processWithError:(id*)arg1;

@end
