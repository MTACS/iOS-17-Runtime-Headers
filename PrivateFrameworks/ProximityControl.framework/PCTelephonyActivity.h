
@interface PCTelephonyActivity : NSUserActivity <PCActivity> {
    UIImage * _callImage;
    bool  _hostedOnCurrentDevice;
    bool  _hostedOnCurrentDeviceIsValid;
}

- (void).cxx_destruct;
- (id)activityString;
- (id)bundleIdentifier;
- (id)callImage;
- (id)callUUID;
- (id)contactIdentifier;
- (id)dateConnected;
- (id)description;
- (id)displayName;
- (bool)hostedOnCurrentDevice;
- (bool)hostedOnCurrentDeviceIsValid;
- (id)image;
- (id)initFromKnownCall:(id)arg1;
- (id)initFromSensitiveCall:(id)arg1;
- (id)initWithActivity:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isValid;
- (unsigned long long)pcactivityType;
- (id)title;

@end
