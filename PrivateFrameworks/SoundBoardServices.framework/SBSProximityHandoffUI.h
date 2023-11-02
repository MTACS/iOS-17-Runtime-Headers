
@interface SBSProximityHandoffUI : NSObject <SBSProximityHandoffUICallerDelegate> {
    <SBSProximityHandoffUIDelegate> * _delegate;
    NSXPCConnection * _sbConnection;
    <SBSImplementer> * _sbProxy;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBSProximityHandoffUIDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)cancel:(id)arg1;
- (void)cancelWithHandoffType:(unsigned long long)arg1 error:(id)arg2;
- (void)complete;
- (void)completeWithHandoffType:(unsigned long long)arg1;
- (void)dealloc;
- (id)delegate;
- (void)handoffCancelled;
- (void)handoffCompleted;
- (void)handoffInactive;
- (void)handoffStarted;
- (void)handoffUpdating;
- (id)init;
- (id)initWithTarget:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)start;
- (void)startWithArtworkColors:(id)arg1;
- (void)startWithArtworkColors:(id)arg1 handoffType:(unsigned long long)arg2;
- (void)startWithHandoffType:(unsigned long long)arg1;
- (void)updateIntensity:(float)arg1;
- (void)updateIntensity:(float)arg1 handoffType:(unsigned long long)arg2;

@end
