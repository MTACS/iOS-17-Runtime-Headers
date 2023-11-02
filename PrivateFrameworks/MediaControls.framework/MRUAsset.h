
@interface MRUAsset : NSObject {
    NSString * _accessibilityIdentifier;
    UIImage * _image;
    MRUCAPackageAsset * _packageAsset;
    NSString * _symbolName;
}

@property (nonatomic, retain) NSString *accessibilityIdentifier;
@property (nonatomic, readonly) UIImage *image;
@property (nonatomic, readonly) MRUCAPackageAsset *packageAsset;
@property (nonatomic, readonly) NSString *symbolName;

+ (id)image:(id)arg1;
+ (id)packageAsset:(id)arg1;
+ (id)packageAsset:(id)arg1 symbolName:(id)arg2 image:(id)arg3;
+ (id)packageAssetNamed:(id)arg1;
+ (id)symbolNamed:(id)arg1;

- (void).cxx_destruct;
- (id)accessibilityIdentifier;
- (id)description;
- (id)image;
- (id)initWithImage:(id)arg1;
- (id)initWithPackageAsset:(id)arg1;
- (id)initWithPackageAsset:(id)arg1 symbolName:(id)arg2 image:(id)arg3;
- (id)initWithPackageAssetNamed:(id)arg1;
- (id)initWithSymbolName:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)packageAsset;
- (void)setAccessibilityIdentifier:(id)arg1;
- (id)symbolName;

@end
