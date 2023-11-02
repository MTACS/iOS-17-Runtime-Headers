
@protocol WFAQIScale <NSObject>

@required

- (NSString *)name;
- (WFAQIScaleCategory *)scaleCategoryForCategoryIndex:(unsigned long long)arg1 localizedCategoryDescription:(NSString *)arg2;

@end
