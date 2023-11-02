
@interface SCUpdateUpsellAppLaunchCountCommand : NSObject <SCWZoneCommand> {
    void upsellAppLaunchCount;
}

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (void)executeWithZone:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
