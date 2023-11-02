
@protocol TSWPAttachmentNumberProviding <NSObject>

@required

- (unsigned long long)pageCountForAttachment:(TSWPAttachment *)arg1;
- (unsigned long long)pageNumberForAttachment:(TSWPAttachment *)arg1;

@end
