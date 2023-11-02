
@interface _GEORegionalResourcesTileLoader : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    GEOResourceManifestConfiguration * _manifestConfiguration;
    GEOResourceLoader * _resourceLoader;
    GEORegionalResourceTileData * _tile;
    struct _GEOTileKey { 
        unsigned int provider : 7; 
        unsigned int expires : 1; 
        union { 
            struct _GEOStandardTileKey { 
                unsigned int reserved : 40; 
                unsigned int z : 6; 
                unsigned int x : 26; 
                unsigned int y : 26; 
                unsigned int type : 14; 
                unsigned int pixelSize : 4; 
                unsigned int textScale : 4; 
            } standard; 
            struct _GEOGloriaQuadIDTileKey { 
                unsigned int z : 6; 
                unsigned int quadKey : 64; 
                unsigned int type : 14; 
                unsigned int padding : 4; 
                union { 
                    struct { 
                        unsigned int mcc : 10; 
                        unsigned int mnc : 10; 
                        unsigned int padding : 12; 
                    } cellularInfo; 
                    unsigned int unused; 
                } typeSpecificInfo; 
            } gloriaQuad; 
            struct _GEORegionalResourceKey { 
                unsigned int index : 32; 
                unsigned int scenarios : 8; 
                unsigned int type : 6; 
                unsigned int pixelSize : 8; 
                unsigned int textScale : 8; 
                unsigned int forceRefetch : 1; 
                unsigned int padding : 57; 
            } regional; 
            struct _GEOSputnikMetadataKey { 
                unsigned int part : 32; 
                unsigned int region : 24; 
                unsigned int type : 14; 
                unsigned int pixelSize : 8; 
                unsigned int padding : 42; 
            } sputnikMetadata; 
            struct _GEOFlyoverKey { 
                unsigned int z : 6; 
                unsigned int x : 26; 
                unsigned int y : 26; 
                unsigned int h : 8; 
                unsigned int region : 24; 
                unsigned int type : 14; 
                unsigned int pixelSize : 8; 
                unsigned int textScale : 8; 
            } flyover; 
            struct _GEOTransitLineSelectionKey { 
                unsigned int z : 6; 
                unsigned int x : 25; 
                unsigned int y : 25; 
                unsigned int muid : 64; 
            } transitLineSelection; 
            struct _GEOPolygonSelectionKey { 
                unsigned int z : 6; 
                unsigned int x : 25; 
                unsigned int y : 25; 
                unsigned int polyId : 64; 
            } polygonSelection; 
            struct _GEORoadSelectionKey { 
                unsigned int z : 6; 
                unsigned int x : 25; 
                unsigned int y : 25; 
                unsigned int roadId : 64; 
            } roadSelection; 
            struct _GEOContourLinesKey { 
                unsigned int z : 6; 
                unsigned int x : 26; 
                unsigned int y : 26; 
                unsigned int pixelSize : 4; 
                unsigned int units : 8; 
                unsigned int padding : 50; 
            } contourLines; 
            struct _GEOTileOverlayKey { 
                unsigned int z : 6; 
                unsigned int x : 26; 
                unsigned int y : 26; 
                unsigned int contentScale : 8; 
                unsigned int providerId : 32; 
                unsigned int keyframeIndex : 16; 
                unsigned int padding : 6; 
            } tileOverlay; 
            struct _GEOIdentifiedResourceKey { 
                unsigned long long identifier; 
                unsigned char levelOfDetail; 
                unsigned char type; 
                unsigned int supportsASTC : 1; 
                unsigned int padding : 39; 
            } identifiedResource; 
            struct _GEOMuninMeshKey { 
                unsigned int pointId : 64; 
                unsigned int buildId : 32; 
                unsigned int bucketId : 16; 
                unsigned int cameraId : 5; 
                unsigned int lod : 3; 
            } muninMesh; 
            struct _GEOVisualLocalizationTrackKey { 
                unsigned short formatVersion; 
                unsigned char uncertainty; 
                unsigned int reserved : 16; 
                unsigned int z : 6; 
                unsigned int x : 26; 
                unsigned int y : 26; 
                unsigned int padding : 22; 
            } visualLocalization; 
            struct _GEOVisualLocalizationMetadataKey { 
                unsigned int maxSupportedOutputVersion : 6; 
                unsigned int maxSupportedFormatVersion : 9; 
                unsigned int reserved : 25; 
                unsigned int z : 6; 
                unsigned int x : 26; 
                unsigned int y : 26; 
                unsigned int padding : 22; 
            } visualLocalizationMetadata; 
            struct _GEOVisualLocalizationDataKey { 
                unsigned long long buildID; 
                unsigned char uncertainty; 
                unsigned int z : 5; 
                unsigned int x : 21; 
                unsigned int y : 21; 
                unsigned int padding : 1; 
            } visualLocalizationData; 
            struct _GEOS2TileKey { 
                unsigned int z : 6; 
                unsigned int x : 26; 
                unsigned int y : 26; 
                unsigned int f : 3; 
                unsigned int type : 14; 
                unsigned int pixelSize : 4; 
                unsigned int textScale : 4; 
                unsigned int padding : 37; 
            } s2Tile; 
            struct _GEOLiveTileKey { 
                unsigned int z : 6; 
                unsigned int x : 26; 
                unsigned int y : 26; 
                unsigned int type : 14; 
                unsigned int pixelSize : 4; 
                unsigned int textScale : 4; 
                unsigned int domain : 4; 
                unsigned int padding : 36; 
            } liveTile; 
        } ; 
    }  _tileKey;
}

