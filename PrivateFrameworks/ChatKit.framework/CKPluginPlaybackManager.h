
@interface CKPluginPlaybackManager : NSObject {
    NSMutableArray * __pluginItems;
    unsigned long long  _currentIndex;
    <CKPluginPlaybackManagerDelegate> * _delegate;
    bool  _isPlayingBack;
}

@property (setter=_setPluginItems:, nonatomic, retain) NSMutableArray *_pluginItems;
@property (nonatomic) <CKPluginPlaybackManagerDelegate> *delegate;
@property (setter=_setPlayingBack:, nonatomic) bool isPlayingBack;

- (void).cxx_destruct;
- (void)_cleanup;
- (id)_pluginItems;
- (void)_setPlayingBack:(bool)arg1;
- (void)_setPluginItems:(id)arg1;
- (void)addPluginItem:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)initWithPluginItems:(id)arg1;
- (bool)isPlayingBack;
- (void)setDelegate:(id)arg1;
- (void)startPlayback;
- (void)stopPlayback;

@end
