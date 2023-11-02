
@interface MPModelLibraryResponseKeepLocalStatusConfiguration : NSObject {
    struct shared_ptr<mlcore::EntityQuery> { 
        struct EntityQuery {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _downloadableItemsQuery;
    id /* block */  _downloadablePlaylistItemEntityQueryBlock;
}

@property (nonatomic) struct shared_ptr<mlcore::EntityQuery> { struct EntityQuery {} *x1; struct __shared_weak_count {} *x2; } downloadableItemsQuery;
@property (nonatomic, copy) id /* block */ downloadablePlaylistItemEntityQueryBlock;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct shared_ptr<mlcore::EntityQuery> { struct EntityQuery {} *x1; struct __shared_weak_count {} *x2; })downloadableItemsQuery;
- (id /* block */)downloadablePlaylistItemEntityQueryBlock;
- (void)setDownloadableItemsQuery:(struct shared_ptr<mlcore::EntityQuery> { struct EntityQuery {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (void)setDownloadablePlaylistItemEntityQueryBlock:(id /* block */)arg1;

@end
