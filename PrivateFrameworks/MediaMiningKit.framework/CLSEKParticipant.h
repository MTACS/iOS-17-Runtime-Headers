
@interface CLSEKParticipant : NSObject <NSCoding> {
    NSURL * _URL;
    NSString * _emailAddress;
    bool  _isCurrentUser;
    NSString * _name;
    long long  _participantStatus;
    long long  _participantType;
}

@property (readonly) NSURL *URL;
@property (readonly) NSString *emailAddress;
@property (readonly) bool isCurrentUser;
@property (readonly) NSString *name;
@property (readonly) long long participantStatus;
@property (readonly) long long participantType;

- (void).cxx_destruct;
- (id)URL;
- (id)emailAddress;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithEKParticipant:(id)arg1;
- (bool)isCurrentUser;
- (bool)isEqual:(id)arg1;
- (id)name;
- (long long)participantStatus;
- (long long)participantType;

@end
