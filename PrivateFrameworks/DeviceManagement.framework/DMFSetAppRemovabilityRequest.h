
@interface DMFSetAppRemovabilityRequest : DMFAppRequest {
    NSNumber * _removable;
}

@property (nonatomic, copy) NSNumber *removable;

+ (bool)isPermittedOnSystemConnection;
+ (bool)isPermittedOnUserConnection;
+ (id)permittedPlatforms;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)removable;
- (void)setRemovable:(id)arg1;

@end
