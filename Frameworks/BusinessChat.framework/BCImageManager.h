
@interface BCImageManager : NSObject <BCImageManagerProtocol> {
    <BCNetworkProviderProtocol> * _networkProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_fetchBrandIconDataForMapItem:(id)arg1 desiredSize:(struct CGSize { double x1; double x2; })arg2 allowSmaller:(bool)arg3 completion:(id /* block */)arg4;
- (void)_fetchNavBarBrandIconDataForMapItem:(id)arg1 desiredSize:(struct CGSize { double x1; double x2; })arg2 allowSmaller:(bool)arg3 completion:(id /* block */)arg4;
- (void)fetchBrandIconDataForMapItem:(id)arg1 desiredSize:(struct CGSize { double x1; double x2; })arg2 allowSmaller:(bool)arg3 completion:(id /* block */)arg4;
- (void)fetchNavBarBrandIconDataForMapItem:(id)arg1 desiredSize:(struct CGSize { double x1; double x2; })arg2 allowSmaller:(bool)arg3 completion:(id /* block */)arg4;
- (id)init;

@end
