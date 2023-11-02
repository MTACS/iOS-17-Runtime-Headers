
@interface AUGenericViewController : UIViewController {
    AUAudioUnit * _auAudioUnit;
    _TtC12CoreAudioKit21AUGenericViewInternal * _genericView;
}

@property (nonatomic, retain) AUAudioUnit *auAudioUnit;
@property (readonly) _TtC12CoreAudioKit21AUGenericViewInternal *genericView;

- (void).cxx_destruct;
- (void)addGestureObservers;
- (id)auAudioUnit;
- (id)genericView;
- (void)genericViewBeginGestureMessageReceived:(id)arg1;
- (void)genericViewEndGestureMessageReceived:(id)arg1;
- (void)genericViewNotificationMessageReceived:(id)arg1;
- (id)getAuAudioUnit;
- (id)init;
- (void)setAuAudioUnit:(id)arg1;
- (void)setAudioUnit:(struct OpaqueAudioComponentInstance { }*)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
