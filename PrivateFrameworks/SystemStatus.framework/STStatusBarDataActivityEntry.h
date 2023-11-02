
@interface STStatusBarDataActivityEntry : STStatusBarDataEntry {
    NSString * _displayId;
    long long  _type;
}

@property (nonatomic, readonly, copy) NSString *displayId;
@property (nonatomic, readonly) long long type;

+ (id)entryWithType:(long long)arg1 displayID:(id)arg2;
+ (bool)supportsBSXPCSecureCoding;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_equalsBuilderWithObject:(id)arg1;
- (id)_hashBuilder;
- (id)displayId;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)succinctDescriptionBuilder;
- (long long)type;

@end
