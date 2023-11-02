
@interface TabDocumentDragMetadata : NSObject {
    <TabCollectionView> * _sourceTabView;
    TabDocument * _tabDocument;
}

@property (nonatomic, readonly) <TabCollectionView> *sourceTabView;
@property (nonatomic, readonly) TabDocument *tabDocument;

- (void).cxx_destruct;
- (id)initWithTabDocument:(id)arg1 sourceTabView:(id)arg2;
- (id)sourceTabView;
- (id)tabDocument;

@end
