
@interface PDSInternalDaemonListener : NSObject <PDSRemoteInternal> {
    <PDSKVStore> * _kvStore;
}

@property (nonatomic, retain) <PDSKVStore> *kvStore;

- (void).cxx_destruct;
- (id)initWithKVStore:(id)arg1;
- (void)kvStateDumpWithCompletion:(id /* block */)arg1;
- (id)kvStore;
- (void)setDataValue:(id)arg1 forKey:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)setKvStore:(id)arg1;
- (void)setNumberValue:(id)arg1 forKey:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)setStringValue:(id)arg1 forKey:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)stringRepresentationForKey:(id)arg1 withCompletion:(id /* block */)arg2;

@end
