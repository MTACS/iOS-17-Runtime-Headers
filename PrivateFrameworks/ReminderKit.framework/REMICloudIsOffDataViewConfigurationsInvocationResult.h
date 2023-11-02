
@interface REMICloudIsOffDataViewConfigurationsInvocationResult : REMStoreInvocationResult <NSSecureCoding> {
    double  _timeIntervalSinceLastPrompt;
}

@property (nonatomic, readonly) double timeIntervalSinceLastPrompt;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithTimeIntervalSinceLastPrompt:(double)arg1;
- (bool)isEqual:(id)arg1;
- (double)timeIntervalSinceLastPrompt;

@end
