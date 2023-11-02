
@interface PXSharedAlbumGadgetDataSourceManager : PXGadgetDataSourceManager {
    NSArray * _gadgetProviders;
}

- (void).cxx_destruct;
- (id)gadgetProviders;
- (id /* block */)gadgetSortComparator;
- (id)initWithGadgetProviders:(id)arg1;

@end
