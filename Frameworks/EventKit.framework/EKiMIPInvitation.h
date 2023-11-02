
@interface EKiMIPInvitation : EKiMIPUpdate {
    NSSet * _attendees;
}

+ (bool)shouldSendEmailForEvent:(id)arg1 withDiff:(id)arg2;

- (void).cxx_destruct;
- (id)attendees;
- (id)emailBody;
- (id)emailSubject;
- (id)initWithEvent:(id)arg1 withDiff:(id)arg2;

@end
