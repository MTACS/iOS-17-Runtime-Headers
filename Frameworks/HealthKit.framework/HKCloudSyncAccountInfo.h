
@interface HKCloudSyncAccountInfo : NSObject <NSSecureCoding> {
    unsigned long long  _accountSettings;
    NSString * _emailAddress;
    NSPersonNameComponents * _fullName;
}

@property (nonatomic, readonly) unsigned long long accountSettings;
@property (nonatomic, readonly, copy) NSString *emailAddress;
@property (nonatomic, readonly, copy) NSPersonNameComponents *fullName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)accountSettings;
- (id)emailAddress;
- (void)encodeWithCoder:(id)arg1;
- (id)fullName;
- (id)initWithCoder:(id)arg1;
- (id)initWithFullName:(id)arg1 emailAddress:(id)arg2 accountSettings:(unsigned long long)arg3;

@end
