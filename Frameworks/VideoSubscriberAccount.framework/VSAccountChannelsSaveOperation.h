
@interface VSAccountChannelsSaveOperation : VSAsyncOperation {
    VSAccountChannelsCenter * _accountChannelsCenter;
    NSError * _error;
    VSAccountChannels * _unsavedAccountChannels;
}

@property (nonatomic, retain) VSAccountChannelsCenter *accountChannelsCenter;
@property (nonatomic, copy) NSError *error;
@property (nonatomic, retain) VSAccountChannels *unsavedAccountChannels;

- (void).cxx_destruct;
- (id)accountChannelsCenter;
- (id)error;
- (void)executionDidBegin;
- (id)init;
- (id)initWithUnsavedAccountChannels:(id)arg1 accountChannelsCenter:(id)arg2;
- (void)setAccountChannelsCenter:(id)arg1;
- (void)setError:(id)arg1;
- (void)setUnsavedAccountChannels:(id)arg1;
- (id)unsavedAccountChannels;

@end
