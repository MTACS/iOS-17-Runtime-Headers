
@protocol SBSystemActionDataSourceOverridable <NSObject>

@required

- (void)addOverrider:(id <SBSystemActionDataSourceOverriding>)arg1;
- (void)removeOverrider:(id <SBSystemActionDataSourceOverriding>)arg1;

@end
