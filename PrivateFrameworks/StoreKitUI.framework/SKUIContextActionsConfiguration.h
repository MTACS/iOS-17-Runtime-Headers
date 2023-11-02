
@interface SKUIContextActionsConfiguration : NSObject {
    SKUIDialogTemplateViewElement * _dialogTemplate;
    SKUIContextActionsPresentationSource * _presentationSource;
}

@property (nonatomic, retain) SKUIDialogTemplateViewElement *dialogTemplate;
@property (nonatomic, retain) SKUIContextActionsPresentationSource *presentationSource;

- (void).cxx_destruct;
- (id)_resourceImageForImageElement:(id)arg1;
- (id)contextActions;
- (id)dialogTemplate;
- (id)initWithDialogTemplate:(id)arg1;
- (id)presentationSource;
- (void)setDialogTemplate:(id)arg1;
- (void)setPresentationSource:(id)arg1;

@end
