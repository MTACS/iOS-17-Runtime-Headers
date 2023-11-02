
@interface PEEditActionResult : NSObject {
    NSError * _error;
    <PEAsset> * _savedAsset;
    PEEditAction * _sourceAction;
    NSString * _sourceAssetUUID;
    PEEditAction * _targetAction;
}

@property (nonatomic, retain) NSError *error;
@property (nonatomic, retain) <PEAsset> *savedAsset;
@property (nonatomic, retain) PEEditAction *sourceAction;
@property (nonatomic, readonly) NSString *sourceAssetUUID;
@property (nonatomic, readonly) PEEditAction *targetAction;

- (void).cxx_destruct;
- (id)error;
- (id)initWithAssetUUID:(id)arg1 targetAction:(id)arg2;
- (id)savedAsset;
- (void)setError:(id)arg1;
- (void)setSavedAsset:(id)arg1;
- (void)setSourceAction:(id)arg1;
- (id)sourceAction;
- (id)sourceAssetUUID;
- (id)targetAction;

@end
