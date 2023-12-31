
@protocol UITextPasteItem <NSObject>

@required

- (NSDictionary *)defaultAttributes;
- (NSItemProvider *)itemProvider;
- (id)localObject;
- (void)setAttachmentResult:(NSTextAttachment *)arg1;
- (void)setAttributedStringResult:(NSAttributedString *)arg1;
- (void)setDefaultResult;
- (void)setNoResult;
- (void)setStringResult:(NSString *)arg1;

@end
