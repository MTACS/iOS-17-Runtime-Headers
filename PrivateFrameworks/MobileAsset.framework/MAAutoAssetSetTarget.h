
@interface MAAutoAssetSetTarget : NSObject <NSSecureCoding> {
    NSArray * _autoAssetEntries;
    NSString * _maxTargetOSVersion;
    NSString * _minTargetOSVersion;
}

@property (nonatomic, retain) NSArray *autoAssetEntries;
@property (nonatomic, retain) NSString *maxTargetOSVersion;
@property (nonatomic, retain) NSString *minTargetOSVersion;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)autoAssetEntries;
- (id)copy;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initForMinTargetOSVersion:(id)arg1 toMaxTargetOSVersion:(id)arg2 asEntriesWhenTargeting:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)maxTargetOSVersion;
- (id)minTargetOSVersion;
- (void)setAutoAssetEntries:(id)arg1;
- (void)setMaxTargetOSVersion:(id)arg1;
- (void)setMinTargetOSVersion:(id)arg1;
- (id)summary;

@end
