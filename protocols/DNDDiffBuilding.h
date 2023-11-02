
@protocol DNDDiffBuilding <NSObject>

@required

- (void)diffAgainstObject:(id <DNDDiffBuilding>)arg1 usingDiffBuilder:(DNDDiffBuilder *)arg2 withDescription:(NSString *)arg3;

@optional

- (NSString *)diffDescription;

@end
