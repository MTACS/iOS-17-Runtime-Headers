
@interface HAP2AccessoryServerControllerReadOperation : HAP2AccessoryServerControllerOperation {
    NSIndexSet * _cachedCharacteristicIndices;
    HAP2ControllerReadRequest * _readRequest;
}

- (void).cxx_destruct;
- (id)_HAP2AutoUpdateCachedCountdownCharacteristic:(id)arg1;
- (void)_cleanUp;
- (void)_sendRequest;
- (id)initWithName:(id)arg1 controller:(id)arg2 encoding:(id)arg3 transport:(id)arg4 readRequest:(id)arg5 endpoint:(id)arg6 mimeType:(id)arg7 timeout:(double)arg8 options:(unsigned long long)arg9;

@end
