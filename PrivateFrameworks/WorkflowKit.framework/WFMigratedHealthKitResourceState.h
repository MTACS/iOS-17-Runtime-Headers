
@interface WFMigratedHealthKitResourceState : NSObject <NSSecureCoding> {
    NSSet * entries;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
