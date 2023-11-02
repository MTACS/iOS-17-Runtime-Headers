
@interface SIRINLURequest : NSObject <NSSecureCoding> {
    SIRINLUTurnInput * _currentTurnInput;
    NSArray * _previousTurnInputs;
    SIRINLURequestID * _requestId;
}

@property (nonatomic, retain) SIRINLUTurnInput *currentTurnInput;
@property (nonatomic, retain) NSArray *previousTurnInputs;
@property (nonatomic, retain) SIRINLURequestID *requestId;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)currentTurnInput;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRequestId:(id)arg1 currentTurnInput:(id)arg2 previousTurnInputs:(id)arg3;
- (id)previousTurnInputs;
- (id)requestId;
- (void)setCurrentTurnInput:(id)arg1;
- (void)setPreviousTurnInputs:(id)arg1;
- (void)setRequestId:(id)arg1;

@end
