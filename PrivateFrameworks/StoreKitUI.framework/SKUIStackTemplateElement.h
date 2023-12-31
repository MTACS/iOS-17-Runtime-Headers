
@interface SKUIStackTemplateElement : SKUIViewElement {
    NSMutableArray * _collectionElements;
    SKUIViewElement * _collectionHeaderViewElement;
    bool  _needsStateReset;
}

@property (nonatomic, readonly) NSArray *collectionElements;
@property (nonatomic, readonly) SKUIViewElement *collectionHeaderViewElement;
@property (nonatomic, readonly) SKUIIndexBarViewElement *indexBarViewElement;
@property (nonatomic, readonly) SKUINavigationBarViewElement *navigationBarElement;
@property (nonatomic, readonly) bool needsStateReset;
@property (nonatomic, readonly) long long numberOfSplits;
@property (nonatomic, readonly) SKUIToolbarViewElement *toolbarElement;

- (void).cxx_destruct;
- (id)applyUpdatesWithElement:(id)arg1;
- (id)collectionElements;
- (id)collectionHeaderViewElement;
- (id)indexBarViewElement;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (id)navigationBarElement;
- (bool)needsStateReset;
- (long long)numberOfSplits;
- (id)toolbarElement;

@end
