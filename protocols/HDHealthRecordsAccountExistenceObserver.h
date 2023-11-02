
@protocol HDHealthRecordsAccountExistenceObserver <NSObject>

@required

- (void)accountExistenceNotifier:(HDHealthRecordsAccountExistenceNotifier *)arg1 didChangeHealthRecordAccountExistence:(bool)arg2;

@end
