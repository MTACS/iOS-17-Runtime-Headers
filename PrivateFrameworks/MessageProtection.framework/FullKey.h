
@interface FullKey : NSObject {
    <P256PrivateKeyProtocol> * _key;
    int  _keyStore;
    NSString * _keychainTag;
}

@property (readonly) <P256PrivateKeyProtocol> *key;
@property (readonly) int keyStore;
@property (retain) NSString *keychainTag;

+ (id)generateNewKeyWithAccess:(id)arg1 error:(id*)arg2;
+ (id)generateNewKeyWithAccess:(id)arg1 forceNoSEP:(bool)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (id)description;
- (id)initWithCTKTokenOID:(id)arg1 error:(id*)arg2;
- (id)initWithKey:(id)arg1 error:(id*)arg2;
- (id)initWithKeychainTag:(id)arg1 error:(id*)arg2;
- (id)initWithProtobufferData:(id)arg1 error:(id*)arg2;
- (id)key;
- (id)keyIdentifier;
- (int)keyStore;
- (id)keychainTag;
- (id)protobuffer;
- (void)setKeychainTag:(id)arg1;

@end
