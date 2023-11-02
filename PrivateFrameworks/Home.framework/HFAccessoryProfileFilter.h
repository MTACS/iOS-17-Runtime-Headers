
@interface HFAccessoryProfileFilter : NSObject

+ (bool)_shouldIncludeObject:(id)arg1 passingNullableFilterSet:(id)arg2;
+ (bool)_shouldIncludeObjectPassingFilter:(bool)arg1 shouldApplyFilter:(bool)arg2;
+ (id)filterProfiles:(id)arg1 options:(id)arg2;

@end
