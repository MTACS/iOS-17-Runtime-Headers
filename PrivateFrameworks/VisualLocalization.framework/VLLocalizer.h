
@interface VLLocalizer : NSObject <VLLocalizationDataProviderDelegate> {
    int  _algorithmVersion;
    NSObject<OS_dispatch_queue> * _altitudeCalculationQueue;
    <VLLocalizationDataProvider> * _backupDataProvider;
    _VLLocalizerAltitudeQuery * _currentAltitudeQuery;
    <VLLocalizationDataProvider> * _dataProvider;
    bool  _debugInfoShouldPreserveImageData;
    int  _debug_algorithmVersion;
    NSMutableArray * _pendingAltitudeQueries;
    NSObject<OS_dispatch_queue> * _recorderQueue;
    unsigned long long  _signpostID;
    struct vl_t { struct { struct { int x_1_2_1; int x_1_2_2; struct { int x_3_3_1; int x_3_3_2; int x_3_3_3; float x_3_3_4; float x_3_3_5; float x_3_3_6; int x_3_3_7; } x_1_2_3; struct { float x_4_3_1; int x_4_3_2; int x_4_3_3; int x_4_3_4; float x_4_3_5; int x_4_3_6; float x_4_3_7; int x_4_3_8; float x_4_3_9; float x_4_3_10; int x_4_3_11; float x_4_3_12; int x_4_3_13; } x_1_2_4; struct { int x_5_3_1; int x_5_3_2; int x_5_3_3; float x_5_3_4; int x_5_3_5; } x_1_2_5; float x_1_2_6; float x_1_2_7; int x_1_2_8; } x_1_1_1; struct { float x_2_2_1; float x_2_2_2; int x_2_2_3; struct { int x_4_3_1; float x_4_3_2; float x_4_3_3; } x_2_2_4; int x_2_2_5; int x_2_2_6; } x_1_1_2; struct { int x_3_2_1; struct { int x_2_3_1; } x_3_2_2; float x_3_2_3; int x_3_2_4; } x_1_1_3; struct { int x_4_2_1; int x_4_2_2; } x_1_1_4; struct { int x_5_2_1; struct { int x_2_3_1; float x_2_3_2; float x_2_3_3; float x_2_3_4; int x_2_3_5; float x_2_3_6; int x_2_3_7; int x_2_3_8; int x_2_3_9; int x_2_3_10; int x_2_3_11; int x_2_3_12; float x_2_3_13; int x_2_3_14; } x_5_2_2; struct { int x_3_3_1; float x_3_3_2; float x_3_3_3; float x_3_3_4; float x_3_3_5; float x_3_3_6; float x_3_3_7; int x_3_3_8; float x_3_3_9; float x_3_3_10; float x_3_3_11; float x_3_3_12; int x_3_3_13; int x_3_3_14; int x_3_3_15; float x_3_3_16; int x_3_3_17; int x_3_3_18; float x_3_3_19; int x_3_3_20; int x_3_3_21; float x_3_3_22[8]; int x_3_3_23; int x_3_3_24; int x_3_3_25; int x_3_3_26; float x_3_3_27; float x_3_3_28; float x_3_3_29; int x_3_3_30; float x_3_3_31; int x_3_3_32; int x_3_3_33; } x_5_2_3; struct { struct { float x_1_4_1; float x_1_4_2; float x_1_4_3; int x_1_4_4; int x_1_4_5; int x_1_4_6; int x_1_4_7; float x_1_4_8; float x_1_4_9; float x_1_4_10; float x_1_4_11; float x_1_4_12; float x_1_4_13; int x_1_4_14; unsigned long long x_1_4_15; struct { float x_16_5_1; float x_16_5_2; float x_16_5_3; } x_1_4_16; } x_4_3_1; float x_4_3_2; float x_4_3_3; float x_4_3_4; } x_5_2_4; } x_1_1_5; } x1; } * _vl;
    struct GEOOnce_s { 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } lock; 
        bool didRun; 
    }  _vlOnce;
}

@property (getter=_algorithmVersion, setter=_setAlgorithmVersion:, nonatomic) int algorithmVersion;
@property (readonly, copy) NSString *debugDescription;
@property (getter=_debugInfoShouldPreserveImageData, setter=_setDebugInfoShouldPreserveImageData:, nonatomic) bool debugInfoShouldPreserveImageData;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool shouldCacheMetadata;
@property (readonly) Class superclass;

