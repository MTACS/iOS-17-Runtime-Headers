
@interface SKUIPreviewTemplateViewElement : SKUIViewElement {
    long long  _itemIdentifier;
    NSString * _previewURLString;
}

@property (nonatomic, readonly) long long itemIdentifier;
@property (nonatomic, readonly) SKUILockupViewElement *previewLockup;
@property (nonatomic, readonly) NSString *previewURLString;

- (void).cxx_destruct;
- (id)applyUpdatesWithElement:(id)arg1;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (long long)itemIdentifier;
- (id)previewLockup;
- (id)previewURLString;

@end
