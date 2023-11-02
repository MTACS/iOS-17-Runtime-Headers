
@interface _UIDiffableDataSourceItemRenderer : NSObject <NSCopying> {
    Class  _cellClass;
    NSString * _cellReuseIdentifier;
    id /* block */  _handler;
    id  _rendererIdentifier;
}

@property (nonatomic, readonly) Class cellClass;
@property (nonatomic, readonly) NSString *cellReuseIdentifier;
@property (nonatomic, readonly) id /* block */ handler;
@property (nonatomic, readonly) id rendererIdentifier;

- (void).cxx_destruct;
- (Class)cellClass;
- (id)cellReuseIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id /* block */)handler;
- (id)initWithIdentifier:(id)arg1 cellClass:(Class)arg2 handler:(id /* block */)arg3;
- (id)initWithIdentifier:(id)arg1 cellClass:(Class)arg2 handler:(id /* block */)arg3 cellReuseIdentifier:(id)arg4;
- (id)rendererIdentifier;

@end
