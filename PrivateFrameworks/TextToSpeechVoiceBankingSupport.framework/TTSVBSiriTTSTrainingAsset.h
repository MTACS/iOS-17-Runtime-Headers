
@interface TTSVBSiriTTSTrainingAsset : NSObject {
    SiriTTSTrainingAsset * _asset;
}

@property (nonatomic, retain) SiriTTSTrainingAsset *asset;
@property (nonatomic, readonly) SiriTTSTrainingAsset *asset;
@property (nonatomic, readonly) NSNumber *diskSize;
@property (nonatomic, readonly) NSString *factor;
@property (nonatomic, readonly) NSString *language;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *path;

- (void).cxx_destruct;
- (id)asset;
- (id)diskSize;
- (id)factor;
- (id)initWithSiriTTSTrainingAsset:(id)arg1;
- (id)language;
- (id)name;
- (id)path;
- (void)setAsset:(id)arg1;

@end
