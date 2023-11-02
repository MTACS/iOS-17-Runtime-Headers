
@interface SCUpdateLastAppLaunchUpsellInstanceIDCommand : NSObject <SCWZoneCommand> {
    void lastAppLaunchUpsellInstanceID;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (void)executeWithZone:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
