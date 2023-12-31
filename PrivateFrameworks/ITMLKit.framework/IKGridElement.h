
@interface IKGridElement : IKCollectionElement {
    bool  _paged;
}

@property (nonatomic, readonly) unsigned long long columnCount;
@property (getter=isPaged, nonatomic, readonly) bool paged;
@property (nonatomic, readonly) unsigned long long rowCount;
@property (nonatomic, readonly) NSString *rowHeight;

- (unsigned long long)columnCount;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (bool)isPaged;
- (unsigned long long)rowCount;
- (id)rowHeight;

@end
