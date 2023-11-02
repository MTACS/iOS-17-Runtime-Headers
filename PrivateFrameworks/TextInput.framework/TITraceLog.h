
@interface TITraceLog : NSObject {
    NSString * _logContents;
    NSMutableDictionary * _recordEntryCache;
}

@property (nonatomic, readonly) NSString *logContents;
@property (nonatomic, retain) NSMutableDictionary *recordEntryCache;

- (void).cxx_destruct;
- (void)enumerateRecordsWithBlock:(id /* block */)arg1;
- (void)enumerateTextRecordEntriesUsingBlock:(id /* block */)arg1;
- (id)initWithLogContents:(id)arg1;
- (id)logContents;
- (id)recordEntryCache;
- (void)recordMatchingTypologyRecord:(id)arg1;
- (void)recordMatchingUUID:(id)arg1;
- (id)recordStringMatchingTypologyRecord:(id)arg1;
- (id)recordStringMatchingUUID:(id)arg1;
- (void)setRecordEntryCache:(id)arg1;

@end
