
@protocol ICLegacyNote <NSObject>

@required

+ (NSPredicate *)predicateForVisibleNotes;

- (<ICLegacyAccount> *)account;
- (NSArray *)attachments;
- (NSString *)contentAsPlainText;
- (<ICLegacyAttachment> *)createAttachmentWithName:(NSString *)arg1;
- (NSDate *)creationDate;
- (<ICLegacyFolder> *)folder;
- (NSString *)htmlString;
- (NSString *)identifier;
- (bool)isDeletedOrInTrash;
- (bool)isMarkedForDeletion;
- (bool)isPlainText;
- (NSManagedObjectContext *)managedObjectContext;
- (void)markForDeletion;
- (NSDate *)modificationDate;
- (NSManagedObjectID *)objectID;
- (void)setHtmlString:(NSString *)arg1;
- (NSString *)title;

@end
