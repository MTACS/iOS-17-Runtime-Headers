
@protocol HDJournalChapterEntry <NSObject>

@required

- (HDJournalEntry *)deserializedEntryWithError:(id*)arg1;
- (NSString *)entryClassName;
- (long long)size;

@end
