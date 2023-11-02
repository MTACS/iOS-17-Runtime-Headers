
@interface PipeInfo : NSObject {
    PipeDataTransfer * _ackData;
    bool  _connectionInitiator;
    unsigned int  _localSupportedFeatures;
    unsigned char  _localVersion;
    bool  _newProtocol;
    CBScalablePipe * _pipe;
    PipeDataTransfer * _pipeDataTransfer;
    bool  _pipeDidConnectSent;
    NSObject<OS_dispatch_source> * _pipeReadSource;
    struct pthread_override_s { } * _qosOverride;
    struct pthread_override_s { } * _socketThreadQOSOverride;
    unsigned int  _supportedFeatures;
    bool  _useConnectStatusPDU;
    unsigned char  _version;
    bool  _versionInfoReceived;
    bool  _versionInfoSent;
    NSObject<OS_voucher> * _voucher;
}

@property (retain) PipeDataTransfer *ackData;
@property bool connectionInitiator;
@property unsigned int localSupportedFeatures;
@property unsigned char localVersion;
@property bool newProtocol;
@property (retain) CBScalablePipe *pipe;
@property (retain) PipeDataTransfer *pipeDataTransfer;
@property bool pipeDidConnectSent;
@property (retain) NSObject<OS_dispatch_source> *pipeReadSource;
@property unsigned int supportedFeatures;
@property bool useConnectStatusPDU;
@property unsigned char version;
@property bool versionInfoReceived;
@property bool versionInfoSent;
@property (retain) NSObject<OS_voucher> *voucher;

- (void).cxx_destruct;
- (id)ackData;
- (void)applyQOSOverride;
- (bool)connectionInitiator;
- (void)dealloc;
- (id)description;
- (unsigned int)localSupportedFeatures;
- (unsigned char)localVersion;
- (bool)newProtocol;
- (id)pipe;
- (id)pipeDataTransfer;
- (bool)pipeDidConnectSent;
- (id)pipeReadSource;
- (void)releaseQOSOverride;
- (void)setAckData:(id)arg1;
- (void)setConnectionInitiator:(bool)arg1;
- (void)setLocalSupportedFeatures:(unsigned int)arg1;
- (void)setLocalVersion:(unsigned char)arg1;
- (void)setNewProtocol:(bool)arg1;
- (void)setPipe:(id)arg1;
- (void)setPipeDataTransfer:(id)arg1;
- (void)setPipeDidConnectSent:(bool)arg1;
- (void)setPipeReadSource:(id)arg1;
- (void)setSupportedFeatures:(unsigned int)arg1;
- (void)setUseConnectStatusPDU:(bool)arg1;
- (void)setVersion:(unsigned char)arg1;
- (void)setVersionInfoReceived:(bool)arg1;
- (void)setVersionInfoSent:(bool)arg1;
- (void)setVoucher:(id)arg1;
- (unsigned int)supportedFeatures;
- (bool)useConnectStatusPDU;
- (unsigned char)version;
- (bool)versionInfoReceived;
- (bool)versionInfoSent;
- (id)voucher;

@end
