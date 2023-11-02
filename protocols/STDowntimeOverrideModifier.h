
@protocol STDowntimeOverrideModifier

@required

- (STDowntimeOverride *)activeOverride;
- (bool)applyDowntimeOverride:(STDowntimeOverride *)arg1 error:(id*)arg2;
- (bool)removeDowntimeOverrideWithError:(id*)arg1;

@end
