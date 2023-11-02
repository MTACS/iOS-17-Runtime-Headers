
@interface EKSerializableParticipant : EKSerializableObject {
    NSString * _emailAddress;
    NSString * _name;
    long long  _participantRole;
    long long  _participantStatus;
    long long  _participantType;
    NSString * _phoneNumber;
    NSURL * _url;
}

@property (nonatomic, copy) NSString *emailAddress;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) long long participantRole;
@property (nonatomic) long long participantStatus;
@property (nonatomic) long long participantType;
@property (nonatomic, copy) NSString *phoneNumber;
@property (nonatomic, retain) NSURL *url;

+ (id)classesForKey;

- (void).cxx_destruct;
- (id)createAttendee:(id*)arg1;
- (id)emailAddress;
- (id)initWithParticipant:(id)arg1;
- (id)name;
- (long long)participantRole;
- (long long)participantStatus;
- (long long)participantType;
- (id)phoneNumber;
- (void)setEmailAddress:(id)arg1;
- (void)setName:(id)arg1;
- (void)setParticipantRole:(long long)arg1;
- (void)setParticipantStatus:(long long)arg1;
- (void)setParticipantType:(long long)arg1;
- (void)setPhoneNumber:(id)arg1;
- (void)setUrl:(id)arg1;
- (id)url;

@end
