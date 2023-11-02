
@interface HKClinicalSharingSyncResult : NSObject <NSCopying, NSSecureCoding> {
    NSUUID * _accountID;
    NSError * _error;
    NSString * _lookupInfo;
}

@property (nonatomic, readonly, copy) NSUUID *accountID;
@property (nonatomic, readonly, copy) NSError *error;
@property (nonatomic, readonly, copy) NSString *lookupInfo;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accountID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (unsigned long long)hash;
- (id)init;
- (id)initWithAccountID:(id)arg1 error:(id)arg2;
- (id)initWithAccountID:(id)arg1 lookupInfo:(id)arg2;
- (id)initWithAccountID:(id)arg1 lookupInfo:(id)arg2 error:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)lookupInfo;

@end
