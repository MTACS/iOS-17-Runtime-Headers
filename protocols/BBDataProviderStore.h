
@protocol BBDataProviderStore <NSObject>

@required

- (BBDataProvider *)dataProviderForSectionID:(NSString *)arg1;
- (NSSet *)dataProvidersForUniversalSectionID:(NSString *)arg1;
- (void)performBlockOnDataProviders:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BBDataProvider *, void*
- (void)removeDataProvider:(BBDataProvider *)arg1;

@end
