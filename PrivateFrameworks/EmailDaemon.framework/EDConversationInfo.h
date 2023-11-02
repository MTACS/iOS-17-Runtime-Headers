
@interface EDConversationInfo : NSManagedObject

@property (nonatomic, copy) NSString *ckRecordID;
@property (nonatomic, retain) NSData *ckRecordSystemFields;
@property (nonatomic, copy) NSString *conversationUUID;
@property (nonatomic, copy) NSDate *lastModified;
@property (nonatomic, copy) NSString *messageIds;
@property (nonatomic) bool muted;
@property (nonatomic) bool notifyMe;

+ (id)fetchRequest;

@end
