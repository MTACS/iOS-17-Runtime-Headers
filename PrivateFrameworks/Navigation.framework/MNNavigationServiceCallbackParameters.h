
@interface MNNavigationServiceCallbackParameters : NSObject <NSSecureCoding>

@property (nonatomic, readonly) unsigned long long type;

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)type;

@end
