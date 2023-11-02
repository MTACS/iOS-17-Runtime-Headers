
@interface SBLockScreenPluginCallAction : SBLockScreenPluginAction {
    TUDialRequest * _dialRequest;
}

@property (nonatomic, readonly) NSURL *url;

- (void).cxx_destruct;
- (id)initWithURL:(id)arg1;
- (bool)isCallAction;
- (id)url;

@end