+ (id /* block */)_debugInfoRecorder;
+ (void)_setDebugInfoRecorder:(id /* block */)arg1;
+ (bool)isVisualLocalizationSupported;
+ (double)maximumHorizontalAccuracyThreshold;
+ (double)minimumTiltAngle;

- (void).cxx_destruct;
- (int)_algorithmVersion;
- (id)_altitudesAtLocation:(struct { double x1[3]; float x2; int x3; int x4; })arg1 error:(id*)arg2;
- (void)_commonInit;
- (bool)_debugInfoShouldPreserveImageData;
- (void)_deterministicLocateWithPixelBuffer:(void *)arg1 deviceLocation:(void *)arg2 heading:(void *)arg3 gravity:(void *)arg4 transform:(void *)arg5 cameraIntrinsics:(void *)arg6 radialDistortion:(void *)arg7 exposureTargetOffset:(void *)arg8 timestamp:(void *)arg9 completionHandler:(void *)arg10; // needs 10 arg types, found 8: struct __CVBuffer { }*, id, struct { double x1; double x2; }, struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; }, struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; }, double, double, id /* block */
- (id)_fileURLForTile:(const struct vl_tile_t { int x1; int x2; int x3; int x4; }*)arg1 error:(id*)arg2;
- (id)_locateWithPixelBuffer:(void *)arg1 deviceLocation:(void *)arg2 heading:(void *)arg3 gravity:(void *)arg4 transform:(void *)arg5 cameraIntrinsics:(void *)arg6 radialDistortion:(void *)arg7 exposureTargetOffset:(void *)arg8 timestamp:(void *)arg9 calculationBlock:(void *)arg10 error:(void *)arg11; // needs 11 arg types, found 9: struct __CVBuffer { }*, id, struct { double x1; double x2; }, struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; }, struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; }, double, double, id /* block */, id*
- (void)_resolveCurrentAltitudeQuery;
- (void)_setAlgorithmVersion:(int)arg1;
- (void)_setDebugInfoShouldPreserveImageData:(bool)arg1;
- (struct vl_t { struct { struct { int x_1_2_1; int x_1_2_2; struct { int x_3_3_1; int x_3_3_2; int x_3_3_3; float x_3_3_4; float x_3_3_5; float x_3_3_6; int x_3_3_7; } x_1_2_3; struct { float x_4_3_1; int x_4_3_2; int x_4_3_3; int x_4_3_4; float x_4_3_5; int x_4_3_6; float x_4_3_7; int x_4_3_8; float x_4_3_9; float x_4_3_10; int x_4_3_11; float x_4_3_12; int x_4_3_13; } x_1_2_4; struct { int x_5_3_1; int x_5_3_2; int x_5_3_3; float x_5_3_4; int x_5_3_5; } x_1_2_5; float x_1_2_6; float x_1_2_7; int x_1_2_8; } x_1_1_1; struct { float x_2_2_1; float x_2_2_2; int x_2_2_3; struct { int x_4_3_1; float x_4_3_2; float x_4_3_3; } x_2_2_4; int x_2_2_5; int x_2_2_6; } x_1_1_2; struct { int x_3_2_1; struct { int x_2_3_1; } x_3_2_2; float x_3_2_3; int x_3_2_4; } x_1_1_3; struct { int x_4_2_1; int x_4_2_2; } x_1_1_4; struct { int x_5_2_1; struct { int x_2_3_1; float x_2_3_2; float x_2_3_3; float x_2_3_4; int x_2_3_5; float x_2_3_6; int x_2_3_7; int x_2_3_8; int x_2_3_9; int x_2_3_10; int x_2_3_11; int x_2_3_12; float x_2_3_13; int x_2_3_14; } x_5_2_2; struct { int x_3_3_1; float x_3_3_2; float x_3_3_3; float x_3_3_4; float x_3_3_5; float x_3_3_6; float x_3_3_7; int x_3_3_8; float x_3_3_9; float x_3_3_10; float x_3_3_11; float x_3_3_12; int x_3_3_13; int x_3_3_14; int x_3_3_15; float x_3_3_16; int x_3_3_17; int x_3_3_18; float x_3_3_19; int x_3_3_20; int x_3_3_21; float x_3_3_22[8]; int x_3_3_23; int x_3_3_24; int x_3_3_25; int x_3_3_26; float x_3_3_27; float x_3_3_28; float x_3_3_29; int x_3_3_30; float x_3_3_31; int x_3_3_32; int x_3_3_33; } x_5_2_3; struct { struct { float x_1_4_1; float x_1_4_2; float x_1_4_3; int x_1_4_4; int x_1_4_5; int x_1_4_6; int x_1_4_7; float x_1_4_8; float x_1_4_9; float x_1_4_10; float x_1_4_11; float x_1_4_12; float x_1_4_13; int x_1_4_14; unsigned long long x_1_4_15; struct { float x_16_5_1; float x_16_5_2; float x_16_5_3; } x_1_4_16; } x_4_3_1; float x_4_3_2; float x_4_3_3; float x_4_3_4; } x_5_2_4; } x_1_1_5; } x1; }*)_vlHandle;
- (void)dataProvider:(id)arg1 didChangeFormatVersion:(unsigned int)arg2;
- (void)dealloc;
- (void)determineAltitudesAtLocation:(id)arg1 callbackQueue:(id)arg2 callback:(id /* block */)arg3;
- (void)determineAvailabilityAtLocation:(struct { double x1; })arg1 callbackQueue:(id)arg2 callback:(id /* block */)arg3;
- (void)determineAvailabilityAtLocation:(struct { double x1; })arg1 purpose:(long long)arg2 callbackQueue:(id)arg3 callback:(id /* block */)arg4;
- (id)init;
- (id)initWithAuditToken:(id)arg1;
- (id)initWithDataProvider:(id)arg1;
- (id)locateWithPixelBuffer:(void *)arg1 deviceLocation:(void *)arg2 heading:(void *)arg3 gravity:(void *)arg4 transform:(void *)arg5 cameraIntrinsics:(void *)arg6 radialDistortion:(void *)arg7 ambientLightIntensity:(void *)arg8 timestamp:(void *)arg9 error:(void *)arg10; // needs 10 arg types, found 8: struct __CVBuffer { }*, id, struct { double x1; double x2; }, struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; }, struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; }, double, double, id*
- (id)locateWithPixelBuffer:(void *)arg1 deviceLocation:(void *)arg2 heading:(void *)arg3 gravity:(void *)arg4 transform:(void *)arg5 cameraIntrinsics:(void *)arg6 radialDistortion:(void *)arg7 exposureTargetOffset:(void *)arg8 timestamp:(void *)arg9 error:(void *)arg10; // needs 10 arg types, found 8: struct __CVBuffer { }*, id, struct { double x1; double x2; }, struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; }, struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; }, double, double, id*
- (id)locateWithPixelBuffer:(void *)arg1 location:(void *)arg2 heading:(void *)arg3 gravity:(void *)arg4 transform:(void *)arg5 cameraIntrinsics:(void *)arg6 radialDistortion:(void *)arg7 timestamp:(void *)arg8 error:(void *)arg9; // needs 9 arg types, found 7: struct __CVBuffer { }*, struct { double x1; }, struct { double x1; double x2; }, struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; }, struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; }, double, id*
- (id)locateWithPixelBuffer:(void *)arg1 timestamp:(void *)arg2 location:(void *)arg3 gravity:(void *)arg4 transform:(void *)arg5 cameraIntrinsics:(void *)arg6 radialDistortion:(void *)arg7 error:(void *)arg8; // needs 8 arg types, found 6: struct __CVBuffer { }*, unsigned long long, struct { double x1; }, struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; }, struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; }, id*
- (id)locateWithPixelBuffer:(void *)arg1 timestamp:(void *)arg2 location:(void *)arg3 heading:(void *)arg4 gravity:(void *)arg5 transform:(void *)arg6 cameraIntrinsics:(void *)arg7 radialDistortion:(void *)arg8 error:(void *)arg9; // needs 9 arg types, found 7: struct __CVBuffer { }*, unsigned long long, struct { double x1; }, struct { double x1; double x2; }, struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; }, struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; }, id*
- (void)prepareWithDeviceLocation:(id)arg1;
- (void)prepareWithLocation:(struct { double x1; })arg1;
- (void)setShouldCacheMetadata:(bool)arg1;
- (bool)shouldCacheMetadata;

@end
