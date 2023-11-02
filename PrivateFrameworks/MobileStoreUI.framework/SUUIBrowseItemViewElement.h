
@interface SUUIBrowseItemViewElement : SUUIItemViewElement {
    bool  _expands;
}

@property (nonatomic, readonly) SUUIImageViewElement *decorationImage;
@property (nonatomic, readonly) bool expands;
@property (nonatomic, readonly) NSArray *metadata;

- (id)applyUpdatesWithElement:(id)arg1;
- (id)decorationImage;
- (bool)expands;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (id)metadata;
- (long long)pageComponentType;

@end
