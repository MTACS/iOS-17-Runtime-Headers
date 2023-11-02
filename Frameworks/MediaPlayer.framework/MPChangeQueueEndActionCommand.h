
@interface MPChangeQueueEndActionCommand : MPRemoteCommand {
    long long  _currentQueueEndAction;
    NSArray * _supportedQueueEndActions;
}

@property (nonatomic) long long currentQueueEndAction;
@property (nonatomic, copy) NSArray *supportedQueueEndActions;

- (void).cxx_destruct;
- (id)_mediaRemoteCommandInfoOptions;
- (long long)currentQueueEndAction;
- (void)setCurrentQueueEndAction:(long long)arg1;
- (void)setSupportedQueueEndActions:(id)arg1;
- (id)supportedQueueEndActions;

@end
