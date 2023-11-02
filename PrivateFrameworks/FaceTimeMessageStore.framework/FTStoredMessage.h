
@interface FTStoredMessage : NSManagedObject

@property (nonatomic, copy) NSUUID *callUUID;
@property (nonatomic, copy) NSUUID *conversationID;
@property (nonatomic, copy) NSDate *dateCreated;
@property (nonatomic, copy) NSDate *dateDeleted;
@property (nonatomic, copy) NSDate *dateModified;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic) double duration;
@property (nonatomic, copy) NSString *fileType;
@property (nonatomic, copy) NSString *from;
@property (nonatomic) bool isRTT;
@property (nonatomic) bool isRead;
@property (nonatomic) bool isSensitive;
@property (nonatomic) short mailboxType;
@property (nonatomic, copy) NSData *messageFile;
@property (nonatomic, copy) NSData *messageThumbnail;
@property (nonatomic) short messageType;
@property (nonatomic, copy) NSString *provider;
@property (nonatomic, copy) NSString *quality;
@property (nonatomic, copy) NSString *recipient;
@property (nonatomic, copy) NSUUID *recordUUID;
@property (nonatomic, copy) NSString *simID;
@property (nonatomic, copy) NSString *thumbnailType;
@property (nonatomic, copy) NSData *transcript;
@property (nonatomic, copy) NSString *transcriptType;
@property (nonatomic) short transcriptionStatus;

- (id)description;
- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
