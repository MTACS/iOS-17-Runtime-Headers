
@protocol ICLegacyAttachment <NSObject>

@required

- (NSURL *)cidURL;
- (NSString *)contentID;
- (NSURL *)fileURL;
- (NSString *)identifier;
- (NSManagedObjectContext *)managedObjectContext;
- (NSString *)mimeType;
- (bool)persistAttachmentData:(NSData *)arg1 error:(id*)arg2;
- (void)setMimeType:(NSString *)arg1;
- (NSString *)typeUTI;

@end
