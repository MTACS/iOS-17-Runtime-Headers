
@interface CRScriptCategoryV1 : NSObject <CRScriptCategory> {
    unsigned long long  _categoryValue;
}

@property (readonly) NSString *categoryName;
@property (readonly) unsigned long long categoryRevision;
@property (readonly) NSArray *scriptLocales;

+ (unsigned long long)categoryRevision;
+ (float)confidenceThreshold;
+ (id)sequenceScriptForCategory:(id)arg1;
+ (id)supportedCategories;
+ (id)verticalLayoutSupportedCategories;

- (id)categoryName;
- (unsigned long long)categoryRevision;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)scriptLocales;

@end
