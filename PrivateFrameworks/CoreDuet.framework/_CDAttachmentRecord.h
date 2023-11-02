
@interface _CDAttachmentRecord : NSManagedObject

@property (nonatomic, retain) NSUUID *cloudIdentifier;
@property (nonatomic, retain) NSString *contentText;
@property (nonatomic, retain) NSURL *contentURL;
@property (nonatomic, retain) NSDate *creationDate;
@property (nonatomic, retain) NSUUID *identifier;
@property (nonatomic, retain) NSSet *interactions;
@property (nonatomic, retain) NSString *personInPhoto;
@property (nonatomic, retain) NSString *photoLocalIdentifier;
@property (nonatomic, retain) NSString *photoSceneDescriptor;
@property (nonatomic) long long sizeInBytes;
@property (nonatomic, retain) NSString *uti;

@end
