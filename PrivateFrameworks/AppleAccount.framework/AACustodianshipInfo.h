
@interface AACustodianshipInfo : NSObject <NSCopying, NSSecureCoding> {
    NSUUID * _custodianID;
    NSString * _ownerHandle;
    long long  _status;
}

@property (nonatomic, readonly) NSUUID *custodianID;
@property (nonatomic, readonly) NSString *ownerHandle;
@property (nonatomic, readonly) long long status;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)custodianID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithID:(id)arg1 status:(long long)arg2 ownerHandle:(id)arg3;
- (id)ownerHandle;
- (long long)status;
- (id)statusDescription;

@end
