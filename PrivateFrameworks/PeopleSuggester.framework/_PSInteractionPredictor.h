
@interface _PSInteractionPredictor : NSObject {
    NSURL * _compiledModelURL;
    NSMutableDictionary * _conversationIDMap;
    NSDate * _currentArchiveDate;
    NSDictionary * _currentClusterDictionary;
    _CDInteractionStore * _interactionStore;
    _PSKNNModelConfiguration * _modelConfiguration;
}

@property (nonatomic, retain) NSURL *compiledModelURL;
@property (nonatomic, retain) NSMutableDictionary *conversationIDMap;
@property (nonatomic, retain) NSDate *currentArchiveDate;
@property (nonatomic, retain) NSDictionary *currentClusterDictionary;
@property (nonatomic, retain) _CDInteractionStore *interactionStore;
@property (nonatomic, retain) _PSKNNModelConfiguration *modelConfiguration;

+ (bool)cloneAdaptableModelURL:(id)arg1 toFilePathURL:(id)arg2;
+ (id)clustersArchiveFileForDate:(id)arg1 modelName:(id)arg2;
+ (id)defaultClustersArchiveDirectory;
+ (void)deleteArchiveFileAtDate:(id)arg1 modelName:(id)arg2;
+ (void)deleteArchiveFiles;
+ (id)getIntermediateModelURLForModelName:(id)arg1;
+ (id)getModelURLfromName:(id)arg1;
+ (id)loadModelFromUrl:(id)arg1;
+ (bool)removeMlmodelcFolderAtPath:(id)arg1;

- (void).cxx_destruct;
- (id)compiledModelURL;
- (id)conversationIDMap;
- (id)convertLogToClusterPointArray:(id)arg1;
- (id)createMLArrayProviderFromTrainArray:(id)arg1;
- (id)currentArchiveDate;
- (id)currentClusterDictionary;
- (id)findLatestArchiveDateBefore:(id)arg1 modelName:(id)arg2;
- (id)getClusterDictionaryFromTrainArray:(id)arg1 usingDBSCANParamsMinPts:(int)arg2 andEps:(double)arg3;
- (id)getClusteringResultsForPoint:(id)arg1 usingClusterDictionary:(id)arg2;
- (id)getConversationIDFromInteraction:(id)arg1;
- (id)getConversationIDLogFromTrainArray:(id)arg1;
- (id)getDateNumDays:(int)arg1 AfterDate:(id)arg2;
- (id)getDictionaryFromClustersArchiveAtPath:(id)arg1;
- (id)getLastContactedDictionaryFromTrainArray:(id)arg1;
- (double)getMinDistanceForPt:(id)arg1 toClusters:(id)arg2;
- (id)getOrMakeClusterDictionaryAtDate:(id)arg1;
- (id)getRecencyResultsShowingNumValues:(int)arg1 fromTrainArray:(id)arg2;
- (id)getTrainArrayToDate:(id)arg1 withStartDateAnchor:(id)arg2;
- (id)initWithInteractionStore:(id)arg1 atDate:(id)arg2 withModelName:(id)arg3 modelConfiguration:(id)arg4;
- (id)interactionStore;
- (id)modelConfiguration;
- (id)predictAtDate:(id)arg1 usingModelAtURL:(id)arg2 showNumSuggestions:(int)arg3;
- (void)printModelWeights:(id)arg1;
- (id)rankedZkwSuggestionsFromPredictionArray:(id)arg1 forBundleID:(id)arg2;
- (void)setCompiledModelURL:(id)arg1;
- (void)setConversationIDMap:(id)arg1;
- (void)setCurrentArchiveDate:(id)arg1;
- (void)setCurrentClusterDictionary:(id)arg1;
- (void)setInteractionStore:(id)arg1;
- (void)setModelConfiguration:(id)arg1;
- (double)timeSinceLastContactTo:(id)arg1 FromDate:(id)arg2 inTrainArray:(id)arg3;
- (void)trainAtDate:(id)arg1 usingCompiledModelURL:(id)arg2 andSaveToURL:(id)arg3;
- (void)writeArchive:(id)arg1 toFilePath:(id)arg2;
- (void)writeClusterArchiveFromClusterDict:(id)arg1 withDate:(id)arg2;

@end
