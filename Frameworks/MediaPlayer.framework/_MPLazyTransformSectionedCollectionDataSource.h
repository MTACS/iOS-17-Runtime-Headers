
@interface _MPLazyTransformSectionedCollectionDataSource : NSObject <MPLazySectionedCollectionDataSource> {
    MPSectionedCollection * _collection;
    id /* block */  _itemTransform;
    id /* block */  _sectionTransform;
}

@property (nonatomic, readonly) MPSectionedCollection *collection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) id /* block */ itemTransform;
@property (nonatomic, readonly, copy) id /* block */ sectionTransform;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)collection;
- (id)initWithSectionedCollection:(id)arg1 sectionTransform:(id /* block */)arg2 itemTransform:(id /* block */)arg3;
- (id)itemAtIndexPath:(id)arg1;
- (id /* block */)itemTransform;
- (unsigned long long)numberOfItemsInSection:(unsigned long long)arg1;
- (unsigned long long)numberOfSections;
- (id)sectionAtIndex:(unsigned long long)arg1;
- (id /* block */)sectionTransform;

@end
