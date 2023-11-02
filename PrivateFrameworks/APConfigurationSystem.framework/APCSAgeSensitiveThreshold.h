
@interface APCSAgeSensitiveThreshold : APConfiguration

@property (nonatomic, readonly) NSNumber *enabled;
@property (nonatomic, readonly) NSDictionary *sensitiveContentEligibilityThreshold;

+ (id)path;

@end
