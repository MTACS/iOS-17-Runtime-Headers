
@interface EKCalendarShareeOrOwner : NSObject <EKCalendarShareeOrOwner> {
    NSURL * _URL;
    NSString * _UUID;
    NSString * _emailAddress;
    NSString * _firstName;
    bool  _isCurrentUserForSharing;
    NSString * _lastName;
    NSString * _name;
    NSString * _phoneNumber;
}

@property (nonatomic, retain) NSURL *URL;
@property (nonatomic, readonly) NSString *UUID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSString *emailAddress;
@property (nonatomic, retain) NSString *firstName;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isCurrentUserForScheduling;
@property (nonatomic, readonly) bool isCurrentUserForSharing;
@property (nonatomic, retain) NSString *lastName;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSString *phoneNumber;
@property (readonly) Class superclass;

+ (id)ownerForEKCalendar:(id)arg1;
+ (id)shareeWithEKSharee:(id)arg1 forCalendar:(id)arg2;

- (void).cxx_destruct;
- (id)URL;
- (id)UUID;
- (id)emailAddress;
- (id)firstName;
- (unsigned long long)hash;
- (bool)isCurrentUserForScheduling;
- (bool)isCurrentUserForSharing;
- (bool)isEqual:(id)arg1;
- (id)lastName;
- (id)name;
- (id)phoneNumber;
- (void)setEmailAddress:(id)arg1;
- (void)setFirstName:(id)arg1;
- (void)setLastName:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPhoneNumber:(id)arg1;
- (void)setURL:(id)arg1;

@end
