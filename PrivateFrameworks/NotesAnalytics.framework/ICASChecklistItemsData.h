
@interface ICASChecklistItemsData : NSObject <AADataEventType> {
    NSNumber * _countOfCheckedItems;
    NSNumber * _countOfTotalItems;
}

@property (nonatomic, readonly) NSNumber *countOfCheckedItems;
@property (nonatomic, readonly) NSNumber *countOfTotalItems;

+ (id)dataName;

- (void).cxx_destruct;
- (id)countOfCheckedItems;
- (id)countOfTotalItems;
- (id)initWithCountOfCheckedItems:(id)arg1 countOfTotalItems:(id)arg2;
- (id)toDict;

@end
