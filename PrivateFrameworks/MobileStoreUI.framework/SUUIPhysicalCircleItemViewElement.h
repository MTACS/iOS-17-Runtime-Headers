
@interface SUUIPhysicalCircleItemViewElement : SUUIViewElement {
    long long  _circleSize;
    NSString * _itemIdentifier;
}

@property (nonatomic, readonly) long long circleSize;
@property (nonatomic, readonly) SUUIImageViewElement *imageElement;
@property (nonatomic, readonly) NSString *itemIdentifier;
@property (nonatomic, readonly) SUUILabelViewElement *titleElement;

- (void).cxx_destruct;
- (id)applyUpdatesWithElement:(id)arg1;
- (long long)circleSize;
- (id)imageElement;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (id)itemIdentifier;
- (id)titleElement;

@end
