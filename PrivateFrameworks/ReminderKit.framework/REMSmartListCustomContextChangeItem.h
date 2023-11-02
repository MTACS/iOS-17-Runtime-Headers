
@interface REMSmartListCustomContextChangeItem : NSObject {
    REMSmartListChangeItem * _smartListChangeItem;
}

@property (nonatomic, copy) REMListBadge *badge;
@property (nonatomic, copy) REMColor *color;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) REMSmartListChangeItem *smartListChangeItem;

- (void).cxx_destruct;
- (id)badge;
- (id)color;
- (id)initWithSmartListChangeItem:(id)arg1;
- (id)name;
- (void)setBadge:(id)arg1;
- (void)setColor:(id)arg1;
- (void)setName:(id)arg1;
- (void)setSmartListChangeItem:(id)arg1;
- (id)smartListChangeItem;

@end
