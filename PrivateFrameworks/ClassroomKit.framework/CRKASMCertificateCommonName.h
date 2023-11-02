
@interface CRKASMCertificateCommonName : NSObject {
    NSUUID * _UUID;
    NSString * _prefix;
    NSString * _userIdentifier;
}

@property (nonatomic, readonly) NSUUID *UUID;
@property (nonatomic, readonly, copy) NSString *prefix;
@property (nonatomic, readonly, copy) NSString *stringValue;
@property (nonatomic, readonly, copy) NSString *userIdentifier;

+ (id)commonNameWithString:(id)arg1;

- (void).cxx_destruct;
- (id)UUID;
- (id)description;
- (id)initWithPrefix:(id)arg1 userIdentifier:(id)arg2;
- (id)initWithPrefix:(id)arg1 userIdentifier:(id)arg2 UUID:(id)arg3;
- (id)prefix;
- (id)stringValue;
- (id)userIdentifier;

@end
