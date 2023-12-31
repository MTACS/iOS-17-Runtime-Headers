
@protocol _UIExcludable <NSObject>

@required

- (NSString *)_briefDescription;
- (bool)_canExcludeOtherExcludables;
- (void)_exclude;
- (bool)_isExcludedByExcludable:(id <_UIExcludable>)arg1;

@end
