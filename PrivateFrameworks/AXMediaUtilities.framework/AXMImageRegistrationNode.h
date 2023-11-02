
@interface AXMImageRegistrationNode : AXMEvaluationNode <NSSecureCoding> {
    AXMPipelineContextInput * _currentInput;
    bool  _fillingHistoryBuffer;
    AXMPipelineContextInput * _previousInput;
    long long  _registrationState;
    struct CGPoint { 
        double x; 
        double y; 
    }  _transpositionHistoryCircularBuffer;
    unsigned long long  _transpositionHistoryLastRecordedIndex;
}

@property (nonatomic, readonly) long long registrationState;

+ (bool)isSupported;
+ (bool)supportsSecureCoding;
+ (id)title;

- (void).cxx_destruct;
- (void)_recordTransposition:(struct CGPoint { double x1; double x2; })arg1;
- (void)_resetImageRegistration;
- (void)_resetTranspositionHistory;
- (id)_translationalImageRegistrationRequestForInput:(id)arg1;
- (void)evaluate:(id)arg1 metrics:(id)arg2;
- (void)nodeInitialize;
- (long long)registrationState;
- (bool)requiresVisionFramework;
- (bool)validateVisionKitSoftLinkSymbols;

@end
