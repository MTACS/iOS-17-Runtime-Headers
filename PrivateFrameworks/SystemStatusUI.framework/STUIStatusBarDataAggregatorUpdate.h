
@interface STUIStatusBarDataAggregatorUpdate : NSObject {
    bool  _animated;
    STStatusBarDataEntry * _entry;
}

@property (nonatomic) bool animated;
@property (nonatomic, retain) STStatusBarDataEntry *entry;

+ (id)updateWithEntry:(id)arg1;

- (void).cxx_destruct;
- (bool)animated;
- (id)entry;
- (void)setAnimated:(bool)arg1;
- (void)setEntry:(id)arg1;

@end
