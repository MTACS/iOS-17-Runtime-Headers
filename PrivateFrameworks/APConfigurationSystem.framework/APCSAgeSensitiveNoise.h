
@interface APCSAgeSensitiveNoise : APConfiguration

@property (nonatomic, readonly) NSDictionary *lowerAgeLimits;
@property (nonatomic, readonly) NSDictionary *upperAgeLimits;

+ (id)path;

@end
