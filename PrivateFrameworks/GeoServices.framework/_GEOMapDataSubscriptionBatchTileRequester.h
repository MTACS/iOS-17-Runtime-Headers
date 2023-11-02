
@interface _GEOMapDataSubscriptionBatchTileRequester : GEOBatchTileRequester <NSProgressReporting> {
    unsigned long long  _batchSize;
    NSDictionary * _dataTypeToDBTileSets;
    GEOTileDB * _diskCache;
    GEOResourceManifestManager * _manifestManager;
    unsigned long long  _numberOfTilesOriginallyConsidered;
    NSProgress * _progress;
    unsigned char  _reason;
    GEOMapDataSubscription * _subscription;
    <GEOTileKeyEnumerator> * _tileKeysToLoad;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSProgress *progress;
@property (nonatomic, readonly) GEOMapDataSubscription *subscription;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addMoreKeysToListIfNeeded:(id)arg1 cachedETags:(id)arg2 cachedData:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)determineNextBatchWithQueue:(id)arg1 callback:(id /* block */)arg2;
- (void)didFinishWithError:(id)arg1;
- (void)downloadDidSucceedForTile:(struct _GEOTileKey { unsigned int x1 : 7; unsigned int x2 : 1; union { struct _GEOStandardTileKey { unsigned int x_1_2_1 : 40; unsigned int x_1_2_2 : 6; unsigned int x_1_2_3 : 26; unsigned int x_1_2_4 : 26; unsigned int x_1_2_5 : 14; unsigned int x_1_2_6 : 4; unsigned int x_1_2_7 : 4; } x_3_1_1; struct _GEOGloriaQuadIDTileKey { unsigned int x_2_2_1 : 6; unsigned int x_2_2_2 : 64; unsigned int x_2_2_3 : 14; unsigned int x_2_2_4 : 4; union { struct { unsigned int x_1_4_1 : 10; unsigned int x_1_4_2 : 10; unsigned int x_1_4_3 : 12; } x_5_3_1; unsigned int x_5_3_2; } x_2_2_5; } x_3_1_2; struct _GEORegionalResourceKey { unsigned int x_3_2_1 : 32; unsigned int x_3_2_2 : 8; unsigned int x_3_2_3 : 6; unsigned int x_3_2_4 : 8; unsigned int x_3_2_5 : 8; unsigned int x_3_2_6 : 1; unsigned int x_3_2_7 : 57; } x_3_1_3; struct _GEOSputnikMetadataKey { unsigned int x_4_2_1 : 32; unsigned int x_4_2_2 : 24; unsigned int x_4_2_3 : 14; unsigned int x_4_2_4 : 8; unsigned int x_4_2_5 : 42; } x_3_1_4; struct _GEOFlyoverKey { unsigned int x_5_2_1 : 6; unsigned int x_5_2_2 : 26; unsigned int x_5_2_3 : 26; unsigned int x_5_2_4 : 8; unsigned int x_5_2_5 : 24; unsigned int x_5_2_6 : 14; unsigned int x_5_2_7 : 8; unsigned int x_5_2_8 : 8; } x_3_1_5; } x3; }*)arg1 downloadSize:(unsigned long long)arg2 httpStatus:(unsigned int)arg3;
- (id)init;
- (id)initWithSubscription:(id)arg1 diskCache:(id)arg2 reason:(unsigned char)arg3 requestOptions:(unsigned long long)arg4 manifestManager:(id)arg5 log:(id)arg6 logPrefix:(id)arg7 tileRequesterCreationBlock:(id /* block */)arg8;
- (unsigned long long)numberOfTilesConsidered;
- (id)progress;
- (unsigned char)reason;
- (id)subscription;

@end