@property (nonatomic, readonly) struct _GEOTileKey { unsigned int x1 : 7; unsigned int x2 : 1; union { struct _GEOStandardTileKey { unsigned int x_1_2_1 : 40; unsigned int x_1_2_2 : 6; unsigned int x_1_2_3 : 26; unsigned int x_1_2_4 : 26; unsigned int x_1_2_5 : 14; unsigned int x_1_2_6 : 4; unsigned int x_1_2_7 : 4; } x_3_1_1; struct _GEOGloriaQuadIDTileKey { unsigned int x_2_2_1 : 6; unsigned int x_2_2_2 : 64; unsigned int x_2_2_3 : 14; unsigned int x_2_2_4 : 4; union { struct { unsigned int x_1_4_1 : 10; unsigned int x_1_4_2 : 10; unsigned int x_1_4_3 : 12; } x_5_3_1; unsigned int x_5_3_2; } x_2_2_5; } x_3_1_2; struct _GEORegionalResourceKey { unsigned int x_3_2_1 : 32; unsigned int x_3_2_2 : 8; unsigned int x_3_2_3 : 6; unsigned int x_3_2_4 : 8; unsigned int x_3_2_5 : 8; unsigned int x_3_2_6 : 1; unsigned int x_3_2_7 : 57; } x_3_1_3; struct _GEOSputnikMetadataKey { unsigned int x_4_2_1 : 32; unsigned int x_4_2_2 : 24; unsigned int x_4_2_3 : 14; unsigned int x_4_2_4 : 8; unsigned int x_4_2_5 : 42; } x_3_1_4; struct _GEOFlyoverKey { unsigned int x_5_2_1 : 6; unsigned int x_5_2_2 : 26; unsigned int x_5_2_3 : 26; unsigned int x_5_2_4 : 8; unsigned int x_5_2_5 : 24; unsigned int x_5_2_6 : 14; unsigned int x_5_2_7 : 8; unsigned int x_5_2_8 : 8; } x_3_1_5; } x3; }*tileKeyPtr;

