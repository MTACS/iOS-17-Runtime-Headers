
@interface CSUserActivityTuple : NSObject <CSIndexQueuableItem> {
    CSUserAction * _action;
    CSSearchableItem * _item;
    NSString * _protectionClass;
}

@property (retain) CSUserAction *action;
@property (retain) CSSearchableItem *item;
@property (retain) NSString *protectionClass;

- (void).cxx_destruct;
- (id)action;
- (id)description;
- (id)initWithAction:(id)arg1 item:(id)arg2;
- (id)item;
- (id)protectionClass;
- (id)searchableItem;
- (void)setAction:(id)arg1;
- (void)setItem:(id)arg1;
- (void)setProtectionClass:(id)arg1;
- (void)updateWithItem:(id)arg1;

@end
