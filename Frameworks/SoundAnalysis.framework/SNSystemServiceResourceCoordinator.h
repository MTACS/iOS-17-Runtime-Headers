
@interface SNSystemServiceResourceCoordinator : NSObject <SNResourceCoordinatorProtocol> {
    void maySuppressMicrophoneUsageIndicator;
}

- (id)createSystemAudioAnalyzerWithError:(id*)arg1;
- (id)init;

@end
