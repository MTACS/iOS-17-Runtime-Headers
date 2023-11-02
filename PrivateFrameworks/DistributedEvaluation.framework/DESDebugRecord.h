
@interface DESDebugRecord : NSObject {
    NSMutableDictionary * _debugInfo;
    NSString * _recordID;
    DESUserDefaultsStoreRecord * _storeRecord;
}

@property (nonatomic, readonly) NSDictionary *debugInfo;
@property (nonatomic, readonly) NSString *recordID;

+ (id)recordIDFromPluginID:(id)arg1 taskSource:(long long)arg2;

- (void).cxx_destruct;
- (void)addForTaskID:(id)arg1 result:(long long)arg2 description:(id)arg3;
- (bool)commitWithError:(id*)arg1;
- (id)debugInfo;
- (id)description;
- (id)initFromStoreWithPluginID:(id)arg1 taskSource:(long long)arg2;
- (id)initWithPluginID:(id)arg1 taskSource:(long long)arg2;
- (id)initWithRecordID:(id)arg1 debugInfo:(id)arg2;
- (id)recordID;
- (id)stringForResult:(id)arg1;

@end
