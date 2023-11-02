
@interface BLSHBacklightAggregateState : NSObject <BLSHBacklightTransitionStateMachineState> {
    BLSHBacklightDisplayStateMachine * _displayModeSource;
    BLSHBacklightEnvironmentStateMachine * _presentationSource;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) long long displayMode;
@property (readonly) unsigned long long hash;
@property (readonly) BLSHBacklightEnvironmentPresentation *presentation;
@property (retain) BLSHBacklightEnvironmentStateMachine *presentationSource;
@property (readonly) Class superclass;

+ (id)bls_debugLoggingDescriptionForState:(id)arg1;
+ (id)bls_loggingStringForState:(id)arg1;
+ (id)bls_shortLoggingStringForState:(id)arg1;
+ (bool)isState:(id)arg1 equalToObject:(id)arg2;
+ (unsigned long long)stateHash:(id)arg1;

- (void).cxx_destruct;
- (id)bls_loggingString;
- (id)bls_shortLoggingString;
- (id)debugDescription;
- (id)description;
- (long long)displayMode;
- (unsigned long long)hash;
- (id)initWithDisplayModeSource:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)presentation;
- (id)presentationSource;
- (void)setPresentationSource:(id)arg1;

@end
