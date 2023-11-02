
@interface ICCKShareUnknownParticipant : NSObject {
    NSString * _participantUserID;
}

@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) NSString *participantUserID;

- (void).cxx_destruct;
- (id)displayName;
- (id)initWithParticipantUserID:(id)arg1;
- (id)participantUserID;

@end
