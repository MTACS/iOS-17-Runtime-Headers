
@interface AVOutputContextCommunicationChannel : NSObject {
    AVOutputContextCommunicationChannelInternal * _ivars;
}

@property (nonatomic, readonly) struct __CFString { }*commChannelUUID;
@property (nonatomic, readonly) <AVOutputContextCommunicationChannelImpl> *impl;

- (struct __CFString { }*)commChannelUUID;
- (void)dealloc;
- (id)impl;
- (id)init;
- (id)initWithOutputContextCommunicationChannelImpl:(id)arg1;
- (void)sendData:(id)arg1 completionHandler:(id /* block */)arg2;

@end
