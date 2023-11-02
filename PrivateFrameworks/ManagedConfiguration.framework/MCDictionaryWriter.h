
@interface MCDictionaryWriter : NSObject {
    NSError * _afterWriteRepairError;
    NSError * _beforeWriteRepairError;
    NSDictionary * _dictionary;
    NSString * _path;
    MCFileAccessRepairTool * _repairTool;
    NSError * _serializeError;
    NSError * _writeError;
}

@property (nonatomic, copy) NSError *afterWriteRepairError;
@property (nonatomic, copy) NSError *beforeWriteRepairError;
@property (nonatomic, readonly) NSDictionary *dictionary;
@property (nonatomic, readonly, copy) NSString *path;
@property (nonatomic, retain) MCFileAccessRepairTool *repairTool;
@property (nonatomic, copy) NSError *serializeError;
@property (nonatomic, copy) NSError *writeError;

- (void).cxx_destruct;
- (id)afterWriteRepairError;
- (id)beforeWriteRepairError;
- (id)createRepairTool;
- (id)dictionary;
- (bool)didWriteSucceed;
- (id)initWithDictionary:(id)arg1 path:(id)arg2;
- (void)logResultOfWrite;
- (void)logStartOfWrite;
- (id)path;
- (bool)repairAccessIfNecessaryWithError:(id*)arg1;
- (id)repairTool;
- (void)reset;
- (void)serializeDataAndWriteToStorage;
- (id)serializeError;
- (id)serializedData;
- (void)setAfterWriteRepairError:(id)arg1;
- (void)setBeforeWriteRepairError:(id)arg1;
- (void)setRepairTool:(id)arg1;
- (void)setSerializeError:(id)arg1;
- (void)setWriteError:(id)arg1;
- (bool)write;
- (bool)writeData:(id)arg1 error:(id*)arg2;
- (id)writeError;

@end
