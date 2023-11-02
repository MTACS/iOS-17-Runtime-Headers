
@interface ATXLocationManagerStateStoreOnDisk : NSObject <ATXLocationManagerStateStore> {
    double  _cacheExpirationInterval;
    id /* block */  _deferredLoadCallback;
    <ATXLocationManagerStateStoreOnDiskEnv> * _env;
    int  _fd;
    NSString * _path;
}

@property double cacheExpirationInterval;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_deviceDidUnlock;
- (bool)_tryToOpen;
- (double)cacheExpirationInterval;
- (void)clear;
- (void)dealloc;
- (id)initWithLocationParameters:(id)arg1;
- (id)initWithPath:(id)arg1 environment:(id)arg2 locationParameters:(id)arg3;
- (id)loadNowOrCallLater:(id /* block */)arg1;
- (void)setCacheExpirationInterval:(double)arg1;
- (void)write:(id)arg1;

@end
