
@interface AXBannerServices : NSObject <AXUIClientDelegate> {
    AXUIClient * _serverClient;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) AXUIClient *serverClient;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_init;
- (void)connectionWithServiceWasInterruptedForUserInterfaceClient:(id)arg1;
- (void)dismissBanner;
- (void)presentBannerWithTitle:(id)arg1 message:(id)arg2 duration:(double)arg3;
- (id)serverClient;

@end
