
@interface IMOrderingTools : NSObject {
    NSMutableArray * _jsonArray;
    NSString * _jsonFilePath;
}

@property (nonatomic, retain) NSMutableArray *jsonArray;
@property (nonatomic, retain) NSString *jsonFilePath;

- (void).cxx_destruct;
- (id)currentJsonArray;
- (id)jsonArray;
- (id)jsonFilePath;
- (id)messageDictionariesFromItemsInChat:(id)arg1 withEventKey:(id)arg2;
- (id)pathToDirectoryOfJSONFile;
- (void)printChangeInItemsToJSON:(id)arg1;
- (void)printChangeInItemsToJSONFromChat:(id)arg1;
- (void)setJsonArray:(id)arg1;
- (void)setJsonFilePath:(id)arg1;
- (void)setUpJSONFileForChatGUID:(id)arg1;
- (void)startTrackingChat:(id)arg1;
- (void)writeDataToJSONFile:(id)arg1;

@end
