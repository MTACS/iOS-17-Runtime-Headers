
@protocol BCImageManagerProtocol <NSObject>

@required

- (void)_fetchBrandIconDataForMapItem:(void *)arg1 desiredSize:(void *)arg2 allowSmaller:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: <BCMapItemProtocol> *, struct CGSize { double x1; double x2; }, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, NSError *, void*
- (void)_fetchNavBarBrandIconDataForMapItem:(void *)arg1 desiredSize:(void *)arg2 allowSmaller:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: <BCMapItemProtocol> *, struct CGSize { double x1; double x2; }, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, NSError *, void*

@end
