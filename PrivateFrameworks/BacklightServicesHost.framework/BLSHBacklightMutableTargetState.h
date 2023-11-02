
@interface BLSHBacklightMutableTargetState : NSObject <BLSHBacklightTransitionStateMachineState> {
    long long  _displayMode;
    BLSHBacklightEnvironmentPresentation * _presentation;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property long long displayMode;
@property (readonly) unsigned long long hash;
@property (retain) BLSHBacklightEnvironmentPresentation *presentation;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)bls_loggingString;
- (id)bls_shortLoggingString;
- (id)debugDescription;
- (id)description;
- (long long)displayMode;
- (unsigned long long)hash;
- (id)initWithState:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)presentation;
- (void)setDisplayMode:(long long)arg1;
- (void)setPresentation:(id)arg1;
- (void)setToState:(id)arg1;

@end
