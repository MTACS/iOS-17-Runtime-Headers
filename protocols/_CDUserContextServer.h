
@protocol _CDUserContextServer <_CDLocalContextServer>

@required

- (void)valuesForPaths:(void *)arg1 handler:(void *)arg2; // needs 2 arg types, found 7: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, void*
- (void)valuesForPaths:(void *)arg1 inContextsMatching:(void *)arg2 handler:(void *)arg3; // needs 3 arg types, found 8: NSArray *, _CDContextualPredicate *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*

@end
