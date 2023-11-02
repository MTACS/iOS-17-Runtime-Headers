
@interface CRKBrowseForCourseInvitationsRequest : CATTaskRequest {
    bool  _ignoresDeviceIdleState;
}

@property (nonatomic) bool ignoresDeviceIdleState;

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (bool)ignoresDeviceIdleState;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)setIgnoresDeviceIdleState:(bool)arg1;

@end
