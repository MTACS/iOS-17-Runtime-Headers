
@interface NEAppProxyFlow : NSObject {
    NSObject<OS_nw_interface> * __networkInterface;
    struct _NEFlow { } * _flow;
    bool  _isBound;
    NEFlowMetaData * _metaData;
    NSObject<OS_dispatch_queue> * _queue;
    NSString * _remoteHostname;
}

@property (retain) NSData *applicationData;
@property bool isBound;
@property (readonly) NEFlowMetaData *metaData;
@property (copy) NSObject<OS_nw_interface> *networkInterface;
@property (readonly) NSString *remoteHostname;

- (void).cxx_destruct;
- (id)applicationData;
- (void)closeReadWithError:(id)arg1;
- (void)closeWriteWithError:(id)arg1;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)initWithNEFlow:(struct _NEFlow { }*)arg1 queue:(id)arg2;
- (bool)isBound;
- (id)metaData;
- (id)networkInterface;
- (void)openWithLocalEndpoint:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)remoteHostname;
- (void)setApplicationData:(id)arg1;
- (void)setIsBound:(bool)arg1;
- (void)setMetadata:(id)arg1;
- (void)setNetworkInterface:(id)arg1;

@end
