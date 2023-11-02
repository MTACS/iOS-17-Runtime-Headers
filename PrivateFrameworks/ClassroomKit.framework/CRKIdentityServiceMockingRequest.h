
@interface CRKIdentityServiceMockingRequest : CATTaskRequest {
    bool  _shouldDisable;
}

@property (nonatomic) bool shouldDisable;

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setShouldDisable:(bool)arg1;
- (bool)shouldDisable;

@end
