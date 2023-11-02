
@interface _MPCNullQueueFeeder : MPQueueFeeder <MPCQueueControllerBehaviorMusicDataSource> {
    NSString * _uniqueIdentifier;
}

@property (nonatomic, readonly) bool containsLiveStream;
@property (nonatomic, readonly) bool containsRadioContent;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)containsLiveStream;
- (bool)containsTransportableContentWithReason:(id*)arg1;
- (id)identifiersForItem:(id)arg1 inSection:(id)arg2;
- (id)init;
- (id)itemForItem:(id)arg1 inSection:(id)arg2;
- (void)loadPlaybackContext:(id)arg1 completion:(id /* block */)arg2;
- (id)modelPlayEventForItem:(id)arg1 inSection:(id)arg2;
- (void)reloadSection:(id)arg1 completion:(id /* block */)arg2;
- (bool)section:(id)arg1 supportsShuffleType:(long long)arg2;
- (bool)supportsAutoPlayForItem:(id)arg1 inSection:(id)arg2;
- (id)uniqueIdentifier;

@end
