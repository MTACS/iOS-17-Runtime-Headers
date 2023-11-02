
@interface UARPHeySiriModelBase : NSObject {
    UARPAccessory * _accessory;
    UARPController * _controller;
    <UARPHeySiriModelDelegateProtocol> * _delegate;
    NSMutableArray * _downloadedModels;
    unsigned long long  _engineType;
    NSObject<OS_os_log> * _log;
    unsigned long long  _majorVersion;
    unsigned long long  _minorVersion;
    NSMutableArray * _preinstalledModels;
    NSObject<OS_dispatch_queue> * _queue;
    UARPSuperBinaryAsset * _superbinary;
    unsigned long long  _uarpProtocolVersion;
    NSURL * _url;
}

@property (readonly) UARPAccessory *accessory;
@property <UARPHeySiriModelDelegateProtocol> *delegate;

- (void).cxx_destruct;
- (id)accessory;
- (void)addDownloadedModel:(id)arg1;
- (void)addPreInstalledModel:(id)arg1;
- (void)checkCurrentHeySiriModel;
- (void)checkCurrentJustSiriModel;
- (void)checkCurrentJustSiriModelAvailable;
- (id)delegate;
- (unsigned long long)engineType;
- (id)init;
- (id)initWithAccessory:(id)arg1 controller:(id)arg2 url:(id)arg3;
- (id)initWithAccessory:(id)arg1 uarpProtocolVersion:(unsigned long long)arg2 controller:(id)arg3 url:(id)arg4;
- (id)log;
- (unsigned long long)majorVersion;
- (unsigned long long)minorVersion;
- (void)offerDownloadModel:(id)arg1 fallbackModel:(id)arg2 tag:(id)arg3 assetVersion:(id)arg4 error:(id)arg5;
- (bool)offerDynamicAssetToAccessory:(id)arg1 tag:(id)arg2 error:(id*)arg3;
- (bool)processDynamicAsset:(id*)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEngineType:(unsigned long long)arg1;
- (void)setMajorVersion:(unsigned long long)arg1;
- (void)setMinorVersion:(unsigned long long)arg1;
- (void)setSuperbinary:(id)arg1;
- (void)setUrl:(id)arg1;
- (id)superbinary;
- (id)uarpPayloadWithHSModel:(id)arg1 tag:(id)arg2;
- (unsigned long long)uarpProtocolVersion;
- (id)url;

@end
