
@interface _ATXScoreInterpreterCtx : NSObject {
    ATXScoreDict * inputScores;
    NSString * intentType;
    double  stack;
    unsigned long long  stackLen;
    ATXScoreDict * subscores;
}

- (void).cxx_destruct;
- (id)initWithInputScores:(id)arg1 intentType:(id)arg2;

@end
