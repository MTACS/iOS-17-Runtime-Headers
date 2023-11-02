
@interface UIDeduplicatorCompat : NSObject {
    void debugMode;
    void debugScreenshotCount;
    void fingerprinter;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  log;
    void screenGroupMap;
}

- (void).cxx_destruct;
- (id)addElementsForScreenWithTargetScreenshot:(id)arg1 candidateElements:(id)arg2 screenGroupID:(id)arg3 error:(id*)arg4;
- (id)identifyElementsWithScreenshot:(id)arg1 rectArray:(id)arg2 error:(id*)arg3;
- (id)identifyScreenshotWithId:(id)arg1 image:(struct CGImage { }*)arg2 error:(id*)arg3;
- (id)init;
- (id)initWithShape:(long long)arg1 error:(id*)arg2;

@end
