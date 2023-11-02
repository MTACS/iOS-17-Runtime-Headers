
@interface AMSStorageDatabase : NSObject <AMSSQLiteConnectionDelegate> {
    AMSSQLiteConnection * _connection;
    NSString * _domain;
    NSObject<OS_dispatch_queue> * _internalQueue;
}

@property (nonatomic, retain) AMSSQLiteConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSString *domain;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *internalQueue;
@property (readonly) Class superclass;

+ (bool)isFeatureSupported;
+ (id)sharedDatabaseWithDomain:(id)arg1;

- (void).cxx_destruct;
- (id)_allKeysPrefixedByDomainWithError:(id*)arg1;
- (id)_cachePath;
- (id)_convertToDataWithValue:(id)arg1 valueType:(long long)arg2 error:(id*)arg3;
- (id)_convertToValueWithData:(id)arg1 valueType:(long long)arg2 error:(id*)arg3;
- (id)_dataForPlistValue:(id)arg1 error:(id*)arg2;
- (void)_performTransaction:(id /* block */)arg1;
- (id)_plistValueForData:(id)arg1 error:(id*)arg2;
- (bool)_setValueData:(id)arg1 valueType:(long long)arg2 forKey:(id)arg3 error:(id*)arg4;
- (long long)_valueTypeForValue:(id)arg1;
- (id)allKeyValuesWithError:(id*)arg1;
- (id)allKeysForDomain:(id)arg1 withError:(id*)arg2;
- (bool)booleanForKey:(id)arg1 error:(id*)arg2;
- (void)close;
- (id)connection;
- (bool)connectionNeedsResetForCorruption:(id)arg1;
- (void)dealloc;
- (bool)deleteForKey:(id)arg1 error:(id*)arg2;
- (id)domain;
- (double)doubleForKey:(id)arg1 error:(id*)arg2;
- (id)initWithDomain:(id)arg1;
- (long long)integerForKey:(id)arg1 error:(id*)arg2;
- (id)internalQueue;
- (bool)setBoolean:(bool)arg1 forKey:(id)arg2 error:(id*)arg3;
- (void)setConnection:(id)arg1;
- (void)setDomain:(id)arg1;
- (bool)setDouble:(double)arg1 forKey:(id)arg2 error:(id*)arg3;
- (bool)setInteger:(long long)arg1 forKey:(id)arg2 error:(id*)arg3;
- (void)setInternalQueue:(id)arg1;
- (bool)setValue:(id)arg1 forKey:(id)arg2 error:(id*)arg3;
- (id)sizeWithError:(id*)arg1;
- (id)valueForKey:(id)arg1 error:(id*)arg2;

@end
