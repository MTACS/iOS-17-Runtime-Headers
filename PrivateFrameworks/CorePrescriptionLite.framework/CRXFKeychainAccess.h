
@interface CRXFKeychainAccess : NSObject {
    struct __CFDictionary { } * _addQuery;
    struct __CFDictionary { } * _createQuery;
    struct __CFDictionary { } * _deleteOrUpdateQuery;
    NSString * _deviceModel;
    struct __CFDictionary { } * _findAllQuery;
    struct __CFNumber { } * _keySizeInBits;
    struct __CFString { } * _keyType;
    NSObject<OS_os_log> * _log;
    CRXUDispatchQueue * _queue;
}

- (void).cxx_destruct;
- (id)createASAKeyWithError:(id*)arg1;
- (id)createErrorForStatus:(int)arg1 fromFunction:(id)arg2;
- (void)dealloc;
- (bool)deleteASAKeyWithName:(id)arg1 error:(id*)arg2;
- (bool)deleteAllASAKeysWithError:(id*)arg1;
- (id)derivePublicKeyFromPrivateKey:(id)arg1 error:(id*)arg2;
- (void)fetchASAKeysWithCompletion:(id /* block */)arg1;
- (id)initWithDeviceModel:(id)arg1;
- (id)insertASAKey:(id)arg1 withName:(id)arg2 error:(id*)arg3;
- (id)prefixedNameForName:(id)arg1;

@end
