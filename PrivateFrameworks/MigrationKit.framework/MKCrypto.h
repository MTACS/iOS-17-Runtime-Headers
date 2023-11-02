
@interface MKCrypto : NSObject {
    NSData * _key;
}

@property (nonatomic, copy) NSData *key;

- (void).cxx_destruct;
- (id)bytes:(unsigned long long)arg1;
- (id)decryptData:(id)arg1;
- (id)encrypt:(bool)arg1 data:(id)arg2 withKey:(id)arg3 iv:(id)arg4;
- (id)encryptData:(id)arg1;
- (id)initWithKey:(id)arg1;
- (id)key;
- (void)setKey:(id)arg1;

@end
