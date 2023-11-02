
@interface BLSHInternalTapToRadarManager : NSObject {
    NSObject<OS_os_log> * _log;
    BLSHInternalTapToRadarDialog * _ttrDialog;
}

+ (id)sharedTapToRadarManager;

- (void).cxx_destruct;
- (id)_init;
- (id)init;
- (void)requestTapToRadar:(id)arg1 log:(id)arg2 completion:(id /* block */)arg3;

@end
