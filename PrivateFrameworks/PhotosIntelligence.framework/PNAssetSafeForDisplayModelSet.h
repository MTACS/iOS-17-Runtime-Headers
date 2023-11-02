
@interface PNAssetSafeForDisplayModelSet : NSObject {
    CLSIVSNSFWModel * _ivsNSFWModel;
    CLSNSFWModel * _nsfwModel;
    short  _sceneAnalysisVersion;
    CLSTabooEventModel * _tabooEventModel;
}

@property (nonatomic, readonly) CLSIVSNSFWModel *ivsNSFWModel;
@property (nonatomic, readonly) CLSNSFWModel *nsfwModel;
@property (nonatomic, readonly) short sceneAnalysisVersion;
@property (nonatomic, readonly) CLSTabooEventModel *tabooEventModel;

- (void).cxx_destruct;
- (id)initWithSceneAnalysisVersion:(short)arg1;
- (id)ivsNSFWModel;
- (id)nsfwModel;
- (short)sceneAnalysisVersion;
- (id)tabooEventModel;

@end
