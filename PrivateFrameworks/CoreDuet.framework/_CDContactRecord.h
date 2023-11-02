
@interface _CDContactRecord : NSManagedObject {
    _CDContact * contact;
}

@property (retain) _CDContact *contact;
@property (nonatomic) double creationDate;
@property (nonatomic, retain) NSString *customIdentifier;
@property (nonatomic, retain) NSURL *displayImageURL;
@property (nonatomic, retain) NSString *displayName;
@property (nonatomic) int displayType;
@property (nonatomic) double firstIncomingRecipientDate;
@property (nonatomic) double firstIncomingSenderDate;
@property (nonatomic) double firstOutgoingRecipientDate;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic) int incomingRecipientCount;
@property (nonatomic) int incomingSenderCount;
@property (nonatomic, retain) NSSet *interactionRecipient;
@property (nonatomic, retain) NSSet *interactionSender;
@property (nonatomic) double lastIncomingRecipientDate;
@property (nonatomic) double lastIncomingSenderDate;
@property (nonatomic) double lastOutgoingRecipientDate;
@property (nonatomic) int outgoingRecipientCount;
@property (nonatomic) long long participantStatus;
@property (nonatomic, retain) NSString *personId;
@property (nonatomic) int personIdType;
@property (nonatomic) int type;

- (void).cxx_destruct;
- (id)contact;
- (void)setContact:(id)arg1;

@end
