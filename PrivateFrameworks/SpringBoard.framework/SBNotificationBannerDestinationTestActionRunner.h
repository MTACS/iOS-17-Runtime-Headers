
@interface SBNotificationBannerDestinationTestActionRunner : NSObject <NCNotificationActionRunner> {
    bool  _shouldForwardAction;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool shouldForwardAction;
@property (readonly) Class superclass;

- (void)executeAction:(id)arg1 fromOrigin:(id)arg2 endpoint:(id)arg3 withParameters:(id)arg4 completion:(id /* block */)arg5;
- (void)setShouldForwardAction:(bool)arg1;
- (bool)shouldForwardAction;

@end
