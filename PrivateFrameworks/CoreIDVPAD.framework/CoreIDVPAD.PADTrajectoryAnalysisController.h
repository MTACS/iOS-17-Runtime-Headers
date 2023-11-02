
@interface CoreIDVPAD.PADTrajectoryAnalysisController : CoreIDVPAD.PADSerialRequestsScheduler {
    void assessments;
    void delegate;
    void framesAnalyzed;
    void ignoredStitches;
    void isProcessingFrame;
    void maxNccHigh;
    void maxNccLow;
    void mode;
    void stitchCount;
}

@end
