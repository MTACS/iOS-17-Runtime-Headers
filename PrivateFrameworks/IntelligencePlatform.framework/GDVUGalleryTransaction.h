
@interface GDVUGalleryTransaction : NSObject {
    void inner;
}

- (void).cxx_destruct;
- (bool)addWithObservation:(id)arg1 context:(id)arg2 priority:(long long)arg3 at:(long long)arg4 output:(long long*)arg5 error:(id*)arg6;
- (id)init;
- (bool)remove:(long long)arg1 error:(id*)arg2;
- (bool)removeWithAsset:(id)arg1 error:(id*)arg2;
- (bool)tag:(long long)arg1 with:(id)arg2 type:(long long)arg3 error:(id*)arg4;
- (bool)untag:(long long)arg1 error:(id*)arg2;

@end
