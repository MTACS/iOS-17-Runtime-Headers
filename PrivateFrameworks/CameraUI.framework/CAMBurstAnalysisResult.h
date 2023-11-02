
@interface CAMBurstAnalysisResult : NSObject {
    NSArray * _allAssetIdentifiers;
    NSString * _bestAssetIdentifier;
    NSArray * _goodAssetIdentifiers;
    NSString * _identifier;
}

@property (nonatomic, readonly, copy) NSArray *allAssetIdentifiers;
@property (nonatomic, readonly, copy) NSString *bestAssetIdentifier;
@property (nonatomic, readonly, copy) NSArray *goodAssetIdentifiers;
@property (nonatomic, readonly, copy) NSString *identifier;

- (void).cxx_destruct;
- (id)allAssetIdentifiers;
- (id)bestAssetIdentifier;
- (id)description;
- (id)goodAssetIdentifiers;
- (id)identifier;
- (id)init;
- (id)initWithIdentifier:(id)arg1 allAssetIdentifiers:(id)arg2 goodAssetIdentifiers:(id)arg3 bestAssetIdentifier:(id)arg4;

@end
