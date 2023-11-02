
@interface STStatusBarDataBackgroundActivityEntry : STStatusBarDataEntry {
    NSString * _backgroundActivityIdentifier;
    NSString * _detailString;
    double  _displayStartDate;
}

@property (nonatomic, readonly, copy) NSString *backgroundActivityIdentifier;
@property (nonatomic, readonly, copy) NSString *detailString;
@property (nonatomic, readonly) double displayStartDate;

+ (id)entryWithBackgroundActivityIdentifier:(id)arg1 displayStartDate:(double)arg2 detailString:(id)arg3;
+ (bool)supportsBSXPCSecureCoding;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_equalsBuilderWithObject:(id)arg1;
- (id)_hashBuilder;
- (id)backgroundActivityIdentifier;
- (id)detailString;
- (double)displayStartDate;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)succinctDescriptionBuilder;

@end
