
@interface PFFairPlayAsset : NSObject {
    void adamID;
    void avAsset;
    void keyStore;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) bool isOfflineAsset;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)initWithAdamID:(long long)arg1 avAsset:(id)arg2;
- (bool)isOfflineAsset;

@end
