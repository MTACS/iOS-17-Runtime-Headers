
@interface DMFSetPasscodeLockGracePeriodRequest : DMFTaskRequest {
    double  _seconds;
}

@property (nonatomic) double seconds;

+ (bool)isPermittedOnSystemConnection;
+ (bool)isPermittedOnUserConnection;
+ (id)permittedPlatforms;
+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (double)seconds;
- (void)setSeconds:(double)arg1;

@end
