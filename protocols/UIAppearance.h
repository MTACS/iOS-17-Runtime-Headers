
@protocol UIAppearance <NSObject>

@required

+ (id)appearance;
+ (id)appearanceForTraitCollection:(UITraitCollection *)arg1;
+ (id)appearanceForTraitCollection:(UITraitCollection *)arg1 whenContainedIn:(Class)arg2;
+ (id)appearanceForTraitCollection:(UITraitCollection *)arg1 whenContainedInInstancesOfClasses:(NSArray *)arg2;
+ (id)appearanceWhenContainedIn:(Class)arg1;
+ (id)appearanceWhenContainedInInstancesOfClasses:(NSArray *)arg1;

@end
