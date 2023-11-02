
@interface SidecarProviderProxy : NSObject <SidecarSessionDelegate> {
    <SidecarServiceProviderDelegate> * _delegate;
}

@property (nonatomic) <SidecarServiceProviderDelegate> *delegate;

+ (id)defaultProxy;

- (void).cxx_destruct;
- (id)delegate;
- (id)init;
- (void)setDelegate:(id)arg1;
- (void)sidecarServiceTerminate;
- (void)sidecarSession:(id)arg1 closedWithError:(id)arg2;
- (void)sidecarSession:(id)arg1 receivedMessage:(id)arg2;
- (void)sidecarSessionStarted:(id)arg1;

@end
