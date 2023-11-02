
@interface SnippetUI.RFPatternExecuted : VRXTurnBasedInstrumentationEvent {
    void instrumentationClient;
    void patternId;
    void patternType;
    void responseMode;
    void responseViewId;
}

@property (nonatomic, readonly) NSString *patternId;
@property (nonatomic, readonly) NSString *patternType;
@property (nonatomic, readonly) NSString *responseMode;
@property (nonatomic, readonly) NSString *responseViewId;

- (void).cxx_destruct;
- (void)emitWithTurnIdentifier:(id)arg1;
- (id)init;
- (id)initWithPatternId:(id)arg1 patternType:(id)arg2 responseMode:(id)arg3;
- (id)initWithPatternId:(id)arg1 patternType:(id)arg2 responseViewId:(id)arg3 responseMode:(id)arg4;
- (id)patternId;
- (id)patternType;
- (id)responseMode;
- (id)responseViewId;

@end
