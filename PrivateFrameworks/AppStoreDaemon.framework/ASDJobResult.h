
@interface ASDJobResult : NSObject <NSCopying, NSSecureCoding> {
    NSString * _bundleID;
    NSError * _error;
    NSNumber * _persistentID;
    long long  _status;
}

@property (nonatomic, readonly) NSString *bundleID;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) NSNumber *persistentID;
@property (nonatomic, readonly) long long status;

+ (id)resultWithExistingActivity:(long long)arg1 bundleID:(id)arg2;
+ (id)resultWithInvalidActivity:(long long)arg1 bundleID:(id)arg2;
+ (id)resultWithPersistentID:(id)arg1 bundleID:(id)arg2 status:(long long)arg3 error:(id)arg4;
+ (id)resultWithRestrictedActivity:(long long)arg1 bundleID:(id)arg2;
+ (id)resultWithValidActivity:(long long)arg1 bundleID:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (id)initWithCoder:(id)arg1;
- (id)persistentID;
- (long long)status;

@end
