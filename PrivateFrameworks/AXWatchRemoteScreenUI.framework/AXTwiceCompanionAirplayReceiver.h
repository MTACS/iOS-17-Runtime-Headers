
@interface AXTwiceCompanionAirplayReceiver : NSObject <APRKStreamRendererDelegate, APRKStreamRenderingManagerDelegate> {
    <AXTwiceCompanionAirplayReceiverDelegate> * _delegate;
    APRKStreamRenderer * _streamRenderer;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AXTwiceCompanionAirplayReceiverDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) APRKStreamRenderer *streamRenderer;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_init;
- (void)cleanup;
- (void)dealloc;
- (id)delegate;
- (void)didChangeStreamRendererModeTo:(unsigned long long)arg1 forRenderer:(id)arg2;
- (void)didStartStreamingWithRenderer:(id)arg1;
- (void)didStopStreamingWithRenderer:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setStreamRenderer:(id)arg1;
- (void)shouldHideGlobalPasscode;
- (void)shouldShowGlobalPasscodeWithString:(id)arg1 withClientName:(id)arg2;
- (id)start;
- (id)streamRenderer;

@end
