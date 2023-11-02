
@protocol CCCameraConnectionProtocol

@required

- (void)takePhotoWithCountdown:(unsigned long long)arg1;
- (oneway void)xpc_beginBurstCaptureWithReply:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (oneway void)xpc_cancelCountdown;
- (oneway void)xpc_endBurstCaptureWithReply:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (oneway void)xpc_ensureSwitchedToOneOfSupportedCaptureModes:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 6: NSOrderedSet *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (oneway void)xpc_fetchCurrentStateIncludingSupportedCaptureModes:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 33: bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSOrderedSet *, long long, NSOrderedSet *, long long, bool, NSDate *, long long, bool, bool, float, bool, float, float, NSArray *, float, long long, long long, long long, long long, long long, long long, long long, long long, bool, bool, bool, long long, void*
- (oneway void)xpc_setCaptureDevice:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (oneway void)xpc_setCaptureMode:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (oneway void)xpc_setFlashMode:(long long)arg1;
- (oneway void)xpc_setFocusPoint:(NSValue *)arg1;
- (oneway void)xpc_setHDRMode:(long long)arg1;
- (oneway void)xpc_setIrisMode:(long long)arg1;
- (oneway void)xpc_setPreviewEndpoint:(NSString *)arg1;
- (oneway void)xpc_setSharedLibraryMode:(long long)arg1;
- (oneway void)xpc_setZoom:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: float, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, float, void*
- (oneway void)xpc_setZoomMagnification:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: float, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, float, void*
- (oneway void)xpc_startCaptureWithMode:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (oneway void)xpc_stopCaptureWithReply:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (oneway void)xpc_suspend;
- (oneway void)xpc_toggleCameraDevice;

@end
