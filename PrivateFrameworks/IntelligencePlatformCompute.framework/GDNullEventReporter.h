
@interface GDNullEventReporter : NSObject <BMViewEventReporter>

- (id)init;
- (bool)streamDeletionWithStreamIdentifier:(id)arg1 error:(id*)arg2;
- (bool)streamPrunedWithStreamIdentifier:(id)arg1 error:(id*)arg2;
- (bool)streamUpdatedWithStreamIdentifier:(id)arg1 error:(id*)arg2;

@end
