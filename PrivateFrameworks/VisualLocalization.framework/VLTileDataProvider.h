
@interface VLTileDataProvider : NSObject <VLLocalizationDataProvider> {
    GEOApplicationAuditToken * _auditToken;
    <VLLocalizationDataProviderDelegate> * _delegate;
    geo_isolater * _isolation;
    unsigned int  _lastFormatVersion;
    GEOTileData * _lastLoadedData;
    struct { 
        int level; 
        int x; 
        int y; 
        int uncertainty; 
    }  _lastLoadedKey;
    GEOVLMetadataTile * _lastLoadedMetadata;
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
    }  _lastLoadedMetadataKey;
    struct list<VLLocalizationDataKey, std::allocator<VLLocalizationDataKey>> { 
        struct __list_node_base<VLLocalizationDataKey, void *> { 
            void *__prev_; 
            void *__next_; 
        } __end_; 
        struct __compressed_pair<unsigned long, std::allocator<std::__list_node<VLLocalizationDataKey, void *>>> { 
            unsigned long long __value_; 
        } __size_alloc_; 
    }  _loadingKeys;
    unsigned int  _maxSupportedFormatVersion;
    GEOTileKeyMap * _pendingMetadataTiles;
    struct list<VLLocalizationDataKey, std::allocator<VLLocalizationDataKey>> { 
        struct __list_node_base<VLLocalizationDataKey, void *> { 
            void *__prev_; 
            void *__next_; 
        } __end_; 
        struct __compressed_pair<unsigned long, std::allocator<std::__list_node<VLLocalizationDataKey, void *>>> { 
            unsigned long long __value_; 
        } __size_alloc_; 
    }  _recentFailures;
    struct list<VLLocalizationDataKey, std::allocator<VLLocalizationDataKey>> { 
        struct __list_node_base<VLLocalizationDataKey, void *> { 
            void *__prev_; 
            void *__next_; 
        } __end_; 
        struct __compressed_pair<unsigned long, std::allocator<std::__list_node<VLLocalizationDataKey, void *>>> { 
            unsigned long long __value_; 
        } __size_alloc_; 
    }  _recentUnsupportedTiles;
    bool  _shouldCacheMetadata;
    NSArray * _supportedFormatVersions;
    GEOTileLoader * _tileLoader;
    NSString * _tileLoaderClientID;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <VLLocalizationDataProviderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool shouldCacheMetadata;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_commonInitWithTileLoader:(id)arg1 auditToken:(id)arg2 supportedFormatVersions:(id)arg3;
