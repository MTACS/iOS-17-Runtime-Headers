
@interface _ATXInspectionServerActionPredictionScoreLogger : _ATXInspectionServerPredictionScoreLogger {
    NSMutableDictionary * _actionMetaDataItems;
}

- (void).cxx_destruct;
- (id)actionMetaDataItems;
- (id)init;
- (void)storeMetaDataFromActionContainerForKey:(id)arg1 actionContainer:(id)arg2;

@end
