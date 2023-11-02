
@interface CSMyriadSelfTriggerCoordinator : NSObject <CSSelfTriggerDetectorDelegate> {
    <CSMyriadSelfTriggerCoordinatorDelegate> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CSMyriadSelfTriggerCoordinatorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)delegate;
- (void)selfTriggerDetector:(id)arg1 didDetectSelfTrigger:(id)arg2;
- (void)setDelegate:(id)arg1;

@end
