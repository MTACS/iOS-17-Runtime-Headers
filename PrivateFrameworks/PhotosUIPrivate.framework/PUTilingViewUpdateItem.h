
@interface PUTilingViewUpdateItem : NSObject {
    long long  _action;
    PUTilingDataSource * _dataSource;
    NSIndexPath * _indexPathAfterUpdate;
    NSIndexPath * _indexPathBeforeUpdate;
}

@property (nonatomic, readonly) long long action;
@property (nonatomic, readonly) PUTilingDataSource *dataSource;
@property (nonatomic, readonly) NSIndexPath *indexPathAfterUpdate;
@property (nonatomic, readonly) NSIndexPath *indexPathBeforeUpdate;

- (void).cxx_destruct;
- (long long)action;
- (id)dataSource;
- (id)indexPathAfterUpdate;
- (id)indexPathBeforeUpdate;
- (id)initWithAction:(long long)arg1 indexPathBeforeUpdate:(id)arg2 indexPathAfterUpdate:(id)arg3 dataSource:(id)arg4;
- (id)transformedIndexPath:(id)arg1 withDataSource:(id)arg2;

@end
