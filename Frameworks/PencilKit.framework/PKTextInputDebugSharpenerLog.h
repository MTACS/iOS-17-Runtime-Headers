
@interface PKTextInputDebugSharpenerLog : NSObject {
    NSArray * _logEntries;
    NSDictionary * _metadataDictionary;
}

@property (nonatomic, readonly) bool hasContent;
@property (nonatomic, readonly) NSArray *logEntries;
@property (nonatomic, readonly) NSDictionary *metadataDictionary;

+ (id)_environmentMetadataDictionary;
+ (id)_recommendedFileNameForLogWithDate:(id)arg1;
+ (bool)canLoadFromFileAtURL:(id)arg1;

- (void).cxx_destruct;
- (id)_dictionaryRepresentationWithContentLevel:(long long)arg1 excludeEntyIndexes:(id)arg2;
- (bool)_loadFromFileURL:(id)arg1 error:(id*)arg2;
- (id)description;
- (bool)hasContent;
- (id)initWithContentsOfURL:(id)arg1 error:(id*)arg2;
- (id)initWithLogEntries:(id)arg1;
- (id)logEntries;
- (id)metadataDictionary;
- (id)writeLogToTemporaryDirectoryWithContentLevel:(long long)arg1 excludeEntyIndexes:(id)arg2 error:(id*)arg3;
- (bool)writeToURL:(id)arg1 withContentLevel:(long long)arg2 excludeEntyIndexes:(id)arg3 error:(id*)arg4;

@end
