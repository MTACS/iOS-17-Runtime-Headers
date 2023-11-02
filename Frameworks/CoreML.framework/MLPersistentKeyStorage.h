
@interface MLPersistentKeyStorage : NSObject

+ (id)persistentKeyStorageURL;
+ (id)retrieveKeyBlobForKeyIdentifier:(id)arg1;
+ (bool)storeKeyBlob:(id)arg1 forKeyIdentifier:(id)arg2 error:(id*)arg3;
+ (id)syncQueue;

@end
