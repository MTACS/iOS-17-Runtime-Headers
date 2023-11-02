
@interface CKPublicKey : NSObject {
    NSData * _certData;
    NSDate * _expiration;
    NSString * _protectionSource;
    NSData * _publicKey;
    long long  _version;
}

@property (nonatomic, readonly, copy) NSData *certData;
@property (nonatomic, readonly, copy) NSDate *expiration;
@property (nonatomic, readonly, copy) NSString *protectionSource;
@property (nonatomic, readonly, copy) NSData *publicKey;
@property (nonatomic, readonly) long long version;

- (void).cxx_destruct;
- (id)certData;
- (id)expiration;
- (bool)hasExpired;
- (id)initWithPublicKey:(id)arg1 version:(long long)arg2 expiration:(id)arg3 certificateData:(id)arg4 protectionSource:(id)arg5;
- (id)protectionSource;
- (id)publicKey;
- (long long)version;

@end
