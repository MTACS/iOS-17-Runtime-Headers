
@interface SBControlCenterPresentationObservationToken : SBPresentationObservationToken {
    SBControlCenterController * _controlCenterController;
}

@property (nonatomic, readonly) SBControlCenterController *controlCenterController;

- (void).cxx_destruct;
- (id)controlCenterController;
- (void)dealloc;
- (id)initWithControlCenterController:(id)arg1 scene:(id)arg2;
- (long long)state;

@end
