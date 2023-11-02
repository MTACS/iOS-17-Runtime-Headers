
@interface HDHRSignedClinicalDataHandler : NSObject

- (id)preprocessDataInSource:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (id)preprocessFHIRResourceObject:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (void)processContextCollection:(id)arg1 completion:(id /* block */)arg2;
- (void)processOriginalSignedClinicalDataRecords:(id)arg1 options:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (id)reprocessOriginalRecords:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;

@end
