
@protocol HDQuantitySeriesObserver <NSObject>

@required

- (void)profile:(HDProfile *)arg1 didDiscardSeriesOfType:(HKQuantityType *)arg2;
- (id /* block */)transactionalQuantityInsertHandlerForProfile:(void *)arg1 journaled:(void *)arg2 count:(void *)arg3; // needs 3 arg types, found 13: id /* block */, HKQuantity *, HKQuantityType *, NSDateInterval *, HKQuantitySample *, NSNumber *, bool, void*, id, SEL, HDProfile *, bool, long long

@end
