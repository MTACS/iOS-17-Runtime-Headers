
@interface _LAKeyStoreGenericPassword : NSObject <LAKeyStoreGenericPassword> {
    <_LAKeyStoreGenericPasswordCryptor> * _cryptor;
    NSString * _identifier;
    NSData * _publicKeyHash;
    NSData * _wrappedData;
    <LAKeyStoreKey> * _wrapperKey;
}

@property (nonatomic) <_LAKeyStoreGenericPasswordCryptor> *cryptor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (readonly) Class superclass;

+ (id)buildWithDictionary:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)cryptor;
- (void)fetchDataWithContext:(id)arg1 completion:(id /* block */)arg2;
- (id)identifier;
- (void)setCryptor:(id)arg1;

@end
