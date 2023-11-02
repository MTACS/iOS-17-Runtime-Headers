
@interface PXCreateCollectionListAction : PXPhotosAction {
    <PXFastEnumeration> * _childCollections;
    NSString * _createdCollectionIdentifier;
    PHCollectionList * _createdCollectionList;
    unsigned long long  _indexInParentCollectionList;
    PHCollectionList * _parentCollectionList;
    NSString * _title;
}

@property (nonatomic, readonly) <PXFastEnumeration> *childCollections;
@property (nonatomic, copy) NSString *createdCollectionIdentifier;
@property (nonatomic, readonly) PHCollectionList *createdCollectionList;
@property (nonatomic, readonly) unsigned long long indexInParentCollectionList;
@property (nonatomic, readonly) PHCollectionList *parentCollectionList;
@property (nonatomic, readonly) NSString *title;

- (void).cxx_destruct;
- (id)actionIdentifier;
- (id)actionNameLocalizationKey;
- (id)childCollections;
- (id)createdCollectionIdentifier;
- (id)createdCollectionList;
- (unsigned long long)indexInParentCollectionList;
- (id)initWithTitle:(id)arg1 parentCollectionList:(id)arg2 childCollections:(id)arg3;
- (id)parentCollectionList;
- (void)performAction:(id /* block */)arg1;
- (void)performRedo:(id /* block */)arg1;
- (void)performUndo:(id /* block */)arg1;
- (void)setCreatedCollectionIdentifier:(id)arg1;
- (id)title;

@end
