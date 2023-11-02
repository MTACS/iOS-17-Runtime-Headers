
@interface ATXCategoricalAttributeBreakdown : NSObject {
    NSMutableDictionary * _counts;
}

- (void).cxx_destruct;
- (id)allCategories;
- (unsigned long long)countForCategory:(id)arg1;
- (unsigned long long)hash;
- (void)incrementCountForCategory:(id)arg1 by:(unsigned long long)arg2;
- (id)init;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToATXDeviceLevelMetricsCategoricalAttributeBreakdown:(id)arg1;
- (double)normalizedCountForCategory:(id)arg1;

@end
