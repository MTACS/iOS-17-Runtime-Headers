
@interface ATXScoreNormalizationDriver : NSObject {
    ATXBMBookmark * _scoreHarvestingStreamBookmark;
    NSMutableDictionary * _scoreNormalizationModelsDict;
}

@property (nonatomic, retain) ATXBMBookmark *scoreHarvestingStreamBookmark;
@property (nonatomic, retain) NSMutableDictionary *scoreNormalizationModelsDict;

+ (id)defaultArchivePath;
+ (void)deleteArchiveFile;

- (void).cxx_destruct;
- (id)_normalizeScoreHelper:(id)arg1 modelKey:(id)arg2;
- (bool)addScoreForModelWithClientModelId:(id)arg1 clientModelVersion:(id)arg2 score:(id)arg3;
- (id)getNormalizationModelWithClientModelId:(id)arg1 clientModelVersion:(id)arg2;
- (id)getNormalizationModelsDict;
- (id)getOrMakeScoreNormalizationModelsDictionary;
- (id)getPayloadFromArchiveAtPath:(id)arg1;
- (id)getUniqueModelKeyForClientModelId:(id)arg1 clientModelVersion:(id)arg2;
- (id)init;
- (void)initStreamBookmark;
- (void)modelScoreHarvesting;
- (id)normalizeScore:(id)arg1 clientModelId:(id)arg2 clientModelVersion:(id)arg3;
- (void)persistBookmark;
- (bool)registerModelWithClientModelId:(id)arg1 clientModelVersion:(id)arg2 normalizationParameters:(id)arg3;
- (id)scoreHarvestingStreamBookmark;
- (id)scoreNormalizationModelsDict;
- (void)setScoreHarvestingStreamBookmark:(id)arg1;
- (void)setScoreNormalizationModelsDict:(id)arg1;
- (void)writeArchive:(id)arg1 toFilePath:(id)arg2;
- (void)writeArchiveFromDict:(id)arg1;

@end
