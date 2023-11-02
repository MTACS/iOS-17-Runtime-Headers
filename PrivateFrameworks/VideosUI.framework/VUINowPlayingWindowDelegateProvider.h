
@interface VUINowPlayingWindowDelegateProvider : NSObject <VUINowPlayingWindowDelegate> {
    <VUINowPlayingWindowDelegate> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <VUINowPlayingWindowDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (bool)shouldNowPlayingWindowDismiss;

@end
