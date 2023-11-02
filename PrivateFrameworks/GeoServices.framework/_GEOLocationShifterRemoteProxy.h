
@interface _GEOLocationShifterRemoteProxy : NSObject <_GEOLocationShifterProxy> {
    NSObject<OS_dispatch_queue> * _queue;
    NSCache * _shiftFunctionCache;
    NSNumber * _shiftingEnabled;
    NSNumber * _shiftingFxnVersion;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSCache *memoryCache;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_isLocationShiftRequiredForCoordinateInProcess:(struct { double x1; double x2; })arg1;
- (bool)_isLocationShiftRequiredForCoordinateViaProxy:(struct { double x1; double x2; })arg1;
- (void)flushDiskCache;
- (id)init;
- (bool)isLocationShiftEnabled;
- (bool)isLocationShiftRequiredForCoordinate:(struct { double x1; double x2; })arg1;
- (unsigned int)locationShiftFunctionVersion;
- (id)memoryCache;
- (id)queue;
- (void)shiftLatLng:(id)arg1 auditToken:(id)arg2 completionHandler:(id /* block */)arg3;

@end
