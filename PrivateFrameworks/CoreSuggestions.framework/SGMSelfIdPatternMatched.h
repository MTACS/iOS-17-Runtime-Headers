
@interface SGMSelfIdPatternMatched : NSObject {
    PETScalarEventTracker * _tracker;
}

@property (nonatomic, readonly) PETScalarEventTracker *tracker;

- (void).cxx_destruct;
- (id)init;
- (void)trackEventWithScalar:(unsigned long long)arg1 patternType:(struct SGMSIPatternType_ { unsigned long long x1; })arg2 patternHash:(id)arg3 nameTokens:(unsigned long long)arg4 nameClass:(struct SGMSINameClassification_ { unsigned long long x1; })arg5 messageIndex:(unsigned long long)arg6;
- (id)tracker;

@end
