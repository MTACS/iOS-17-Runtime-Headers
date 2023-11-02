
@interface SiriInvocationAnalytics.UserRetrySuccessPredictResult : _TtCs12_SwiftObject {
    void hasNextTurn;
    void isNextTurnValid;
    void mitigationScore;
    void mitigationScoreThreshold;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  nextTurnId;
    void nextTurnInvocationSource;
    void predictorName;
    void repetitionSimilarityScore;
    void timeDeltaToNextTurn;
}

@end
