
@interface HMSoftwareUpdateAssetCompletionsPair : NSObject {
    HMSoftwareUpdateDocumentationAsset * _asset;
    NSMutableArray * _completions;
}

@property (retain) HMSoftwareUpdateDocumentationAsset *asset;
@property (retain) NSMutableArray *completions;

- (void).cxx_destruct;
- (id)asset;
- (id)completions;
- (void)setAsset:(id)arg1;
- (void)setCompletions:(id)arg1;

@end
