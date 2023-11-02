
@interface TTSAssetServer : TTSStringEnum

@property (nonatomic, readonly) long long hash;

+ (id)livability;
+ (id)production;
+ (id)staging;

- (long long)hash;
- (bool)isEqual:(id)arg1;

@end
