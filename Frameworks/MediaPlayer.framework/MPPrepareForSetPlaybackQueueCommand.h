
@interface MPPrepareForSetPlaybackQueueCommand : MPRemoteCommand {
    NSDictionary * _proactiveCommandOptions;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

@property (nonatomic, copy) NSDictionary *proactiveCommandOptions;

- (void).cxx_destruct;
- (id)_mediaRemoteCommandInfoOptions;
- (id)initWithMediaRemoteCommandType:(unsigned int)arg1;
- (id)proactiveCommandOptions;
- (void)setProactiveCommandOptions:(id)arg1;

@end
