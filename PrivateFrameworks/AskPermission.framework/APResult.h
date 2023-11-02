
@interface APResult : NSObject {
    NSString * _bundleIdentifier;
    NSString * _buyParams;
    NSString * _itemIdentifier;
    NSString * _productType;
}

@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) NSString *buyParams;
@property (nonatomic, readonly) NSString *itemIdentifier;
@property (nonatomic, readonly) NSString *productType;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (id)buyParams;
- (id)compile;
- (id)description;
- (id)initWithBundleIdentifier:(id)arg1 buyParams:(id)arg2 itemIdentifier:(id)arg3 productType:(id)arg4;
- (id)initWithDictionary:(id)arg1;
- (id)itemIdentifier;
- (id)productType;

@end
