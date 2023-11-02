
@interface IDSCKModifyRecordZonesOperation : IDSCKDatabaseOperation {
    id /* block */  _modifyRecordZonesCompletionBlock;
    long long  _qualityOfService;
    NSArray * _recordZoneIDsToDelete;
    NSArray * _recordZonesToSave;
}

@property (nonatomic, copy) id /* block */ modifyRecordZonesCompletionBlock;
@property long long qualityOfService;
@property (nonatomic, copy) NSArray *recordZoneIDsToDelete;
@property (nonatomic, copy) NSArray *recordZonesToSave;

+ (Class)__class;
+ (id)alloc;

- (void).cxx_destruct;
- (id /* block */)modifyRecordZonesCompletionBlock;
- (long long)qualityOfService;
- (id)recordZoneIDsToDelete;
- (id)recordZonesToSave;
- (void)setModifyRecordZonesCompletionBlock:(id /* block */)arg1;
- (void)setQualityOfService:(long long)arg1;
- (void)setRecordZoneIDsToDelete:(id)arg1;
- (void)setRecordZonesToSave:(id)arg1;

@end
