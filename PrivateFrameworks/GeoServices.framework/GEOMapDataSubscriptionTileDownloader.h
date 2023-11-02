
@interface GEOMapDataSubscriptionTileDownloader : NSObject <GEOBatchTileRequesterDelegate, GEOMapDataSubscriptionDataDownloader> {
    _GEOMapDataSubscriptionBatchTileRequester * _batchRequester;
    <GEOMapDataSubscriptionDataDownloaderDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    GEOTileDB * _diskCache;
    NSError * _firstError;
    GEOResourceManifestManager * _manifestManager;
}

@property (nonatomic, readonly) unsigned long long bytesDownloaded;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <GEOMapDataSubscriptionDataDownloaderDelegate> *delegate;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long failedTiles;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long numberOfTilesAttempted;
@property (nonatomic, readonly) unsigned long long numberOfTilesConsidered;
@property (readonly) NSProgress *progress;
@property (nonatomic, readonly) GEOMapDataSubscription *subscription;
@property (nonatomic, readonly) unsigned long long successfulTiles;
@property (readonly) Class superclass;

+ (id)loggingDescription;

- (void).cxx_destruct;
- (void)batchTileRequester:(id)arg1 failedToLoadKey:(struct _GEOTileKey { unsigned int x1 : 7; unsigned int x2 : 1; union { struct _GEOStandardTileKey { unsigned int x_1_2_1 : 40; unsigned int x_1_2_2 : 6; unsigned int x_1_2_3 : 26; unsigned int x_1_2_4 : 26; unsigned int x_1_2_5 : 14; unsigned int x_1_2_6 : 4; unsigned int x_1_2_7 : 4; } x_3_1_1; struct _GEOGloriaQuadIDTileKey { unsigned int x_2_2_1 : 6; unsigned int x_2_2_2 : 64; unsigned int x_2_2_3 : 14; unsigned int x_2_2_4 : 4; union { struct { unsigned int x_1_4_1 : 10; unsigned int x_1_4_2 : 10; unsigned int x_1_4_3 : 12; } x_5_3_1; unsigned int x_5_3_2; } x_2_2_5; } x_3_1_2; struct _GEORegionalResourceKey { unsigned int x_3_2_1 : 32; unsigned int x_3_2_2 : 8; unsigned int x_3_2_3 : 6; unsigned int x_3_2_4 : 8; unsigned int x_3_2_5 : 8; unsigned int x_3_2_6 : 1; unsigned int x_3_2_7 : 57; } x_3_1_3; struct _GEOSputnikMetadataKey { unsigned int x_4_2_1 : 32; unsigned int x_4_2_2 : 24; unsigned int x_4_2_3 : 14; unsigned int x_4_2_4 : 8; unsigned int x_4_2_5 : 42; } x_3_1_4; struct _GEOFlyoverKey { unsigned int x_5_2_1 : 6; unsigned int x_5_2_2 : 26; unsigned int x_5_2_3 : 26; unsigned int x_5_2_4 : 8; unsigned int x_5_2_5 : 24; unsigned int x_5_2_6 : 14; unsigned int x_5_2_7 : 8; unsigned int x_5_2_8 : 8; } x_3_1_5; } x3; })arg2 error:(id)arg3;
- (void)batchTileRequester:(id)arg1 receivedData:(id)arg2 tileEdition:(unsigned int)arg3 tileSet:(union { unsigned int x1; struct { unsigned int x_2_1_1 : 8; union { struct { unsigned int x_1_3_1 : 14; unsigned int x_1_3_2 : 4; unsigned int x_1_3_3 : 4; unsigned int x_1_3_4 : 2; } x_2_2_1; struct { unsigned int x_2_3_1 : 8; unsigned int x_2_3_2 : 16; } x_2_2_2; } x_2_1_2; } x2; })arg4 etag:(id)arg5 forKey:(struct _GEOTileKey { unsigned int x1 : 7; unsigned int x2 : 1; union { struct _GEOStandardTileKey { unsigned int x_1_2_1 : 40; unsigned int x_1_2_2 : 6; unsigned int x_1_2_3 : 26; unsigned int x_1_2_4 : 26; unsigned int x_1_2_5 : 14; unsigned int x_1_2_6 : 4; unsigned int x_1_2_7 : 4; } x_3_1_1; struct _GEOGloriaQuadIDTileKey { unsigned int x_2_2_1 : 6; unsigned int x_2_2_2 : 64; unsigned int x_2_2_3 : 14; unsigned int x_2_2_4 : 4; union { struct { unsigned int x_1_4_1 : 10; unsigned int x_1_4_2 : 10; unsigned int x_1_4_3 : 12; } x_5_3_1; unsigned int x_5_3_2; } x_2_2_5; } x_3_1_2; struct _GEORegionalResourceKey { unsigned int x_3_2_1 : 32; unsigned int x_3_2_2 : 8; unsigned int x_3_2_3 : 6; unsigned int x_3_2_4 : 8; unsigned int x_3_2_5 : 8; unsigned int x_3_2_6 : 1; unsigned int x_3_2_7 : 57; } x_3_1_3; struct _GEOSputnikMetadataKey { unsigned int x_4_2_1 : 32; unsigned int x_4_2_2 : 24; unsigned int x_4_2_3 : 14; unsigned int x_4_2_4 : 8; unsigned int x_4_2_5 : 42; } x_3_1_4; struct _GEOFlyoverKey { unsigned int x_5_2_1 : 6; unsigned int x_5_2_2 : 26; unsigned int x_5_2_3 : 26; unsigned int x_5_2_4 : 8; unsigned int x_5_2_5 : 24; unsigned int x_5_2_6 : 14; unsigned int x_5_2_7 : 8; unsigned int x_5_2_8 : 8; } x_3_1_5; } x3; })arg6 userInfo:(id)arg7;
- (void)batchTileRequesterDidFinish:(id)arg1;
- (unsigned long long)bytesDownloaded;
- (void)cancel;
- (id)delegate;
- (id)delegateQueue;
- (unsigned long long)failedTiles;
- (id)initWithSubscription:(id)arg1 diskCache:(id)arg2 reason:(unsigned char)arg3 requestOptions:(unsigned long long)arg4 manifestManager:(id)arg5 delegate:(id)arg6 delegateQueue:(id)arg7 log:(id)arg8 logPrefix:(id)arg9 tileRequesterCreationBlock:(id /* block */)arg10;
- (unsigned long long)numberOfTilesAttempted;
- (unsigned long long)numberOfTilesConsidered;
- (void)pause;
- (id)progress;
- (void)resume;
- (void)setDelegate:(id)arg1;
- (void)setDelegateQueue:(id)arg1;
- (id)subscription;
- (unsigned long long)successfulTiles;

@end
