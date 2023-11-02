
@protocol PXEditSourceLoader <NSObject>

@required

- (PLEditSource *)activeEditSource;
- (long long)baseVersion;
- (void)beginLoading;
- (PICompositionController *)compositionController;
- (NSString *)contentIdentifier;
- (PLEditSource *)editSource;
- (NSError *)error;
- (NSString *)livePhotoPairingIdentifier;
- (NSNumber *)loadDuration;
- (PICompositionController *)originalCompositionController;
- (NSProgress *)progress;

@end
