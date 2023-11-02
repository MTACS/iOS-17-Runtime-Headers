
@interface HMMutablePresenceEvent : HMPresenceEvent

@property (nonatomic) unsigned long long presenceEventType;
@property (nonatomic, copy) NSString *presenceType;
@property (nonatomic) unsigned long long presenceUserType;
@property (nonatomic, retain) NSArray *users;

@end
