
@interface ATXGEOTileLoader : NSObject <ATXGEOTileLoaderProtocol> {
    NSObject<OS_dispatch_queue> * _callbackQueue;
}

- (void).cxx_destruct;
- (id)init;
- (void)requestGEOTileDataForLocation:(id)arg1 tileDataHandler:(id /* block */)arg2;
- (void)requestGEOTileDataForLocation:(id)arg1 tileLoader:(id)arg2 tileDataHandler:(id /* block */)arg3;
- (id)tileKeyListForLocation:(id)arg1;

@end
