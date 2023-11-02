
@interface NoteAttachmentPresentationOccurence : NSObject {
    DOMHTMLElement * _element;
    NoteAttachmentPresentation * _presentation;
}

@property (nonatomic, readonly) DOMHTMLElement *element;
@property (nonatomic, readonly) NoteAttachmentPresentation *presentation;

- (void).cxx_destruct;
- (id)element;
- (id)init;
- (id)initWithPresentation:(id)arg1 element:(id)arg2;
- (id)presentation;
- (id)previewItemTitle;
- (id)previewItemURL;

@end
