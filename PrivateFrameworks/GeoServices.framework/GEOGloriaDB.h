
@interface GEOGloriaDB : NSObject {
    Class  _dataClass;
    struct unique_ptr<gloria::DB, std::default_delete<gloria::DB>> { 
        struct __compressed_pair<gloria::DB *, std::default_delete<gloria::DB>> { 
            struct DB {} *__value_; 
        } __ptr_; 
    }  _db;
    NSObject<OS_os_log> * _log;
    Class  _metadataClass;
    struct TileId { 
        unsigned long long tile_id_; 
        unsigned char zoom_; 
    }  _rootTileId;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_dataForQuadKey:(unsigned long long)arg1 ofType:(Class)arg2;
- (bool)_unsafeDataForQuadKey:(unsigned long long)arg1 ofType:(Class)arg2 result:(id /* block */)arg3;
- (bool)containsQuadKey:(unsigned long long)arg1;
- (bool)containsQuadKeyNum:(id)arg1;
- (id)dataForQuadKey:(unsigned long long)arg1;
- (id)dataForQuadKeyNum:(id)arg1;
- (bool)enumerateDataAtLocation:(struct { double x1; double x2; })arg1 radius:(double)arg2 visitor:(id /* block */)arg3;
- (bool)enumerateDataAtLocation:(struct { double x1; double x2; })arg1 radius:(double)arg2 zoom:(unsigned char)arg3 visitor:(id /* block */)arg4;
- (id)initWithDBAccess:(struct shared_ptr<gloria::DbReader> { struct DbReader {} *x1; struct __shared_weak_count {} *x2; })arg1 rootQuadKey:(unsigned long long)arg2 metadataClass:(Class)arg3 dataClass:(Class)arg4 log:(id)arg5;
- (id)initWithFileHandle:(id)arg1 rootQuadKey:(unsigned long long)arg2 log:(id)arg3;
- (id)initWithFileHandle:(id)arg1 rootQuadKey:(unsigned long long)arg2 metadataClass:(Class)arg3 dataClass:(Class)arg4 log:(id)arg5;
- (id)initWithFileURL:(id)arg1 rootQuadKey:(unsigned long long)arg2 log:(id)arg3;
- (id)initWithFileURL:(id)arg1 rootQuadKey:(unsigned long long)arg2 metadataClass:(Class)arg3 dataClass:(Class)arg4 log:(id)arg5;
- (id)metadata;
- (bool)unsafeDataForQuadKey:(unsigned long long)arg1 result:(id /* block */)arg2;
- (bool)unsafeDataForQuadKeyNum:(id)arg1 result:(id /* block */)arg2;
- (bool)unsafeEnumerateDataAtLocation:(struct { double x1; double x2; })arg1 radius:(double)arg2 visitor:(id /* block */)arg3;
- (bool)unsafeEnumerateDataAtLocation:(struct { double x1; double x2; })arg1 radius:(double)arg2 zoom:(unsigned char)arg3 visitor:(id /* block */)arg4;
- (bool)unsafeMetadata:(id /* block */)arg1;

@end
