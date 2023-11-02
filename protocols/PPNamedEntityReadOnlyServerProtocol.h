
@protocol PPNamedEntityReadOnlyServerProtocol <PPFeedbackAccepting>

@required

- (void)mapItemForPlaceName:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, NSError *, void*
- (void)namedEntityRecordsWithQuery:(PPNamedEntityQuery *)arg1 queryId:(unsigned long long)arg2;
- (void)rankedNamedEntitiesWithQuery:(PPNamedEntityQuery *)arg1 queryId:(unsigned long long)arg2;

@end
