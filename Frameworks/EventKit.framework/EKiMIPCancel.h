
@interface EKiMIPCancel : EKiMIPHandler {
    NSData * _attachmentData;
    NSArray * _attendees;
}

+ (bool)shouldSendEmailForEvent:(id)arg1 removedAttendees:(id*)arg2;

- (void).cxx_destruct;
- (id)attachmentData;
- (id)attendees;
- (id)emailAttachmentName;
- (id)emailBody;
- (id)emailSubject;
- (int)icsMethod;
- (id)initWithEvent:(id)arg1 andAttendees:(id)arg2;

@end
