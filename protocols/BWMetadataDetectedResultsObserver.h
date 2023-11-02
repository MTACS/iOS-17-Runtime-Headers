
@protocol BWMetadataDetectedResultsObserver <NSObject>

@required

- (FigCaptureLogSmartCameraGating *)logger;
- (void)node:(BWNode *)arg1 didEmitCodesCount:(long long)arg2 emittedIdentifiers:(NSSet *)arg3 originalPTS:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg4;
- (void)setLogger:(FigCaptureLogSmartCameraGating *)arg1;

@end
