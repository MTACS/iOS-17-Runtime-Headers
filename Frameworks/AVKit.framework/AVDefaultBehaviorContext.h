
@interface AVDefaultBehaviorContext : NSObject <AVBehaviorContext> {
    AVPlayerViewController * _playerViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) AVPlayerViewController *playerViewController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithAVKitOwner:(id)arg1;
- (id)playerViewController;

@end
