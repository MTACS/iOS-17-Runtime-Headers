
@interface EKCalendarNotification : NSObject <EKIdentityProtocol> {
    NSURL * _URL;
    bool  _alerted;
    EKCalendar * _calendar;
    bool  _couldBeJunk;
    struct CGColor { } * _dotColor;
    NSString * _emailAddress;
    EKEvent * _event;
    NSString * _firstName;
    bool  _hiddenFromNotificationCenter;
    NSString * _lastName;
    NSString * _name;
    EKObjectID * _objectID;
    NSString * _phoneNumber;
    NSString * _recipientName;
    EKSource * _source;
    NSString * _title;
    long long  _type;
}

@property (nonatomic, retain) NSURL *URL;
@property (nonatomic) bool alerted;
@property (nonatomic, retain) EKCalendar *calendar;
@property (nonatomic) bool couldBeJunk;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) struct CGColor { }*dotColor;
@property (nonatomic, retain) NSString *emailAddress;
@property (nonatomic, retain) EKEvent *event;
@property (nonatomic, retain) NSString *firstName;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hiddenFromNotificationCenter;
@property (nonatomic, readonly) bool isCurrentUserForScheduling;
@property (nonatomic, readonly) bool isCurrentUserForSharing;
@property (nonatomic, retain) NSString *lastName;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, readonly) bool needsAlert;
@property (nonatomic, retain) EKObjectID *objectID;
@property (nonatomic, retain) NSString *phoneNumber;
@property (nonatomic, retain) NSString *recipientName;
@property (nonatomic, retain) EKSource *source;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *title;
@property (nonatomic) long long type;
@property (nonatomic, readonly) NSString *uniqueIdentifier;

// Image: /System/Library/Frameworks/EventKit.framework/EventKit

- (void).cxx_destruct;
- (id)URL;
- (bool)acknowledgeWithEventStore:(id)arg1 error:(id*)arg2;
- (bool)alerted;
- (id)calendar;
- (bool)couldBeJunk;
- (void)dealloc;
- (struct CGColor { }*)dotColor;
- (id)emailAddress;
- (id)event;
- (id)firstName;
- (bool)hiddenFromNotificationCenter;
- (id)initWithType:(long long)arg1;
- (bool)isInvitation;
- (bool)isProposedNewTime;
- (bool)isSharedCalendarInvitation;
- (id)lastName;
- (id)name;
- (bool)needsAlert;
- (id)objectID;
- (id)phoneNumber;
- (bool)proposedStartDateIsInFutureForAttendee:(id)arg1;
- (id)recipientName;
- (void)setAlerted:(bool)arg1;
- (void)setCalendar:(id)arg1;
- (void)setCouldBeJunk:(bool)arg1;
- (void)setDotColor:(struct CGColor { }*)arg1;
- (void)setEmailAddress:(id)arg1;
- (void)setEvent:(id)arg1;
- (void)setFirstName:(id)arg1;
- (void)setHiddenFromNotificationCenter:(bool)arg1;
- (void)setLastName:(id)arg1;
- (void)setName:(id)arg1;
- (void)setObjectID:(id)arg1;
- (void)setPhoneNumber:(id)arg1;
- (void)setRecipientName:(id)arg1;
- (void)setSource:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setType:(long long)arg1;
- (void)setURL:(id)arg1;
- (id)source;
- (id)title;
- (long long)type;
- (id)uniqueIdentifier;

// Image: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit

- (id)_identityStringForIdentity:(id)arg1 withOptions:(unsigned long long)arg2;
- (id)_identityStringWithOptions:(unsigned long long)arg1;
- (id)allDescriptionStringsWithOptions:(unsigned long long)arg1;
- (bool)cuik_isTimeSensitive;
- (bool)cuik_shouldShowNotificationWithUnselectedCalendarsForFocus:(id)arg1;
- (id)descriptionStrings:(unsigned long long)arg1;
- (id)senderStringWithOptions:(unsigned long long)arg1;
- (bool)supportsDisplay;
- (id)timeSensitiveDescriptionString;
- (id)titleStringWithOptions:(unsigned long long)arg1;

@end
