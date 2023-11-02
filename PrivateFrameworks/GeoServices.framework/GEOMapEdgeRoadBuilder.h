
@interface GEOMapEdgeRoadBuilder : GEOMapEdgeBuilder {
    struct deque<GEORoadEdge *, std::allocator<GEORoadEdge *>> { 
        /* Warning: unhandled struct encoding: '{__split_buffer<GEORoadEdge *__strong *, std::allocator<GEORoadEdge *__strong *>>="__first_"^^@"__begin_"^^@"__end_"^^@"__end_cap_"{__compressed_pair<GEORoadEdge *__strong **, std::allocator<GEORoadEdge *__strong *>>="__value_"^^@}}"__start_"Q"__size_"{__compressed_pair<unsigned long, std::allocator<GEORoadEdge *>>="__value_"Q}}' */ struct __split_buffer<GEORoadEdge *__strong *, std::allocator<GEORoadEdge *__strong *>> { 
            __begin_ ***__first_; 
        } __map_; 
    }  _edges;
    GEOVectorTile * _retainedTile;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_buildCompleteEdge;
- (unsigned long long)_connectionTypeForEdge:(id)arg1 points:(struct GeoCodecsVectorTilePoint { float x1; float x2; }*)arg2 connectingTilePoint:(struct Matrix<float, 2, 1> { float x1[2]; })arg3;
- (bool)_findEdgeAheadInTile:(id)arg1;
- (bool)_findEdgeBehindInTile:(id)arg1;
- (struct Matrix<float, 2, 1> { float x1[2]; })_firstPoint;
- (id)_firstTile;
- (struct Matrix<float, 2, 1> { float x1[2]; })_lastPoint;
- (id)_lastTile;
- (unsigned long long)_maxTileCount;
- (bool)_shouldFindEdgeAhead;
- (bool)_shouldFindEdgeBehind;
- (id)_tileFinderForMap:(id)arg1 center:(struct { double x1; double x2; })arg2 radius:(double)arg3;
- (void)dealloc;
- (id)initWithMap:(id)arg1 roadFeature:(id)arg2 shouldFlip:(bool)arg3;

@end
