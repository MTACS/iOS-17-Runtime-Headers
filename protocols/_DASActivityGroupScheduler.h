
@protocol _DASActivityGroupScheduler <_DASActivityScheduler>

@required

- (void)createActivityGroup:(_DASActivityGroup *)arg1;
- (void)submitActivity:(_DASActivity *)arg1 inGroup:(_DASActivityGroup *)arg2;
- (void)submitActivity:(_DASActivity *)arg1 inGroupWithName:(NSString *)arg2;

@end
