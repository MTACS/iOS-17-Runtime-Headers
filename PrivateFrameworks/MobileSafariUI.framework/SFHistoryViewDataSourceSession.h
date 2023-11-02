
@interface SFHistoryViewDataSourceSession : NSObject {
    NSOrderedSet * _historyItems;
    NSString * _identifier;
    NSDate * _lastVisitedDate;
    NSString * _title;
}

@property (nonatomic, readonly) NSOrderedSet *historyItems;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSDate *lastVisitedDate;
@property (nonatomic, readonly) NSString *title;

- (void).cxx_destruct;
- (id)filteredSessionWithItems:(id)arg1;
- (unsigned long long)hash;
- (id)historyItems;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 title:(id)arg2 lastVisitedDate:(id)arg3 historyItems:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)lastVisitedDate;
- (id)title;

@end
