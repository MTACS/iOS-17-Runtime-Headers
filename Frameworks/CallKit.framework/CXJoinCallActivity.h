
@interface CXJoinCallActivity : NSObject <NSCopying, NSSecureCoding> {
    NSUUID * _UUID;
    NSString * _activityIdentifier;
    NSData * _applicationContext;
    NSString * _bundleIdentifier;
    NSData * _metadata;
    bool  _startWhenStaged;
    NSDate * _timestamp;
}

@property (nonatomic, retain) NSUUID *UUID;
@property (nonatomic, retain) NSString *activityIdentifier;
@property (nonatomic, copy) NSData *applicationContext;
@property (nonatomic, copy) NSString *bundleIdentifier;
@property (nonatomic, retain) NSData *metadata;
@property (nonatomic) bool startWhenStaged;
@property (nonatomic, retain) NSDate *timestamp;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)UUID;
- (id)activityIdentifier;
- (id)applicationContext;
- (id)bundleIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithBundleIdentifier:(id)arg1 metadata:(id)arg2 applicationContext:(id)arg3 activityIdentifier:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToJoinCallActivity:(id)arg1;
- (id)metadata;
- (void)setActivityIdentifier:(id)arg1;
- (void)setApplicationContext:(id)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)setStartWhenStaged:(bool)arg1;
- (void)setTimestamp:(id)arg1;
- (void)setUUID:(id)arg1;
- (bool)startWhenStaged;
- (id)timestamp;

@end
