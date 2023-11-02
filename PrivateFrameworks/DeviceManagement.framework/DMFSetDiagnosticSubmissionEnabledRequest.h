
@interface DMFSetDiagnosticSubmissionEnabledRequest : DMFTaskRequest {
    bool  _enabled;
}

@property (nonatomic) bool enabled;

+ (bool)isPermittedOnSystemConnection;
+ (bool)isPermittedOnUserConnection;
+ (id)permittedPlatforms;
+ (bool)supportsSecureCoding;

- (bool)enabled;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setEnabled:(bool)arg1;

@end
