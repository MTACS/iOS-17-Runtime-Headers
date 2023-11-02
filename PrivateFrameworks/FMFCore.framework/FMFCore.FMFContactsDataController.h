
@interface FMFCore.FMFContactsDataController : _TtCs12_SwiftObject {
    void contactMatchingQueue;
    void contactRecords;
    void contactStore;
    void delegate;
    void identifier;
    void isSnapshotMode;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  lastContactSearchDate;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  lastContactUpdateDate;
}

- (void)contactStoreChangedWithNotification:(id)arg1;

@end
