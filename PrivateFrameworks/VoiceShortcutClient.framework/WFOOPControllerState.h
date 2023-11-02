
@interface WFOOPControllerState : NSObject <WFState> {
    unsigned long long  _stage;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long stage;
@property (readonly) Class superclass;

- (bool)canTransitionToState:(id)arg1;
- (id)description;
- (void)setStage:(unsigned long long)arg1;
- (unsigned long long)stage;

@end
