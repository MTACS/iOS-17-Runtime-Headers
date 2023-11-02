
@interface UARPUploaderEndpoint : NSObject {
    UARPAccessory * _accessory;
    NSMutableArray * _infoQuery;
    NSObject<OS_dispatch_source> * _layer2WatchdogTimer;
    NSObject<OS_os_log> * _log;
    bool  _pendingApplyStagedAssets;
    bool  _pendingRescindStagedAssets;
    unsigned long long  _queriedProperty;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableArray * _rxAssets;
    NSObject<OS_dispatch_source> * _transportActiveTimer;
    NSMutableArray * _txAssets;
    NSObject<OS_dispatch_source> * _txWatchdogInfoTimer;
    struct uarpPlatformRemoteEndpoint { 
        struct uarpPlatformOptionsObj { 
            unsigned int maxTxPayloadLength; 
            unsigned int maxRxPayloadLength; 
            unsigned int payloadWindowLength; 
            unsigned short protocolVersion; 
            unsigned char reofferFirmwareOnSync; 
            unsigned short responseTimeout; 
            unsigned short retryLimit; 
        } _options; 
        void *pDelegate; 
        unsigned short selectedProtocolVersion; 
        unsigned char isWatchdogSet; 
        int pendingResponse; 
        unsigned short requestRetries; 
        int _remoteEndpointID; 
        unsigned char dataTransferAllowed; 
        unsigned short txMsgID; 
        unsigned short lastRxMsgID; 
        struct UARPStatistics { 
            unsigned int packetsNoVersionAgreement; 
            unsigned int packetsMissed; 
            unsigned int packetsDuplicate; 
            unsigned int packetsOutOfOrder; 
        } uarpStats; 
        struct uarpPlatformStreamingBuffer {} *pStreamingCtx; 
        struct uarpPlatformRemoteEndpoint {} *pNext; 
    }  _uarpEndpoint;
    struct uarpPlatformOptionsObj { 
        unsigned int maxTxPayloadLength; 
        unsigned int maxRxPayloadLength; 
        unsigned int payloadWindowLength; 
        unsigned short protocolVersion; 
        unsigned char reofferFirmwareOnSync; 
        unsigned short responseTimeout; 
        unsigned short retryLimit; 
    }  _uarpOptions;
    unsigned long long  _uarpVersion;
}

@property (readonly) UARPAccessory *accessory;
@property bool pendingApplyStagedAssets;
@property bool pendingRescindStagedAssets;
@property unsigned long long queriedProperty;
@property (readonly) NSArray *rxAssets;
@property (readonly) NSArray *txAssets;
@property (readonly) struct uarpPlatformRemoteEndpoint { struct uarpPlatformOptionsObj { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned short x_1_1_4; unsigned char x_1_1_5; unsigned short x_1_1_6; unsigned short x_1_1_7; } x1; void *x2; unsigned short x3; unsigned char x4; int x5; unsigned short x6; int x7; unsigned char x8; unsigned short x9; unsigned short x10; struct UARPStatistics { unsigned int x_11_1_1; unsigned int x_11_1_2; unsigned int x_11_1_3; unsigned int x_11_1_4; } x11; struct uarpPlatformStreamingBuffer {} *x12; struct uarpPlatformRemoteEndpoint {} *x13; }*uarpEndpoint;
@property (readonly) struct uarpPlatformOptionsObj { unsigned int x1; unsigned int x2; unsigned int x3; unsigned short x4; unsigned char x5; unsigned short x6; unsigned short x7; }*uarpOptions;
@property unsigned long long uarpVersion;

- (void).cxx_destruct;
- (id)accessory;
- (void)addRxAsset:(id)arg1;
- (void)addTxAsset:(id)arg1;
- (void)cancelActiveTransportWatchdogTimer;
- (void)cancelLayer2WatchdogTimer;
- (void)cancelTxWatchdogInfoTimer;
- (void)dealloc;
- (id)findMatch:(id)arg1;
- (bool)firstQueryInfoProperty:(unsigned long long*)arg1;
- (void)handleActiveTransportWatchdogTimer:(id)arg1;
- (void)handleLayer2WatchdogTimer:(id)arg1;
- (void)handleTxWatchdogInfoTimer:(id)arg1;
- (id)initWithUARPAccessory:(id)arg1;
- (bool)pendingApplyStagedAssets;
- (bool)pendingRescindStagedAssets;
- (void)qCancelActiveTransportWatchdogTimer;
- (void)qCancelTxWatchdogInfoTimer;
- (void)qcancelLayer2WatchdogTimer;
- (unsigned long long)queriedProperty;
- (void)queueQueryInfoProperty:(unsigned long long)arg1;
- (void)rmvRxAsset:(id)arg1;
- (void)rmvTxAsset:(id)arg1;
- (id)rxAssets;
- (void)setActiveTransportWatchdogTimer:(id)arg1 timeoutMS:(unsigned long long)arg2;
- (void)setLayer2WatchdogTimer:(id)arg1 timeoutMS:(unsigned long long)arg2;
- (void)setPendingApplyStagedAssets:(bool)arg1;
- (void)setPendingRescindStagedAssets:(bool)arg1;
- (void)setQueriedProperty:(unsigned long long)arg1;
- (void)setTxWatchdogInfoTimer:(id)arg1 timeoutMS:(unsigned long long)arg2;
- (void)setUarpVersion:(unsigned long long)arg1;
- (id)txAssets;
- (struct uarpPlatformRemoteEndpoint { struct uarpPlatformOptionsObj { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned short x_1_1_4; unsigned char x_1_1_5; unsigned short x_1_1_6; unsigned short x_1_1_7; } x1; void *x2; unsigned short x3; unsigned char x4; int x5; unsigned short x6; int x7; unsigned char x8; unsigned short x9; unsigned short x10; struct UARPStatistics { unsigned int x_11_1_1; unsigned int x_11_1_2; unsigned int x_11_1_3; unsigned int x_11_1_4; } x11; struct uarpPlatformStreamingBuffer {} *x12; struct uarpPlatformRemoteEndpoint {} *x13; }*)uarpEndpoint;
- (struct uarpPlatformOptionsObj { unsigned int x1; unsigned int x2; unsigned int x3; unsigned short x4; unsigned char x5; unsigned short x6; unsigned short x7; }*)uarpOptions;
- (unsigned long long)uarpVersion;

@end
