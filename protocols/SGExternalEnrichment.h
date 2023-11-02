
@protocol SGExternalEnrichment

@required

- (void)flushWrites;
- (NSNumber *)numberOfExtractions;
- (void)writeWithEntityStore:(SGSqlEntityStore *)arg1;

@end
