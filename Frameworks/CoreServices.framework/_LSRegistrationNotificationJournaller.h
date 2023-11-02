
@interface _LSRegistrationNotificationJournaller : _LSInstallNotificationJournaller {
    bool  _placeholder;
}

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (bool)entityExists;
- (id)initWithCoder:(id)arg1;
- (id)initWithPrimaryBundleID:(id)arg1 placeholder:(bool)arg2;
- (bool)shouldExpectEntityToExist;
- (id)synthesizedPreliminaryJournalledNotifications;

@end
