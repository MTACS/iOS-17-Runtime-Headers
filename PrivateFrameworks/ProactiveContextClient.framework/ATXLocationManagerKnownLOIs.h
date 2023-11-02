
@interface ATXLocationManagerKnownLOIs : NSObject <NSSecureCoding> {
    CLLocation * Gym;
    CLLocation * Home;
    CLLocation * School;
    CLLocation * Work;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
