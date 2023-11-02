
@interface HKMedicationsResolver : NSObject {
    NSDictionary * _abbreviations;
    NSURL * _assetUrl;
    HDSQLiteDatabase * _db;
    bool  _dbReady;
    HKMedicationsNumberToStringMap * _ingredients;
    long long  _numberOfNewNgrams;
    long long  _numberOfUsedNgrams;
    HKMedicationsNumberToStringMap * _tradenames;
}

- (void).cxx_destruct;
- (long long)consecutiveLCSUsingTranscript:(id)arg1 prediction:(id)arg2;
- (long long)countOfContinousDigitsInLine:(id)arg1;
- (void)dealloc;
- (id)filterAndAddGenerics:(id)arg1 transcripts:(id)arg2 criterion:(float)arg3 limit:(long long)arg4 error:(inout id*)arg5;
- (id)hkt_createNgramMapsWithError:(inout id*)arg1;
- (bool)hkt_looksLikeGenericInText:(id)arg1;
- (long long)hkt_ngramIdCountWithError:(inout id*)arg1;
- (id)hkt_ngramsFrom:(id)arg1 minLength:(long long)arg2 maxLength:(long long)arg3;
- (id)hkt_ngramsWithError:(inout id*)arg1;
- (bool)hkt_prepareNgramAssetWithError:(inout id*)arg1;
- (bool)hkt_setUpDatabase;
- (id)initWithAssetUrl:(id)arg1;
- (void)processNgramLine:(id)arg1 n:(long long)arg2;
- (bool)resetInMemoryDBWithError:(inout id*)arg1;
- (bool)resetResolverWithError:(inout id*)arg1;
- (id)resolveText:(id)arg1 error:(inout id*)arg2;

@end
