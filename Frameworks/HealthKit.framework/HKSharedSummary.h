
@interface HKSharedSummary : NSObject <NSSecureCoding> {
    NSUUID * _UUID;
    NSSet * _authorizationIdentifiers;
    NSString * _compatibilityVersion;
    NSString * _name;
    NSSet * _objectTypes;
    NSString * _package;
    NSData * _summaryData;
    HKSharedSummaryTransaction * _transaction;
    NSString * _version;
}

@property (nonatomic, readonly, copy) NSUUID *UUID;
@property (nonatomic, readonly, copy) NSSet *authorizationIdentifiers;
@property (nonatomic, readonly, copy) NSString *compatibilityVersion;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly, copy) NSSet *objectTypes;
@property (nonatomic, readonly, copy) NSString *package;
@property (nonatomic, readonly, copy) NSData *summaryData;
@property (nonatomic, readonly, copy) HKSharedSummaryTransaction *transaction;
@property (nonatomic, readonly, copy) NSString *version;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)UUID;
- (id)_initWithUUID:(id)arg1 package:(id)arg2 name:(id)arg3 version:(id)arg4 compatibilityVersion:(id)arg5 authorizationIdentifiers:(id)arg6 objectTypes:(id)arg7 summaryData:(id)arg8;
- (void)_setTransaction:(id)arg1;
- (id)authorizationIdentifiers;
- (id)compatibilityVersion;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithPackage:(id)arg1 name:(id)arg2 version:(id)arg3 compatibilityVersion:(id)arg4 authorizationIdentifiers:(id)arg5 objectTypes:(id)arg6 summaryData:(id)arg7;
- (bool)isEqual:(id)arg1;
- (id)name;
- (id)objectTypes;
- (id)package;
- (id)summaryData;
- (id)transaction;
- (id)version;

@end
