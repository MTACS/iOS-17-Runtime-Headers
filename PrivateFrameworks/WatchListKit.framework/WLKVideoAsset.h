
@interface WLKVideoAsset : NSObject {
    NSString * _URL;
    NSString * _assetID;
    NSString * _programID;
}

@property (nonatomic, readonly, copy) NSString *URL;
@property (nonatomic, readonly, copy) NSString *assetID;
@property (nonatomic, readonly, copy) NSString *programID;

- (void).cxx_destruct;
- (id)URL;
- (id)assetID;
- (id)initWithDictionary:(id)arg1;
- (id)programID;

@end
