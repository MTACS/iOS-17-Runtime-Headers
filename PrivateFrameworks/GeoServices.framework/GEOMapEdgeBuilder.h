
@interface GEOMapEdgeBuilder : GEOMapRequest {
    bool  _buildAhead;
    bool  _buildBehind;
    unsigned long long  _buildDirection;
    GEOMapTileFinder * _currentTileFinder;
    id /* block */  _edgeHandler;
    struct Matrix<float, 2, 1> { 
        float _e[2]; 
    }  _firstTilePoint;
    struct Matrix<float, 2, 1> { 
        float _e[2]; 
    }  _lastTilePoint;
    bool  _searchDirection;
    struct unordered_set<_GEOTileKey, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, std::allocator<_GEOTileKey>> { 
        struct __hash_table<_GEOTileKey, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, std::allocator<_GEOTileKey>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<_GEOTileKey, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<_GEOTileKey, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<_GEOTileKey, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<_GEOTileKey, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<_GEOTileKey, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<_GEOTileKey, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<_GEOTileKey, void *> *>, std::allocator<std::__hash_node<_GEOTileKey, void *>>> { 
                struct __hash_node_base<std::__hash_node<_GEOTileKey, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::hash<GEOTileKey>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::equal_to<GEOTileKey>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _tileKeysSeen;
}

@property (nonatomic) unsigned long long buildDirection;
@property (nonatomic, copy) id /* block */ edgeHandler;
@property (nonatomic, readonly) GEOMapAccess *map;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_buildCompleteEdge;
- (bool)_edgeStart:(const void*)arg1 end:(const void*)arg2 connectsTo:(const void*)arg3;
- (bool)_findEdgeAhead;
- (bool)_findEdgeAheadInTile:(id)arg1;
- (bool)_findEdgeBehind;
- (bool)_findEdgeBehindInTile:(id)arg1;
- (bool)_findNextEdge;
- (void)_findTilesAdjacentToTile:(const struct _GEOTileKey { unsigned int x1 : 7; unsigned int x2 : 1; union { struct _GEOStandardTileKey { unsigned int x_1_2_1 : 40; unsigned int x_1_2_2 : 6; unsigned int x_1_2_3 : 26; unsigned int x_1_2_4 : 26; unsigned int x_1_2_5 : 14; unsigned int x_1_2_6 : 4; unsigned int x_1_2_7 : 4; } x_3_1_1; struct _GEOGloriaQuadIDTileKey { unsigned int x_2_2_1 : 6; unsigned int x_2_2_2 : 64; unsigned int x_2_2_3 : 14; unsigned int x_2_2_4 : 4; union { struct { unsigned int x_1_4_1 : 10; unsigned int x_1_4_2 : 10; unsigned int x_1_4_3 : 12; } x_5_3_1; unsigned int x_5_3_2; } x_2_2_5; } x_3_1_2; struct _GEORegionalResourceKey { unsigned int x_3_2_1 : 32; unsigned int x_3_2_2 : 8; unsigned int x_3_2_3 : 6; unsigned int x_3_2_4 : 8; unsigned int x_3_2_5 : 8; unsigned int x_3_2_6 : 1; unsigned int x_3_2_7 : 57; } x_3_1_3; struct _GEOSputnikMetadataKey { unsigned int x_4_2_1 : 32; unsigned int x_4_2_2 : 24; unsigned int x_4_2_3 : 14; unsigned int x_4_2_4 : 8; unsigned int x_4_2_5 : 42; } x_3_1_4; struct _GEOFlyoverKey { unsigned int x_5_2_1 : 6; unsigned int x_5_2_2 : 26; unsigned int x_5_2_3 : 26; unsigned int x_5_2_4 : 8; unsigned int x_5_2_5 : 24; unsigned int x_5_2_6 : 14; unsigned int x_5_2_7 : 8; unsigned int x_5_2_8 : 8; } x_3_1_5; } x3; }*)arg1 containingPoint:(const void*)arg2 findAhead:(bool)arg3;
- (struct Matrix<float, 2, 1> { float x1[2]; })_firstPoint;
- (id)_firstTile;
- (struct Matrix<float, 2, 1> { float x1[2]; })_lastPoint;
- (id)_lastTile;
- (unsigned long long)_maxTileCount;
- (bool)_pointConnects:(const void*)arg1 rect:(const struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; }*)arg2 to:(const struct { double x1; double x2; }*)arg3;
- (bool)_shouldFindEdgeAhead;
- (bool)_shouldFindEdgeBehind;
- (id)_tileFinderForMap:(id)arg1 center:(struct { double x1; double x2; })arg2 radius:(double)arg3;
- (unsigned long long)buildDirection;
- (void)buildEdge:(id /* block */)arg1;
- (void)cancel;
- (id /* block */)edgeHandler;
- (id)initWithMap:(id)arg1;
- (id)map;
- (void)setBuildDirection:(unsigned long long)arg1;
- (void)setEdgeHandler:(id /* block */)arg1;

@end
