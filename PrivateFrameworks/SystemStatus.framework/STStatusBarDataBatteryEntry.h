
@interface STStatusBarDataBatteryEntry : STStatusBarDataEntry {
    long long  _capacity;
    NSString * _detailString;
    bool  _prominentlyShowsDetailString;
    bool  _saverModeActive;
    long long  _state;
}

@property (nonatomic, readonly) long long capacity;
@property (nonatomic, readonly, copy) NSString *detailString;
@property (nonatomic, readonly) bool prominentlyShowsDetailString;
@property (nonatomic, readonly) bool saverModeActive;
@property (nonatomic, readonly) long long state;

+ (id)entryWithCapacity:(long long)arg1 state:(long long)arg2 saverMode:(bool)arg3 prominentlyShowsDetailString:(bool)arg4 detailString:(id)arg5;
+ (bool)supportsBSXPCSecureCoding;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_equalsBuilderWithObject:(id)arg1;
- (id)_hashBuilder;
- (long long)capacity;
- (id)detailString;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)prominentlyShowsDetailString;
- (bool)saverModeActive;
- (long long)state;
- (id)succinctDescriptionBuilder;

@end
