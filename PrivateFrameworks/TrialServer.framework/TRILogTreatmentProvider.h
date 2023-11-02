
@interface TRILogTreatmentProvider : TRILogTreatmentReader

+ (bool)deleteFileAtPath:(id)arg1;
+ (id)providerWithProjectId:(int)arg1 paths:(id)arg2;

- (bool)addTreatment:(id)arg1;
- (void)removeTreatment:(id)arg1;
- (bool)saveTreatments:(id)arg1;
- (void)updatePersistedLogNamespace:(id)arg1;

@end
