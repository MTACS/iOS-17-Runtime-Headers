
@interface IMDaemonCore.PersistedCollaborationNotice : NSManagedObject

@property (nonatomic, copy) NSDate *date;
@property (nonatomic, copy) NSDate *dateViewed;
@property (nonatomic, copy) NSString *guidString;
@property (nonatomic, copy) NSData *metadata;
@property (nonatomic, copy) NSString *senderHandle;
@property (nonatomic, copy) NSString *url;
@property (nonatomic) short version;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
