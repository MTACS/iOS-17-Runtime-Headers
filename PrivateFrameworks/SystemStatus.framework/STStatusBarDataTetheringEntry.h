
@interface STStatusBarDataTetheringEntry : STStatusBarDataEntry {
    long long  _connectionCount;
}

@property (nonatomic, readonly) long long connectionCount;

+ (id)entryWithConnectionCount:(long long)arg1;
+ (bool)supportsBSXPCSecureCoding;
+ (bool)supportsSecureCoding;

- (id)_equalsBuilderWithObject:(id)arg1;
- (id)_hashBuilder;
- (long long)connectionCount;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)succinctDescriptionBuilder;

@end
