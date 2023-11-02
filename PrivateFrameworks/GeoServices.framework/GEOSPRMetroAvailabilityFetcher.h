
@interface GEOSPRMetroAvailabilityFetcher : NSObject {
    GEOApplicationAuditToken * _auditToken;
    bool  _forceDisableMetros;
    geo_isolater * _isolation;
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
    }  _lastLoadedKey;
    GEOVectorTile * _lastLoadedTile;
    GEOTileLoader * _tileLoader;
}

- (void).cxx_destruct;
- (void)determineAvailabilityForCoordinate:(struct { double x1; double x2; })arg1 callbackQueue:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)init;
- (id)initWithTileLoader:(id)arg1 auditToken:(id)arg2;
- (id)initWithTileLoader:(id)arg1 auditToken:(id)arg2 forceDisableMetros:(bool)arg3;

@end
