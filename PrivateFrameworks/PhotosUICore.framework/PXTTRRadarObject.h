
@interface PXTTRRadarObject : NSObject <PXTapToRadarDiagnosticProvider> {
    void classification;
    void component;
    void keywords;
    void radarDescription;
    void screenshotURLs;
    void title;
}

- (void).cxx_destruct;
- (void)collectTapToRadarDiagnosticsIntoContainer:(id)arg1;
- (id)init;

@end
