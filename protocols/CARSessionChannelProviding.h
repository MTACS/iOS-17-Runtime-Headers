
@protocol CARSessionChannelProviding <NSObject>

@required

- (<CARSessionChannelDelegate> *)channelDelegate;
- (void)closeChannel;
- (bool)isOpened;
- (bool)openChannel;
- (bool)openChannelWithError:(id*)arg1;
- (bool)sendChannelMessage:(NSData *)arg1;
- (void)setChannelDelegate:(id <CARSessionChannelDelegate>)arg1;

@end
