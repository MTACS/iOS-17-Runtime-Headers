
@protocol _ICLexiconManaging

@required

- (id /* block */)addContactObserver:(void *)arg1; // needs 1 arg types, found 11: id /* block */, NSDictionary *, void*, id, SEL, id /* block */, void*, void, id /* block */, NSDictionary *, void*
- (id /* block */)addNamedEntitiesUpdateObserver:(void *)arg1; // needs 1 arg types, found 9: id /* block */, void*, id, SEL, id /* block */, void*, void, id /* block */, void*
- (void)hibernate;
- (NSArray *)loadLexicons;
- (NSArray *)loadLexicons:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, NSString *, id /* block */, NSString *, void*
- (NSArray *)loadLexiconsUsingFilter:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, NSString *, id /* block */, NSString *, void*
- (void)provideFeedbackForString:(NSString *)arg1 type:(unsigned char)arg2 style:(unsigned char)arg3;
- (void)removeContactObserver:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, void*
- (void)removeNamedEntitiesUpdateObserver:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)unloadLexicons;
- (void)warmUp;

@end
