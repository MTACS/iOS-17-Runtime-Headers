
@protocol PopUpDataSource <NSObject>

@required

- (NSString *)headerTitleForRow:(long long)arg1;
- (bool)isGroupRow:(long long)arg1;
- (long long)numberOfRows;
- (bool)rowHasClearButton:(long long)arg1;
- (NSString *)stringValueForRowAtIndex:(long long)arg1;

@end
