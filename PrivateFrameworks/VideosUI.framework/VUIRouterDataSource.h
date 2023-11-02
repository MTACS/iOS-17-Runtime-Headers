
@interface VUIRouterDataSource : NSObject {
    VUIEventDataSource * _contextMenuEventDataSource;
    VUIEventDataSource * _playEventDataSource;
    VUIEventDataSource * _selectEventDataSource;
}

@property (nonatomic, retain) VUIEventDataSource *contextMenuEventDataSource;
@property (nonatomic, retain) VUIEventDataSource *playEventDataSource;
@property (nonatomic, retain) VUIEventDataSource *selectEventDataSource;

- (void).cxx_destruct;
- (id)contextMenuEventDataSource;
- (id)initWithLibraryMediaEntity:(id)arg1;
- (id)initWithRouterData:(id)arg1 appContext:(id)arg2;
- (id)initWithRouterData:(id)arg1 prefetchedData:(id)arg2;
- (id)playEventDataSource;
- (id)selectEventDataSource;
- (void)setContextMenuEventDataSource:(id)arg1;
- (void)setPlayEventDataSource:(id)arg1;
- (void)setSelectEventDataSource:(id)arg1;

@end
