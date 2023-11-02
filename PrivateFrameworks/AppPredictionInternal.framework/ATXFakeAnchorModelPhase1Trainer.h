
@interface ATXFakeAnchorModelPhase1Trainer : NSObject <ATXAnchorModelPhase1TrainerProtocol> {
    bool  _phase1TrainerCalled;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)init;
- (bool)phase1TrainerCalled;
- (id)trainPhase1;

@end
