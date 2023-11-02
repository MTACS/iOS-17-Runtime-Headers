
@interface TUConversationActivityCreateSessionRequest : NSObject <NSCopying, NSSecureCoding> {
    NSUUID * _UUID;
    NSString * _activityIdentifier;
    NSData * _applicationContext;
    TUConversationActivityMetadata * _metadata;
    CKShare * _share;
    NSString * _staticIdentifier;
}

@property (nonatomic, copy) NSUUID *UUID;
@property (nonatomic, copy) NSString *activityIdentifier;
@property (nonatomic, copy) NSData *applicationContext;
@property (nonatomic, retain) TUConversationActivityMetadata *metadata;
@property (nonatomic, copy) CKShare *share;
@property (nonatomic, copy) NSString *staticIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)UUID;
- (id)activityIdentifier;
- (id)applicationContext;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithMetadata:(id)arg1 applicationContext:(id)arg2 activityIdentifier:(id)arg3 uuid:(id)arg4;
- (id)initWithMetadata:(id)arg1 applicationContext:(id)arg2 activityIdentifier:(id)arg3 uuid:(id)arg4 staticIdentifier:(id)arg5;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToConversationActivitySessionCreationRequest:(id)arg1;
- (id)metadata;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)setActivityIdentifier:(id)arg1;
- (void)setApplicationContext:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)setShare:(id)arg1;
- (void)setStaticIdentifier:(id)arg1;
- (void)setUUID:(id)arg1;
- (id)share;
- (id)staticIdentifier;

@end
