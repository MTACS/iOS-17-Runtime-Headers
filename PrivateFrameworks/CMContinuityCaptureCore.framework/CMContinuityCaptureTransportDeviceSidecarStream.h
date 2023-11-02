
@interface CMContinuityCaptureTransportDeviceSidecarStream : NSObject <ContinuityCaptureTransportDeviceStream> {
    int  _active;
    long long  _entity;
    <CMContinuityCaptureTransportMessaging> * _messageDelegate;
    SidecarStream * _stream;
    NSUUID * _streamUUID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) long long entity;
@property (readonly) unsigned long long hash;
@property (readonly, retain) SidecarStream *stream;
@property (readonly, retain) NSString *streamIdentifier;
@property (readonly, retain) NSUUID *streamUUID;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)activate:(id /* block */)arg1;
- (id)cipherKeyforSessionID:(id)arg1;
- (id)description;
- (void)enqueueResponse:(id)arg1 identifier:(id)arg2;
- (long long)entity;
- (id)initWithSidecarStream:(id)arg1 entity:(long long)arg2 messageDelegate:(id)arg3;
- (bool)isMediaStream;
- (void)sendMessage:(id)arg1 message:(id)arg2 completion:(id /* block */)arg3;
- (id)stream;
- (id)streamIdentifier;
- (id)streamUUID;

@end
