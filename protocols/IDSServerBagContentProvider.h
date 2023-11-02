
@protocol IDSServerBagContentProvider <NSObject>

@required

- (NSError *)clearOverrideValues;
- (id /* block */)contentsUpdatedBlock:(void *)arg1; // needs 1 arg types, found 6: id /* block */, IDSServerBagLoadedContents *, unsigned long long, void*, id, SEL
- (IDSServerBagLoadedContents *)currentLoadedContentsWithError:(id*)arg1;
- (bool)isLoading;
- (bool)isServerAvailable;
- (NSDictionary *)loadOverrideValuesIfPresent;
- (void)setContentsUpdatedBlock:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, IDSServerBagLoadedContents *, unsigned long long, void*
- (NSError *)updateContentsIfPossibleShouldForce:(bool)arg1;
- (NSError *)writeOverrideValues:(NSDictionary *)arg1;

@end
