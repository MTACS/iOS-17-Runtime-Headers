
@interface SiriInference.ScrubRuntimeDataRecords : SiriInference.XPCActivityOperation {
    void expiredRecords;
    void tombstonedRecords;
}

- (id)init;
- (void)main;

@end
