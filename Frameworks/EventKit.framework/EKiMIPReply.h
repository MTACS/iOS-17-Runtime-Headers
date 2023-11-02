
@interface EKiMIPReply : EKiMIPHandler

+ (bool)shouldSendEmailForEvent:(id)arg1 withDiff:(id)arg2;

- (id)attendees;
- (id)emailAttachmentName;
- (id)emailBody;
- (id)emailSubject;
- (int)icsMethod;

@end
