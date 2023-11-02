
@interface GEOPOIBusynessHelper : NSObject

+ (bool)_checkAvailablePOIForLocation:(id)arg1 radius:(int)arg2 minZoom:(unsigned char)arg3 maxZoom:(unsigned char)arg4 tiles:(id)arg5 error:(id*)arg6;
+ (id)_generateDPPOIBusynessForCoordinate:(struct { double x1; double x2; })arg1 tileId:(unsigned long long)arg2 dpBusynessTileURL:(id)arg3 dayOfWeek:(unsigned int)arg4 hourOfDay:(unsigned int)arg5 radii:(id)arg6 minZoom:(unsigned char)arg7 maxZoom:(unsigned char)arg8 tileIds:(id)arg9 error:(id*)arg10;
+ (id)_generateDPPOIBusynessForLocation:(id)arg1 radii:(id)arg2 minZoom:(unsigned char)arg3 maxZoom:(unsigned char)arg4 dpBusynessTiles:(id)arg5 error:(id*)arg6;
+ (void)checkIsEnabledForLocation:(id)arg1 radius:(int)arg2 workQueue:(id)arg3 result:(id /* block */)arg4;
+ (id)dpClientVersionHashWithMCPOIBusynessVersion:(id)arg1;
+ (void)generateDPPOIBusynessForLocation:(id)arg1 radii:(id)arg2 workQueue:(id)arg3 result:(id /* block */)arg4;

- (id)init;

@end
