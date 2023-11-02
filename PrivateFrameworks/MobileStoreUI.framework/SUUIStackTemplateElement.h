
@interface SUUIStackTemplateElement : SUUIViewElement {
    NSMutableArray * _collectionElements;
    SUUIViewElement * _collectionHeaderViewElement;
    bool  _needsStateReset;
}

@property (nonatomic, readonly) NSArray *collectionElements;
@property (nonatomic, readonly) SUUIViewElement *collectionHeaderViewElement;
@property (nonatomic, readonly) SUUIIndexBarViewElement *indexBarViewElement;
@property (nonatomic, readonly) SUUINavigationBarViewElement *navigationBarElement;
@property (nonatomic, readonly) bool needsStateReset;
@property (nonatomic, readonly) long long numberOfSplits;
@property (nonatomic, readonly) SUUIToolbarViewElement *toolbarElement;

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
