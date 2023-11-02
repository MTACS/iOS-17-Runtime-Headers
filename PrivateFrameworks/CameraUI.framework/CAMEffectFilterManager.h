
@interface CAMEffectFilterManager : NSObject

+ (bool)areFilters:(id)arg1 equalTo:(id)arg2;
+ (id)ciFilterNameForFilterType:(long long)arg1;
+ (id)ciFilterNameForFilterType:(long long)arg1 lightingType:(long long)arg2;
+ (id)displayNameForType:(long long)arg1;
+ (id)filtersForFilterType:(long long)arg1 lightingType:(long long)arg2 applyDepthEffect:(bool)arg3;
+ (bool)isDepthEffectInFilters:(id)arg1;
+ (id)namesFromFilters:(id)arg1;

@end
