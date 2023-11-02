
@interface BLSDesiredFidelityResponse : BSActionResponse

@property (nonatomic, readonly) long long desiredFidelity;

- (long long)desiredFidelity;
- (id)initWithDesiredFidelity:(long long)arg1;

@end
