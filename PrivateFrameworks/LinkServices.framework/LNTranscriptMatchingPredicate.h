
@interface LNTranscriptMatchingPredicate : NSObject <NSCopying, NSSecureCoding> {
    NSString * _actionType;
    NSString * _bundleIdentifier;
    LNEntityIdentifier * _entityIdentifier;
    NSString * _entityType;
    NSUUID * _executionUUID;
    long long  _type;
}

@property (nonatomic, readonly, copy) NSString *actionType;
@property (nonatomic, copy) NSString *bundleIdentifier;
@property (nonatomic, readonly, copy) LNEntityIdentifier *entityIdentifier;
@property (nonatomic, readonly, copy) NSString *entityType;
@property (nonatomic, readonly, copy) NSUUID *executionUUID;
@property (nonatomic, readonly) long long type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)actionType;
- (id)bundleIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)entityIdentifier;
- (id)entityType;
- (id)executionUUID;
- (id)initWithBundleIdentifier:(id)arg1 type:(long long)arg2 executionUUID:(id)arg3 entityIdentifier:(id)arg4 actionType:(id)arg5 entityType:(id)arg6;
- (id)initWithCoder:(id)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (long long)type;

@end
