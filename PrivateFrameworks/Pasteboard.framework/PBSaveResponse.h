
@interface PBSaveResponse : NSObject <NSSecureCoding> {
    long long  _changeCount;
    unsigned long long  _notificationState;
    UISPasteSharingToken * _sharingToken;
}

@property (readonly) long long changeCount;
@property (readonly) unsigned long long notificationState;
@property (readonly) UISPasteSharingToken *sharingToken;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)changeCount;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNotificationState:(unsigned long long)arg1 changeCount:(long long)arg2 sharingToken:(id)arg3;
- (unsigned long long)notificationState;
- (id)sharingToken;

@end
