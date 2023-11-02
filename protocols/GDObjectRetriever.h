
@protocol GDObjectRetriever

@required

- (void)enumerateIdentifiersWithBlock:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, bool*, void*
- (void)enumerateIdentifiersWithQuery:(void *)arg1 block:(void *)arg2; // needs 2 arg types, found 8: GDGraphQuery *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, bool*, void*
- (void)enumerateObjectsWithBlock:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, bool*, void*
- (void)enumerateObjectsWithQuery:(void *)arg1 block:(void *)arg2; // needs 2 arg types, found 8: GDGraphQuery *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, bool*, void*
- (id)objectForIdentifier:(NSString *)arg1;

@end
