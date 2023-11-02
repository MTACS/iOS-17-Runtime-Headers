
@interface PDSUser : NSObject <NSCopying, NSSecureCoding> {
    NSString * _userID;
    BOOL  _userType;
}

@property (nonatomic, readonly) NSString *userID;
@property (nonatomic, readonly) BOOL userType;

+ (bool)supportsSecureCoding;
+ (id)userWithDSID:(id)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithUserID:(id)arg1 userType:(BOOL)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToUser:(id)arg1;
- (id)userID;
- (BOOL)userType;

@end
