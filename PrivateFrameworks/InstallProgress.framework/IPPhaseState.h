
@interface IPPhaseState : NSObject <NSSecureCoding> {
    unsigned long long  _completedUnitCount;
    unsigned long long  _totalUnitCount;
}

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
