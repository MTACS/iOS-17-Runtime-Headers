
@protocol ICTTAttachment <ICTTModelAttributeComparable, NSObject>

@required

- (NSString *)attachmentIdentifier;
- (ICAttachment *)attachmentInContext:(NSManagedObjectContext *)arg1;
- (NSString *)attachmentUTI;
- (ICInlineAttachment *)inlineAttachmentInContext:(NSManagedObjectContext *)arg1;

@end
