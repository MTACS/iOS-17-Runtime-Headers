
@interface MPModelStoreBrowseRoomMusicKitRequestOperation : MPStoreModelRequestOperation {
    NSIndexSet * _allowedFCKinds;
}

- (void).cxx_destruct;
- (id)_produceResponseWithParser:(id)arg1 results:(id)arg2 error:(id*)arg3;
- (id)_roomURLWithRoomID:(id)arg1 storeURLBag:(id)arg2;
- (id)configurationForLoadingModelDataWithStoreURLBag:(id)arg1 error:(id*)arg2;
- (void)produceResponseWithLoadedOutput:(id)arg1 completion:(id /* block */)arg2;

@end
