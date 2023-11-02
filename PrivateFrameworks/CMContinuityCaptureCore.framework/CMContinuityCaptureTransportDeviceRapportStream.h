
@interface CMContinuityCaptureTransportDeviceRapportStream : NSObject <ContinuityCaptureTransportDeviceStream> {
    long long  _entity;
    RPStreamSession * _stream;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) long long entity;
@property (readonly) unsigned long long hash;
@property (readonly, retain) RPStreamSession *stream;
@property (readonly, retain) NSString *streamIdentifier;
@property (readonly, retain) NSUUID *streamUUID;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)cipherKeyforSessionID:(id)arg1;
- (id)description;
- (void)enqueueResponse:(id)arg1 identifier:(id)arg2;
- (long long)entity;
- (id)initWithRapportStream:(id)arg1;
- (bool)isMediaStream;
- (void)sendMessage:(id)arg1 message:(id)arg2 completion:(id /* block */)arg3;
- (id)stream;
- (id)streamIdentifier;
- (id)streamUUID;

@end
