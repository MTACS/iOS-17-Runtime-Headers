
@interface DMFSetAppTapToPayScreenLockRequest : DMFAppRequest {
    NSNumber * _tapToPayScreenLock;
}

@property (nonatomic, copy) NSNumber *tapToPayScreenLock;

+ (bool)isPermittedOnSystemConnection;
+ (bool)isPermittedOnUserConnection;
+ (id)permittedPlatforms;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setTapToPayScreenLock:(id)arg1;
- (id)tapToPayScreenLock;

@end
