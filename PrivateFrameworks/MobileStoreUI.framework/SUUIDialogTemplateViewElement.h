
@interface SUUIDialogTemplateViewElement : SUUIViewElement {
    long long  _dialogType;
}

@property (nonatomic, readonly) NSArray *buttons;
@property (nonatomic, readonly) long long dialogType;
@property (nonatomic, readonly) SUUIImageViewElement *image;
@property (nonatomic, readonly) SUUILabelViewElement *message;
@property (nonatomic, readonly) SUUILabelViewElement *title;

- (id)applyUpdatesWithElement:(id)arg1;
- (id)buttons;
- (long long)dialogType;
- (id)image;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (id)message;
- (id)title;

@end
