
@interface HPSBetaEnrollmentDeviceModelCoderContainer : NSObject <NSSecureCoding> {
    void availability;
    void state;
}

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
