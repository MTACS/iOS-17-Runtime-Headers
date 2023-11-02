
@protocol EMExtendedContentItem <EMObject, EMContentItem>

@required

- (id /* block */)loaderBlock:(void *)arg1; // needs 1 arg types, found 13: id /* block */, EMContentRequestOptions *, <EMContentItemRequestDelegate> *, id /* block */, void*, void, id /* block */, EMContentRepresentation *, NSError *, void*, void*, id, SEL
- (void)setLoaderBlock:(void *)arg1; // needs 1 arg types, found 14: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, NSProgress *, id /* block */, EMContentRequestOptions *, <EMContentItemRequestDelegate> *, id /* block */, void*, void, id /* block */, EMContentRepresentation *, NSError *, void*, void*

@end
