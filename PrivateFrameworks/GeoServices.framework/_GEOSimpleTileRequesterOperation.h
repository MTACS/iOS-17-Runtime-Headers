
@interface _GEOSimpleTileRequesterOperation : NSObject <GEODataURLSessionTaskDelegate> {
    NSObject<OS_os_activity> * _activity;
    int  _attempts;
    _GEOSimpleTileRequesterOperation * _baseTile;
    int  _checksumMethod;
    NSData * _data;
    GEODataURLSession * _dataSession;
    <GEOSimpleTileRequesterOperationDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    double  _endTime;
    bool  _existingCachedDataCurrent;
    bool  _finished;
    bool  _isRunning;
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
    }  _key;
    _GEOSimpleTileRequesterOperation * _localizationTile;
    NSObject<OS_os_activity> * _parentTileActivity;
    _Atomic unsigned int  _priority;
    GEODataRequest * _request;
    NSString * _requestingBundleId;
    NSString * _requestingBundleVersion;
    NSString * _responseEtag;
    bool  _shouldDownloadToDisk;
    unsigned long long  _signpostID;
    double  _startTime;
    GEODataURLSessionTask * _task;
    double  _tileLoaderCreateTime;
    double  _timeout;
}

@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, retain) NSObject<OS_os_activity> *activity;
@property (nonatomic, retain) _GEOSimpleTileRequesterOperation *baseTile;
@property (nonatomic, readonly) unsigned long long contentLength;
@property (nonatomic, retain) NSData *data;
@property (nonatomic, retain) GEODataURLSession *dataSession;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <GEOSimpleTileRequesterOperationDelegate> *delegate;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSURL *downloadedFileURL;
@property (getter=isExistingCachedDataCurrent, nonatomic, readonly) bool existingCachedDataCurrent;
@property (nonatomic, readonly) bool finished;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) int httpResponseStatusCode;
@property (nonatomic) struct _GEOTileKey { unsigned int x1 : 7; unsigned int x2 : 1; union { struct _GEOStandardTileKey { unsigned int x_1_2_1 : 40; unsigned int x_1_2_2 : 6; unsigned int x_1_2_3 : 26; unsigned int x_1_2_4 : 26; unsigned int x_1_2_5 : 14; unsigned int x_1_2_6 : 4; unsigned int x_1_2_7 : 4; } x_3_1_1; struct _GEOGloriaQuadIDTileKey { unsigned int x_2_2_1 : 6; unsigned int x_2_2_2 : 64; unsigned int x_2_2_3 : 14; unsigned int x_2_2_4 : 4; union { struct { unsigned int x_1_4_1 : 10; unsigned int x_1_4_2 : 10; unsigned int x_1_4_3 : 12; } x_5_3_1; unsigned int x_5_3_2; } x_2_2_5; } x_3_1_2; struct _GEORegionalResourceKey { unsigned int x_3_2_1 : 32; unsigned int x_3_2_2 : 8; unsigned int x_3_2_3 : 6; unsigned int x_3_2_4 : 8; unsigned int x_3_2_5 : 8; unsigned int x_3_2_6 : 1; unsigned int x_3_2_7 : 57; } x_3_1_3; struct _GEOSputnikMetadataKey { unsigned int x_4_2_1 : 32; unsigned int x_4_2_2 : 24; unsigned int x_4_2_3 : 14; unsigned int x_4_2_4 : 8; unsigned int x_4_2_5 : 42; } x_3_1_4; struct _GEOFlyoverKey { unsigned int x_5_2_1 : 6; unsigned int x_5_2_2 : 26; unsigned int x_5_2_3 : 26; unsigned int x_5_2_4 : 8; unsigned int x_5_2_5 : 24; unsigned int x_5_2_6 : 14; unsigned int x_5_2_7 : 8; unsigned int x_5_2_8 : 8; } x_3_1_5; } x3; } key;
@property (nonatomic, retain) _GEOSimpleTileRequesterOperation *localizationTile;
@property (nonatomic, retain) NSObject<OS_os_activity> *parentTileActivity;
@property unsigned int priority;
@property (nonatomic, readonly) GEODataRequest *request;
@property (nonatomic, retain) NSString *requestingBundleId;
@property (nonatomic, retain) NSString *requestingBundleVersion;
@property (nonatomic, retain) NSString *responseEtag;
@property (nonatomic, readonly) bool responseIsCacheable;
@property (nonatomic, readonly) unsigned long long responseMaxAge;
@property (nonatomic) bool shouldDownloadToDisk;
@property (nonatomic) unsigned long long signpostID;
@property (readonly) Class superclass;
@property (nonatomic, retain) GEODataURLSessionTask *task;
@property (nonatomic) double tileLoaderCreateTime;
@property (nonatomic) double timeout;

