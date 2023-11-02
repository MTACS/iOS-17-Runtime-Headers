
@interface SUUIContextActionsConfiguration : NSObject {
    SUUIDialogTemplateViewElement * _dialogTemplate;
    SUUIContextActionsPresentationSource * _presentationSource;
}

@property (nonatomic, retain) SUUIDialogTemplateViewElement *dialogTemplate;
@property (nonatomic, retain) SUUIContextActionsPresentationSource *presentationSource;

- (void).cxx_destruct;
- (id)_resourceImageForImageElement:(id)arg1;
- (id)contextActions;
- (id)dialogTemplate;
- (id)initWithDialogTemplate:(id)arg1;
- (id)presentationSource;
- (void)setDialogTemplate:(id)arg1;
- (void)setPresentationSource:(id)arg1;

@end
