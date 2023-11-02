
@interface MRApplicationActivity : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    int  _creatorProcessID;
    NSString * _primaryApplicationDisplayID;
    NSString * _secondaryApplicationDisplayID;
    int  _status;
    NSUUID * _uniqueIdentifier;
}

@property (nonatomic, readonly) int creatorProcessID;
@property (nonatomic, readonly) NSString *primaryApplicationDisplayID;
@property (nonatomic, readonly) NSString *secondaryApplicationDisplayID;
@property (nonatomic, readonly) int status;
@property (nonatomic, readonly) NSUUID *uniqueIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)creatorProcessID;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPrimaryAppDisplayID:(id)arg1 secondaryAppDisplayID:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)primaryApplicationDisplayID;
- (id)secondaryApplicationDisplayID;
- (int)status;
- (id)uniqueIdentifier;

@end
