
@interface VCStreamOutput : VCObject <VCRemoteVideoManagerStreamOutputDelegate> {
    struct __CFDictionary { } * _attributes;
    struct __CFAllocator { } * _backingBufferAllocator;
    int  _clientProcessID;
    id  _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    bool  _isClientInProcess;
    struct opaqueVCRemoteImageQueue { } * _remoteQueue;
    long long  _streamToken;
    bool  _useFigRemoteQueue;
    NSObject<OS_dispatch_queue> * _xpcCommandQueue;
}

@property (readonly) struct __CFAllocator { }*backingBufferAllocator;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) bool isClientInProcess;
@property (nonatomic, readonly) long long streamToken;
@property (readonly) Class superclass;

- (struct __CFAllocator { }*)backingBufferAllocator;
- (id)copyXpcSenderQueue;
- (bool)createRemoteQueue;
- (void)dealloc;
- (void)didDegrade:(bool)arg1;
- (void)didInvalidate;
- (void)didPause:(bool)arg1;
- (void)didReceiveSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)didStall:(bool)arg1;
- (void)didSuspend:(bool)arg1;
- (void)didUpdateAttachments:(struct __CFDictionary { }*)arg1;
- (id)initWithStreamToken:(long long)arg1 clientProcessID:(int)arg2 delegate:(id)arg3 delegateQueue:(id)arg4;
- (bool)initXPCCommandQueue;
- (void)invalidate;
- (bool)isClientInProcess;
- (int)processID;
- (long long)streamToken;

@end