- (void).cxx_destruct;
- (id)URL;
- (id)activity;
- (id)baseTile;
- (void)cancel;
- (void)clearAllRelatedOperations;
- (unsigned long long)contentLength;
- (id)data;
- (id)dataSession;
- (void)dataURLSession:(id)arg1 didCompleteTask:(id)arg2;
- (void)dataURLSession:(id)arg1 shouldConvertDataTask:(id)arg2 toDownloadTaskForEstimatedResponseSize:(unsigned long long)arg3 completionHandler:(id /* block */)arg4;
- (id)delegate;
- (id)delegateQueue;
- (id)description;
- (id)downloadedFileURL;
- (double)elapsed;
- (bool)finished;
- (int)httpResponseStatusCode;
- (id)init;
- (id)initWithRequest:(id)arg1 delegateQueue:(id)arg2 delegate:(id)arg3;
- (bool)isExistingCachedDataCurrent;
- (struct _GEOTileKey { unsigned int x1 : 7; unsigned int x2 : 1; union { struct _GEOStandardTileKey { unsigned int x_1_2_1 : 40; unsigned int x_1_2_2 : 6; unsigned int x_1_2_3 : 26; unsigned int x_1_2_4 : 26; unsigned int x_1_2_5 : 14; unsigned int x_1_2_6 : 4; unsigned int x_1_2_7 : 4; } x_3_1_1; struct _GEOGloriaQuadIDTileKey { unsigned int x_2_2_1 : 6; unsigned int x_2_2_2 : 64; unsigned int x_2_2_3 : 14; unsigned int x_2_2_4 : 4; union { struct { unsigned int x_1_4_1 : 10; unsigned int x_1_4_2 : 10; unsigned int x_1_4_3 : 12; } x_5_3_1; unsigned int x_5_3_2; } x_2_2_5; } x_3_1_2; struct _GEORegionalResourceKey { unsigned int x_3_2_1 : 32; unsigned int x_3_2_2 : 8; unsigned int x_3_2_3 : 6; unsigned int x_3_2_4 : 8; unsigned int x_3_2_5 : 8; unsigned int x_3_2_6 : 1; unsigned int x_3_2_7 : 57; } x_3_1_3; struct _GEOSputnikMetadataKey { unsigned int x_4_2_1 : 32; unsigned int x_4_2_2 : 24; unsigned int x_4_2_3 : 14; unsigned int x_4_2_4 : 8; unsigned int x_4_2_5 : 42; } x_3_1_4; struct _GEOFlyoverKey { unsigned int x_5_2_1 : 6; unsigned int x_5_2_2 : 26; unsigned int x_5_2_3 : 26; unsigned int x_5_2_4 : 8; unsigned int x_5_2_5 : 24; unsigned int x_5_2_6 : 14; unsigned int x_5_2_7 : 8; unsigned int x_5_2_8 : 8; } x_3_1_5; } x3; })key;
- (id)localizationTile;
- (id)parentTileActivity;
- (unsigned int)priority;
- (id)request;
- (id)requestingBundleId;
- (id)requestingBundleVersion;
- (id)responseEtag;
- (bool)responseIsCacheable;
- (unsigned long long)responseMaxAge;
- (void)setActivity:(id)arg1;
- (void)setBaseTile:(id)arg1;
- (void)setData:(id)arg1;
- (void)setDataSession:(id)arg1;
- (void)setKey:(struct _GEOTileKey { unsigned int x1 : 7; unsigned int x2 : 1; union { struct _GEOStandardTileKey { unsigned int x_1_2_1 : 40; unsigned int x_1_2_2 : 6; unsigned int x_1_2_3 : 26; unsigned int x_1_2_4 : 26; unsigned int x_1_2_5 : 14; unsigned int x_1_2_6 : 4; unsigned int x_1_2_7 : 4; } x_3_1_1; struct _GEOGloriaQuadIDTileKey { unsigned int x_2_2_1 : 6; unsigned int x_2_2_2 : 64; unsigned int x_2_2_3 : 14; unsigned int x_2_2_4 : 4; union { struct { unsigned int x_1_4_1 : 10; unsigned int x_1_4_2 : 10; unsigned int x_1_4_3 : 12; } x_5_3_1; unsigned int x_5_3_2; } x_2_2_5; } x_3_1_2; struct _GEORegionalResourceKey { unsigned int x_3_2_1 : 32; unsigned int x_3_2_2 : 8; unsigned int x_3_2_3 : 6; unsigned int x_3_2_4 : 8; unsigned int x_3_2_5 : 8; unsigned int x_3_2_6 : 1; unsigned int x_3_2_7 : 57; } x_3_1_3; struct _GEOSputnikMetadataKey { unsigned int x_4_2_1 : 32; unsigned int x_4_2_2 : 24; unsigned int x_4_2_3 : 14; unsigned int x_4_2_4 : 8; unsigned int x_4_2_5 : 42; } x_3_1_4; struct _GEOFlyoverKey { unsigned int x_5_2_1 : 6; unsigned int x_5_2_2 : 26; unsigned int x_5_2_3 : 26; unsigned int x_5_2_4 : 8; unsigned int x_5_2_5 : 24; unsigned int x_5_2_6 : 14; unsigned int x_5_2_7 : 8; unsigned int x_5_2_8 : 8; } x_3_1_5; } x3; })arg1;
- (void)setLocalizationTile:(id)arg1;
- (void)setParentTileActivity:(id)arg1;
- (void)setPriority:(unsigned int)arg1;
- (void)setRequestingBundleId:(id)arg1;
- (void)setRequestingBundleVersion:(id)arg1;
- (void)setResponseEtag:(id)arg1;
- (void)setShouldDownloadToDisk:(bool)arg1;
- (void)setSignpostID:(unsigned long long)arg1;
- (void)setTask:(id)arg1;
- (void)setTileLoaderCreateTime:(double)arg1;
- (void)setTimeout:(double)arg1;
- (bool)shouldDownloadToDisk;
- (unsigned long long)signpostID;
- (void)start;
- (double)startTime;
- (id)task;
- (double)tileLoaderCreateTime;
- (double)timeout;

@end
