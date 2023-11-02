
@interface BRSetupControllerTracker : NSObject {
    BRSetupControllerDetails * _holdControllerDetails;
    NSMutableArray * _setupControllers;
}

@property (nonatomic, retain) BRSetupControllerDetails *holdControllerDetails;
@property (nonatomic, retain) NSMutableArray *setupControllers;

- (void).cxx_destruct;
- (void)addSetupController:(id)arg1 action:(unsigned long long)arg2;
- (void)clearControllerHold;
- (id)holdControllerDetails;
- (id)init;
- (id)lastPushedSetupController;
- (void)setHoldControllerDetails:(id)arg1;
- (void)setSetupControllers:(id)arg1;
- (id)setupControllers;

@end
