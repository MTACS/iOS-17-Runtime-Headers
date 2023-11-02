
@interface _DPToolCommand : NSObject {
    NSString * _action;
    NSString * _arguments;
    NSString * _databasePath;
    NSString * _metadata;
    NSString * _recordKey;
    _DPStorage * _storage;
    bool  _writeOK;
}

@property (nonatomic, readonly, copy) NSString *action;
@property (nonatomic, readonly, copy) NSString *arguments;
@property (nonatomic, readonly, copy) NSString *databasePath;
@property (nonatomic, readonly, copy) NSString *metadata;
@property (nonatomic, readonly, copy) NSString *recordKey;
@property (nonatomic, readonly) _DPStorage *storage;
@property (nonatomic, readonly) bool writeOK;

+ (id)command:(id)arg1 arguments:(id)arg2 metadata:(id)arg3 recordKey:(id)arg4 databasePath:(id)arg5 writeOK:(bool)arg6;
+ (id)supportedCommands;
+ (id)supportedMetadataKeys;

- (void).cxx_destruct;
- (id)action;
- (id)arguments;
- (id)databasePath;
- (id)description;
- (bool)executeCommand;
- (id)init;
- (id)initWithAction:(id)arg1 arguments:(id)arg2 metadata:(id)arg3 recordKey:(id)arg4 databasePath:(id)arg5 writeOK:(bool)arg6;
- (bool)listKeys;
- (bool)listReportsFor:(id)arg1;
- (id)metadata;
- (id)queryForKey:(id)arg1;
- (bool)recordBitValues:(id)arg1 metadata:(id)arg2 forKey:(id)arg3;
- (bool)recordBitVectors:(id)arg1 metadata:(id)arg2 forKey:(id)arg3;
- (bool)recordFloatVectors:(id)arg1 metadata:(id)arg2 forKey:(id)arg3;
- (id)recordKey;
- (bool)recordNumbers:(id)arg1 metadata:(id)arg2 forKey:(id)arg3;
- (bool)recordNumbersVectors:(id)arg1 metadata:(id)arg2 forKey:(id)arg3;
- (bool)recordStrings:(id)arg1 metadata:(id)arg2 forKey:(id)arg3;
- (bool)recordWords:(id)arg1 forKey:(id)arg2;
- (id)storage;
- (bool)submitRecordsForKey:(id)arg1;
- (bool)writeOK;

@end
