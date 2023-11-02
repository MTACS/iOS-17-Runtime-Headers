
@interface BCSPersistentBusinessItemObject : NSObject {
    NSDate * _TTLDate;
    BCSBusinessItem * _businessItem;
    NSDate * _lastRetrievedDate;
}

@property (nonatomic, readonly) NSDate *TTLDate;
@property (nonatomic, readonly) BCSBusinessItem *businessItem;
@property (nonatomic, readonly) NSDate *lastRetrievedDate;

- (void).cxx_destruct;
- (id)TTLDate;
- (id)businessItem;
- (id)initWithBusinessItem:(id)arg1 lastRetrievedDate:(id)arg2 TTLDate:(id)arg3;
- (id)lastRetrievedDate;

@end
