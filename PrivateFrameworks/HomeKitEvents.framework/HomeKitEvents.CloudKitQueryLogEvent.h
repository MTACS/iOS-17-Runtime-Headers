
@interface HomeKitEvents.CloudKitQueryLogEvent : HMMLogEvent {
    void numFetchedRecords;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  queryIdentifier;
    void state;
    void totalRecordSize;
}

- (void).cxx_destruct;
- (id)init;

@end