- (void).cxx_destruct;
- (void)cancel;
- (void)dealloc;
- (id)init;
- (void)loadResourcesForTileKey:(const struct _GEOTileKey { unsigned int x1 : 7; unsigned int x2 : 1; union { struct _GEOStandardTileKey { unsigned int x_1_2_1 : 40; unsigned int x_1_2_2 : 6; unsigned int x_1_2_3 : 26; unsigned int x_1_2_4 : 26; unsigned int x_1_2_5 : 14; unsigned int x_1_2_6 : 4; unsigned int x_1_2_7 : 4; } x_3_1_1; struct _GEOGloriaQuadIDTileKey { unsigned int x_2_2_1 : 6; unsigned int x_2_2_2 : 64; unsigned int x_2_2_3 : 14; unsigned int x_2_2_4 : 4; union { struct { unsigned int x_1_4_1 : 10; unsigned int x_1_4_2 : 10; unsigned int x_1_4_3 : 12; } x_5_3_1; unsigned int x_5_3_2; } x_2_2_5; } x_3_1_2; struct _GEORegionalResourceKey { unsigned int x_3_2_1 : 32; unsigned int x_3_2_2 : 8; unsigned int x_3_2_3 : 6; unsigned int x_3_2_4 : 8; unsigned int x_3_2_5 : 8; unsigned int x_3_2_6 : 1; unsigned int x_3_2_7 : 57; } x_3_1_3; struct _GEOSputnikMetadataKey { unsigned int x_4_2_1 : 32; unsigned int x_4_2_2 : 24; unsigned int x_4_2_3 : 14; unsigned int x_4_2_4 : 8; unsigned int x_4_2_5 : 42; } x_3_1_4; struct _GEOFlyoverKey { unsigned int x_5_2_1 : 6; unsigned int x_5_2_2 : 26; unsigned int x_5_2_3 : 26; unsigned int x_5_2_4 : 8; unsigned int x_5_2_5 : 24; unsigned int x_5_2_6 : 14; unsigned int x_5_2_7 : 8; unsigned int x_5_2_8 : 8; } x_3_1_5; } x3; }*)arg1 manifestConfiguration:(id)arg2 auditToken:(id)arg3 signpostID:(unsigned long long)arg4 finished:(id /* block */)arg5 error:(id /* block */)arg6;
- (struct _GEOTileKey { unsigned int x1 : 7; unsigned int x2 : 1; union { struct _GEOStandardTileKey { unsigned int x_1_2_1 : 40; unsigned int x_1_2_2 : 6; unsigned int x_1_2_3 : 26; unsigned int x_1_2_4 : 26; unsigned int x_1_2_5 : 14; unsigned int x_1_2_6 : 4; unsigned int x_1_2_7 : 4; } x_3_1_1; struct _GEOGloriaQuadIDTileKey { unsigned int x_2_2_1 : 6; unsigned int x_2_2_2 : 64; unsigned int x_2_2_3 : 14; unsigned int x_2_2_4 : 4; union { struct { unsigned int x_1_4_1 : 10; unsigned int x_1_4_2 : 10; unsigned int x_1_4_3 : 12; } x_5_3_1; unsigned int x_5_3_2; } x_2_2_5; } x_3_1_2; struct _GEORegionalResourceKey { unsigned int x_3_2_1 : 32; unsigned int x_3_2_2 : 8; unsigned int x_3_2_3 : 6; unsigned int x_3_2_4 : 8; unsigned int x_3_2_5 : 8; unsigned int x_3_2_6 : 1; unsigned int x_3_2_7 : 57; } x_3_1_3; struct _GEOSputnikMetadataKey { unsigned int x_4_2_1 : 32; unsigned int x_4_2_2 : 24; unsigned int x_4_2_3 : 14; unsigned int x_4_2_4 : 8; unsigned int x_4_2_5 : 42; } x_3_1_4; struct _GEOFlyoverKey { unsigned int x_5_2_1 : 6; unsigned int x_5_2_2 : 26; unsigned int x_5_2_3 : 26; unsigned int x_5_2_4 : 8; unsigned int x_5_2_5 : 24; unsigned int x_5_2_6 : 14; unsigned int x_5_2_7 : 8; unsigned int x_5_2_8 : 8; } x_3_1_5; } x3; }*)tileKeyPtr;

@end
