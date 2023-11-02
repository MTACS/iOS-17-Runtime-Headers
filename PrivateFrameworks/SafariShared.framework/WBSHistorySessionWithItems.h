
@interface WBSHistorySessionWithItems : WBSHistorySession {
    NSArray * _items;
}

@property (nonatomic, readonly, copy) NSArray *items;

- (void).cxx_destruct;
- (id)init;
- (id)initWithSessionStartDate:(id)arg1;
- (id)initWithSessionStartDate:(id)arg1 items:(id)arg2;
- (id)items;

@end
