
@interface FCFeedTransformationFilterItemResult : NSObject {
    bool  _filtered;
    unsigned long long  _filteredReasons;
    id  _item;
}

@property (getter=isFiltered, nonatomic) bool filtered;
@property (nonatomic) unsigned long long filteredReasons;
@property (nonatomic, readonly) id item;

- (void).cxx_destruct;
- (unsigned long long)filteredReasons;
- (id)initWithItem:(id)arg1 filtered:(bool)arg2 filteredReasons:(unsigned long long)arg3;
- (bool)isFiltered;
- (id)item;
- (void)setFiltered:(bool)arg1;
- (void)setFilteredReasons:(unsigned long long)arg1;

@end
