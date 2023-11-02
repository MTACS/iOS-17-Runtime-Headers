
@interface PRUIModalEntryPointFocusPosterSelection : NSObject <PRUIModalEntryPoint> {
    NSString * _activityIdentifier;
    NSUUID * _activityUUID;
}

@property (nonatomic, readonly, copy) NSString *activityIdentifier;
@property (nonatomic, readonly, copy) NSUUID *activityUUID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)supportsBSXPCSecureCoding;

- (void).cxx_destruct;
- (id)_BSXPCSecureCodingEntryPointTypeString;
- (id)activityIdentifier;
- (id)activityUUID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithActivityUUID:(id)arg1 activityIdentifier:(id)arg2;
- (id)initWithBSXPCCoder:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
