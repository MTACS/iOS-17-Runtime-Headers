
@protocol GDEntityResolutionXPCProtocol

@required

- (void)generateMentionsForQuery:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, GDMentionGenerationResult *, NSError *, void*
- (void)submitCollectionQuery:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 8: GDEntityResolutionRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, GDEntityResolutionCollectionResult *, NSError *, void*
- (void)submitQuery:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 8: GDEntityResolutionRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, GDEntityResolutionResult *, NSError *, void*
- (void)warmupForMode:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 8: long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end
