
@interface _SBPointerTouchDownEventSniffer : NSObject <_SBEventSniffing> {
    <_SBPointerTouchDownEventSnifferDelegate> * _delegate;
    SBWindowScene * _windowScene;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_SBPointerTouchDownEventSnifferDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) SBWindowScene *windowScene;

- (void).cxx_destruct;
- (id)delegate;
- (void)handleEvent:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setWindowScene:(id)arg1;
- (id)windowScene;

@end
