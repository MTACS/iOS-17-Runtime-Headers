
@interface _DPDatabaseRecorder : _DPDataRecorder {
    NSSet * _blacklistSet;
    _DPStorage * _db;
    unsigned long long  _puzzlePieceCount;
}

@property (nonatomic, readonly) NSSet *blacklistSet;
@property (nonatomic, readonly) _DPStorage *db;
@property (nonatomic, readonly) unsigned long long puzzlePieceCount;

- (void).cxx_destruct;
- (id)blacklistSet;
- (id)db;
- (id)description;
- (void)directUploadRecords:(id)arg1 forKey:(id)arg2;
- (void)donateRandomizationEventToBitacoraForKey:(id)arg1 succeeded:(bool)arg2 errorCode:(int)arg3;
- (id)init;
- (id)initWithKey:(id)arg1 storage:(id)arg2;
- (id)initWithKey:(id)arg1 storage:(id)arg2 systemBlacklistPath:(id)arg3 runtimeBlacklistPath:(id)arg4;
- (bool)isMetadataValid:(id)arg1;
- (unsigned long long)puzzlePieceCount;
- (void)recordBitValues:(id)arg1;
- (void)recordBitValues:(id)arg1 metadata:(id)arg2;
- (void)recordBitVectors:(id)arg1;
- (void)recordBitVectors:(id)arg1 metadata:(id)arg2;
- (void)recordFloatVectors:(id)arg1;
- (void)recordFloatVectors:(id)arg1 metadata:(id)arg2;
- (void)recordNumbers:(id)arg1;
- (void)recordNumbers:(id)arg1 metadata:(id)arg2;
- (void)recordNumbersVectors:(id)arg1;
- (void)recordNumbersVectors:(id)arg1 metadata:(id)arg2;
- (void)recordStrings:(id)arg1;
- (void)recordStrings:(id)arg1 metadata:(id)arg2;
- (void)recordWords:(id)arg1;

@end
