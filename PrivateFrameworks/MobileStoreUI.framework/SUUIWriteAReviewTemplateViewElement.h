
@interface SUUIWriteAReviewTemplateViewElement : SUUIViewElement {
    long long  _itemIdentifier;
    NSString * _reviewMetadataURLString;
}

@property (nonatomic, readonly) long long itemIdentifier;
@property (nonatomic, readonly) NSString *reviewMetadataURLString;

- (void).cxx_destruct;
- (id)applyUpdatesWithElement:(id)arg1;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (long long)itemIdentifier;
- (id)reviewMetadataURLString;

@end
