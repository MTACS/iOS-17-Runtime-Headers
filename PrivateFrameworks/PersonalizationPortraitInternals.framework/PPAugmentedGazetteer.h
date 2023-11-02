
@interface PPAugmentedGazetteer : NSObject {
    PPContextPredictor * _contextPredictor;
    _PASSqliteDatabase * _db;
    _PASLock * _lock;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (id)initWithDatabaseAsset:(id)arg1 gazetteerPath:(id)arg2 contextPredictor:(id)arg3;
- (void)iterExtractionsForText:(id)arg1 addEntity:(id /* block */)arg2 addTopic:(id /* block */)arg3 addLocation:(id /* block */)arg4;
- (void)iterSentencesForText:(id)arg1 block:(id /* block */)arg2;
- (void)iterTokensForSentence:(id)arg1 block:(id /* block */)arg2;
- (id)metadataForName:(id)arg1;

@end
