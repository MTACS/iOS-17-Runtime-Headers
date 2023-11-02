
@interface PXPeopleMetricsActionQueueItem : NSObject {
    long long  _itemType;
    PXPersonItem * _person;
}

@property long long itemType;
@property (nonatomic, readonly) PXPersonItem *person;

- (void).cxx_destruct;
- (id)initWithItemType:(long long)arg1 andPerson:(id)arg2;
- (long long)itemType;
- (id)person;
- (void)setItemType:(long long)arg1;

@end
