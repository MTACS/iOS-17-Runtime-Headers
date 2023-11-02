
@interface ATXAssetsABHelper : NSObject {
    NSDictionary * _abGroupContents;
    NSString * _groupIdentifier;
}

@property (nonatomic, readonly) NSDictionary *abGroupContents;
@property (nonatomic, readonly) NSString *groupIdentifier;

+ (unsigned long long)cachedSaltedIndex:(unsigned long long)arg1;
+ (id)decDeviceId;
+ (unsigned char)indexForDevice;
+ (void)initialize;
+ (bool)isDefaultGroupIdentifier:(id)arg1;
+ (unsigned long long)saltedIndex:(unsigned long long)arg1;
+ (void)setDefaultDeviceIndexPolicy;
+ (void)setIndexProviderForDevice:(id /* block */)arg1;
+ (void)setStaticIndexForDevice:(unsigned char)arg1;

- (void).cxx_destruct;
- (id)abGroupContents;
- (id)groupIdentifier;
- (id)init;
- (id)initWithAssetContents:(id)arg1;
- (id)initWithAssetContents:(id)arg1 indexForDevice:(unsigned char)arg2;
- (id)initWithAssetContents:(id)arg1 specifiedABGroup:(id)arg2 indexForDevice:(unsigned char)arg3;
- (id)initWithAssetsForResource:(id)arg1 ofType:(id)arg2;
- (id)initWithAssetsForResource:(id)arg1 ofType:(id)arg2 specifiedABGroup:(id)arg3;

@end
