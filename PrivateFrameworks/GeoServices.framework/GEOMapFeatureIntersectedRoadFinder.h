
@interface GEOMapFeatureIntersectedRoadFinder : GEOMapFeatureAccessFinder {
    GEOMapFeatureMultiSegmentRoadFinder * _multiSegmentRoadFinder;
}

- (void).cxx_destruct;
- (id)_findRoadsAtJunction:(id)arg1 desiredRoadDirectionality:(unsigned long long)arg2 muid:(unsigned long long)arg3 featuresToIgnore:(id)arg4 handler:(id /* block */)arg5 completionHandler:(id /* block */)arg6;
- (id)_intersectedRoadsInAdjacentTile:(id)arg1 tileBorderPoint:(struct GeoCodecsVectorTilePoint { float x1; float x2; })arg2 junction:(id)arg3 desiredRoadDirectionality:(unsigned long long)arg4 muid:(unsigned long long)arg5 requireExactMuidMatch:(bool)arg6 featuresToIgnore:(id)arg7 shouldStop:(bool*)arg8;
- (id)_old_intersectedRoadsInAdjacentTile:(id)arg1 tileBorderPoint:(struct GeoCodecsVectorTilePoint { float x1; float x2; })arg2 junction:(id)arg3 desiredRoadDirectionality:(unsigned long long)arg4 featuresToIgnore:(id)arg5;
- (void)_tilesBorderingTile:(struct _GEOTileKey { unsigned int x1 : 7; unsigned int x2 : 1; union { struct _GEOStandardTileKey { unsigned int x_1_2_1 : 40; unsigned int x_1_2_2 : 6; unsigned int x_1_2_3 : 26; unsigned int x_1_2_4 : 26; unsigned int x_1_2_5 : 14; unsigned int x_1_2_6 : 4; unsigned int x_1_2_7 : 4; } x_3_1_1; struct _GEOGloriaQuadIDTileKey { unsigned int x_2_2_1 : 6; unsigned int x_2_2_2 : 64; unsigned int x_2_2_3 : 14; unsigned int x_2_2_4 : 4; union { struct { unsigned int x_1_4_1 : 10; unsigned int x_1_4_2 : 10; unsigned int x_1_4_3 : 12; } x_5_3_1; unsigned int x_5_3_2; } x_2_2_5; } x_3_1_2; struct _GEORegionalResourceKey { unsigned int x_3_2_1 : 32; unsigned int x_3_2_2 : 8; unsigned int x_3_2_3 : 6; unsigned int x_3_2_4 : 8; unsigned int x_3_2_5 : 8; unsigned int x_3_2_6 : 1; unsigned int x_3_2_7 : 57; } x_3_1_3; struct _GEOSputnikMetadataKey { unsigned int x_4_2_1 : 32; unsigned int x_4_2_2 : 24; unsigned int x_4_2_3 : 14; unsigned int x_4_2_4 : 8; unsigned int x_4_2_5 : 42; } x_3_1_4; struct _GEOFlyoverKey { unsigned int x_5_2_1 : 6; unsigned int x_5_2_2 : 26; unsigned int x_5_2_3 : 26; unsigned int x_5_2_4 : 8; unsigned int x_5_2_5 : 24; unsigned int x_5_2_6 : 14; unsigned int x_5_2_7 : 8; unsigned int x_5_2_8 : 8; } x_3_1_5; } x3; })arg1 atPoint:(struct GeoCodecsVectorTilePoint { float x1; float x2; })arg2 withHandler:(id /* block */)arg3;
- (id)findRoadsAtJunction:(id)arg1 desiredRoadDirectionality:(unsigned long long)arg2 handler:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
- (id)findRoadsAtNextIntersectionOf:(id)arg1 desiredRoadDirectionality:(unsigned long long)arg2 handler:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
- (id)findRoadsAtPreviousIntersectionOf:(id)arg1 desiredRoadDirectionality:(unsigned long long)arg2 handler:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
- (id)findUnjoinedRoadsAtJunction:(id)arg1 desiredRoadDirectionality:(unsigned long long)arg2 muid:(unsigned long long)arg3 requireExactMuidMatch:(bool)arg4 featuresToIgnore:(id)arg5 handler:(id /* block */)arg6 completionHandler:(id /* block */)arg7;

@end
