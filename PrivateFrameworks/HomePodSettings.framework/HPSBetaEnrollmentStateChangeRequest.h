
@interface HPSBetaEnrollmentStateChangeRequest : COMessageChannelRequest {
    void desiredState;
}

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
