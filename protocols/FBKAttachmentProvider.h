
@protocol FBKAttachmentProvider <NSObject>

@required

- (NSSet *)attachments;
- (void)cancelCollection:(FBKAttachment *)arg1;
- (bool)hasFilePromises;
- (bool)hasUnmetRequirements;
- (NSString *)identifier;
- (NSString *)platform;
- (void)removeAllAttachments;
- (void)removeAttachment:(FBKAttachment *)arg1;
- (NSSet *)requirements;
- (void)updateRequirements:(NSSet *)arg1;

@end
