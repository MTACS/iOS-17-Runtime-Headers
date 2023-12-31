
@interface UIAccessibilityCustomRotorSearchPredicate : NSObject {
    UIAccessibilityCustomRotorItemResult * _currentItem;
    long long  _searchDirection;
}

@property (nonatomic, retain) UIAccessibilityCustomRotorItemResult *currentItem;
@property (nonatomic) long long searchDirection;

- (void).cxx_destruct;
- (id)currentItem;
- (long long)searchDirection;
- (void)setCurrentItem:(id)arg1;
- (void)setSearchDirection:(long long)arg1;

@end
