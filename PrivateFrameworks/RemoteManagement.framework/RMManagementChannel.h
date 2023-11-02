
@interface RMManagementChannel : NSObject <NSSecureCoding> {
    NSString * _accountDescription;
    NSString * _accountIdentifier;
    NSString * _enrollmentToken;
    NSURL * _enrollmentURL;
    NSString * _identifier;
    bool  _isEnrolled;
    NSString * _organizationDescription;
    long long  _type;
}

@property (nonatomic, readonly, copy) NSString *accountDescription;
@property (nonatomic, readonly, copy) NSString *accountIdentifier;
@property (nonatomic, readonly, copy) NSString *enrollmentToken;
@property (nonatomic, readonly, copy) NSURL *enrollmentURL;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) bool isEnrolled;
@property (nonatomic, readonly, copy) NSString *organizationDescription;
@property (nonatomic, readonly) long long type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accountDescription;
- (id)accountIdentifier;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)enrollmentToken;
- (id)enrollmentURL;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(long long)arg1 identifier:(id)arg2 accountIdentifier:(id)arg3 accountDescription:(id)arg4 organizationDescription:(id)arg5 enrollmentURL:(id)arg6 enrollmentToken:(id)arg7 isEnrolled:(bool)arg8;
- (bool)isEnrolled;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToChannel:(id)arg1;
- (id)organizationDescription;
- (long long)type;

@end
