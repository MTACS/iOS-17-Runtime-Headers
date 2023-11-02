
@interface ICUIApplicationShim : NSObject <ICUIApplicationShim> {
    <ICUIApplicationShimDelegate> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) <ICUIApplicationShimDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIWindow *keyWindow;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)beginReceivingRemoteControlEvents;
- (id)delegate;
- (void)endReceivingRemoteControlEvents;
- (bool)isQuickNoteSessionActive;
- (bool)isSecureScreenShowing;
- (id)keyWindow;
- (void)setDelegate:(id)arg1;

@end
