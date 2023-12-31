
@interface TSWPDefaultGraphicalAttachmentRenderer : NSObject <TSWPGraphicalAttachmentRenderer>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)drawAttachment:(id)arg1 inContext:(struct CGContext { }*)arg2 selection:(id)arg3;

@end
