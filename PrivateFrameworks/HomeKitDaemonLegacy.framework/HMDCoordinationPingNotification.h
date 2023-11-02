
@interface HMDCoordinationPingNotification : COMeshNotification {
    NSUUID * _primaryResidentUUID;
}

@property (readonly) NSUUID *primaryResidentUUID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPrimaryResidentUUID:(id)arg1;
- (id)primaryResidentUUID;

@end
