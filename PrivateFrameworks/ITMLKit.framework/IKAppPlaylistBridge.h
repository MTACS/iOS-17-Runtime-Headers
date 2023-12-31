
@interface IKAppPlaylistBridge : NSObject {
    IKAppContext * _appContext;
    <IKAppPlaylist> * _appPlaylist;
    IKJSPlaylist * _jsPlaylist;
}

@property (nonatomic, readonly) IKAppContext *appContext;
@property (nonatomic, readonly) <IKAppPlaylist> *appPlaylist;
@property (nonatomic) long long endAction;
@property (nonatomic, readonly) IKJSPlaylist *jsPlaylist;
@property (readonly) unsigned long long length;
@property (nonatomic) long long repeatMode;

- (void).cxx_destruct;
- (void)_evaluateDelegateBlockSync:(id /* block */)arg1;
- (id)appContext;
- (id)appPlaylist;
- (void)cleanup;
- (long long)endAction;
- (id)initWithAppContext:(id)arg1 jsPlaylist:(id)arg2;
- (id)item:(long long)arg1;
- (id)jsPlaylist;
- (unsigned long long)length;
- (long long)repeatMode;
- (id)replaceItemsAt:(long long)arg1 count:(unsigned long long)arg2 with:(id)arg3;
- (void)setEndAction:(long long)arg1;
- (void)setRepeatMode:(long long)arg1;

@end
