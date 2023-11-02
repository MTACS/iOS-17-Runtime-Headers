
@interface SBBacklightStudyLogger : NSObject <SBBacklightControllerObserver> {
    SBBacklightController * _controller;
    SLGLog * _logger;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)backlightController:(id)arg1 didAnimateBacklightToFactor:(float)arg2 source:(long long)arg3;
- (void)dealloc;
- (id)initWithController:(id)arg1;

@end
