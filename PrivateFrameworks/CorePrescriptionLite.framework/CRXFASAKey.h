
@interface CRXFASAKey : NSObject {
    NSDate * _creationDate;
    NSString * _name;
    NSData * _privateKey;
    NSString * _privateKeyPEM;
    NSData * _publicKey;
    NSString * _publicKeyPEM;
}

@property (nonatomic, retain) NSDate *creationDate;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSData *privateKey;
@property (nonatomic, readonly, copy) NSString *privateKeyPEM;
@property (nonatomic, readonly) NSData *publicKey;
@property (nonatomic, readonly, copy) NSString *publicKeyPEM;

+ (id)keyInPEMFormat:(id)arg1 isPublic:(bool)arg2;

- (void).cxx_destruct;
- (id)creationDate;
- (id)initWithName:(id)arg1 privateKey:(id)arg2 publicKey:(id)arg3 creationDate:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)name;
- (id)privateKey;
- (id)privateKeyPEM;
- (id)publicKey;
- (id)publicKeyPEM;
- (void)setCreationDate:(id)arg1;

@end
