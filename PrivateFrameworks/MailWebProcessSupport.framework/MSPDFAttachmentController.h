
@interface MSPDFAttachmentController : NSObject <MSMailWebProcessAttachmentProxy> {
    <MSPDFAttachmentControllerDelegate> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MSPDFAttachmentControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)log;

- (void).cxx_destruct;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)updateToInlinePDFAttachmentIfNeeded:(id)arg1;

@end
