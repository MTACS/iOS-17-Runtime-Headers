
@interface BLSHInternalTapToRadarDialog : NSObject {
    id /* block */  _completion;
    BLSHTapToRadarDescriptor * _descriptor;
    NSObject<OS_os_log> * _log;
}

@property (nonatomic, readonly) BLSHTapToRadarDescriptor *descriptor;

- (void).cxx_destruct;
- (void)_alertDidDismiss:(long long)arg1;
- (void)_cancel;
- (void)_file;
- (void)_gotError;
- (void)_ignore;
- (bool)_shouldIgnore;
- (void)callCompletion:(bool)arg1 shouldTryAgain:(bool)arg2;
- (id)descriptor;
- (id)initWithDescriptor:(id)arg1 log:(id)arg2;
- (void)presentWithCompletion:(id /* block */)arg1;

@end
