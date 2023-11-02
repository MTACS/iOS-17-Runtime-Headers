
@interface AATrustedContact : NSObject <NSCopying, NSSecureCoding> {
    NSUUID * _custodianID;
    NSString * _displayName;
    NSString * _firstName;
    NSString * _handle;
    bool  _isAcceptedAndShared;
    bool  _isIdMSConfirmed;
    NSString * _lastName;
    long long  _status;
}

@property (nonatomic, readonly) NSUUID *custodianID;
@property (nonatomic, readonly, copy) NSString *displayName;
@property (nonatomic, readonly, copy) NSString *firstName;
@property (nonatomic, readonly) NSString *handle;
@property (nonatomic, readonly) bool isAcceptedAndShared;
@property (nonatomic, readonly) bool isIdMSConfirmed;
@property (nonatomic, readonly, copy) NSString *lastName;
@property (nonatomic, readonly) long long status;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)custodianID;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (id)firstName;
- (id)handle;
- (id)initWithCoder:(id)arg1;
- (id)initWithID:(id)arg1 status:(long long)arg2 handle:(id)arg3 firstName:(id)arg4 lastName:(id)arg5 displayName:(id)arg6 isAcceptedAndShared:(bool)arg7 isIdMSConfirmed:(bool)arg8;
- (bool)isAcceptedAndShared;
- (bool)isIdMSConfirmed;
- (id)lastName;
- (long long)status;

@end
