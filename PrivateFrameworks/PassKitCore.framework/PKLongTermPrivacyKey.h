
@interface PKLongTermPrivacyKey : NSObject {
    NSDate * _creationDate;
    NSString * _groupIdentifier;
    NSString * _keyIdentifier;
    NSData * _publicKey;
}

@property (nonatomic, retain) NSDate *creationDate;
@property (nonatomic, retain) NSString *groupIdentifier;
@property (nonatomic, retain) NSString *keyIdentifier;
@property (nonatomic, retain) NSData *publicKey;

- (void).cxx_destruct;
- (id)creationDate;
- (id)description;
- (id)groupIdentifier;
- (id)initWithSESPrivacyKey:(id)arg1;
- (id)keyIdentifier;
- (id)publicKey;
- (void)setCreationDate:(id)arg1;
- (void)setGroupIdentifier:(id)arg1;
- (void)setKeyIdentifier:(id)arg1;
- (void)setPublicKey:(id)arg1;

@end
