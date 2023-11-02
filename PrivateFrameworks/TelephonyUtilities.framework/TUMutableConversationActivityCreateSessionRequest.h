
@interface TUMutableConversationActivityCreateSessionRequest : TUConversationActivityCreateSessionRequest

@property (nonatomic, copy) NSUUID *UUID;
@property (nonatomic, copy) NSString *activityIdentifier;
@property (nonatomic, copy) NSData *applicationContext;
@property (nonatomic, retain) TUConversationActivityMetadata *metadata;
@property (nonatomic, copy) CKShare *share;
@property (nonatomic, copy) NSString *staticIdentifier;

@end
