
@interface MKSRPClient : NSObject {
    NSString * _password;
    NSString * _username;
}

@property (nonatomic, copy) NSString *password;
@property (nonatomic, copy) NSString *username;

- (void).cxx_destruct;
- (void)computeSharedKey:(id*)arg1 clientPublicKey:(id*)arg2 proofOfMatch:(id*)arg3 FromSalt:(id)arg4 serverPublicKey:(id)arg5;
- (id)initWithPassword:(id)arg1;
- (id)password;
- (void)setPassword:(id)arg1;
- (void)setUsername:(id)arg1;
- (id)username;

@end
