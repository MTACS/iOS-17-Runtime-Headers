
@interface ML3PurchaseHistoryImportOperation : ML3DAAPImportOperation

- (bool)_performPurchaseHistoryImportWithTransaction:(id)arg1;
- (struct shared_ptr<ML3DAAPImportItem> { struct ML3DAAPImportItem {} *x1; struct __shared_weak_count {} *x2; })importItemFromDAAPElement:(struct shared_ptr<ML3CPP::Element> { struct Element {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (unsigned long long)importSource;
- (void)main;
- (void)updateImportProgress:(float)arg1;

@end
