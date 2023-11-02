
@interface BFMAudiobook : BFMAssetBase

@property (nonatomic, readonly) NSString *narrator;
@property (nonatomic, readonly) NSDictionary *seriesInfo;
@property (nonatomic, readonly) NSString *seriesName;

+ (long long)type;

- (id)narrator;
- (id)seriesInfo;
- (id)seriesName;

@end
