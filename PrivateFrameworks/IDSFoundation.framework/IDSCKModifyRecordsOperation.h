
@interface IDSCKModifyRecordsOperation : IDSCKDatabaseOperation {
    id /* block */  _modifyRecordsCompletionBlock;
    long long  _savePolicy;
}

@property (nonatomic, copy) id /* block */ modifyRecordsCompletionBlock;
@property (nonatomic) long long savePolicy;

+ (Class)__class;
+ (id)alloc;

- (void).cxx_destruct;
- (id /* block */)modifyRecordsCompletionBlock;
- (long long)savePolicy;
- (void)setModifyRecordsCompletionBlock:(id /* block */)arg1;
- (void)setSavePolicy:(long long)arg1;

@end
