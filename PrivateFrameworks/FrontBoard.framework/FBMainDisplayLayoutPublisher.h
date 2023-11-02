
@interface FBMainDisplayLayoutPublisher : NSObject <FBSDisplayLayoutPublisherObserving, FBSDisplayLayoutPublishing, FBSDisplayObserving> {
    int  _displayBacklightToken;
    FBSDisplayLayoutPublisher * _publisher;
}

@property (nonatomic) long long backlightLevel;
@property (nonatomic, readonly) FBSDisplayLayout *currentLayout;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long interfaceOrientation;
@property (readonly) Class superclass;
@property (getter=isTransitioning, nonatomic, readonly) bool transitioning;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_addElement:(id)arg1 forKey:(id)arg2;
- (id)_initWithPublisher:(id)arg1;
- (id)addElement:(id)arg1;
- (void)addObserver:(id)arg1;
- (long long)backlightLevel;
- (id)currentLayout;
- (void)displayMonitor:(id)arg1 didUpdateIdentity:(id)arg2 withConfiguration:(id)arg3;
- (void)flush;
- (id)init;
- (long long)interfaceOrientation;
- (bool)isTransitioning;
- (void)publisher:(id)arg1 didUpdateLayout:(id)arg2 withTransition:(id)arg3;
- (void)removeObserver:(id)arg1;
- (void)setBacklightLevel:(long long)arg1;
- (void)setInterfaceOrientation:(long long)arg1;
- (id)transitionAssertionWithReason:(id)arg1;

@end
