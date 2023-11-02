
@interface PUPickerOnDemandProcessor : NSObject {
    PUPickerConfiguration * _configuration;
    VCPMediaAnalysisService * _service;
    int  _stickerScoringRequestID;
}

@property (nonatomic, readonly) PUPickerConfiguration *configuration;
@property (nonatomic, readonly) VCPMediaAnalysisService *service;
@property (nonatomic) int stickerScoringRequestID;

- (void).cxx_destruct;
- (void)_performOnDemandStaticStickerScoringProcessingForRecentAssets:(id /* block */)arg1;
- (id)configuration;
- (void)dealloc;
- (id)initWithConfiguration:(id)arg1;
- (void)performOnDemandProcessingWithCanDisplayUserInterfaceHandler:(id /* block */)arg1;
- (id)service;
- (void)setStickerScoringRequestID:(int)arg1;
- (int)stickerScoringRequestID;

@end
