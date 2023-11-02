
@interface VRXPatternExecutedInstrumentationEvent : VRXTurnBasedInstrumentationEvent {
    _TtC9SnippetUI17RFPatternExecuted * _patternExecuted;
    NSString * _patternId;
    NSString * _patternType;
    NSString * _responseMode;
    NSString * _responseViewId;
}

@property (readonly) _TtC9SnippetUI17RFPatternExecuted *patternExecuted;
@property (nonatomic, retain) NSString *patternId;
@property (nonatomic, retain) NSString *patternType;
@property (nonatomic, retain) NSString *responseMode;
@property (nonatomic, retain) NSString *responseViewId;

- (void).cxx_destruct;
- (void)emitWithTurnIdentifier:(id)arg1;
- (id)init:(id)arg1 patternType:(id)arg2 responseMode:(id)arg3;
- (id)initWithPatternId:(id)arg1 patternType:(id)arg2 responseViewId:(id)arg3 responseMode:(id)arg4;
- (id)patternExecuted;
- (id)patternId;
- (id)patternType;
- (id)responseMode;
- (id)responseViewId;
- (void)setPatternId:(id)arg1;
- (void)setPatternType:(id)arg1;
- (void)setResponseMode:(id)arg1;
- (void)setResponseViewId:(id)arg1;

@end
