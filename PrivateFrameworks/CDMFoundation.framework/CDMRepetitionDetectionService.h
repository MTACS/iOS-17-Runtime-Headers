
@interface CDMRepetitionDetectionService : CDMDAGBaseService {
    QueryRewriter * _repetitionDetector;
}

@property (nonatomic, retain) QueryRewriter *repetitionDetector;

+ (id)getAssetFolderNamesByTrialFactorNames;
+ (bool)isAssetRequired;
+ (bool)isEnabled;

- (void).cxx_destruct;
- (id)doInference:(id)arg1 status:(id*)arg2;
- (id)getPredictor:(id)arg1 FilesPath:(id)arg2 status:(id*)arg3;
- (id)handle:(id)arg1;
- (id)handleRequestCommandTypeNames;
- (id)repetitionDetector;
- (void)setRepetitionDetector:(id)arg1;
- (id)setup:(id)arg1;

@end
