
@interface VCMockIDSDatagramChannelController : VCObject {
    VCMockIDSDatagramChannel * _datagramChannel;
}

+ (id)sharedInstance;

- (id)datagramChannelRequiresOptions:(bool)arg1;
- (id)datagramChannelRequiresOptions:(bool)arg1 dataPath:(int)arg2;
- (void)dealloc;
- (void)invalidate;
- (void)setReadyToReadBlock:(id /* block */)arg1;
- (void)setWriteDatagramBlock:(id /* block */)arg1;
- (void)setWriteDatagramsBlock:(id /* block */)arg1;

@end
