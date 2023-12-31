
@interface IKSectionElement : IKDataSourceElement {
    NSArray * _items;
}

@property (nonatomic, readonly, retain) IKViewElement *footer;
@property (nonatomic, readonly, retain) IKHeaderElement *header;
@property (nonatomic, readonly, retain) NSArray *items;

- (void).cxx_destruct;
- (void)appDocumentDidMarkStylesDirty;
- (id)applyUpdatesWithElement:(id)arg1;
- (id)footer;
- (id)header;
- (id)items;
- (id)unboundItemElements;

@end
