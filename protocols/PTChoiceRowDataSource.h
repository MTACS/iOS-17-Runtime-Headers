
@protocol PTChoiceRowDataSource <NSObject>

@required

- (long long)choiceRow:(PTChoiceRow *)arg1 numberOfRowsInSection:(long long)arg2;
- (NSString *)choiceRow:(PTChoiceRow *)arg1 shortTitleForRow:(long long)arg2 inSection:(long long)arg3;
- (NSString *)choiceRow:(PTChoiceRow *)arg1 titleForRow:(long long)arg2 inSection:(long long)arg3;
- (NSString *)choiceRow:(PTChoiceRow *)arg1 titleForSection:(long long)arg2;
- (id)choiceRow:(PTChoiceRow *)arg1 valueForRow:(long long)arg2 inSection:(long long)arg3;
- (long long)numberOfSectionsForChoiceRow:(PTChoiceRow *)arg1;

@end
