
@protocol BMViewEventReporter

@required

- (bool)streamDeletionWithStreamIdentifier:(NSString *)arg1 error:(id*)arg2;
- (bool)streamPrunedWithStreamIdentifier:(NSString *)arg1 error:(id*)arg2;
- (bool)streamUpdatedWithStreamIdentifier:(NSString *)arg1 error:(id*)arg2;

@end
