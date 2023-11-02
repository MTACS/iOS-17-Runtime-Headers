
@interface SiriInference.ProcessUnstitchedIntents : SiriInference.XPCActivityOperation {
    void stitchingFailed;
    void stitchingSkipped;
    void stitchingSucceeded;
}

- (id)init;
- (void)main;

@end
