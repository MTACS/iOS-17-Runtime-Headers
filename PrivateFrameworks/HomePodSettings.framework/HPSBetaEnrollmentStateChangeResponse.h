
@interface HPSBetaEnrollmentStateChangeResponse : COMessageChannelResponse {
    void error;
    void state;
    void success;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
