
@interface DIPStreamingCryptor : NSObject {
    struct _CCCryptor { } * _cryptor;
}

- (void)addAuthParameter:(id)arg1;
- (void)addIVParameter:(id)arg1;
- (id)encryptBuffer:(id)arg1;
- (id)finish;
- (id)initWithKey:(id)arg1;

@end
