
@interface SSVStoreDownload : NSObject {
    NSString * _preferredAssetFlavor;
    NSDictionary * _properties;
}

@property (nonatomic, copy) NSString *preferredAssetFlavor;
@property (nonatomic, readonly) NSDictionary *properties;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (id)preferredAssetFlavor;
- (id)properties;
- (void)setPreferredAssetFlavor:(id)arg1;

@end
