
@interface GEOCoarseLocationProvider : NSObject {
    unsigned long long  _inFlightTileLoadsCount;
    GEOLocationShifter * _locationShifter;
    NSObject<OS_dispatch_queue> * _workQueue;
}

- (void).cxx_destruct;
- (void)_fetchBasicCoarseEquivalentForLocation:(id)arg1 fallbackIsPermanent:(bool)arg2 addLocationNoise:(bool)arg3 callbackQueue:(id)arg4 callback:(id /* block */)arg5;
- (void)_fetchCoarseEquivalentForLocation:(id)arg1 addLocationNoise:(bool)arg2 callbackQueue:(id)arg3 callback:(id /* block */)arg4;
- (void)_fetchRepresentativePointFromData:(id)arg1 tileKey:(const struct _GEOTileKey { unsigned int x1 : 7; unsigned int x2 : 1; union { struct _GEOStandardTileKey { unsigned int x_1_2_1 : 40; unsigned int x_1_2_2 : 6; unsigned int x_1_2_3 : 26; unsigned int x_1_2_4 : 26; unsigned int x_1_2_5 : 14; unsigned int x_1_2_6 : 4; unsigned int x_1_2_7 : 4; } x_3_1_1; struct _GEOGloriaQuadIDTileKey { unsigned int x_2_2_1 : 6; unsigned int x_2_2_2 : 64; unsigned int x_2_2_3 : 14; unsigned int x_2_2_4 : 4; union { struct { unsigned int x_1_4_1 : 10; unsigned int x_1_4_2 : 10; unsigned int x_1_4_3 : 12; } x_5_3_1; unsigned int x_5_3_2; } x_2_2_5; } x_3_1_2; struct _GEORegionalResourceKey { unsigned int x_3_2_1 : 32; unsigned int x_3_2_2 : 8; unsigned int x_3_2_3 : 6; unsigned int x_3_2_4 : 8; unsigned int x_3_2_5 : 8; unsigned int x_3_2_6 : 1; unsigned int x_3_2_7 : 57; } x_3_1_3; struct _GEOSputnikMetadataKey { unsigned int x_4_2_1 : 32; unsigned int x_4_2_2 : 24; unsigned int x_4_2_3 : 14; unsigned int x_4_2_4 : 8; unsigned int x_4_2_5 : 42; } x_3_1_4; struct _GEOFlyoverKey { unsigned int x_5_2_1 : 6; unsigned int x_5_2_2 : 26; unsigned int x_5_2_3 : 26; unsigned int x_5_2_4 : 8; unsigned int x_5_2_5 : 24; unsigned int x_5_2_6 : 14; unsigned int x_5_2_7 : 8; unsigned int x_5_2_8 : 8; } x_3_1_5; } x3; }*)arg2 location:(id)arg3 addLocationNoise:(bool)arg4 callbackQueue:(id)arg5 callback:(id /* block */)arg6;
- (bool)_snapNonMercatorCoordinateIfNecessary:(id)arg1 callbackQueue:(id)arg2 callback:(id /* block */)arg3;
- (void)fetchCoarseEquivalentForLocation:(id)arg1 callbackQueue:(id)arg2 callback:(id /* block */)arg3;
- (void)fetchConsistentCoarseEquivalentForLocation:(id)arg1 callbackQueue:(id)arg2 callback:(id /* block */)arg3;
- (id)init;

@end
