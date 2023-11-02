
@interface TTYHistory : NSManagedObject

@property (nonatomic, retain) NSString *callUID;
@property (nonatomic, retain) NSData *data;
@property (nonatomic, retain) NSNumber *needsCloudKitUpload;
@property (nonatomic, retain) NSNumber *version;

@end
