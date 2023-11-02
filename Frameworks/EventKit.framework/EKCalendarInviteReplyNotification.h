
@interface EKCalendarInviteReplyNotification : EKCalendarNotification {
    unsigned long long  _allowedEntityTypes;
    unsigned long long  _status;
}

@property (nonatomic) unsigned long long allowedEntityTypes;
@property (nonatomic) unsigned long long status;

// Image: /System/Library/Frameworks/EventKit.framework/EventKit

- (bool)acknowledgeWithEventStore:(id)arg1 error:(id*)arg2;
- (unsigned long long)allowedEntityTypes;
- (id)initWithType:(long long)arg1;
- (id)inviteReplyNotificationFromEventStore:(id)arg1;
- (void)setAllowedEntityTypes:(unsigned long long)arg1;
- (void)setStatus:(unsigned long long)arg1;
- (unsigned long long)status;

// Image: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit

- (id)_actionWithOptions:(unsigned long long)arg1;
- (id)allDescriptionStringsWithOptions:(unsigned long long)arg1;
- (id)descriptionStrings:(unsigned long long)arg1;
- (bool)supportsDisplay;
- (id)titleStringWithOptions:(unsigned long long)arg1;

@end
