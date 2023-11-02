
@interface AVSystemRemotePoolOutputDeviceCommunicationChannelManager : NSObject <AVOutputDeviceCommunicationChannelManager> {
    struct __CFDictionary { } * _communicationChannelsForUUIDs;
    NSString * _deviceID;
    NSObject<OS_dispatch_queue> * _ivarAccessQueue;
    AVOutputContext * _outputContext;
    AVOutputDevice * _parentOutputDevice;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property AVOutputDevice *parentOutputDevice;
@property (readonly) Class superclass;

+ (id)sharedSystemRemotePool;
+ (id)sharedSystemRemotePoolImpl;

- (void).cxx_destruct;
- (void)_didCloseCommChannelWithUUID:(struct __CFString { }*)arg1 forDeviceWithID:(struct __CFString { }*)arg2;
- (void)_didReceiveData:(struct __CFData { }*)arg1 fromDeviceWithID:(struct __CFString { }*)arg2 fromChannelWithUUID:(struct __CFString { }*)arg3;
- (id)_initializeIfNeededAndGetSystemRemotePool;
- (void)dealloc;
- (id)initWithDeviceID:(id)arg1;
- (void)openCommunicationChannelWithOptions:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)parentOutputDevice;
- (void)setParentOutputDevice:(id)arg1;

@end
