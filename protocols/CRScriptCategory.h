
@protocol CRScriptCategory <NSCopying>

@required

+ (unsigned long long)categoryRevision;
+ (float)confidenceThreshold;
+ (NSString *)sequenceScriptForCategory:(NSObject<CRScriptCategory> *)arg1;
+ (NSArray *)supportedCategories;
+ (NSArray *)verticalLayoutSupportedCategories;

- (NSString *)categoryName;
- (unsigned long long)categoryRevision;
- (NSArray *)scriptLocales;

@end
