
@protocol NoteContentLayerAttachmentPresentationDelegate <NSObject>

@required

- (NoteAttachmentPresentation *)noteContentLayer:(NoteContentLayer *)arg1 attachmentPresentationForContentID:(NSString *)arg2;
- (NSURL *)noteContentLayer:(NoteContentLayer *)arg1 fileURLForAttachmentWithContentID:(NSString *)arg2;

@end
