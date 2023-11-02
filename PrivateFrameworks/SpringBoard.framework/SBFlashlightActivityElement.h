
@interface SBFlashlightActivityElement : SBFlashlightElement <SAActivityBehavior> {
    <SAActivityHosting> * _activityHost;
    <SBFlashlightActivityElementDelegate> * _delegate;
    bool  _flashlightOn;
}

@property (nonatomic) <SAActivityHosting> *activityHost;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBFlashlightActivityElementDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isFlashlightOn, nonatomic) bool flashlightOn;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleExpandedLeadingButtonAction;
- (id)activityHost;
- (id)delegate;
- (bool)hasActivityBehavior;
- (id)initWithFlashlightOn:(bool)arg1;
- (bool)isFlashlightOn;
- (void)setActivityHost:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFlashlightOn:(bool)arg1;
- (void)setPreviewing:(bool)arg1;
- (long long)systemApertureLayoutCustomizingOptions;

@end
