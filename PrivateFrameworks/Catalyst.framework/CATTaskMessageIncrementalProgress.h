
@interface CATTaskMessageIncrementalProgress : CATTaskMessage {
    long long  _completedUnitCount;
    long long  _totalUnitCount;
}

@property (nonatomic) long long completedUnitCount;
@property (nonatomic) long long totalUnitCount;

+ (bool)supportsSecureCoding;

- (long long)completedUnitCount;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTaskUUID:(id)arg1 completedUnitCount:(long long)arg2 totalUnitCount:(long long)arg3;
- (void)setCompletedUnitCount:(long long)arg1;
- (void)setTotalUnitCount:(long long)arg1;
- (long long)totalUnitCount;

@end
