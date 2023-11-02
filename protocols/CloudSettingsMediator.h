
@protocol CloudSettingsMediator

@required

- (void)applySettings:(NSDictionary *)arg1;
- (NSDictionary *)deviceSettingsForKeys:(NSArray *)arg1;

@optional

- (NSDictionary *)mergeSettings:(NSDictionary *)arg1;

@end
