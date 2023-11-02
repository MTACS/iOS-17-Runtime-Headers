
@interface STStatusBarDataVoiceControlEntry : STStatusBarDataEntry {
    long long  _type;
}

@property (nonatomic, readonly) long long type;

+ (id)entryWithType:(long long)arg1;
+ (bool)supportsBSXPCSecureCoding;
+ (bool)supportsSecureCoding;

- (id)_equalsBuilderWithObject:(id)arg1;
- (id)_hashBuilder;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)succinctDescriptionBuilder;
- (long long)type;

@end