- (void)_disburseMetadataTileForKey:(const struct _GEOTileKey { unsigned int x1 : 7; unsigned int x2 : 1; union { struct _GEOStandardTileKey { unsigned int x_1_2_1 : 40; unsigned int x_1_2_2 : 6; unsigned int x_1_2_3 : 26; unsigned int x_1_2_4 : 26; unsigned int x_1_2_5 : 14; unsigned int x_1_2_6 : 4; unsigned int x_1_2_7 : 4; } x_3_1_1; struct _GEOGloriaQuadIDTileKey { unsigned int x_2_2_1 : 6; unsigned int x_2_2_2 : 64; unsigned int x_2_2_3 : 14; unsigned int x_2_2_4 : 4; union { struct { unsigned int x_1_4_1 : 10; unsigned int x_1_4_2 : 10; unsigned int x_1_4_3 : 12; } x_5_3_1; unsigned int x_5_3_2; } x_2_2_5; } x_3_1_2; struct _GEORegionalResourceKey { unsigned int x_3_2_1 : 32; unsigned int x_3_2_2 : 8; unsigned int x_3_2_3 : 6; unsigned int x_3_2_4 : 8; unsigned int x_3_2_5 : 8; unsigned int x_3_2_6 : 1; unsigned int x_3_2_7 : 57; } x_3_1_3; struct _GEOSputnikMetadataKey { unsigned int x_4_2_1 : 32; unsigned int x_4_2_2 : 24; unsigned int x_4_2_3 : 14; unsigned int x_4_2_4 : 8; unsigned int x_4_2_5 : 42; } x_3_1_4; struct _GEOFlyoverKey { unsigned int x_5_2_1 : 6; unsigned int x_5_2_2 : 26; unsigned int x_5_2_3 : 26; unsigned int x_5_2_4 : 8; unsigned int x_5_2_5 : 24; unsigned int x_5_2_6 : 14; unsigned int x_5_2_7 : 8; unsigned int x_5_2_8 : 8; } x_3_1_5; } x3; }*)arg1 tileData:(id)arg2 error:(id)arg3;
- (void)_fetchDataTile:(const struct _GEOTileKey { unsigned int x1 : 7; unsigned int x2 : 1; union { struct _GEOStandardTileKey { unsigned int x_1_2_1 : 40; unsigned int x_1_2_2 : 6; unsigned int x_1_2_3 : 26; unsigned int x_1_2_4 : 26; unsigned int x_1_2_5 : 14; unsigned int x_1_2_6 : 4; unsigned int x_1_2_7 : 4; } x_3_1_1; struct _GEOGloriaQuadIDTileKey { unsigned int x_2_2_1 : 6; unsigned int x_2_2_2 : 64; unsigned int x_2_2_3 : 14; unsigned int x_2_2_4 : 4; union { struct { unsigned int x_1_4_1 : 10; unsigned int x_1_4_2 : 10; unsigned int x_1_4_3 : 12; } x_5_3_1; unsigned int x_5_3_2; } x_2_2_5; } x_3_1_2; struct _GEORegionalResourceKey { unsigned int x_3_2_1 : 32; unsigned int x_3_2_2 : 8; unsigned int x_3_2_3 : 6; unsigned int x_3_2_4 : 8; unsigned int x_3_2_5 : 8; unsigned int x_3_2_6 : 1; unsigned int x_3_2_7 : 57; } x_3_1_3; struct _GEOSputnikMetadataKey { unsigned int x_4_2_1 : 32; unsigned int x_4_2_2 : 24; unsigned int x_4_2_3 : 14; unsigned int x_4_2_4 : 8; unsigned int x_4_2_5 : 42; } x_3_1_4; struct _GEOFlyoverKey { unsigned int x_5_2_1 : 6; unsigned int x_5_2_2 : 26; unsigned int x_5_2_3 : 26; unsigned int x_5_2_4 : 8; unsigned int x_5_2_5 : 24; unsigned int x_5_2_6 : 14; unsigned int x_5_2_7 : 8; unsigned int x_5_2_8 : 8; } x_3_1_5; } x3; }*)arg1 originalKey:(const struct { int x1; int x2; int x3; int x4; }*)arg2 additionalInfo:(const struct _GEOVisualLocalizationTrackAdditionalInfo { unsigned long long x1; unsigned int x2; unsigned int x3 : 6; }*)arg3;
- (void)_fetchMetadataForCoordinate:(const struct { double x1; double x2; }*)arg1 completionHandler:(id /* block */)arg2;
- (void)_fetchMetadataForDataKey:(const struct { int x1; int x2; int x3; int x4; }*)arg1 completionHandler:(id /* block */)arg2;
- (void)_fetchMetadataTile:(const struct _GEOTileKey { unsigned int x1 : 7; unsigned int x2 : 1; union { struct _GEOStandardTileKey { unsigned int x_1_2_1 : 40; unsigned int x_1_2_2 : 6; unsigned int x_1_2_3 : 26; unsigned int x_1_2_4 : 26; unsigned int x_1_2_5 : 14; unsigned int x_1_2_6 : 4; unsigned int x_1_2_7 : 4; } x_3_1_1; struct _GEOGloriaQuadIDTileKey { unsigned int x_2_2_1 : 6; unsigned int x_2_2_2 : 64; unsigned int x_2_2_3 : 14; unsigned int x_2_2_4 : 4; union { struct { unsigned int x_1_4_1 : 10; unsigned int x_1_4_2 : 10; unsigned int x_1_4_3 : 12; } x_5_3_1; unsigned int x_5_3_2; } x_2_2_5; } x_3_1_2; struct _GEORegionalResourceKey { unsigned int x_3_2_1 : 32; unsigned int x_3_2_2 : 8; unsigned int x_3_2_3 : 6; unsigned int x_3_2_4 : 8; unsigned int x_3_2_5 : 8; unsigned int x_3_2_6 : 1; unsigned int x_3_2_7 : 57; } x_3_1_3; struct _GEOSputnikMetadataKey { unsigned int x_4_2_1 : 32; unsigned int x_4_2_2 : 24; unsigned int x_4_2_3 : 14; unsigned int x_4_2_4 : 8; unsigned int x_4_2_5 : 42; } x_3_1_4; struct _GEOFlyoverKey { unsigned int x_5_2_1 : 6; unsigned int x_5_2_2 : 26; unsigned int x_5_2_3 : 26; unsigned int x_5_2_4 : 8; unsigned int x_5_2_5 : 24; unsigned int x_5_2_6 : 14; unsigned int x_5_2_7 : 8; unsigned int x_5_2_8 : 8; } x_3_1_5; } x3; }*)arg1 completionHandler:(id /* block */)arg2;
- (void)dealloc;
- (id)delegate;
- (void)determineAvailabilityForCoordinate:(const struct { double x1; double x2; }*)arg1 horizontalAccuracy:(double)arg2 purpose:(long long)arg3 callbackQueue:(id)arg4 callback:(id /* block */)arg5;
- (id)fileURLForKey:(const struct { int x1; int x2; int x3; int x4; }*)arg1 error:(id*)arg2;
- (id)init;
- (id)initWithAuditToken:(id)arg1 supportedFormatVersions:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setShouldCacheMetadata:(bool)arg1;
- (bool)shouldCacheMetadata;

@end
