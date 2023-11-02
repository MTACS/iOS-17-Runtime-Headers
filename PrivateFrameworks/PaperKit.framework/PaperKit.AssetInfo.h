
@interface PaperKit.AssetInfo : NSObject {
    void digest;
    void maxDimensionInPixels;
}

@property (nonatomic, readonly) long long hash;

- (void).cxx_destruct;
- (long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;

@end
