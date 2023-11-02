
@protocol MFMessageRewriterPlaceholderResolver <NSObject>

@required

- (id)contentForContentID:(NSString *)arg1;
- (id)contentForPlaceholder:(MFAttachmentPlaceholder *)arg1;
- (id)contentForURL:(NSURL *)arg1;

@end
