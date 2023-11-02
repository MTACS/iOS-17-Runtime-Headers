
@interface PXStaticEditSourceLoader : NSObject <PXEditSourceLoader> {
    long long  _baseVersion;
    PICompositionController * _compositionController;
    NSString * _contentIdentifier;
    PLEditSource * _editSource;
    NSError * _error;
    NSString * _livePhotoPairingIdentifier;
    PICompositionController * _originalCompositionController;
    NSProgress * _progress;
}

@property (nonatomic, readonly) PLEditSource *activeEditSource;
@property (nonatomic, readonly) long long baseVersion;
@property (nonatomic, readonly, copy) PICompositionController *compositionController;
@property (nonatomic, readonly, copy) NSString *contentIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) PLEditSource *editSource;
@property (nonatomic, readonly) NSError *error;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *livePhotoPairingIdentifier;
@property (nonatomic, readonly) NSNumber *loadDuration;
@property (nonatomic, readonly, copy) PICompositionController *originalCompositionController;
@property (nonatomic, readonly) NSProgress *progress;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)baseVersion;
- (void)beginLoading;
- (id)compositionController;
- (id)contentIdentifier;
- (id)editSource;
- (id)error;
- (id)initWithEditSource:(id)arg1 compositionController:(id)arg2 baseVersion:(long long)arg3 contentIdentifier:(id)arg4;
- (id)livePhotoPairingIdentifier;
- (id)loadDuration;
- (id)originalCompositionController;
- (id)progress;

@end
